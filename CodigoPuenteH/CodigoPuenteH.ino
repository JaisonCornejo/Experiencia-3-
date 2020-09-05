void setup()
{
  pinMode(8, OUTPUT); // Se define el pin 8 como salida 
  pinMode(9, OUTPUT); // Se define el pin 9 como salida 
  pinMode(13,OUTPUT); // Se define el pin 13 como salida 
}

void CambiaLed(){
  digitalWrite(13,!digitalRead(13)); //Se lee el esado de pin 13, y luego se reescribe con su estado contrario.
}

void loop()
{
  digitalWrite(9, HIGH);
  digitalWrite(8, LOW); // Esta configuración permite hacer girar el motor en sentido Horario
  delay(1000); // Espera 1 segundo (1000 milisegundos)
  digitalWrite(9, HIGH);
  digitalWrite(8, HIGH);//  Esta configuración permite hacer girar el motor en sentido antiHorario
  delay(500); // Espera 1 segundo (1000 milisegundos)
  digitalWrite(8, HIGH);
  digitalWrite(9, LOW);// // Esta configuración permite hacer girar el motor en sentido Horario 
  delay(1000); // Espera 1 segundo (1000 milisegundos)
  CambiaLed(); // se llama a la funcion Cambialed.
}
