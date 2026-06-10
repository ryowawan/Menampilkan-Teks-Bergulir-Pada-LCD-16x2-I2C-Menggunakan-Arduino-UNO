#include<LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
void setup() {
  // Inisialisasi jumlah kolom dan baris LCD
  lcd.begin(16, 2); 
}

void loop() {
  // Kembali ke posisi awal dan bersihkan layar
  lcd.clear(); 
  
  // Mencetak teks yang ingin digeser
  lcd.setCursor(0, 0); // Baris pertama, kolom pertama
  lcd.print(" SISTEM EMBEDDED ");


  // Menggeser teks ke kanan
  for (int i = 0 ; i <= 16; i++) {
      lcd.scrollDisplayRight(); 
      delay(200);
  }
}
  
 
