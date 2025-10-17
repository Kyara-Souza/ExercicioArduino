int led1= 11;
int led2 = 12;
int led3= 13;
int valor1, valor2;

void setup() {
pinMode(led1, OUTPUT); pinMode(led2, OUTPUT); pinMode(led3, OUTPUT);

Serial.begin(9600);

Serial.println("Digite o valor 1: ");
while(Serial.available() == 0); 
valor1 = Serial.parseInt(); 

Serial.println("Digite o valor 2: "); 
while(Serial.available() == 0);
valor2= Serial.parseInt();
}

int i;

for (i = 0; i < 10; i++) {

  int resto = i % 4;

  Serial.print("Resto da divisão: ");
  Serial.println(resto);
  delay(1000);

    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);

    int ultimoResto = (i - 1) % 4;
    
    if (ultimoResto == 0) digitalWrite(led1, HIGH);
    else if (ultimoResto == 1) digitalWrite(led2, HIGH);
    else if (ultimoResto == 2) digitalWrite(led3, HIGH);
}

void loop() {
}