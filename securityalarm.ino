const int ledpin = 9;
const int sensorpin=2; 

void setup() {
  pinMode(ledpin, OUTPUT);
  pinMode(sensorpin,INPUT_PULLUP);
  Serial.begin(9600); 
}

void loop() {
  int sensorState = digitalRead(sensorpin);
  Serial.println(sensorState);
  if(sensorState==HIGH)
  {
    digitalWrite(ledpin,HIGH);
  } else{
    digitalWrite(ledpin,LOW);
  }
  delay(100);
 
}