#include <stdio.h>
#include <stdlib.h>

int main()
{
float A , B , resultat;
char operateur;

printf("entre operateur");
scanf("%c",&operateur);
printf(" entre un nombre A");
scanf("%f",&A);
printf(" entre un nombre B");
scanf("%f",&B);

switch (operateur){

    case '+':
        resultat=A+B;
         printf("%f + %f = %f",A,B,resultat);
         break;
    case '-' :
        resultat=A-B;
        printf("%f - %f = %f",A,B,resultat);
        break;
    case'*' :
        resultat=A*B;
        printf("%f * %f = %f",A,B,resultat);
        break;
    case '/' :
        if (B!=0){
            resultat=A/B;
        printf("%f / %f = %f",A,B,resultat);
       } else {
        printf("le nombre B>0");


        }
        break;


}



}
