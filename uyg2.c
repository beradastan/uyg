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


#include <stdio.h>
int gun , km , ucret;
char tur ; 
int main (){
    printf("araba turu giriniz \n");
    scanf("%c" , &tur);
    printf("arabayi kac gun kullandiniz \n ");
    scanf("%d" , &gun);
    printf("araba ile kac km yol yaptiniz \n ");
    scanf("%d" , &km);

    switch (tur)
    {
    case 'a':
    case 'A': ucret=gun*20 + km*18 ; break;
    case 'b':
    case 'B': ucret=gun*32 + km*22 ; break;
    case 's':
    case 'S': ucret=gun*43 + km*28 ; break;
    case 'p':
    case 'P': ucret=gun*51+ km*36 ; break;
    default:
        break;
    }
    printf("odemeniz gereken tutar = %d " , ucret);

    return 0 ;
}
