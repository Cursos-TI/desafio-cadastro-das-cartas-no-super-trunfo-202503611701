 
#include<stdio.h>

int main (){
    printf("superTrunfocarta1");
    char carta = '1';
    char estado = 'A';
    char codigo_da_carta[] = "A01";
    char nome_da_cidade[20] = "RECIFE";
    int populacao = 300;
    float area = 345.00;
    float pib = 99.00;
    int numero_de_pontos_turisticos = 5;

    printf("carta: %c\n", carta);
    printf("estado: %c\n", estado);
    printf("codigo_da_carta: %s\n", codigo_da_carta);
    printf("cidade: %s\n", nome_da_cidade);
    printf("populacao: %d\n", populacao);
    printf("area: %.2f km\n", area);
    printf("pib: %.2f bilhoes\n", pib);
    printf("pontos_turisticos: %d\n", numero_de_pontos_turisticos);
    return 0;
}
