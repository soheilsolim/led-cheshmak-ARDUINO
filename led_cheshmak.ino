int led=2;

void setup() {
  pinMode(led,OUTPUT);
}

void loop() {
digitalWrirte(led,HIGH);
delay(1000);// 1 sanie
digitalWrite(led, LOW);
delay(1000);
}