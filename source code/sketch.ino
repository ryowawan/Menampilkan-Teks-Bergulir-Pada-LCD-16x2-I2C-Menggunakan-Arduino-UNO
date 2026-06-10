// masukkan librari lcd i2c
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup()
{
  Serial.begin(9600);
  // inisialisasi lcd
  lcd.init();		
  // nyalakan backlight
  lcd.backlight();

}
void loop()
{
  // Mengembalikkan ke posisi awal dan bersihkan layar
  lcd.clear(); 
  
  // Menampilkan teks yang ingin digeser
  lcd.setCursor(0, 0); // Baris pertama, kolom pertama
  lcd.print(" SISTEM EMBEDDED ");

  // Menggeser teks ke kanan
  for (int i = 0 ; i <= 16; i++) {
      lcd.scrollDisplayRight(); 
      delay(200);
  }
}
