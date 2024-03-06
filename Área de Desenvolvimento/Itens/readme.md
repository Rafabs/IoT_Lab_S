# Inventário de placas microcontroladoras
![Atualização](https://img.shields.io/badge/Atualiza%C3%A7%C3%A3o-15/02/2024-green.svg)

| **PLACA** | **BN**                        | **VID** | **PID** | **SN**                | **V1.8.19** | **V2.3.0** | **WIN10** | **WIN11** | **LINUX** |
|-----------|-------------------------------|---------|---------|-----------------------|-------------|------------|-----------|-----------|-----------|
| UNO R3    | ARDUINO UNO                   | 2341    | 0043    | 5573532373535141B082  | SIM         | SIM        | SIM       | SIM       | -         |
| UNO R3    | ARDUINO UNO                   | 2341    | 0001    | 649323437383518131F0  | SIM         | SIM        | SIM       | SIM       | -         |
| UNO R3    | ARDUINO UNO                   | 2341    | 0043    | 55838323835351902120  | SIM         | SIM        | SIM       | SIM       | -         |
| MEGA      | ARDUINO MEGA  2560            | 2341    | 0010    | 64932343638351619101  | SIM         | SIM        | SIM       | SIM       | -         |
| ESP8266   | PLACA NÃO IDENTIFICADA        | 1A86    | 7523    | -                     | SIM         | SIM        | SIM       | NÃO       | -         |

**OBSERVAÇÕES**

**ESP8266:**
*Primeiramente, é necessário adicionar o pacote de placas do módulo ESP8266. Para isso, abra o painel "Preferências" da Arduino IDE (Arquivo > Preferência). Com o painel aberto, digite o link ```https://arduino.esp8266.com/stable/package_esp8266com_index.json``` no campo "URLs Adicionais para Gerenciadores de Placas".*

![esp8266](https://github.com/Rafabs/IoT_Lab_S/blob/main/%C3%81rea%20de%20Desenvolvimento/Itens/esp8266_preferences.jpg)
Fonte (imagem): https://www.robocore.net/tutoriais/programando-o-esp8266-pela-arduino-ide

# Inventário de placas periféricas
![Atualização](https://img.shields.io/badge/Atualiza%C3%A7%C3%A3o-06/03/2024-green.svg)

| **PLACA**                         | **QTDY**| **Marca** | **Tensão** | **Terminais**| **V1.8.19** | **V2.3.0** | **WIN10** | **WIN11** | **LINUX** |
|-----------------------------------|---------|-----------|------------|--------------|-------------|------------|-----------|-----------|-----------|
| Teclado 4x4 Matricial Alfanumérico| 02      | Genérica  | 7-12V      | 08           | ???         | ???        | ???       | ???       | -         |
| DISPLAY LCD 16x2 i2c              | 01      | FREENOVE  | 5V         | 04           | ???         | ???        | ???       | ???       | -         |
| DISPLAY LCD 16x2                  | 01      | FREENOVE  | 5V         | 16           | ???         | ???        | ???       | ???       | -         |
| Micro Servo 9G SG90               | 01      | TOWER PRO | 4.8-6V     | 03           | ???         | ???        | ???       | ???       | -         |
| RTC DS1307 i2c HW11               | 02      | Genérica  | 5V         | 12           | ???         | ???        | ???       | ???       | -         |
| 0.Sensor Higrômetro HW103 LM393   | 02      | Genérica  | 3.3-5V     | 06           | ???         | ???        | ???       | ???       | -         |
| 0.Sensor MH-RD                    | 01      | Genérica  | 3.3-5V     | 02           | ???         | ???        | ???       | ???       | -         |
| 0.Sensor Terra HW-80              | 01      | Genérica  | 3.3-5V     | 02           | ???         | ???        | ???       | ???       | -         |
| Sensor Touch TTP223               | 02      | Genérica  | 2-5.5V     | 03           | ???         | ???        | ???       | ???       | -         |
| Buzzer                            | 04      | Genérica  | 5-12V      | 02           | ???         | ???        | ???       | ???       | -         |
| Sensor Infravermelho HW-201       | 01      | Genérica  | 3.3-5V     | 03           | ???         | ???        | ???       | ???       | -         |
| Display lcd oled i2c 0.96"        | 01      | Genérica  | 3.3-5V     | 04           | ???         | ???        | ???       | ???       | -         |
| Regulador de Tensão AMS1117       | 01      | Genérica  | 5V         | 04           | ???         | ???        | ???       | ???       | -         |
| Módulo Relé 5V                    | 01      | Genérica  | 5V         | 06           | ???         | ???        | ???       | ???       | -         |
| Sensor Ultrassônico HC-SR04       | 01      | Genérica  | 5V         | 04           | ???         | ???        | ???       | ???       | -         |
| Sensor Umidade/Temper. DHT11      | 01      | Genérica  | 5V         | 04           | ???         | ???        | ???       | ???       | -         |  

**OBSERVAÇÕES**

**Nada ainda...**
-

# Inventário RFID-RC522
![Atualização](https://img.shields.io/badge/Atualiza%C3%A7%C3%A3o-06/03/2024-green.svg)

| **PLACA**                 | **QTDY**| **Marca** | **Tensão** | **ID** |**Terminais**| **V1.8.19** | **V2.3.0** | **WIN10** | **WIN11** | **LINUX** |
|---------------------------|---------|-----------|------------|--------|-------------|-------------|------------|-----------|-----------|-----------|
| RFID RC522                | 01      | CDR       | 3.3V       | N/A    | 08          | SIM         | SIM        | SIM       | SIM       | -         |
| TAG MIFARE 13.56 MHz      | 02      | N/A       | 3.3V       |        | --          | SIM         | SIM        | SIM       | SIM       | -         |
| CARTÃO BRANCO 01 13.56 MHz| 01      | N/A       | 3.3V       |        | --          | SIM         | SIM        | SIM       | SIM       | -         |
| CARTÃO AZUL 01 13.56 MHz  | 01      | N/A       | 3.3V       |        | --          | SIM         | SIM        | SIM       | SIM       | -         |
| CARTÃO AZUL 02 13.56 MHz  | 01      | N/A       | 3.3V       |        | --          | SIM         | SIM        | SIM       | SIM       | -         |
| CARTÃO PRETO 01 13.56 MHz | 01      | N/A       | 3.3V       |        | --          | SIM         | SIM        | SIM       | SIM       | -         |

**OBSERVAÇÕES**

**Nada ainda...**
-