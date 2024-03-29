#define LED1 14
#define LED2 12
#define LED3 13
#define LED_LIGADO 0
#define LED_DESLIGADO 1
#define BOTAO1 5
#define BOTAO2 4
#define BOTAO_LIGADO 0
#define BOTAO_DESLIGADO 1

void inicializa_hardware(){
  //Configura as saídas
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  //Garante que as saídas estão desligadas
  digitalWrite(LED1, LED_DESLIGADO);
  digitalWrite(LED2, LED_DESLIGADO);
  digitalWrite(LED3, LED_DESLIGADO);
  //Configurar as entradas
  pinMode(BOTAO1, INPUT_PULLUP);
  pinMode(BOTAO2, INPUT_PULLUP);
}

ICACHE_RAM_ATTR void mudar_led_int(){
  digitalWrite(LED1, !digitalRead(LED1));
}

void inicializa_interrupcoes(){
  //Para definir uma interrupção
  attachInterrupt(digitalPinToInterrupt(BOTAO1), mudar_led_int, FALLING);

}

void setup() {
  inicializa_hardware();
  inicializa_interrupcoes();
}

void loop() {
  digitalWrite(LED2, LED_LIGADO);
  delay(1000);
  digitalWrite(LED2, LED_DESLIGADO);
  delay(1000);
}
