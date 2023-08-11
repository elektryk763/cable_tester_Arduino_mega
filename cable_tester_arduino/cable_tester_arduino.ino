#define select 2
#define reset 3
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd = LiquidCrystal_I2C(0x27, 20, 4);

void Hello()
{
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("    ----------");
  lcd.setCursor(0, 2);
  lcd.print("    Cable tester");
  delay(3000);
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("O - CABEL OK");
  lcd.setCursor(0, 1);
  lcd.print("N - NO CONECTION");
  lcd.setCursor(0, 2);
  lcd.print("E - ERROR CONECTION");
  lcd.setCursor(0, 3);
  lcd.print("S - SHORT CIRCUIT");
  delay(5000);
}

void SelectTest()
{
  lcd.clear();
  if (digitalRead(select) == HIGH)
  {

    lcd.setCursor(0, 0); // Napis w pierwszej rubryce
    lcd.print("  Cable COM tester");
    lcd.setCursor(0, 1);
    lcd.print("    6 7 8 9 11 12 ");
    int  test_ok = 0;
    if (digitalRead(reset) == LOW)
    {
      int  test_ok = 0; //reset
    }
    ////////////////////////////////////////////////////////////////////com cabel part test

    for (int i = 6; i < 9; i++)
    {
      pinMode(i, INPUT_PULLUP);

    }
    //test kabelka 1
    pinMode(36, OUTPUT);
    digitalWrite(36, LOW);
    if (digitalRead(29) == LOW & digitalRead(30) == HIGH & digitalRead(31) == HIGH & digitalRead(32) == HIGH & digitalRead(33) == HIGH & digitalRead(34) == HIGH)
    {
      lcd.setCursor(4, 2);
      lcd.print("O");
    }
    else if (digitalRead(29) == LOW & (digitalRead(30) == LOW | digitalRead(31) == LOW | digitalRead(32) == LOW | digitalRead(33) == LOW | digitalRead(34) == LOW))
    {
      lcd.setCursor(4, 2);
      lcd.print("S");
      test_ok = 1;
    }
    else if (digitalRead(30) == LOW | digitalRead(31) == LOW | digitalRead(32) == LOW | digitalRead(33) == LOW | digitalRead(34) == LOW)
    {
      lcd.setCursor(4, 2);
      lcd.print("E");
      test_ok = 1;
    }
    else if (digitalRead(29) == HIGH & digitalRead(30) == HIGH & digitalRead(31) == HIGH & digitalRead(32) == HIGH & digitalRead(33) == HIGH & digitalRead(34) == HIGH)
    {
      lcd.setCursor(4, 2);
      lcd.print("N");
      test_ok = 1;
    }
    delay(20);
    pinMode(36, INPUT_PULLUP);

    //test kabelka 2
    pinMode(37, OUTPUT);
    digitalWrite(37, LOW);
    if (digitalRead(30) == LOW & digitalRead(29) == HIGH & digitalRead(31) == HIGH & digitalRead(32) == HIGH & digitalRead(33) == HIGH & digitalRead(34) == HIGH)
    {
      lcd.setCursor(6, 2);
      lcd.print("O");
    }
    else if (digitalRead(30) == LOW & (digitalRead(29) == LOW | digitalRead(31) == LOW | digitalRead(32) == LOW | digitalRead(33) == LOW | digitalRead(34) == LOW))
    {
      lcd.setCursor(6, 2);
      lcd.print("S");
      test_ok = 1;
    }
    else if (digitalRead(29) == LOW | digitalRead(31) == LOW | digitalRead(32) == LOW | digitalRead(33) == LOW | digitalRead(34) == LOW)
    {
      lcd.setCursor(6, 2);
      lcd.print("E");
      test_ok = 1;
    }
    else if (digitalRead(29) == HIGH & digitalRead(30) == HIGH & digitalRead(31) == HIGH & digitalRead(32) == HIGH & digitalRead(33) == HIGH & digitalRead(34) == HIGH)
    {
      lcd.setCursor(6, 2);
      lcd.print("N");
      test_ok = 1;
    }
    delay(20);
    pinMode(37, INPUT_PULLUP);

    //test kabelka 3
    pinMode(38, OUTPUT);
    digitalWrite(38, LOW);
    if (digitalRead(31) == LOW & digitalRead(29) == HIGH & digitalRead(30) == HIGH & digitalRead(32) == HIGH & digitalRead(33) == HIGH & digitalRead(34) == HIGH)
    {
      lcd.setCursor(8, 2);
      lcd.print("O");
    }
    else if (digitalRead(31) == LOW & (digitalRead(29) == LOW | digitalRead(30) == LOW | digitalRead(32) == LOW | digitalRead(33) == LOW | digitalRead(34) == LOW))
    {
      lcd.setCursor(8, 2);
      lcd.print("S");
      test_ok = 1;
    }
    else if (digitalRead(29) == LOW | digitalRead(30) == LOW | digitalRead(32) == LOW | digitalRead(33) == LOW | digitalRead(34) == LOW)
    {
      lcd.setCursor(8, 2);
      lcd.print("E");
      test_ok = 1;
    }
    else if (digitalRead(29) == HIGH & digitalRead(30) == HIGH & digitalRead(31) == HIGH & digitalRead(32) == HIGH & digitalRead(33) == HIGH & digitalRead(34) == HIGH)
    {
      lcd.setCursor(8, 2);
      lcd.print("N");
      test_ok = 1;
    }
    delay(20);
    pinMode(38, INPUT_PULLUP);

    //test kabelka 4
    pinMode(39, OUTPUT);
    digitalWrite(39, LOW);
    if (digitalRead(32) == LOW & digitalRead(29) == HIGH & digitalRead(30) == HIGH & digitalRead(31) == HIGH & digitalRead(33) == HIGH & digitalRead(34) == HIGH)
    {
      lcd.setCursor(10, 2);
      lcd.print("O");
    }
    else if (digitalRead(32) == LOW & (digitalRead(29) == LOW | digitalRead(30) == LOW | digitalRead(31) == LOW | digitalRead(33) == LOW | digitalRead(34) == LOW))
    {
      lcd.setCursor(10, 2);
      lcd.print("S");
      test_ok = 1;
    }
    else if (digitalRead(29) == LOW | digitalRead(30) == LOW | digitalRead(31) == LOW | digitalRead(33) == LOW | digitalRead(34) == LOW)
    {
      lcd.setCursor(10, 2);
      lcd.print("E");
      test_ok = 1;
    }
    else if (digitalRead(29) == HIGH & digitalRead(30) == HIGH & digitalRead(31) == HIGH & digitalRead(32) == HIGH & digitalRead(33) == HIGH & digitalRead(34) == HIGH)
    {
      lcd.setCursor(10, 2);
      lcd.print("N");
      test_ok = 1;
    }
    delay(20);
    pinMode(39, INPUT_PULLUP);

    //test kabelka 5
    pinMode(40, OUTPUT);
    digitalWrite(40, LOW);
    if (digitalRead(33) == LOW & digitalRead(29) == HIGH & digitalRead(30) == HIGH & digitalRead(31) == HIGH & digitalRead(32) == HIGH & digitalRead(34) == HIGH)
    {
      lcd.setCursor(13, 2);
      lcd.print("O");
    }
    else if (digitalRead(33) == LOW & (digitalRead(29) == LOW | digitalRead(30) == LOW | digitalRead(31) == LOW | digitalRead(32) == LOW | digitalRead(34) == LOW))
    {
      lcd.setCursor(13, 2);
      lcd.print("S");
      test_ok = 1;
    }
    else if (digitalRead(29) == LOW | digitalRead(30) == LOW | digitalRead(31) == LOW | digitalRead(32) == LOW | digitalRead(34) == LOW)
    {
      lcd.setCursor(13, 2);
      lcd.print("E");
      test_ok = 1;
    }
    else if (digitalRead(29) == HIGH & digitalRead(30) == HIGH & digitalRead(31) == HIGH & digitalRead(32) == HIGH & digitalRead(33) == HIGH & digitalRead(34) == HIGH)
    {
      lcd.setCursor(13, 2);
      lcd.print("N");
      test_ok = 1;
    }
    delay(20);
    pinMode(40, INPUT_PULLUP);

    //test kabelka 5
    pinMode(41, OUTPUT);
    digitalWrite(41, LOW);
    if (digitalRead(34) == LOW & digitalRead(29) == HIGH & digitalRead(30) == HIGH & digitalRead(31) == HIGH & digitalRead(32) == HIGH & digitalRead(33) == HIGH)
    {
      lcd.setCursor(16, 2);
      lcd.print("O");
    }
    else if (digitalRead(34) == LOW & (digitalRead(29) == LOW | digitalRead(30) == LOW | digitalRead(31) == LOW | digitalRead(32) == LOW | digitalRead(33) == LOW))
    {
      lcd.setCursor(16, 2);
      lcd.print("S");
      test_ok = 1;
    }
    else if (digitalRead(29) == LOW | digitalRead(30) == LOW | digitalRead(31) == LOW | digitalRead(32) == LOW | digitalRead(33) == LOW)
    {
      lcd.setCursor(16, 2);
      lcd.print("E");
      test_ok = 1;
    }
    else if (digitalRead(29) == HIGH & digitalRead(30) == HIGH & digitalRead(31) == HIGH & digitalRead(32) == HIGH & digitalRead(33) == HIGH & digitalRead(34) == HIGH)
    {
      lcd.setCursor(16, 2);
      lcd.print("N");
      test_ok = 1;
    }
    delay(20);
    pinMode(41, INPUT_PULLUP);


    if (test_ok == 0)
    {
      lcd.setCursor(1, 3);
      lcd.print("Cabel ok");
    }
    else
    {
      lcd.setCursor(1, 3);
      lcd.print("Cabel nok");
      test_ok = 1;
      while (digitalRead(reset) == HIGH)
      {
      }
    }
  }
  ////////////////////////////////////////////////////////////////////com cabel part test
  else
  {

    lcd.setCursor(0, 0); // Napis w pierwszej rubryce
    lcd.print(" Cable PALET tester");
    lcd.setCursor(0, 1);
    lcd.print(" 123456789 10 11 12");


    int  test_ok = 0;
    if (digitalRead(reset) == LOW)
    {
      int  test_ok = 0; //reset
    }
    ////////////////////////////////////////////////////////////////////palet cabel part test

    //test kabelka 1
    pinMode(18, OUTPUT);
    digitalWrite(18, LOW);
    if (digitalRead(4) == LOW & digitalRead(5) == HIGH & digitalRead(6) == HIGH & digitalRead(7) == HIGH & digitalRead(8) == HIGH & digitalRead(9) == HIGH & digitalRead(10) == HIGH & digitalRead(11) == HIGH & digitalRead(12) == HIGH & digitalRead(14) == HIGH & digitalRead(15) == HIGH & digitalRead(16) == HIGH)
    {
      lcd.setCursor(1, 2);
      lcd.print("O");
    }
    else if (digitalRead(4) == LOW & (digitalRead(5) == LOW | digitalRead(6) == LOW | digitalRead(7) == LOW | digitalRead(8) == LOW | digitalRead(9) == LOW | digitalRead(10) == LOW | digitalRead(11) == LOW | digitalRead(12) == LOW | digitalRead(14) == LOW | digitalRead(15) == LOW | digitalRead(16) == LOW))
    {
      lcd.setCursor(1, 2);
      lcd.print("S");
      test_ok = 1;
    }
    else if (digitalRead(5) == LOW | digitalRead(6) == LOW | digitalRead(7) == LOW | digitalRead(8) == LOW | digitalRead(9) == LOW | digitalRead(10) == LOW | digitalRead(11) == LOW | digitalRead(12) == LOW | digitalRead(14) == LOW | digitalRead(15) == LOW | digitalRead(16) == LOW)
    {
      lcd.setCursor(1, 2);
      lcd.print("E");
      test_ok = 1;
    }
    else if (digitalRead(4) == HIGH & digitalRead(5) == HIGH & digitalRead(6) == HIGH & digitalRead(7) == HIGH & digitalRead(8) == HIGH & digitalRead(9) == HIGH & digitalRead(10) == HIGH & digitalRead(11) == HIGH & digitalRead(12) == HIGH & digitalRead(14) == HIGH & digitalRead(15) == HIGH & digitalRead(16) == HIGH)
    {
      lcd.setCursor(1, 2);
      lcd.print("N");
      test_ok = 1;
    }
    delay(20);
    pinMode(18, INPUT_PULLUP);

    //test kabelka 2
    pinMode(19, OUTPUT);
    digitalWrite(19, LOW);
    if (digitalRead(5) == LOW & digitalRead(4) == HIGH & digitalRead(6) == HIGH & digitalRead(7) == HIGH & digitalRead(8) == HIGH & digitalRead(9) == HIGH & digitalRead(10) == HIGH & digitalRead(11) == HIGH & digitalRead(12) == HIGH & digitalRead(14) == HIGH & digitalRead(15) == HIGH & digitalRead(16) == HIGH)
    {
      lcd.setCursor(2, 2);
      lcd.print("O");
    }
    else if (digitalRead(5) == LOW & (digitalRead(4) == LOW | digitalRead(6) == LOW | digitalRead(7) == LOW | digitalRead(8) == LOW | digitalRead(9) == LOW | digitalRead(10) == LOW | digitalRead(11) == LOW | digitalRead(12) == LOW | digitalRead(14) == LOW | digitalRead(15) == LOW | digitalRead(16) == LOW))
    {
      lcd.setCursor(2, 2);
      lcd.print("S");
      test_ok = 1;
    }
    else if (digitalRead(4) == LOW | digitalRead(6) == LOW | digitalRead(7) == LOW | digitalRead(8) == LOW | digitalRead(9) == LOW | digitalRead(10) == LOW | digitalRead(11) == LOW | digitalRead(12) == LOW | digitalRead(14) == LOW | digitalRead(15) == LOW | digitalRead(16) == LOW)
    {
      lcd.setCursor(2, 2);
      lcd.print("E");
      test_ok = 1;
    }
    else if (digitalRead(4) == HIGH & digitalRead(5) == HIGH & digitalRead(6) == HIGH & digitalRead(7) == HIGH & digitalRead(8) == HIGH & digitalRead(9) == HIGH & digitalRead(10) == HIGH & digitalRead(11) == HIGH & digitalRead(12) == HIGH & digitalRead(14) == HIGH & digitalRead(15) == HIGH & digitalRead(16) == HIGH)
    {
      lcd.setCursor(2, 2);
      lcd.print("N");
      test_ok = 1;
    }
    delay(20);
    pinMode(19, INPUT_PULLUP);

    //test kabelka 3
    pinMode(42, OUTPUT);
    digitalWrite(42, LOW);
    if (digitalRead(6) == LOW & digitalRead(4) == HIGH & digitalRead(5) == HIGH & digitalRead(7) == HIGH & digitalRead(8) == HIGH & digitalRead(9) == HIGH & digitalRead(10) == HIGH & digitalRead(11) == HIGH & digitalRead(12) == HIGH & digitalRead(14) == HIGH & digitalRead(15) == HIGH & digitalRead(16) == HIGH)
    {
      lcd.setCursor(3, 2);
      lcd.print("O");
    }
    else if (digitalRead(6) == LOW & (digitalRead(4) == LOW | digitalRead(5) == LOW | digitalRead(7) == LOW | digitalRead(8) == LOW | digitalRead(9) == LOW | digitalRead(10) == LOW | digitalRead(11) == LOW | digitalRead(12) == LOW | digitalRead(14) == LOW | digitalRead(15) == LOW | digitalRead(16) == LOW))
    {
      lcd.setCursor(3, 2);
      lcd.print("S");
      test_ok = 1;
    }
    else if (digitalRead(4) == LOW | digitalRead(5) == LOW | digitalRead(7) == LOW | digitalRead(8) == LOW | digitalRead(9) == LOW | digitalRead(10) == LOW | digitalRead(11) == LOW | digitalRead(12) == LOW | digitalRead(14) == LOW | digitalRead(15) == LOW | digitalRead(16) == LOW)
    {
      lcd.setCursor(3, 2);
      lcd.print("E");
      test_ok = 1;
    }
    else if (digitalRead(4) == HIGH & digitalRead(5) == HIGH & digitalRead(6) == HIGH & digitalRead(7) == HIGH & digitalRead(8) == HIGH & digitalRead(9) == HIGH & digitalRead(10) == HIGH & digitalRead(11) == HIGH & digitalRead(12) == HIGH & digitalRead(14) == HIGH & digitalRead(15) == HIGH & digitalRead(16) == HIGH)
    {
      lcd.setCursor(3, 2);
      lcd.print("N");
      test_ok = 1;
    }
    delay(20);
    pinMode(42, INPUT_PULLUP);


    //test kabelka 4
    pinMode(43, OUTPUT);
    digitalWrite(43, LOW);
    if (digitalRead(7) == LOW & digitalRead(4) == HIGH & digitalRead(5) == HIGH & digitalRead(6) == HIGH & digitalRead(8) == HIGH & digitalRead(9) == HIGH & digitalRead(10) == HIGH & digitalRead(11) == HIGH & digitalRead(12) == HIGH & digitalRead(14) == HIGH & digitalRead(15) == HIGH & digitalRead(16) == HIGH)
    {
      lcd.setCursor(4, 2);
      lcd.print("O");
    }
    else if (digitalRead(7) == LOW & (digitalRead(4) == LOW | digitalRead(5) == LOW | digitalRead(6) == LOW | digitalRead(8) == LOW | digitalRead(9) == LOW | digitalRead(10) == LOW | digitalRead(11) == LOW | digitalRead(12) == LOW | digitalRead(14) == LOW | digitalRead(15) == LOW | digitalRead(16) == LOW))
    {
      lcd.setCursor(4, 2);
      lcd.print("S");
      test_ok = 1;
    }
    else if (digitalRead(4) == LOW | digitalRead(5) == LOW | digitalRead(6) == LOW | digitalRead(8) == LOW | digitalRead(9) == LOW | digitalRead(10) == LOW | digitalRead(11) == LOW | digitalRead(12) == LOW | digitalRead(14) == LOW | digitalRead(15) == LOW | digitalRead(16) == LOW)
    {
      lcd.setCursor(4, 2);
      lcd.print("E");
      test_ok = 1;
    }
    else if (digitalRead(4) == HIGH & digitalRead(5) == HIGH & digitalRead(6) == HIGH & digitalRead(7) == HIGH & digitalRead(8) == HIGH & digitalRead(9) == HIGH & digitalRead(10) == HIGH & digitalRead(11) == HIGH & digitalRead(12) == HIGH & digitalRead(14) == HIGH & digitalRead(15) == HIGH & digitalRead(16) == HIGH)
    {
      lcd.setCursor(4, 2);
      lcd.print("N");
      test_ok = 1;
    }
    delay(20);
    pinMode(43, INPUT_PULLUP);

    //test kabelka 5
    pinMode(44, OUTPUT);
    digitalWrite(44, LOW);
    if (digitalRead(8) == LOW & digitalRead(4) == HIGH & digitalRead(5) == HIGH & digitalRead(6) == HIGH & digitalRead(7) == HIGH & digitalRead(9) == HIGH & digitalRead(10) == HIGH & digitalRead(11) == HIGH & digitalRead(12) == HIGH & digitalRead(14) == HIGH & digitalRead(15) == HIGH & digitalRead(16) == HIGH)
    {
      lcd.setCursor(5, 2);
      lcd.print("O");
    }
    else if (digitalRead(8) == LOW & (digitalRead(4) == LOW | digitalRead(5) == LOW | digitalRead(6) == LOW | digitalRead(7) == LOW | digitalRead(9) == LOW | digitalRead(10) == LOW | digitalRead(11) == LOW | digitalRead(12) == LOW | digitalRead(14) == LOW | digitalRead(15) == LOW | digitalRead(16) == LOW))
    {
      lcd.setCursor(5, 2);
      lcd.print("S");
      test_ok = 1;
    }
    else if (digitalRead(4) == LOW | digitalRead(5) == LOW | digitalRead(6) == LOW | digitalRead(7) == LOW | digitalRead(9) == LOW | digitalRead(10) == LOW | digitalRead(11) == LOW | digitalRead(12) == LOW | digitalRead(14) == LOW | digitalRead(15) == LOW | digitalRead(16) == LOW)
    {
      lcd.setCursor(5, 2);
      lcd.print("E");
      test_ok = 1;
    }
    else if (digitalRead(4) == HIGH & digitalRead(5) == HIGH & digitalRead(6) == HIGH & digitalRead(7) == HIGH & digitalRead(8) == HIGH & digitalRead(9) == HIGH & digitalRead(10) == HIGH & digitalRead(11) == HIGH & digitalRead(12) == HIGH & digitalRead(14) == HIGH & digitalRead(15) == HIGH & digitalRead(16) == HIGH)
    {
      lcd.setCursor(5, 2);
      lcd.print("N");
      test_ok = 1;
    }
    delay(20);
    pinMode(44, INPUT_PULLUP);

    //test kabelka 6
    pinMode(45, OUTPUT);
    digitalWrite(45, LOW);
    if (digitalRead(9) == LOW & digitalRead(4) == HIGH & digitalRead(5) == HIGH & digitalRead(6) == HIGH & digitalRead(7) == HIGH & digitalRead(8) == HIGH & digitalRead(10) == HIGH & digitalRead(11) == HIGH & digitalRead(12) == HIGH & digitalRead(14) == HIGH & digitalRead(15) == HIGH & digitalRead(16) == HIGH)
    {
      lcd.setCursor(6, 2);
      lcd.print("O");
    }
    else if (digitalRead(9) == LOW & (digitalRead(4) == LOW | digitalRead(5) == LOW | digitalRead(6) == LOW | digitalRead(7) == LOW | digitalRead(8) == LOW | digitalRead(10) == LOW | digitalRead(11) == LOW | digitalRead(12) == LOW | digitalRead(14) == LOW | digitalRead(15) == LOW | digitalRead(16) == LOW))
    {
      lcd.setCursor(6, 2);
      lcd.print("S");
      test_ok = 1;
    }
    else if (digitalRead(4) == LOW | digitalRead(5) == LOW | digitalRead(6) == LOW | digitalRead(7) == LOW | digitalRead(8) == LOW | digitalRead(10) == LOW | digitalRead(11) == LOW | digitalRead(12) == LOW | digitalRead(14) == LOW | digitalRead(15) == LOW | digitalRead(16) == LOW)
    {
      lcd.setCursor(6, 2);
      lcd.print("E");
      test_ok = 1;
    }
    else if (digitalRead(4) == HIGH & digitalRead(5) == HIGH & digitalRead(6) == HIGH & digitalRead(7) == HIGH & digitalRead(8) == HIGH & digitalRead(9) == HIGH & digitalRead(10) == HIGH & digitalRead(11) == HIGH & digitalRead(12) == HIGH & digitalRead(14) == HIGH & digitalRead(15) == HIGH & digitalRead(16) == HIGH)
    {
      lcd.setCursor(6, 2);
      lcd.print("N");
      test_ok = 1;
    }
    delay(20);
    pinMode(45, INPUT_PULLUP);

    //test kabelka 7
    pinMode(46, OUTPUT);
    digitalWrite(46, LOW);
    if (digitalRead(10) == LOW & digitalRead(4) == HIGH & digitalRead(5) == HIGH & digitalRead(6) == HIGH & digitalRead(7) == HIGH & digitalRead(8) == HIGH & digitalRead(9) == HIGH & digitalRead(11) == HIGH & digitalRead(12) == HIGH & digitalRead(14) == HIGH & digitalRead(15) == HIGH & digitalRead(16) == HIGH)
    {
      lcd.setCursor(7, 2);
      lcd.print("O");
    }
    else if (digitalRead(10) == LOW & (digitalRead(4) == LOW | digitalRead(5) == LOW | digitalRead(6) == LOW | digitalRead(7) == LOW | digitalRead(8) == LOW | digitalRead(9) == LOW | digitalRead(11) == LOW | digitalRead(12) == LOW | digitalRead(14) == LOW | digitalRead(15) == LOW | digitalRead(16) == LOW))
    {
      lcd.setCursor(7, 2);
      lcd.print("S");
      test_ok = 1;
    }
    else if (digitalRead(4) == LOW | digitalRead(5) == LOW | digitalRead(6) == LOW | digitalRead(7) == LOW | digitalRead(8) == LOW | digitalRead(9) == LOW | digitalRead(11) == LOW | digitalRead(12) == LOW | digitalRead(14) == LOW | digitalRead(15) == LOW | digitalRead(16) == LOW)
    {
      lcd.setCursor(7, 2);
      lcd.print("E");
      test_ok = 1;
    }
    else if (digitalRead(4) == HIGH & digitalRead(5) == HIGH & digitalRead(6) == HIGH & digitalRead(7) == HIGH & digitalRead(8) == HIGH & digitalRead(9) == HIGH & digitalRead(10) == HIGH & digitalRead(11) == HIGH & digitalRead(12) == HIGH & digitalRead(14) == HIGH & digitalRead(15) == HIGH & digitalRead(16) == HIGH)
    {
      lcd.setCursor(7, 2);
      lcd.print("N");
      test_ok = 1;
    }
    delay(20);
    pinMode(46, INPUT_PULLUP);

    //test kabelka 8
    pinMode(47, OUTPUT);
    digitalWrite(47, LOW);
    if (digitalRead(11) == LOW & digitalRead(4) == HIGH & digitalRead(5) == HIGH & digitalRead(6) == HIGH & digitalRead(7) == HIGH & digitalRead(8) == HIGH & digitalRead(9) == HIGH & digitalRead(10) == HIGH & digitalRead(12) == HIGH & digitalRead(14) == HIGH & digitalRead(15) == HIGH & digitalRead(16) == HIGH)
    {
      lcd.setCursor(8, 2);
      lcd.print("O");
    }
    else if (digitalRead(11) == LOW & (digitalRead(4) == LOW | digitalRead(5) == LOW | digitalRead(6) == LOW | digitalRead(7) == LOW | digitalRead(8) == LOW | digitalRead(9) == LOW | digitalRead(10) == LOW | digitalRead(12) == LOW | digitalRead(14) == LOW | digitalRead(15) == LOW | digitalRead(16) == LOW))
    {
      lcd.setCursor(8, 2);
      lcd.print("S");
      test_ok = 1;
    }
    else if (digitalRead(4) == LOW | digitalRead(5) == LOW | digitalRead(6) == LOW | digitalRead(7) == LOW | digitalRead(8) == LOW | digitalRead(9) == LOW | digitalRead(10) == LOW | digitalRead(12) == LOW | digitalRead(14) == LOW | digitalRead(15) == LOW | digitalRead(16) == LOW)
    {
      lcd.setCursor(8, 2);
      lcd.print("E");
      test_ok = 1;
    }
    else if (digitalRead(4) == HIGH & digitalRead(5) == HIGH & digitalRead(6) == HIGH & digitalRead(7) == HIGH & digitalRead(8) == HIGH & digitalRead(9) == HIGH & digitalRead(10) == HIGH & digitalRead(11) == HIGH & digitalRead(12) == HIGH & digitalRead(14) == HIGH & digitalRead(15) == HIGH & digitalRead(16) == HIGH)
    {
      lcd.setCursor(8, 2);
      lcd.print("N");
      test_ok = 1;
    }
    delay(20);
    pinMode(47, INPUT_PULLUP);

    //test kabelka 9
    pinMode(48, OUTPUT);
    digitalWrite(48, LOW);
    if (digitalRead(12) == LOW & digitalRead(4) == HIGH & digitalRead(5) == HIGH & digitalRead(6) == HIGH & digitalRead(7) == HIGH & digitalRead(8) == HIGH & digitalRead(9) == HIGH & digitalRead(10) == HIGH & digitalRead(11) == HIGH & digitalRead(14) == HIGH & digitalRead(15) == HIGH & digitalRead(16) == HIGH)
    {
      lcd.setCursor(9, 2);
      lcd.print("O");
    }
    else if (digitalRead(12) == LOW & (digitalRead(4) == LOW | digitalRead(5) == LOW | digitalRead(6) == LOW | digitalRead(7) == LOW | digitalRead(8) == LOW | digitalRead(9) == LOW | digitalRead(10) == LOW | digitalRead(11) == LOW | digitalRead(14) == LOW | digitalRead(15) == LOW | digitalRead(16) == LOW))
    {
      lcd.setCursor(9, 2);
      lcd.print("S");
      test_ok = 1;
    }
    else if (digitalRead(4) == LOW | digitalRead(5) == LOW | digitalRead(6) == LOW | digitalRead(7) == LOW | digitalRead(8) == LOW | digitalRead(9) == LOW | digitalRead(10) == LOW | digitalRead(11) == LOW | digitalRead(14) == LOW | digitalRead(15) == LOW | digitalRead(16) == LOW)
    {
      lcd.setCursor(9, 2);
      lcd.print("E");
      test_ok = 1;
    }
    else if (digitalRead(4) == HIGH & digitalRead(5) == HIGH & digitalRead(6) == HIGH & digitalRead(7) == HIGH & digitalRead(8) == HIGH & digitalRead(9) == HIGH & digitalRead(10) == HIGH & digitalRead(11) == HIGH & digitalRead(12) == HIGH & digitalRead(14) == HIGH & digitalRead(15) == HIGH & digitalRead(16) == HIGH)
    {
      lcd.setCursor(9, 2);
      lcd.print("N");
      test_ok = 1;
    }
    delay(20);
    pinMode(48, INPUT_PULLUP);

    //test kabelka 10
    pinMode(49, OUTPUT);
    digitalWrite(49, LOW);
    if (digitalRead(14) == LOW & digitalRead(4) == HIGH & digitalRead(5) == HIGH & digitalRead(6) == HIGH & digitalRead(7) == HIGH & digitalRead(8) == HIGH & digitalRead(9) == HIGH & digitalRead(10) == HIGH & digitalRead(11) == HIGH & digitalRead(12) == HIGH & digitalRead(15) == HIGH & digitalRead(16) == HIGH)
    {
      lcd.setCursor(12, 2);
      lcd.print("O");
    }
    else if (digitalRead(14) == LOW & (digitalRead(4) == LOW | digitalRead(5) == LOW | digitalRead(6) == LOW | digitalRead(7) == LOW | digitalRead(8) == LOW | digitalRead(9) == LOW | digitalRead(10) == LOW | digitalRead(11) == LOW | digitalRead(12) == LOW | digitalRead(15) == LOW | digitalRead(16) == LOW))
    {
      lcd.setCursor(12, 2);
      lcd.print("S");
      test_ok = 1;
    }
    else if (digitalRead(4) == LOW | digitalRead(5) == LOW | digitalRead(6) == LOW | digitalRead(7) == LOW | digitalRead(8) == LOW | digitalRead(9) == LOW | digitalRead(10) == LOW | digitalRead(11) == LOW | digitalRead(12) == LOW | digitalRead(15) == LOW | digitalRead(16) == LOW)
    {
      lcd.setCursor(12, 2);
      lcd.print("E");
      test_ok = 1;
    }
    else if (digitalRead(4) == HIGH & digitalRead(5) == HIGH & digitalRead(6) == HIGH & digitalRead(7) == HIGH & digitalRead(8) == HIGH & digitalRead(9) == HIGH & digitalRead(10) == HIGH & digitalRead(11) == HIGH & digitalRead(12) == HIGH & digitalRead(14) == HIGH & digitalRead(15) == HIGH & digitalRead(16) == HIGH)
    {
      lcd.setCursor(12, 2);
      lcd.print("N");
      test_ok = 1;
    }
    delay(20);
    pinMode(49, INPUT_PULLUP);

    //test kabelka 11
    pinMode(50, OUTPUT);
    digitalWrite(50, LOW);
    if (digitalRead(15) == LOW & digitalRead(4) == HIGH & digitalRead(5) == HIGH & digitalRead(6) == HIGH & digitalRead(7) == HIGH & digitalRead(8) == HIGH & digitalRead(9) == HIGH & digitalRead(10) == HIGH & digitalRead(11) == HIGH & digitalRead(12) == HIGH & digitalRead(14) == HIGH & digitalRead(16) == HIGH)
    {
      lcd.setCursor(15, 2);
      lcd.print("O");
    }
    else if (digitalRead(15) == LOW & (digitalRead(4) == LOW | digitalRead(5) == LOW | digitalRead(6) == LOW | digitalRead(7) == LOW | digitalRead(8) == LOW | digitalRead(9) == LOW | digitalRead(10) == LOW | digitalRead(11) == LOW | digitalRead(12) == LOW | digitalRead(14) == LOW | digitalRead(16) == LOW))
    {
      lcd.setCursor(15, 2);
      lcd.print("S");
      test_ok = 1;
    }
    else if (digitalRead(4) == LOW | digitalRead(5) == LOW | digitalRead(6) == LOW | digitalRead(7) == LOW | digitalRead(8) == LOW | digitalRead(9) == LOW | digitalRead(10) == LOW | digitalRead(11) == LOW | digitalRead(12) == LOW | digitalRead(14) == LOW | digitalRead(16) == LOW)
    {
      lcd.setCursor(15, 2);
      lcd.print("E");
      test_ok = 1;
    }
    else if (digitalRead(4) == HIGH & digitalRead(5) == HIGH & digitalRead(6) == HIGH & digitalRead(7) == HIGH & digitalRead(8) == HIGH & digitalRead(9) == HIGH & digitalRead(10) == HIGH & digitalRead(11) == HIGH & digitalRead(12) == HIGH & digitalRead(14) == HIGH & digitalRead(15) == HIGH & digitalRead(16) == HIGH)
    {
      lcd.setCursor(15, 2);
      lcd.print("N");
      test_ok = 1;
    }
    delay(20);
    pinMode(50, INPUT_PULLUP);

    //test kabelka 12
    pinMode(51, OUTPUT);
    digitalWrite(51, LOW);
    if (digitalRead(16) == LOW & digitalRead(4) == HIGH & digitalRead(5) == HIGH & digitalRead(6) == HIGH & digitalRead(7) == HIGH & digitalRead(8) == HIGH & digitalRead(9) == HIGH & digitalRead(10) == HIGH & digitalRead(11) == HIGH & digitalRead(12) == HIGH & digitalRead(14) == HIGH & digitalRead(15) == HIGH)
    {
      lcd.setCursor(18, 2);
      lcd.print("O");
    }
    else if (digitalRead(16) == LOW & (digitalRead(4) == LOW | digitalRead(5) == LOW | digitalRead(6) == LOW | digitalRead(7) == LOW | digitalRead(8) == LOW | digitalRead(9) == LOW | digitalRead(10) == LOW | digitalRead(11) == LOW | digitalRead(12) == LOW | digitalRead(14) == LOW | digitalRead(15) == LOW))
    {
      lcd.setCursor(18, 2);
      lcd.print("S");
      test_ok = 1;
    }
    else if (digitalRead(4) == LOW | digitalRead(5) == LOW | digitalRead(6) == LOW | digitalRead(7) == LOW | digitalRead(8) == LOW | digitalRead(9) == LOW | digitalRead(10) == LOW | digitalRead(11) == LOW | digitalRead(12) == LOW | digitalRead(14) == LOW | digitalRead(15) == LOW)
    {
      lcd.setCursor(18, 2);
      lcd.print("E");
      test_ok = 1;
    }
    else if (digitalRead(4) == HIGH & digitalRead(5) == HIGH & digitalRead(6) == HIGH & digitalRead(7) == HIGH & digitalRead(8) == HIGH & digitalRead(9) == HIGH & digitalRead(10) == HIGH & digitalRead(11) == HIGH & digitalRead(12) == HIGH & digitalRead(14) == HIGH & digitalRead(15) == HIGH & digitalRead(16) == HIGH)
    {
      lcd.setCursor(18, 2);
      lcd.print("N");
      test_ok = 1;
    }
    delay(20);
    pinMode(51, INPUT_PULLUP);

    if (test_ok == 0)
    {
      lcd.setCursor(1, 3);
      lcd.print("Cabel ok");
    }
    else
    {
      lcd.setCursor(1, 3);
      lcd.print("Cabel nok");
      test_ok = 1;
      while (digitalRead(reset) == HIGH)
      {
      }
    }
  }
}
void setup()
{
  lcd.clear();
  lcd.init();
  pinMode(select, INPUT_PULLUP);
  pinMode(reset, INPUT_PULLUP);

  for (int i = 4; i <= 12; i++)
  {
    pinMode(i, INPUT_PULLUP);
  }

  for (int i = 14; i <= 16; i++)
  {
    pinMode(i, INPUT_PULLUP);
  }
  for (int i = 18; i <= 28; i++)
  {
    pinMode(i, OUTPUT);
    digitalWrite(i, HIGH);
  }
  for (int i = 42; i <= 53; i++)
  {
    pinMode(i, OUTPUT);
    digitalWrite(i, HIGH);
  }
  pinMode(44, OUTPUT);
  digitalWrite(44, HIGH);
  pinMode(45, OUTPUT);
  digitalWrite(45, HIGH);

  for (int i = 29; i <= 34; i++)
  {
    pinMode(i, INPUT_PULLUP);
  }

  for (int i = 36; i <= 41; i++)
  {
    pinMode(i, OUTPUT);
    digitalWrite(i, HIGH);
  }

  Hello();
}

void loop()
{

  //lcd.display(); //napis włącz
  SelectTest();
  delay(1000);
}
