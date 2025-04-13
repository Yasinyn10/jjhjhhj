void setup() {
pinMode(15,OUTPUT);
}

void loop() {
  digitalWrite(15,HIGH);
  delay(1500);
  digitalWrite(15,LOW);
  delay(1000);
}
