#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // declaração Variáveis carta 1
    char estado1[3], codigo1[10], nomeCidade1[50];
    int pontosTuristicos1;
    float populacao1, area1, pib1, densidade1;

    // Declaração de variáveis da Carta 2
    char estado2[3], codigo2[10], nomeCidade2[50];
    int pontosTuristicos2;
    float populacao2, area2, pib2, densidade2;
    
    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
        // Cadastro da Carta 1
    printf("=== Cadastro da Carta 1 ===\n");
    printf(" UF Estado: ");
    scanf("%s", estado1);
    printf("Código da carta: ");
    scanf("%s", codigo1);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1);
    printf("População: ");
    scanf("%f", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    densidade1 = populacao1 / area1;

    // Cadastro da Carta 2
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf(" UF Estado: ");
    scanf("%s", estado2);
    printf("Código da carta: ");
    scanf("%s", codigo2);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2);
    printf("População: ");
    scanf("%f", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    densidade2 = populacao2 / area2;

   
 // Exibição das Cartas
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %s\nCódigo: %s\nCidade: %s\nPopulação: %.2f\nÁrea: %.2f\nPIB: %.2f\nPontos turísticos: %d\nDensidade: %.2f\n",
           estado1, codigo1, nomeCidade1, populacao1, area1, pib1, pontosTuristicos1, densidade1);

    printf("\n=== Carta 2 ===\n");
    printf("Estado: %s\nCódigo: %s\nCidade: %s\nPopulação: %.2f\nÁrea: %.2f\nPIB: %.2f\nPontos turísticos: %d\nDensidade: %.2f\n",
           estado2, codigo2, nomeCidade2, populacao2, area2, pib2, pontosTuristicos2, densidade2);

           printf("\n=== Resultado da Comparação ===\n");
           
// Comparação de Cartas:

    if (pib1 > pib2) {
        printf("Carta vencedora: %s (maior PIB)\n", nomeCidade1);
    } else if (pib2 > pib1) {
        printf("Carta vencedora: %s (maior PIB)\n", nomeCidade2);
    } else {
        printf("Empate! As duas cidades têm o mesmo PIB.\n");
    }
    

   
    // Exemplo adicional: densidade populacional (menor vence)
    printf("\n=== Comparação extra: Densidade populacional ===\n");

    if (densidade1 < densidade2) {
        printf("Carta vencedora: %s (menor densidade populacional)\n", nomeCidade1);
    } else if (densidade2 < densidade1) {
        printf("Carta vencedora: %s (menor densidade populacional)\n", nomeCidade2);
    } else {
        printf("Empate! Densidades iguais.\n");
    }

    
    return 0;
}
