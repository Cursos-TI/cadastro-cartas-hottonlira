#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
    // carta 1
    char  estado1;
    char  codigo1[4];
    char  cidade1[50];
    int   populacao1;
    float area1;
    float pib1;
    int   pontos1;
    float densidade1;
    float pibpercapita1;


    // carta 2

    char  estado2;
    char  codigo2[4];
    char  cidade2[50];
    int   populacao2;
    float area2;
    float pib2;
    int   pontos2; 
    float densidade2;
    float pibpercapita2;



    // entrada carta 1

    printf("=== cadastro da carta 1 ===\n");
    printf("estado (A a h): ");
    scanf("%c", &estado1);

    printf("codigo da carta (ex: A01): ");
    scanf(" %s", codigo1);

    printf("nome da cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("populacao: ");
    scanf(" %d", &populacao1);

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
    scanf(" %d", &populacao2);

    printf("area (km2): ");
    scanf(" %f", &area2);

    printf("pib (em bilhoes): ");
    scanf(" %f", &pib2);

    printf("numero de pontos turisticos:");
    scanf(" %d", &pontos2);

    printf("densidade2: ");
    scanf(" %f", &densidade2);

    printf("pib per capita: ");
    scanf(" %f", &pibpercapita2)

    // === calculos ===
    densidade1    = populacao1 / area1;
    pibpercapita1 = (pib1 * 1000000000) / populacao1;

    densidade2    = populacao2 / area2;
    pibpercapita2 = (pib2 * 1000000000) / populacao2;

    printf("densidade populacional: %.2f hab/km2\n", densidade1);
    printf("pib per capita: %.2f reais\n", pibpercapita1);

    printf("densidade populacional: %.2f hab/km2\n", densidade2);
    printf("pib per capita: %.2f reais\n", pibpercapita2);

    
return 0;
} 
