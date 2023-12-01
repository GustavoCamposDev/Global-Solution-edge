const int pinSensor = A0;     // Pino analógico conectado ao sensor de peso
const int pinLedVerde = 2;   // Pino para o LED verde
const int pinLedVermelha = 3; // Pino para o LED vermelho
const int pinBuzzer = 4;     // Pino para o buzzer

// Definir valores de referência para o soro
const int limiarCheio = 800; // Valor analógico indicando bolsa cheia
const int limiarVazio = 200; // Valor analógico indicando bolsa vazia

void setup() {
  pinMode(pinLedVerde, OUTPUT);
  pinMode(pinLedVermelha, OUTPUT);
  pinMode(pinBuzzer, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int leituraSensor = analogRead(pinSensor);

  Serial.print("Leitura do sensor: ");
  Serial.println(leituraSensor);

  if (leituraSensor >= limiarCheio) {
    digitalWrite(pinLedVerde, HIGH);   // Liga o LED verde
    digitalWrite(pinLedVermelha, LOW); // Desliga o LED vermelho
    noTone(pinBuzzer);                 // Desliga o buzzer
  } else if (leituraSensor <= limiarVazio) {
    digitalWrite(pinLedVerde, LOW);    // Desliga o LED verde
    digitalWrite(pinLedVermelha, HIGH);// Liga o LED vermelho
    tone(pinBuzzer, 1000);             // Ativa o buzzer em 1kHz
  } else {
    digitalWrite(pinLedVerde, LOW);    // Desliga o LED verde
    digitalWrite(pinLedVermelha, LOW); // Desliga o LED vermelho
    noTone(pinBuzzer);                 // Desliga o buzzer
  }

  delay(1000); // Intervalo de leitura do sensor (ajustável conforme necessário)
}
