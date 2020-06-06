//Açıklama: Butona birinci basıldığında led yanacak ve 2. kez basılıncaya kadar yanık kalacak. 2.kez basıldığında ise led sönecek.

byte sayac = 0; //Buton kaçıncı kez basıldığını kontrol etmek için kullanacağımız değişken.
                //Bu değişkene ya "1" ya da "2" değeri geleceğini bildiğimiz için veri tipini "byte" olarak belirledik.
                //Eğer veri tipini "int"(integer) olarak tanımlamış olsaydık hafızada 2 kat daha fazla yer kaplamış olurdu.
const int buton = 7;
const int LED = 13;

void setup() //Uygulama içinde tek seferlik işlemlerin yapılacağı bölüm.
{
  pinMode(buton,INPUT); //7.pin giriş(INPUT) olarak ayarlandı.
  pinMode(LED,OUTPUT); //13.pin çıkış(OUTPUT) olarak ayarlandı.
}

void loop() //Uygulama içinde sürekli yapılması istenen işlemlerin yapılacağı bölüm.
{
  byte gelen_deger = digitalRead(buton); //digitalRead komutu ile butonun ürettiği değer okunup "gelen_deger" değişkenine gönderildi.
  if(gelen_deger == 1) //Eğer butondan gelen değer "1" ise sayac 1 arttırılacak. 
  {
    sayac++; //"sayac" değişkeni içindeki değer 1 arttırılır.
    delay(200); //Butona basıldığı anlaşılsın diye 200 ms'ye beklenir.
  }
  
  switch (sayac) //"sayac" değişkeni içindeki değerler "switch - case" yapısı ile kontrol edildi.
  {
    case 1: //Eğer "sayac" değişkeni içindeki değer "1" ise 13.pine bağlı olan LED yakılacak.
    digitalWrite(LED,1); //13.pine bağlı olan LED yakıldı.
    break; //İşlem sonlandırılır.

    case 2:  //Eğer "sayac" değişkeni içindeki değer "2" ise 13.pine bağlı olan LED söndürülecek.
    digitalWrite(LED,0); //13.pine bağlı olan LED söndürüldü.
    sayac = 0; //"sayac" değişkeninin kontrolü sadece 1. ve 2. basışlara göre kontrol edildiği için ve daha fazla artmasını önlemek amacıyla "sayac" değişkeni içindeki değer sıfırlandı.
    break; //İşlem sonlandırılır.
  }

}
