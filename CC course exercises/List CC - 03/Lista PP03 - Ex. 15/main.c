#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,contador=0,x;
    printf("Digite um valor N para mostrar a quantidade N de numeros impares de forma crescente:\n");
    scanf("%i",&N);
    x = N%2;
    if (x != 0) {
        for(contador = 1;contador<= N;contador+=2){
        printf("\n%i\n",contador);
        }
    }else{
        printf("eh par");
    }
    return 0;
}
