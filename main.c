#include <stdio.h>

int maior_numero(int a,int b){
    int res;
    res = a>b ? a : b;
    return res;
}

int menor_numero (int a, int b){
    int res;
    res = a<b ? a : b;
}

int main()
{   int result;
    int i = 0;
    int x , y;
    while(i!=3){
        printf("**********Comparador de números***********\n");
        printf("Escolha qual procedimento você deseja\n");
        printf("1 : Descobrir quem é o maior número entre dois inteiros\n");
        printf("2: Descobrir qual o menor número entre dois inteiros\n");
        printf("Tecle 3 para encerrar\n");
        scanf("%d", &i);
        if(i==1){
            printf("**************Maior Número***************\n");
            printf("Digite dois números inteiros\n");
            scanf("%d %d", &x, &y);
            result = maior_numero(x, y);
            printf("O maior número é %d", result);
    }
        else if(i==2){
            printf("**************Menor Número***************\n");
            printf("Digite dois números inteiros\n");
            scanf("%d %d", &x, &y);
            result = menor_numero(x, y);
            printf("O menor número é %d", result);
        }
        else{
            break;
        }
    return 0;
}
}
