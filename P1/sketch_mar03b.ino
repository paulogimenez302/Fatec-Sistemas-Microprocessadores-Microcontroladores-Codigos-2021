//Definiçoes
#define D5_SAIDA_LED1 14
#define LIGAR_LED LOW
#define DESLIGAR_LED HIGH
#define TEMPO_DE_ESPERA 1000
void setup() {
  pinMode(D5_SAIDA_LED1, OUTPUT);
  digitalWrite(D5_SAIDA_LED1, DESLIGAR_LED);
  //Espera 2 segundos
  delay(TEMPO_DE_ESPERA);
  //colocar nivel baixo no pino D5
  digitalWrite(D5_SAIDA_LED1, LIGAR_LED);

}

void loop() {
  // put your main code here, to run repeatedly:

}
