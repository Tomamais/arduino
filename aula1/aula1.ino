#define VERMELHO 11
#define AMARELHO 12
#define VERDE 13
#define ANDE 10
#define PARE 9

void setup() {
  pinMode(VERMELHO, OUTPUT);
  pinMode(AMARELHO, OUTPUT);
  pinMode(VERDE, OUTPUT);
  pinMode(ANDE, OUTPUT);
  pinMode(PARE, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  // VERMELHO  
  digitalWrite(VERMELHO, HIGH);
  digitalWrite(AMARELHO, LOW);
  digitalWrite(VERDE, LOW);
  digitalWrite(PARE, LOW);
  digitalWrite(ANDE, HIGH);
  delay(3000);
  
  // Apaga o ande para começar a piscar a vermelha
  digitalWrite(ANDE, LOW);
  for (int i = 0; i < 3; i++)
  {
    digitalWrite(PARE, HIGH);
    delay(300);
    digitalWrite(PARE, LOW);
    delay(300);
  }
  // acende o pare de dez
  digitalWrite(PARE, HIGH);
  
  // VERDE
  digitalWrite(VERMELHO, LOW);
  digitalWrite(AMARELHO, LOW);
  digitalWrite(VERDE, HIGH);
  delay(5000);
  
  // AMARELO
  digitalWrite(VERMELHO, LOW);
  digitalWrite(AMARELHO, HIGH);
  digitalWrite(VERDE, LOW);
  delay(1000);
}
