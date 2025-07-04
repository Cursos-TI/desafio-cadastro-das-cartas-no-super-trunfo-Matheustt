#include <stdio.h>

int main(){

//Variaveis da carta 1
 
char estado1;
char codigo1[4];
char cidade1[30];
int populacao1;
float area1;
float pib1;
int pontos1;

//Variaveis da carta 2

char estado2;
char codigo2[4];
char cidade2[30];
int populacao2;
float area2;
float pib2;
int pontos2;

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










}