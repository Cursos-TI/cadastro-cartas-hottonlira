#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
    // carta 1
    char  estado1;
    char  codigo1[4];
    char  cidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int   pontos1;
    float densidade1;
    float pibpercapita1;
    float superpoder1;

    // carta 2

    char  estado2;
    char  codigo2[4];
    char  cidade2[50];
    unsigned long int populacao2; 
    float area2;
    float pib2;
    int   pontos2; 
    float densidade2;
    float pibpercapita2;
    float superpoder2;

    // entrada carta 1

    printf("=== cadastro da carta 1 ===\n");
    printf("estado (A a h): ");
    scanf("%c", &estado1);

    printf("codigo da carta (ex: A01): ");
    scanf(" %s", codigo1);

    printf("nome da cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("populacao: ");
    scanf(" %lu", &populacao1);

    printf("area (km2): ");
    scanf(" %f", &area1);

    printf("pib (em bilhoes): ");
    scanf(" %f", &pib1);

    printf("numero de pontos turisticos: ");
    scanf(" %d", &pontos1);

    printf("densidade 1: ");
    scanf(" %f", &densidade1);

    printf("pib per capita: ");
    scanf(" %f", &pibpercapita1);


    // entrada da carta 2
    printf("\n=== cadastro da carta 2 ===\n");
    printf("estado (A a H): ");
    scanf(" %c", &estado2);

    printf("codigo da carta (ex: B02): ");
    scanf(" %s", codigo2);

    printf("nome da cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("populacao: ");
    scanf(" %lu", &populacao2);

    printf("area (km2): ");
    scanf(" %f", &area2);

    printf("pib (em bilhoes): ");
    scanf(" %f", &pib2);

    printf("numero de pontos turisticos:");
    scanf(" %d", &pontos2);

    printf("densidade2: ");
    scanf(" %f", &densidade2);

    printf("pib per capita: ");
    scanf(" %f", &pibpercapita2);

    // === calculos carta 1 ===
    densidade1    = (float)populacao1 / area1;
    pibpercapita1 = (pib1 * 1000000000) / (float)populacao1;

    // === Super poder ===
    superpoder1 = (float)populacao1 + area1 + pib1 + 
    (float)pontos1 + pibpercapita1 + (1.0 / densidade1);
    
    // === calculos carta 2 ===
    densidade2    = (float)populacao2 / area2;
    pibpercapita2 = (pib2 * 1000000000) / (float)populacao2;

    // Super poder ===
    (float)populacao2 + area2 + pib2 +
    (float)pontos2 + pibpercapita2 +
    (1.0 / densidade2);

    printf("densidade populacional: %.2f hab/km2\n", densidade1);
    printf("pib per capita: %.2f reais\n", pibpercapita1);

    printf("densidade populacional: %.2f hab/km2\n", densidade2);
    printf("pib per capita: %.2f reais\n", pibpercapita2);

    // === Comparação de Cartas ===

    // Regra: 1 se carta 1 vence, 0 se carta 2 vence.

    // Para densidade populacional, o menor valor vence.

    // para os demais, o maior valor vence.

    printf("comparacao de cartas: \n");
    printf("população: carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("área: carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: carta 1 venceu (%d\n)", pib1 > pib2);
    printf("Pontos Turísticos: carta 1 venceu (%d)\n", pontos1 > pontos2);
    printf("Densidade Populacional: carta 1 venceu (%d)\n", densidade1 < densidade2);
    printf("PIB per capita: carta 1 venceu (%d)\n", pibpercapita1 > pibpercapita2);
    printf("Super Poder: carta 1 venceu (%d)\n", superpoder1 > superpoder2);
    
return 0;
} 
