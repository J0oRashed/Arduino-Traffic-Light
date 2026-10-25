void setup() {
  pinMode(13, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(8, OUTPUT);
}

void loop() {
  digitalWrite(13, HIGH);
  delay(10000);
  digitalWrite(13, LOW);
  digitalWrite(11, HIGH);
  delay(3000);
  digitalWrite(11, LOW);
  digitalWrite(8, HIGH);
  delay(10000);
  digitalWrite(8, LOW);
}

