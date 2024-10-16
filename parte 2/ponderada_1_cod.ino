// C++ code
//
void setup()
{
  pinMode(13, OUTPUT);
}

void loop()
{
  digitalWrite(13, HIGH);
  delay(1000); // espera por 1 segudo
  digitalWrite(13, LOW);
  delay(1000); // espera por 1 segundo
}