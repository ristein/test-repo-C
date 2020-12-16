//Klassendefinitionen
class Konto
{
  public:

    char Benutzer[30];
    float Kontostand;
};

class Getraenk
{
  public:
  
    char Bezeichnung[30];
    float Preis
};

void setup() {
  Serial.begin(115200);
  Serial.println();
  Serial.println("MiniBar, 2020-12-14");
  //add a comment
}

void loop() {
  delay(333);
  Serial.println(millis());
}
