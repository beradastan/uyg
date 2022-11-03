#include <stdio.h>
int main () {
    int sayi, k , n ;
    printf ("sayi giriniz \n");
    scanf ("%d" , &sayi);
    for (k=1 ; k<=sayi ; k++){
        for (n=1 ; n<=k ; n++){
            printf("#");
        }
    printf("\n");
    }
return 0 ;    

}