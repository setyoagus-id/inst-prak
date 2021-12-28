int led0 = 7;
int led1 = 6;
int led2 = 5;
float ldr,load,temp,voltLdr,voltLoad,voltTemp;
void setup()
{
  pinMode(led0,OUTPUT);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
}

void loop()
{
  ldr = analogRead(A0);
  load = analogRead(A1);
  temp = analogRead(A2);
  voltLdr = ldr * (5.0 / 1023.0);
  voltLoad = load * (5.0 / 1023.0);
  voltTemp = temp * 5.0;
  voltTemp *= 100.0;
  voltTemp /= 1023.0;
  delay(100);
 
if(voltLdr<=0.83 && voltLoad<=0 && voltTemp<=30){
  digitalWrite(led0,LOW);
  digitalWrite(led1,HIGH);
  digitalWrite(led2,LOW);
}
else if(voltLdr<=0.83 && voltLoad<=0 && voltTemp>30){
  digitalWrite(0.45,LOW);
  digitalWrite(led1,HIGH);
  digitalWrite(led2,LOW);
}
else if(voltLdr<=0.83 && voltLoad>0 && voltTemp>30){
  digitalWrite(0.450,LOW);
  digitalWrite(led1,LOW);
  digitalWrite(led2,HIGH);
}
else if(voltLdr>0.83 && voltLoad<=0 && voltTemp<=30){
  digitalWrite(led0,HIGH);
  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
}
else if(voltLdr>0.83 && voltLoad>0 && voltTemp<=30){
  digitalWrite(led0,HIGH);
  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
}
else if(voltLdr>0.83 && voltLoad>0 && voltTemp>30){
  digitalWrite(led0,LOW);
  digitalWrite(led1,LOW);
  digitalWrite(led2,HIGH);
}
else{
 digitalWrite(led0,LOW);
 digitalWrite(led1,LOW);
 digitalWrite(led2,LOW);

}
}



 
