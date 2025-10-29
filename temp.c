#include <stdio.h>
#include <stdbool.h>

int main () {
    float wartosc_temperatury;
     char znak;
   

    printf("Podaj symbol: ");
    scanf("%c", &znak);
  
  
    printf("Podaj wartość temperatury: ");
    scanf("%f", &wartosc_temperatury);



    if(znak == 'F') {
        wartosc_temperatury=(wartosc_temperatury-32/1.8);
        printf("Wartosc temperatury w skali Fahreheita wynosi: %f", wartosc_temperatury);
    }

else if (znak =='C') {
    wartosc_temperatury=(wartosc_temperatury*1.8+32);
    printf("Wartosc temperatury w skali Celsjusza wynosi: %f", wartosc_temperatury);
}
else {
    printf("Zly symbol");
}
return 0;

}