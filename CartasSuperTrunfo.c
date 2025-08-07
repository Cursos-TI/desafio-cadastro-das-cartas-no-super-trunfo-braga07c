#include <stdio.h>

int main() {
    // Variáveis para a Carta 1
    char estado1;
    char codigo1[4]; // 3 caracteres (ex: A01) + 1 para o terminador '\0'
    char nomeCidade1[50]; // Tamanho arbitrário para o nome da cidade
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Variáveis para a Carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Instruções para o usuário - Cadastro da Carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Estado: ");
    scanf(" %c", &estado1); // Espaço antes de %c para consumir quebras de linha

    printf("Código:");
    scanf("%s", codigo1);

    printf("Cidade: ");
    scanf(" %[^\n]s", nomeCidade1); // Lê string com espaços até a quebra de linha

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Àrea:");  
    scanf("%f", &area1 \n);

    printf("PIB: \n ");
    scanf("%f", &pib1);

    printf("Número de pontos turisticos: \n ");
    scanf("%d", &pontosTuristicos1 \n);

    // Instruções para o usuário - Cadastro da Carta 2
    printf("\nCadastro da Carta 2:\n");
    printf("Digite o estado (A a H): ");
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta: ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]s", nomeCidade2);

    printf("Digite a populacao (numero de habitantes): ");
    scanf("%d", &populacao2);

    printf("Digite a area (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

  