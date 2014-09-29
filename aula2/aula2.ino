#define ACENDE LOW
#define APAGA HIGH
// ponteciometro - int (0 to 1023)

void setup() {
	Serial.begin(9600);
	// define os pinos de led para saída e já os apaga
	for (int i = 5;i <= 13;i++) {
  		pinMode(i, OUTPUT);
  		digitalWrite(i, APAGA);
  	}
}

void loop() {
  	// lê do potenciometro
  	int value = analogRead(A0);
  	Serial.print("analogRead:");
  	Serial.print(value);
  	// map(value, fromLow, fromHigh, toLow, toHigh) - regra de 3 baba
  	int max = map(value, 0, 950, 4, 13);

  	Serial.print(" - max:");
  	Serial.println(max);

	for (int i = max;i <= 13;i++) {
  		digitalWrite(i, APAGA);
  	}  
  
  	for (int i = 5;i <= max;i++) {
  		digitalWrite(i, ACENDE);
  	}
}
