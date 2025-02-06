// C++ code
//
#define PULS 10
#define RELE_ARRIBA 11
#define RELE_ABAIXO 12

bool arriba = false;
int tempo = 20;
int contador = 350;

void setup () {
  pinMode(PULS,INPUT);
  pinMode(RELE_ARRIBA, OUTPUT);
  pinMode(RELE_ABAIXO, OUTPUT);
  
  Serial.begin(9600);
}

void loop () {
  if (digitalRead(PULS)) {
  arriba = !arriba;
    contador = 350;
  }
  if(contador > 0) {
  if(arriba == true) {
    digitalWrite(RELE_ARRIBA,HIGH);
    digitalWrite(RELE_ABAIXO,LOW);
    delay(tempo);
 }
  else {
     if(arriba == true) {
    digitalWrite(RELE_ARRIBA,HIGH);
    digitalWrite(RELE_ABAIXO,LOW);
    delay(tempo);
  }
  }
    contador = contador -1;
  }
  else
  {
    digitalWrite(RELE_ARRIBA,LOW);
    digitalWrite(RELE_ABAIXO,HIGH);
  }
}
