const int botao1 = 2;
const int botao2 = 3;
const int botao3 = 4;
const int botao4 = 5;
const int botao5 = 6;
int var1;
int var2;
int var3;
int var4;
int var5;
  
void setup()
{
  pinMode(botao1, INPUT);
  pinMode(botao2, INPUT);
  pinMode(botao3, INPUT);
  pinMode(botao4, INPUT);
  pinMode(botao5, INPUT);
  Serial.begin(9600);
}

void loop()
{
  var1 = digitalRead(botao1);
  var2 = digitalRead(botao2);
  var3 = digitalRead(botao3);
  var4 = digitalRead(botao4);
  var5 = digitalRead(botao5);
  
  if (var1){
  Serial.println("VASCO DA GAMA"); 
  }
  
  if (var2){
  Serial.println("Digomito"); 
  }
  
  if (var3){
  Serial.println("Digãobalatensa"); 
  }
  
  if (var4){
  Serial.println("Digomirafofa"); 
  }
  
  if (var5){
  Serial.println("Marinalagartixamontros S A"); 
  }

}
