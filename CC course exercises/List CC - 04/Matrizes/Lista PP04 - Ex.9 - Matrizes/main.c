#include <stdio.h>
#include <stdlib.h>

int main()
{

    int soma=0,mat[3][3],i,j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("\nDigite o valor em mat[%d][%d]: ",i+1,j+1);
            scanf("%d",&mat[i][j]);
        }

    }
    printf("\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
            printf("[%d] ",mat[i][j]);
    printf("\n");
    }
    j=0;
    for(i=1;i<3;i++){
        soma+=mat[i][j];
        if(i==2){
            j++;
            soma+=mat[i][j];
        }
    }
    printf("\nA soma e: %d",soma);
    return 0;
}
