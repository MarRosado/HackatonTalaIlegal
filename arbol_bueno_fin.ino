int Led=13;
int Sensor=10;


void setup() {
pinMode(Led,OUTPUT);
pinMode(Sensor,INPUT);
digitalWrite(Led,LOW);
}


void loop(){
if(digitalRead(Sensor)==HIGH){
  digitalWrite(Led,HIGH);
  delay (2000);
}else{
  digitalWrite(Led,LOW);
}
}


