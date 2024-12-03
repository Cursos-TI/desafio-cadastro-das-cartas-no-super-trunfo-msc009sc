// Desafio Super Trunfo - Países


#include <stdio.h>

int main(){

char A02,A03, A04, B01, B02, B03, B04, C01, C02, C03, C04, D01, D02, D03, D04, E01,
     E02, E03, E04, F01, F02, F03, F04, G01, G02, G03, G04, H01, H02, H03, H04;

int populacao, turistico;
float pib;
char nome[20],codigo[4];


printf("Digite o codígo da cidade \n");
scanf("%s", &codigo);
printf("Digite o nome da cidade \n");
scanf("%s", &nome);
printf("Digite o numero da população \n");
scanf("%d", &populacao);
printf("Digite a quantidade de pontos turisticos \n");
scanf("%d", &turistico);
printf("Digite o PIB da Cidade \n");
scanf("%f", &pib);
//Exibição

printf("Codigo: %s \n Cidade: %s \n População: %d \n", codigo,nome,populacao);
printf("Pontos turisticos: %d \n PIB: %f", turistico, pib);

return 0;
}