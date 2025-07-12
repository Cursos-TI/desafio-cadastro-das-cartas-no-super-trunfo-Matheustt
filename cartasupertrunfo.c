#cludine <stdio.h>

int main(){

//Variaveis da carta 1
 
char estado1;
char codigo1[4];
char cidade1[30];
int populacao1;
float area1;
float pib1;
int pontos1;
float densidade1, pibPerCapita1;

//Variaveis da carta 2

char estado2;
char codigo2[4];
char cidade2[30];
int populacao2;
float area2;
float pib2;
int pontos2;
float densidade2, pibPerCapita2;

//Entrada dos dados da carta 1

printf("Digite os dados da carta 1:\n ");

 printf("Digite uma letra entre (A-H): ");
 scanf(" %c", &estado1); 

    printf("Digite o Codigo da carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite o Nome da cidade (sem espaco): ");
    scanf("%s", cidade1);

printf("Digite o numero da populacao: ");
scanf("%d",  &populacao1);

 printf("Digite a area em quilometros quadrados:");
 scanf("%f",   &area1);

 printf("Digite o pib(Em bilhoes de reais):");
 scanf("%f",   &pib1);

 printf("Digite o numero de pontos turisticos:");
 scanf("%d",  &pontos1);

  // ===== Cálculo - Carta 1 =====
    densidade1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;


//Entrada dos dados da carta 2

printf("Digite os dados da carta 2:\n ");

 printf("Digite uma letra entre (A-H): ");
 scanf(" %c", &estado2); 

    printf("Digite o Codigo da carta (ex: A01): ");
    scanf("%s", codigo2);

    printf("Digite o Nome da cidade (sem espaco): ");
    scanf("%s", cidade2);

printf("Digite o numero da populacao: ");
scanf("%d",  &populacao2);

 printf("Digite a area em quilometros quadrados:");
 scanf("%f",   &area2);

 printf("Digite o pib(Em bilhoes de reais):");
 scanf("%f",   &pib2);

 printf("Digite o numero de pontos turisticos:");
 scanf("%d",  &pontos2);

 

    // ===== Cálculo - Carta 2 =====
    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    // ===== Exibição dos Resultados =====
    printf("\n===== RESULTADOS =====\n");

    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Pontos turisticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km\n", densidade1);
    printf("PIB per Capita: R$ %.2f\n", pibPerCapita1);

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Pontos turisticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km\n", densidade2);
    printf("PIB per Capita: R$ %.2f\n", pibPerCapita2);

    return 0;
}
