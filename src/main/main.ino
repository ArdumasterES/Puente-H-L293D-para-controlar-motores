void setup(){
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(5,OUTPUT);
}

void loop(){
  //adelante a tope
  analogWrite(5,200);
  digitalWrite(2,HIGH);
  digitalWrite(3,LOW);
  delay(3000);
  //atras a media velocidad
  analogWrite(5,100);
  digitalWrite(2,LOW);
  digitalWrite(3,HIGH);
  delay(3000);
  //adelante a media velocidad
  analogWrite(5,100);
  digitalWrite(2,HIGH);
  digitalWrite(3,LOW);
  delay(3000);
  //atras a tope
  analogWrite(5,200);
  digitalWrite(2,LOW);
  digitalWrite(3,HIGH);
  delay(3000);
}