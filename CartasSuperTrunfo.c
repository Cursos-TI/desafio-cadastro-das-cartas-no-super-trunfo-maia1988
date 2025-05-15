#include<sched.h>

int main (){

//variaves carta 1


int carta = 0 ;
char pais [20] = "";
char estado[20] = "";
char codigo[20] = "";
char cidade[50] = "";
double populacao = 0;
 double area = 0;  // quilometros quadradoas
double pib = 0;  // bilhoes de reais
int pontos_turisticos = 0 ;
float dencidade_populacional= populacao/area;//variaves para calcular a densidade populacional
float pib_per_capita = pib/populacao;//variaveis para calcular o pib per capita


// variaves carta 2

int carta2 = 0 ;
char pais2 [20]= "";
char estado2 [20]= "";
char codigo2 [20] = "";
char cidade2 [50] = "";
double populacao2 = 0;
double area2 = 0;   //quilometros quadrados
double pib2 = 0;  //bilhoes de reais
int pontos_turisticos2 = 0;
float dencidade_populacional2= populacao2/area2;//variaveis para calcular a densidade populacional
float pib_per_capita2 = pib2/populacao2;//variaveis para calcular o pib per capita

// leitura das variaves carta 1

printf ("--cadastro da carta 1--\n");

printf ("Digite o numero da carta: ");
scanf(" %d", &carta);

printf(" Digite o pais: ");
scanf (" %s", pais);

printf("Digite o estado: ");
scanf(" %s", estado);

printf("Digite o codigo: ");
scanf(" %s", codigo);

printf("Digite a cidade: ");
scanf(" %s", cidade);

printf ("Digite a populacao: ");
scanf(" %lf",&populacao);

printf("digite a area: ");
scanf(" %lf", &area);

printf("Digite o pib: ");
scanf(" %lf", &pib);

printf("Digite os pontos_turisticos:");
scanf(" %d",&pontos_turisticos);

printf("\n");// adicionar uma linha em branco para separar as cartas


//leitura da variaves carta 2

printf("--cadastro da carta2--\n");


printf ("Digite o numero da carta: ");
scanf(" %d", &carta2);

printf(" Digite o pais: ");
scanf (" %s", pais2);

printf("Digite o estado: ");
scanf(" %s", estado2);

printf("Digite o codigo: ");
scanf(" %s", codigo2);

printf("Digite a cidade: ");
scanf(" %s", cidade2);

printf ("Digite a populacao: ");
scanf(" %lf",&populacao2);

printf("Digite a area: ");
scanf(" %lf", &area2);

printf("Digite o pib: ");
scanf(" %lf", &pib2);

printf("Digite os pontos_turisticos: ");
scanf(" %d",&pontos_turisticos2);



printf("\n");// adicionar uma linha em branco para separar as cartas


// imprecao das variaves carta 1


printf("Carta: %d\n", carta);
printf("Pais: %s\n", pais);
printf("Estado: %s\n", estado);
printf("Codigo: %s\n", codigo);
printf("Cidade: %s\n", cidade);
printf("Populacao: %.2f\n", populacao);
printf("Area: %.2f Km²\n", area);
printf("Pib: %.2f Bilhoes de reais\n", pib);
printf("Pontos_turisticos: %d\n", pontos_turisticos);

dencidade_populacional= populacao/area;//variaveis para calcular a densidade populacional
printf("Densidade populacional: %.2f hab/km²\n", dencidade_populacional);

pib_per_capita= pib/populacao;//variaveis para calcular o pib per capita
printf("Pib per capita: %.2freais\n", pib_per_capita);


printf("\n");//adicionar uma linha em branco para separar as cartas

//inprecao das vriaves carta 2

printf("Carta: %d\n",carta2);
printf("Pais: %s\n", pais2);
printf("Estado:%s\n", estado2);
printf("Codigo: %s\n", codigo2);
printf("Cidade: %s\n", cidade2);
printf("Populacao: %.2f\n", populacao2);
printf("Area: %.2f Km²\n", area2);
printf("Pib: %.2f Bilhoes de reais\n", pib2);
printf("Pontos_turisticos: %d\n", pontos_turisticos2);


dencidade_populacional2= populacao2/area2;//variaveis para calcular a densidade populacional
printf("Densidade populacional: %.2f hab/km²\n", dencidade_populacional2);

pib_per_capita2= pib2/populacao2;//variaveis para calcular o pib per capita
printf("Pib per capita: %.2freais\n", pib_per_capita2);



return 0;


}
 




   


















   











    