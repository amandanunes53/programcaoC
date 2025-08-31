#include <stdio.h>

int main(){
    char nome [50];

    printf("Digite seu nome completo: \n");
    fgets(nome, 50, stdin);
    printf("Meu nome é: %s", nome);

    return 0;
}