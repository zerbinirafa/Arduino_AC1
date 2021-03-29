//variaveis da led
const int vermelho = 5;
const int verde = 6;
const int azul = 7;
// colocando o ponto e virgula


//colocando o segundo botão
const int botao1 = 2;
const int botao2 = 3;
unsigned long lastDebounceTime1 = 0;
unsigned long lastDebounceTime2 = 0;
const int botaoDelay = 100;

void setup()
{
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
 
  // correção de saida para output
  pinMode(vermelho, OUTPUT);
  pinMode(verde, OUTPUT);
  pinMode(azul, OUTPUT);
  
 Serial.begin(9600);
	
  Serial.println("AC1 - Meu Primeiro Projeto 2021");
  Serial.println("                           V1.0");
  Serial.println("Grupo: NOME AQUI               ");
}

void loop()
{
  //toque do botão 1
  if((millis() - lastDebounceTime1) > botaoDelay && digitalRead(botao1)){
  	Serial.println("botao 1 apertado");
    ledVermelho(true);
  	lastDebounceTime1 = millis();
  }  
   
