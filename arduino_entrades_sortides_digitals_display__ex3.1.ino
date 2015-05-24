void setup()
{
  pinMode(5, OUTPUT); //A
  pinMode(6, OUTPUT); //B
  pinMode(7, OUTPUT); //C
  pinMode(8, OUTPUT); //D
  pinMode(9, OUTPUT); //E
  pinMode(10, OUTPUT); //F
  pinMode(11, OUTPUT); //G

  digitalWrite(5, HIGH);  //A
  digitalWrite(6, HIGH); //A
  digitalWrite(7, HIGH); //A
  digitalWrite(8, HIGH); //A
  digitalWrite(9, HIGH); //A
  digitalWrite(10, HIGH); //A
  digitalWrite(11, HIGH); //A
}

void loop()
{
  //0
  digitalWrite(5, HIGH);//A
  digitalWrite(6,HIGH );//B
  digitalWrite(7, HIGH);//C
  digitalWrite(8,HIGH );//D
  digitalWrite(9,HIGH );//E
  digitalWrite(10, HIGH);//F
  digitalWrite(11, LOW);//G
  delay(500); 
  
  //1
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  delay(500);
  
  //2
  digitalWrite(5, HIGH);//A
  digitalWrite(6, HIGH);//B
  digitalWrite(7, LOW);//C
  digitalWrite(8, HIGH);//D
  digitalWrite(9, HIGH);//E
  digitalWrite(10, LOW);//F
  digitalWrite(11, HIGH);//G
  delay(500);
  
  //3
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, HIGH);
  delay(500);
  
  //4
  digitalWrite(5, LOW);//A
  digitalWrite(6, HIGH);//B
  digitalWrite(7, HIGH);//C
  digitalWrite(8, LOW);//D
  digitalWrite(9, LOW);//E
  digitalWrite(10, HIGH);//F
  digitalWrite(11, HIGH);//G
  delay(500);
  
  //5
  digitalWrite(5, HIGH);
  digitalWrite(6, LOW);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(9, LOW);
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
  delay(500);
  
  //6
  digitalWrite(5,HIGH);//A
  digitalWrite(6, LOW);//B
  digitalWrite(7, HIGH);//C
  digitalWrite(8, HIGH);//D
  digitalWrite(9, HIGH);//E
  digitalWrite(10, HIGH);//F
  digitalWrite(11, HIGH);//G
  delay(500);
  
  //7
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  delay(500);
  
  //8
  digitalWrite(5, HIGH);//A
  digitalWrite(6, HIGH);//B
  digitalWrite(7, HIGH);//C
  digitalWrite(8, HIGH);//D
  digitalWrite(9, HIGH);//E
  digitalWrite(10, HIGH);//F
  digitalWrite(11, HIGH);//G
  delay(500);
  
  //9
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
  delay(500);
  }
