/*
* En esta practica vamos incorporar un pulsador de manera que inhabilite 
* el programa original. Es decir cuando accionamos el pulsador, el programa 
* debe dejar de encender las luces (mientras pulsamos), cuando soltamos el pulsador el programa 
* sigue su flujo normal.
*
* Autor: Mauro Fernandez 
* Data: Enero 2025
*/

#define L_ROJO  13
#define L_VERDE 12
#define RELE    11
#define PULS    10


int tempo = 3000;
bool puls = 0;


void setup()
{
  pinMode(L_ROJO, OUTPUT);
  pinMode(L_VERDE, OUTPUT);
  pinMode(RELE, OUTPUT);
  pinMode(PULS, INPUT);
}

void loop()
{
  puls = digitalRead(PULS);
  if(puls == false)
  {
  leds();
  }
}


void leds()
{
  digitalWrite(L_ROJO, HIGH);
  delay(tempo); // Wait for 3000 millisecond(s)
  digitalWrite(L_ROJO, LOW);
  delay(tempo/2); // Wait for 1500 millisecond(s)
  digitalWrite(L_VERDE, HIGH);
  digitalWrite(RELE, HIGH);
  delay(tempo); // Wait for 3000 millisecond(s)
  digitalWrite(L_VERDE, LOW);
  digitalWrite(RELE, LOW);
  delay(tempo/2); // Wait for 1500 millisecond(s)
}
