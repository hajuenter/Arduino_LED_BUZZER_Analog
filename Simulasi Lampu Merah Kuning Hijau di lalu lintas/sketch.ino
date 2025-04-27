int ledGreen = 4;
int ledYellow = 3;
int ledRed = 2;
void setup() {
  Serial.begin(9600);
  pinMode(ledGreen, OUTPUT);
  pinMode(ledYellow, OUTPUT);
  pinMode(ledRed, OUTPUT);
}

void loop() {
  digitalWrite(ledGreen, LOW);
  digitalWrite(ledYellow, LOW);
  digitalWrite(ledRed, HIGH);
  Serial.println("Lampu merah menyala(Berhenti)");
  delay(5000);

  digitalWrite(ledGreen, LOW);
  digitalWrite(ledYellow, HIGH);
  digitalWrite(ledRed, LOW);
  Serial.println("Lampu kuning menyala(Siap-siap)");
  delay(3000);
 
  digitalWrite(ledGreen, HIGH);
  digitalWrite(ledYellow, LOW);
  digitalWrite(ledRed, LOW);
  Serial.println("Lampu hijau menyala(Jalan)");
  delay(5000);
}
