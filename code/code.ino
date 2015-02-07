#define ledPin1 8
#define ledPin2 9
#define echoPin0 11
#define trigPin0 10
#define echoPin1 13 //Pino 13 recebe o pulso do echo
#define trigPin1 12 //Pino 12 envia o pulso para gerar o echo



void setup()
{
   Serial.begin(9600); //inicia a porta serial
   pinMode(echoPin0, INPUT); // define o pino 13 como entrada (recebe)
   pinMode(trigPin0, OUTPUT); // define o pino 12 como saida (envia)
   pinMode(echoPin1, INPUT); // define o pino 13 como entrada (recebe)
   pinMode(trigPin1, OUTPUT); // define o pino 12 como saida (envia)
   pinMode(ledPin1, OUTPUT);
   pinMode(ledPin2, OUTPUT);
   
}

void loop()
{
    digitalWrite(trigPin0, LOW);
    delayMicroseconds(2);
    digitalWrite(trigPin0, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin0, LOW);
    long duration0 = pulseIn(echoPin0,HIGH);
    long distancia0 = duration0 /29 / 2 ;
    
    digitalWrite(trigPin1, LOW);
    delayMicroseconds(2);
    digitalWrite(trigPin1, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin1, LOW);
    long duration1 = pulseIn(echoPin1,HIGH);
    long distancia1 = duration1 /29 / 2 ;   

      digitalWrite(ledPin1, LOW);
      digitalWrite(ledPin2, LOW);

//Serial.print("Distancia de 0: ");
//Serial.println(distancia0);
//Serial.print("Distancia de 1: ");
//Serial.println(distancia1);
   if (distancia0<15){
      digitalWrite(ledPin1, HIGH);
      Serial.print('0');
   }
   if (distancia1<15){
      digitalWrite(ledPin2, HIGH);
      Serial.print('1');
   }
delay(100); //espera 1 segundo para fazer a leitura novamente
}
