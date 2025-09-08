#include <stdio.h>

int main() {
    // Variáveis da primeira carta
    char estado1;
    char codigo1[5];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Variáveis da segunda carta
    char estado2;
    char codigo2[5];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Variáveis para cálculos
    float densidade1, densidade2;
    float pibPerCapita1, pibPerCapita2;

    // ================= CARTA 1 =================
    printf("Digite o estado da carta 1: ");
    scanf(" %c", &estado1);

    printf("Digite o codigo da carta 1: ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade da carta 1: ");
    scanf(" %[^\n]", nomeCidade1);

    printf("Digite a populacao da carta 1: ");
    scanf("%d", &populacao1);

    printf("Digite a area da carta 1 (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB da carta 1 (em bilhoes de reais): ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos da carta 1: ");
    scanf("%d", &pontosTuristicos1);

    // Cálculos da carta 1
    densidade1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;  // PIB em reais

    // ================= CARTA 2 =================
    printf("\nDigite o estado da carta 2: ");
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta 2: ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade da carta 2: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("Digite a populacao da carta 2: ");
    scanf("%d", &populacao2);

    printf("Digite a area da carta 2 (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB da carta 2 (em bilhoes de reais): ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos da carta 2: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos da carta 2
    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    // ================= EXIBIÇÃO =================
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", p
