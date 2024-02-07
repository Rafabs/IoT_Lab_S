#include <Wire.h> // Biblioteca para comunicação I2C
#include <LiquidCrystal_I2C.h> // Biblioteca para LCD I2C
#include <WiFi.h> // Biblioteca para conexão WiFi
#include <NTPClient.h> // Biblioteca para cliente NTP
#include <WiFiUdp.h> // Biblioteca para UDP

// Configurações do LCD I2C
LiquidCrystal_I2C lcd(0x27, 16, 2); // Endereço I2C, 16 colunas, 2 linhas

// Configurações do cliente NTP
const char* ssid = "SEU_SSID_WIFI";
const char* password = "SUA_SENHA_WIFI";
const long utcOffsetInSeconds = -10800; // UTC -3 horas (Brasília)
WiFiUDP ntpUDP;
NTPClient timeClient(ntpUDP, "pool.ntp.org", utcOffsetInSeconds);

void setup() {
  Serial.begin(115200);

  // Inicializa o LCD
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("Iniciando...");

  // Inicializa a comunicação I2C
  Wire.begin();

  // Conecta-se ao Wi-Fi
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.println("Conectando ao WiFi...");
  }
  Serial.println("Conectado ao WiFi!");

  // Inicializa o cliente NTP e sincroniza a hora
  timeClient.begin();
  while (!timeClient.update()) {
    timeClient.forceUpdate();
  }
  Serial.println("Hora sincronizada!");

  // Limpa o LCD
  lcd.clear();
}

void loop() {
  // Obtém a hora do cliente NTP
  timeClient.update();
  String formattedTime = timeClient.getFormattedTime();

  // Exibe a hora no LCD
  lcd.setCursor(0, 0);
  lcd.print("Hora: ");
  lcd.setCursor(0, 1);
  lcd.print(formattedTime);

  delay(1000); // Espera 1 segundo
}
