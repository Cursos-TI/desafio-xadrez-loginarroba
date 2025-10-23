#include <stdio.h>
    int main(){
    
        //Dados do bispo

        printf("-----BISPO-----\n");
        for (int b=1 ; b<=5 ; b++)
        {
            printf("CIMA,DIREITA\n");
        }
            printf("\n");
        //Dados da torre

            printf("-----TORRE-----\n");
         
         for ( int t=1  ; t<=5 ; t++)
         {
            printf("DIREITA\n");
         }
            printf("\n");


         //Dados da rainha
         
            printf("-----RAINHA-----\n");
        for (int r=1 ; r<=8 ; r++)
        {
            printf("ESQUERDA\n");
        }

        return 0 ;
    }