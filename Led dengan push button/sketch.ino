int ledRed = 12;
int ledBlue = 11;
int btnRed = 13;
int btnBlue = 10;
int btnStateRed = 0;
int btnStateBlue = 0;

void setup() {
pinMode(ledRed, OUTPUT);
pinMode(ledBlue, OUTPUT);
pinMode(btnRed, INPUT);
pinMode(btnBlue, INPUT);
}

void loop() {
btnStateRed = digitalRead(btnRed);
btnStateBlue = digitalRead(btnBlue);

if (btnStateRed == HIGH) {
  digitalWrite(ledRed, HIGH);
} else {
  digitalWrite(ledRed, LOW);
}

if (btnStateBlue == HIGH) {
  digitalWrite(ledBlue, HIGH);
} else {
  digitalWrite(ledBlue, LOW);
}

}
