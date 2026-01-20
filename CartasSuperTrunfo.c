#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  char Estado1, Estado2;
  char Codigo1[10], Codigo2[10];
  char Nome_da_Cidade1[15], Nome_da_Cidade2[15];
  int Populaçao1, Populaçao2;
  float Area1, area2;
  float PIB1, PIB2;
  int Pontos_turisticos1, Pontos_turisticos2;

 
  printf("Carta01: \n");
  
  printf("Estado: ");
  scanf(" %c", &Estado1);

  printf("Codigo: ");
  scanf("%s", Codigo1);

  printf("Nome_da_Cidade: ");
  scanf("%s", Nome_da_Cidade1);

  printf("Populaçao: ");
  scanf("%d", &Populaçao1);

  printf("Area: ");
  scanf("%f", &Area1);

  printf("PIB: ");
  scanf("%f", &PIB1);

  printf("Pontos_turisticos: ");
  scanf("%d", &Pontos_turisticos1);

  printf("Carta02: \n");
  
  printf("Estado: ");
  scanf(" %c", &Estado2);

  printf("Codigo: ");
  scanf("%s", Codigo2);

  printf("Nome_da_Cidade: ");
  scanf("%s", Nome_da_Cidade2);

  printf("Populaçao: ");
  scanf("%d", &Populaçao2);

  printf("Area: ");
  scanf("%f", &area2);

  printf("PIB: ");
  scanf("%f", &PIB2);

  printf("Pontos_turisticos: ");
  scanf("%d", &Pontos_turisticos2);
  // Área para definição das variáveis para armazenar as propriedades das cidades

  // Área para entrada de dados

  // Área para exibição dos dados da cidade

return 0;
} 
