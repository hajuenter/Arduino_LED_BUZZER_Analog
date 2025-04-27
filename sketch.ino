  int ledRed = 13;
  int ledGreen = 12;
  int ledYellow = 11;
  int ledWhite = 10;
  int buzzer = 9;
  int potentioMeter = A0;
  int value;

void setup() {
  Serial.begin(9600);
  pinMode(ledRed, OUTPUT);
  pinMode(ledGreen, OUTPUT);
  pinMode(ledYellow, OUTPUT);
  pinMode(ledWhite, OUTPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(potentioMeter, INPUT);
}

void loop() {
  value = analogRead(potentioMeter);
  tone(buzzer, value);

  if (value > 800) {
    digitalWrite(ledWhite, HIGH);
    digitalWrite(ledYellow, HIGH);
    digitalWrite(ledGreen, HIGH);
    digitalWrite(ledRed, HIGH);
  } 
  else if (value > 600) {
    digitalWrite(ledWhite, HIGH);
    digitalWrite(ledYellow, HIGH);
    digitalWrite(ledGreen, HIGH);
    digitalWrite(ledRed, LOW);
  } 
  else if (value > 400) {
    digitalWrite(ledWhite, HIGH);
    digitalWrite(ledYellow, HIGH);
    digitalWrite(ledGreen, LOW);
    digitalWrite(ledRed, LOW);
  } 
  else if (value > 200) {
    digitalWrite(ledWhite, HIGH);
    digitalWrite(ledYellow, LOW);
    digitalWrite(ledGreen, LOW);
    digitalWrite(ledRed, LOW);
  } 
  else {
    digitalWrite(ledWhite, LOW);
    digitalWrite(ledYellow, LOW);
    digitalWrite(ledGreen, LOW);
    digitalWrite(ledRed, LOW);
  }
}
