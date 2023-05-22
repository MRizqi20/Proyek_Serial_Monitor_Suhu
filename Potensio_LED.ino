// Pin LED
const int LED = D2;
// Pin potensiometer
const int POT = A0;
4
void setup() {
// Inisialisasi pin LED dan potensiometer
pinMode(LED, OUTPUT);
//Inisialisasi Serial Monitor
Serial.begin(9600);
}
void loop() {
// Baca nilai potensiometer
int potValue = analogRead(POT);
// Menyalakan LED dengan kecerahan yang sesuai dengan nilai potensiometer
int ledValue = map(potValue, 0, 1023, 0, 255);
// Hidupkan LED dengan brightness sesuai nilai potensiometer
analogWrite(LED, ledValue);
// Menampilkan nilai potensiometer pada serial monitor
Serial.print("Nilai Potensiometer: ");
Serial.println(potValue);
Serial.print("Kecerahan LED = ");
Serial.println(ledValue);
delay(100);
}