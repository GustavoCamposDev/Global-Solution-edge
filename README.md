# Global-Solution-edge

Detecção de Bolsa de Soro - Arduino
Este projeto consiste em um código para Arduino que utiliza um sensor de carga (strain gauge) para detectar o nível da bolsa de soro em um paciente. O sistema aciona LEDs indicativos e um buzzer para alertar quando a bolsa está cheia ou vazia.

Componentes Necessários
Arduino (qualquer modelo compatível)
Sensor de carga (strain gauge)
Resistores (se necessário para adaptar a tensão do sensor)
LEDs (cores diferentes para indicar o estado)
Buzzer ou speaker
Jumpers e protoboard
Configuração
Certifique-se de conectar os componentes conforme o esquema abaixo:

Sensor de carga (strain gauge) ao pino analógico do Arduino (A0)
LEDs verde e vermelho aos pinos digitais correspondentes (2 e 3, por exemplo)
Buzzer ou speaker ao pino digital (4, por exemplo)
Funcionamento
O código lê a entrada analógica do sensor de carga e compara os valores para determinar o estado da bolsa de soro:

LED verde aceso: Indica que a bolsa está cheia.
LED vermelho aceso: Indica que a bolsa está vazia.
Buzzer emitindo som: Ativado quando a bolsa está vazia para alerta sonoro.
A calibração dos limiares (limiarCheio e limiarVazio) no código é crucial para corresponder às leituras reais do sensor e determinar corretamente o estado da bolsa de soro.
