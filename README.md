# Trabalho de Conclusão de Disciplina Sistemas de Automação II

## Faculdade: 
<img src="https://github.com/marcelomaurin/FATEC_automacaoII/blob/main/imgs/fatecrp.jpeg">
Fatec Ribeirão Preto

## Curso: 
Sistemas Biomédicos

### Disciplina 
Tecnologia de Automação II

## Professor Orientador
<a href="http://www.fatecrp.edu.br/profissionais/prof-marcello-claudio-de-gouvea-duarte/">Prof. Dr. Marcello Claudio de Golveia Duarte</a>

## Objetivo:
Controlar um carrinho com APP DABBLE e usando uma ponte H, conectada a um ESP32.

## Equipe do projeto
- Marcelo Maurin Martins
- Bruna M F Barbosa
- Ana Carolina Carvalho 
- Kleber Antonio Jorge Francisco

## Pré requisitos
- Arduino IDE
- App Dabble para Celular
- Lista de Materiais 

## Bibliotecas do arduino
- Grove - Motor Driver TB66112FNG
- Dabble ESP32 


## Instalação
Siga os passos a seguir:
1) Instale o arduino IDE em sua maquina.
2) Baixe a placa ESP32 para o arduino
3) Instale as bibliotecas do arduino
4) Selecione o arduino correto
5) Compile e instale o esp correto.

## Lista de Materiais
- Base de apoio em acrilico com chanfros para fixação dos motores.
- 4x Motor Dc 3-6v Com Caixa De Redução E Eixo Duplo + Roda 68mm
- Conversor de corrente DC/DC 26v/5v Turnigy SBEC 26V
- 3 Baterias SD 18650 4.2V 98000mAh
- Case para 3 baterias SD18650 4.2V
- 2 Placas fenolitica perfuradas com pinos para montagem de quadro de distribuição
- Ponte H TB6612FNG ou L298N
- ESP32 ou ESP32CAM

## Pinout
<img src="https://github.com/marcelomaurin/FATEC_automacaoII/blob/main/imgs/Esquematico.png?raw=true">

## Esquematico Elétrico
### Esquematico da alimentação
<img src="https://github.com/marcelomaurin/FATEC_automacaoII/blob/main/imgs/Diagrama%20sem%20nome.jpg">

### Esquematico das ligações eletricas
<img src="https://github.com/marcelomaurin/FATEC_automacaoII/blob/main/imgs/Esquematico%20Eletrico.jpg">

## Screens

### Carrinho Visão Superior
<img src="https://github.com/marcelomaurin/FATEC_automacaoII/blob/main/imgs/carrinho.jpeg">

### Visão Lateral
<img src="https://github.com/marcelomaurin/FATEC_automacaoII/blob/main/imgs/visao%20lateral.jpeg">

### Componente SBEC-26v
<img src="https://github.com/marcelomaurin/FATEC_automacaoII/blob/main/imgs/sbec-26v_1__4.jpg">

#### Especificações técnicas do Componente

Entrada Maxima de tensão: 26V

Saída: 5V

Corrente Maxima 5A na Saída.



### Bateria Recarregavel 4.2V
<img src="https://github.com/marcelomaurin/FATEC_automacaoII/blob/main/imgs/bateria.jpeg">

#### Especificações técnicas do Componente
- Tensão: 4,2v

- Capacidade 9800mAh

- Ponto de Proteção de Sobrecarga: 4,2v

- Ponto de Proteção de Descarga: 2,7v

- Medidas: 1,8cm x 6,5cm

### ESP32-CAM Specs

<img src="https://github.com/marcelomaurin/FATEC_automacaoII/blob/main/imgs/pinout%20esp32cam.jpg">

#### Especificações técnicas do Componente

- Module Model	ESP32-CAM

- Package	DIP-16

- Size	27*40.5*4.5 mm

- SPI Flash	Default 32Mbit

- RAM	520KB SRAM +4M PSRAM

- Bluetooth	Bluetooth 4.2 BR/EDR and BLE standards

- Wi-Fi	802.11 b/g/n/

- Support interface	UART/SPI/I2C/PWM

- Support TF card	Maximum support 4G

- IO port	9

- UART Baudrate	Default 115200 bps

- Image Output Format	JPEG( OV2640 support only ), BMP, GRAYSCALE

- Spectrum Range	2412 ~2484MHz

- Antenna	Onboard PCB antenna, gain 2dBi

- Transmit Power	802.11b: 17±2 dBm (@11Mbps)

- 802.11g: 14±2 dBm (@54Mbps)

- 802.11n: 13±2 dBm (@MCS7)

- Receiving Sensitivity	CCK, 1 Mbps: -90dBm

- CCK, 11 Mbps: -85dBm

- 6 Mbps (1/2 BPSK): -88dBm

- 54 Mbps (3/4 64-QAM): -70dBm

- MCS7 (65 Mbps, 72.2 Mbps): -67dBm

- Power Dissipation	Deep-sleep: 6mA@5V

- Moderm-sleep: 20mA@5V

- Light-sleep: 6.7mA@5V

- Security	WPA/WPA2/WPA2-Enterprise/WPS

- Power Supply Range	5V

- Operating Temperature	-20 °C ~ 85 °C

- Storage Environment	-40 °C ~ 90 °C, < 90%RH

- Weight	10g




### Motor DC com redução
<img src="https://github.com/marcelomaurin/FATEC_automacaoII/blob/main/imgs/rodas2.jpg">

#### Especificações técnicas do Componente

<b>CARACTERÍSTICAS:</b>
- Roda com motor;
- Caixa de Redução Acoplado perfeitamente;
- Pneu em borracha, o que evita derrapagens;
- Alimentação por corrente continua DC.

<b>ESPECIFICAÇÕES:</b>

- Marca: Smartcomp
 
- Tensão do motor: 3 a 6V;

- Diâmetro dos pneu: 64mm;

- Largura dos pneu: 2,5cm;

- Relação de redução 48:1;

- Rotações: 200RPM (6V);

- Peso: 68g. 

## Referencias:
- https://dronebotworkshop.com/esp32cam-robot-car/
- https://www.arducam.com/esp32-machine-vision-learning-guide/
- https://github.com/fustyles/Arduino
