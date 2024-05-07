int rojo=11;
int amarillo=10;
int verde=9;

void setup(){
    pinMode(rojo, OUTPUT);               // led rojo - pin de salida
    pinMode(verde, OUTPUT);              // led verde - pin de salida 
    pinMode(amarillo, OUTPUT);           // led amarillo - pin de salida 
} 
  
void loop() { // bucle infinito 

    digitalWrite(verde, HIGH);          // se enciende el led verde
    delay(3000);                        // pausa 3 segundos
    digitalWrite(verde, LOW);           // se apaga el led verde 
    digitalWrite(amarillo, HIGH);       // se enciende el led amarillo
    delay(1000);                        // pausa 1 segundo
    digitalWrite(amarillo, LOW);        // se apaga el led amarillo 
    digitalWrite(rojo, HIGH);           // se enciende el led rojo
    delay(6000);                        // pausa 3 segundos
    digitalWrite(rojo, LOW);            // se apaga el led rojo 
  
}
