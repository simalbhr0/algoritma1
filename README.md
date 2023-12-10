# algoritma1
 deşifre problemi,Şimal Bahar, Zülal Özcan
Kullanıcıdan Giriş Alma
Kullanıcıdan şifrelenecek ya da deşifrelenecek mesajı ve anahtar değerini alır.

fgets fonksiyonu boşlukların da algılanmasını sağlar.
stdin programın klavyeden girilen verileri almasını sağlar.

Şifreleme Fonksiyonu (encrypt)
Her bir karakter için anahtar değerinde şifreleme işlemi yapar.

isalpha fonksiyonu ile karakterin alfabetik olup olmadığı kontrol eder.
Küçük harfse, küçük harf aralığı içinde kaydırma yapılır. Aynı şekilde, 
büyük harfse, büyük harf aralığı içinde kaydırma yapar.
Mod 26 işlemi, döngüsel kaydırmayı sağlar (alfabe sınırlarını aşmaz).

Deşifreleme Fonksiyonu 
Şİfreleme işlemi için alfabede ileri gidilirken deşifreleme için geri gidilmesi gerekir.
Bu nedenle deşifreleme işleminde anahtar değeri negatif girilir.

Sonuçları Yazdırma
Anahtar değerinin durumuna göre şifrelenmiş ya da deşifre edilmiş metinler ekrana yazdırır.

Programın Çıkışı
Kullanıcıdan alınan bir metin ve anahtar değeriyle şifrelenmiş 
ya da deşifrelenmiş mesajları ekrana yazdırır.




ÖRNEKLER

Sifrelemek veya desifre etmek istediginiz mesaji girin: The quick brown fox
Anahtar degerini sifreleme islemi icin pozitif desifreleme islemi icin negatif olarak girin:5

Sifrelenmis Mesaj: Ymj vznhp gwtbs ktc

Sifrelemek veya desifre etmek istediginiz mesaji girin: Ymj vznhp gwtbs ktc
Anahtar degerini sifreleme islemi icin pozitif desifreleme islemi icin negatif olarak girin:-5

Desifre Edilmis Mesaj: The quick brown fox


Sifrelemek veya desifre etmek istediginiz mesaji girin: jumps over the lazy dog
Anahtar degerini sifreleme islemi icin pozitif desifreleme islemi icin negatif olarak girin:7

Sifrelenmis Mesaj: qbtwz vcly aol shgf kvn

Sifrelemek veya desifre etmek istediginiz mesaji girin: qbtwz vcly aol shgf kvn
Anahtar degerini sifreleme islemi icin pozitif desifreleme islemi icin negatif olarak girin:-7

Desifre Edilmis Mesaj: jumps over the lazy dog
