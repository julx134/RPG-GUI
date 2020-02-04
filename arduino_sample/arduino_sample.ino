int ledPin = 12;
int touchPin = 6;
int touchVal;
void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  pinMode(touchPin, INPUT);
}
void loop() {

  
  
  int touchVal = digitalRead(touchPin);
  if(touchVal==HIGH) {
    digitalWrite(ledPin,HIGH);
    Serial.print(1);
  }
  else {
    digitalWrite(ledPin,LOW);
    Serial.print(0);
  }


}
