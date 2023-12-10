#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {   




void encrypt(char mesaj[], int anahtar);
void decrypt(char mesaj[], int anahtar);

int main() {
    char mesaj[100];
    int anahtar;

    // Kullanýcýdan giriþ alma
    printf("Sifrelemek veya desifre etmek istediginiz mesaji girin: ");
   fgets(mesaj, sizeof(mesaj), stdin);

    printf("Anahtar degerini sifreleme islemi icin pozitif desifreleme islemi icin negatif olarak girin:");
    scanf("%d", &anahtar);

    // Þifreleme
	if (anahtar > 0) {
	printf("\nSifrelenmis Mesaj: "); 
    encrypt(mesaj , anahtar);
    printf("%s", mesaj);
}
    // Deþifreleme
    else {
    printf("\nDesifre Edilmis Mesaj: ");
    encrypt(mesaj , anahtar);
    printf("%s", mesaj);
}

    return 0;
}

void encrypt(char mesaj[], int anahtar) {
    int i;

    for (i = 0; mesaj[i] != '\0'; i++) {
        if (isalpha(mesaj[i])) {
            char base = islower(mesaj[i]) ? 'a' : 'A';
            mesaj[i] = (mesaj[i] - base + anahtar + 26) % 26 + base;
        }
    }
}
	return 0;
}
