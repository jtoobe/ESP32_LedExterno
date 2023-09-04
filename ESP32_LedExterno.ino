/*
2do programa para ESP32 
*/


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
