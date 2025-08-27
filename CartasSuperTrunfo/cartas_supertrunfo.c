#include <stdio.h>

int main() {

    /* ---------- Declaração de variáveis da Carta 1 ---------- */
    
    char codigo1[4];          // ex.: A01 (A-H + 01-04)
    char pais1[30];           // ex.: Brasil
    char estado1[40];         // ex.: São Paulo
    char cidade1[40];         // ex.: São Paulo
    int populacao1;           // habitantes
    float area1;              // km²
    float pib1;               // bilhões
    int pontos1;              // número de pontos turísticos

    /* ---------- Declaração de variáveis da Carta 2 ---------- */
    char codigo2[4];
    char pais2[30];
    char estado2[40];
    char cidade2[40];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;

    /* ---------- Cadastro da Carta 1 (sem laços/ifs) ---------- */
    printf("=== Cadastro da CARTA 1 ===\n");
    printf("Codigo (ex.: A01 a H04): ");
    scanf("%3s", codigo1);

    printf("Pais (ex.: Brasil): ");
    scanf(" %29[^\n]", pais1);

    printf("Estado (ex.: Sao Paulo): ");
    scanf(" %39[^\n]", estado1);

    printf("Cidade (ex.: Campinas): ");
    scanf(" %39[^\n]", cidade1);

    printf("Populacao (inteiro): ");
    scanf("%d", &populacao1);

    printf("Area em km2 (ex.: 1521.11): ");
    scanf("%f", &area1);

    printf("PIB em bilhoes (ex.: 699.28): ");
    scanf("%f", &pib1);

    printf("Numero de pontos turisticos (inteiro): ");
    scanf("%d", &pontos1);

    /* ---------- Cadastro da Carta 2 (sem laços/ifs) ---------- */
    printf("\n=== Cadastro da CARTA 2 ===\n");
    printf("Codigo (ex.: A01 a H04): ");
    scanf("%3s", codigo2);

    printf("Pais (ex.: Brasil): ");
    scanf(" %29[^\n]", pais2);

    printf("Estado (ex.: Rio de Janeiro): ");
    scanf(" %39[^\n]", estado2);

    printf("Cidade (ex.: Niteroi): ");
    scanf(" %39[^\n]", cidade2);

    printf("Populacao (inteiro): ");
    scanf("%d", &populacao2);

    printf("Area em km2 (ex.: 1200.27): ");
    scanf("%f", &area2);

    printf("PIB em bilhoes (ex.: 400.45): ");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos (inteiro): ");
    scanf("%d", &pontos2);

    /* ---------- Exibicao ---------- */
    printf("\n===== CARTA 1 =====\n");
    printf("Codigo: %s\n", codigo1);
    printf("Pais: %s\n", pais1);
    printf("Estado: %s\n", estado1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes\n", pib1);
    printf("Pontos Turisticos: %d\n", pontos1);

    printf("\n===== CARTA 2 =====\n");
    printf("Codigo: %s\n", codigo2);
    printf("Pais: %s\n", pais2);
    printf("Estado: %s\n", estado2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes\n", pib2);
    printf("Pontos Turisticos: %d\n", pontos2);

    return 0;
}
