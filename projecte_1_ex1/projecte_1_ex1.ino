const int led0=3;
const int led1=4;
const int led2=5;
const int led3=6;
const int led4=8;
const int led5=10;

void setup ()
{
 pinMode ( led0, OUTPUT);
 pinMode ( led1, OUTPUT);
 pinMode ( led2, OUTPUT);
 pinMode ( led3, OUTPUT);
 pinMode ( led4, OUTPUT);
 pinMode ( led5, OUTPUT);
}


void loop()

{
  digitalWrite ( led0, HIGH );
  digitalWrite ( led1, HIGH );
  digitalWrite ( led2, HIGH );
  digitalWrite ( led3, HIGH );
  digitalWrite ( led4, HIGH );
  digitalWrite ( led5, HIGH );
  delay(2000);
  digitalWrite ( led0, LOW );
  digitalWrite ( led1, LOW );
  digitalWrite ( led2, LOW );
  digitalWrite ( led3, LOW );
  digitalWrite ( led4, LOW );
  digitalWrite ( led5, LOW );
  delay(2000);
}
