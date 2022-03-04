int Botao = 0;

void setup()
{
  pinMode(7, INPUT);
  pinMode(13, OUTPUT);
}

void loop()
{
  Botao = digitalRead(7);
  if (Botao == 0){
    digitalWrite(13,HIGH);
  }else{
    digitalWrite(13,LOW);
  }
  delay(10);
}
