const int sensor = 5;
const int redLed = 9;
const int yellowLed = 8;
const int greenLed = 7;

void setup() {
  // put your setup code here, to run once:
  pinMode(redLed, OUTPUT);
  pinMode(yellowLed, OUTPUT);
  pinMode(greenLed, OUTPUT);

  pinMode(sensor, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
 digitalWrite(greenLed, HIGH);
 delay(500);
 int state = digitalRead(sensor);

 if(state==LOW){
  digitalWrite(greenLed,LOW);
  digitalWrite(yellowLed,HIGH);
  while(state==LOW){
    delay(5);
    state = digitalRead(sensor);
  }
  digitalWrite(yellowLed, LOW); 
  digitalWrite(redLed, HIGH);
  delay(10000);
  digitalWrite(redLed,LOW);
  
 }
 else{
  state = digitalRead(sensor);
  
 }
}
