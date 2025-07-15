/*
Programa que prende y apaga un led conectado al pin 32 
*/

// El pin positivo del led es la pata mas larga y va conectada al pin 32
// En el negativo tiene una resistencia de 220 ohms para que no se queme 
const int LedPin=32;


// la funcion Setup se ejecuta cuando se presiona el boton de RESET o se da energia a la placa
void setup() {
  
  // Inicializo el pin digital LedPin como output.
  pinMode(LedPin,OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
 
  digitalWrite(LedPin, HIGH);       // enciende el LED  (HIGH es el nivel de salida)
  delay(1000);                      // espera un segundo (1000 milisegundos)
  digitalWrite(LedPin, LOW);        // apago LED poniendo la salida en LOW
  delay(1000);
}
