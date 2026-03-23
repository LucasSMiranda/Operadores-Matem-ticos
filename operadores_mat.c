#include <stdio.h>

int main () {

    int numero1, numero2;
    int soma;

    printf ("Digite número 1:\n");
    scanf("%d", &numero1);

    printf("Digite o número 2;\n");
    scanf("%d", &numero2);

    soma=numero1+numero2;

    printf("O resultado é %d\n", soma);


    return 0;
}