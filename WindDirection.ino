/*Sensor WindDirection
En este programa configuraremos el sensor WindDirection
para leer los datos en el terminal serie. 
Creado por TecnoTalayotic
https://www.instagram.com/tecnotalayotic
https://www.thingiverse.com/TecnoTalayotic
https://github.com/TecnoTalayotic
Más información del proyecto en:
https://github.com/TecnoTalayotic/WindDirection
*/


//Variables
unsigned int long conta = 0;
String vent;
int direction;


void setup() {
  Serial.begin(9600);
  inici();                         //Arrancamos el programa de inicio
}

void loop() {
  conta++;                        //Sumamos 1 al contador
  windDirection();                //Arrancamos el programa windDirection
  //Serial.print(conta);          //Imprimimos contado
  //Serial.print(" ");            //Imprimimos un espacio
  
  if (conta<1000){}
  else{                           //Si contador > 1000
    Serial.println();             //Imprimimos un salto de linea
    Serial.print(vent);           //Imprimimos el conteido de "vent"
    //Serial.print(direction);    //Imprimimos valor de viento 
    conta = 0;
  }
}


//Imprimimos Iniciando y una línea de puntos
void inici(){
  Serial.println("Iniciando");
  delay(100);
  Serial.print(" . ");
  delay(100);
  Serial.print(" . ");
  delay(100);
  Serial.print(" . ");
  delay(100);
  Serial.print(" . ");
  delay(100);
  Serial.print(" . ");
  delay(100);
  Serial.print(" . ");
  delay(100);
  Serial.print(" . ");
  delay(100);
  Serial.print(" . ");
  delay(100);
  Serial.print(" . ");
  delay(100);
  Serial.print(" . ");
  delay(100);
  Serial.print(" . ");
  delay(100);
  Serial.println(" . ");
  delay(100);
}


//Programa para interpretar los valores del sensor y guardarlos en la variable “vent”
void windDirection() {
  int windD = analogRead (A0);
  direction = map (windD, 0, 1023, 0, 80);
  if (direction == 11){
    vent=("Es vent bufa de Tramuntana 0ºN   ");
    }
    else if (direction == 18){
      vent=("Es vent bufa de Gregal 45ºNE     ");
    }
    else if (direction == 25){
      vent=("Es vent bufa de Llevant 90ºE     ");
    }
    else if (direction == 50){
      vent=("Es vent bufa de Xaloc 135ºSE     ");
    }
    else if (direction == 73){
      vent=("Es vent bufa de Migjorn 180ºS    ");
    }
    else if (direction == 69){
      vent=("Es vent bufa de Llebeig 225ºSO   ");
    }
    else if (direction == 62){
      vent=("Es vent bufa de Ponent 270ºO     ");
    }
    else if (direction == 38){
      vent=("Es vent bufa de Mestral 315ºNO   ");
    }
    else{
    }
}
