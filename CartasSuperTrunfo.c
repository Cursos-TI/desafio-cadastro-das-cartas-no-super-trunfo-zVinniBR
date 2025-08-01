#include <stdio.h>

int main() {
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidade1;
    float percapita1;

    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2;
    float percapita2;

    // ENTRADA CARTA 1
   printf("Cadastro da Carta 1\n");
    printf("Digite a letra do Estado (A-H): \n");
    scanf(" %c", &estado1);
    printf("Digite o Código da Carta (ex: A01): \n");
    scanf("%s", codigo1);
    printf("Digite o Nome da Cidade: \n");
    scanf(" %[^\n]", nomeCidade1);
    printf("Digite a População: \n");
    scanf("%d", &populacao1);
    printf("Digite a Área (em km²): \n");
    scanf("%f", &area1);
    printf("Digite o PIB (em bilhões): \n");
    scanf("%f", &pib1);
    printf("Digite o Número de Pontos Turísticos: \n");
    scanf("%d", &pontosTuristicos1);

    // ENTRADA CARTA 2
   printf("\nCadastro da Carta 2\n");
    printf("Digite a letra do Estado (A-H): \n");
    scanf(" %c", &estado2);
    printf("Digite o Código da Carta (ex: B02): \n");
    scanf("%s", codigo2);
    printf("Digite o Nome da Cidade: \n");
    scanf(" %[^\n]", nomeCidade2);
    printf("Digite a População: \n");
    scanf("%d", &populacao2);
    printf("Digite a Área (em km²): \n");
    scanf("%f", &area2);
    printf("Digite o PIB (em bilhões): \n");
    scanf("%f", &pib2);
    printf("Digite o Número de Pontos Turísticos: \n");
    scanf("%d", &pontosTuristicos2);

    // CALCULOS
    densidade1 = populacao1 / area1;
    percapita1 = (pib1 * 1e9) / populacao1;
    densidade2 = populacao2 / area2;
    percapita2 = (pib2 * 1e9) / populacao2;

    // SAÍDA CARTA 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f Reais\n", percapita1);


    // SAÍDA CARTA 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f Reais\n", percapita2);

    return 0;
}
