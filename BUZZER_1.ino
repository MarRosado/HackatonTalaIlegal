int BUZZER=13;
int SENSOR=10;
void setup(){
  pinMode(BUZZER,OUTPUT);
  pinMode(SENSOR,INPUT);
  digitalWrite(BUZZER,LOW);
}

void loop(){
  if (digitalRead(SENSOR)**LOW){
    digitalWrite(BUZZER,HIGH);
    delay (2000);
  }else{
    digitalWrite(BUZZER,LOW);
  }
   }
