#include <stdio.h>
    int main(){
    

        int opcao , bispo , torre, rainha ;

        printf("Digite quantas casas o bispo vai andar : ");
        scanf("%d " ,&bispo);

        printf("Digite quantas casas a torre vai andar : ");
        scanf("%d " ,&torre);

        printf("Digite quantas casas a rainha vai andar : ");
        scanf("%d " ,&rainha);

        printf("\n");


        printf("-----BISPO-----\n");
        for (int b=1 ; b<=bispo ; b++)
        {
            printf("CIMA,DIREITA\n");
        }
            printf("\n");

            printf("-----TORRE-----\n");
         
         for ( int t=1  ; t<=torre ; t++)
         {
            printf("DIREITA\n");
         }
            printf("\n");

            printf("-----RAINHA-----\n");
        for (int r=1 ; r<=rainha ; r++)
        {
            printf("ESQUERDA\n");
        }

        return 0 ;
    }