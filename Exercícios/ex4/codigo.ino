const int led = 2;
const int botao = 4;

int valor = botao;

void setup()
{
  pinMode(botao, INPUT);
  pinMode(led, OUTPUT);
}

void loop()
{
  valor = digitalRead(botao);
  
  if (valor){
  digitalWrite(led, HIGH); 
  }else{
  digitalWrite(led, LOW);
  }
  delay(10);
}
