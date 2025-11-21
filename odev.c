#include <stdio.h>
#include <math.h>
int main(){
    char isim[20];
    float kilo, boy, vki;
    
    //Kullanicidan veri alma 
    printf("Hosh geldiniz! \nIsminizi giriniz:");
    scanf("%s", &isim);
    printf("Kilonuzu giriniz:");
    scanf("%f", &kilo);
    printf("Boyunuzu giriniz:");
    scanf("%f", &boy);
    
    //Vucut Kitle Hesaplamasi 
    vki = kilo/(pow(boy/100,2));
    
    //Ekrana yazdirma
    printf("\n\nMerhaba %s, kutlen:%.1f kg, boyun:%.1f cm, vkin:%.1f\ngule gule", isim, kilo, boy, vki);
    return 0;
}