#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,contador=0,par=0,x;
    printf("Digite um valor N para mostrar a quantidade N de numeros pares de forma decrescente:\n");
    scanf("%i",&N);
    x = N%2;
    if (x == 0) {
        for(contador=N;contador>=0;contador-=2){
        printf("\n%i\n",contador);
        }
    }else{
        printf("nao eh par");
    }

    return 0;
}
