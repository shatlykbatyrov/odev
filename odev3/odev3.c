#include <stdio.h>
#include <math.h>
#include <string.h>
struct kisi
{
    char isim[20];
    float kilo, boy, vki;
};
int main()
{

    struct kisi kisiler[5];

    for (int i = 1; i <= 5; i++)
    {
        // Kullanicidan veri alma
        printf("%d. Kisi. \nIsminizi giriniz:", i);
        scanf("%s", &kisiler[i].isim);
        strcpy(kisiler[i].isim, kisiler[i].isim);
        printf("Kilonuzu giriniz:");
        scanf("%f", &kisiler[i].kilo);
        kisiler[i].kilo = kisiler[i].kilo;
        printf("Boyunuzu giriniz:");
        scanf("%f", &kisiler[i].boy);
        kisiler[i].boy = kisiler[i].boy;
        // //Vucut Kitle Hesaplamasi
        kisiler[i].vki = kisiler[i].kilo / (pow(kisiler[i].boy / 100, 2));
    }

    for (int i = 1; i <= 5; i++)
    {
        printf("%d. Kisi: \n Merhaba %s. Kilonuz: %.1f. Boyunuz: %.1f. VKIniz:%.1f.\n\n", i, kisiler[i].isim, kisiler[i].kilo, kisiler[i].boy, kisiler[i].vki);
    }

    // //Ekrana yazdirma
    // printf("\n\nMerhaba %s, kutlen:%.1f kg, boyun:%.1f cm, vkin:%.1f\ngule gule", isim, kilo, boy, vki);
    return 0;
}