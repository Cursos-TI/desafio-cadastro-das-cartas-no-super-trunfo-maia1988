#include <stdio.h>
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
float dencidade_populacional;//= populacao/area;//variaves para calcular a densidade populacional
float pib_per_capita; // pib/populacao;//variaveis para calcular o pib per capita
float superpoder;//=area/populacao+populacao+area+pib+pontos_turisticos+pib_per_capita;
int vencedor;
int escolha;


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
float dencidade_populacional2;//= populacao2/area2;//variaveis para calcular a densidade populacional
float pib_per_capita2;// = pib2/populacao2;//variaveis para calcular o pib per capita
float superpoder2;//=area2/populacao2+populacao2+area2+pib2+pontos_turisticos2+pib_per_capita2;
int vencedor2;
//int opçao;

// leitura das variaves carta 1

printf ("--cadastro da carta1 --\n");

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


superpoder=area/populacao+populacao+area+pib+pontos_turisticos+pib_per_capita;
printf("Superpoder: %.2f\n", superpoder);


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

superpoder2=area2/populacao2+populacao2+area2+pib2+pontos_turisticos2+pib_per_capita2;
printf("Superpoder: %.2f\n", superpoder2);





printf("\n");//adicionar uma linha em branco para separar as cartas

printf("[****** resultado CARTA ganhadora ******\n");

printf("\n");//adicionar uma linha em branco 

printf("carta1: pais :%s:populacao:%.2f\n",pais,populacao);
printf("carta2: pais2:%s: populacao2:%.2f\n",pais2,populacao2);

if(populacao > populacao2){
    printf("%s:populacao carta1: venceu:\n",pais);
}else if(populacao < populacao2 ){
    printf("%s:populacao2 carta2 venceu:\n",pais2);
}else{
    printf(" empate:\n");
}


printf("\n");



printf("carta1:pais :%s: area: %.2f Km²\n",pais,area);
printf("carta2:pais2 :%s: area2: %.2f Km²\n",pais2,area2);

if(area>area2){
      printf("%s:area carta1 venceu:\n",pais);
}else if(area < area2){
     printf("%s:area2 carta2 venceu:\n",pais2);
}else{
  printf("empate:\n") ; 
}

printf("\n");


printf("carta1:pais  :%s:pib: %.2f bilhoes de reais\n",pais,pib);
printf("carta2:pais2 :%s:pib2: %.2f bilhoes de reais\n",pais2,pib2);

if(pib > pib2){
    printf("%s:pib carta1 venceu:\n",pais);
}else if(pib < pib2) {
    printf("%s:pib2 carta2 venceu:\n",pais2);
}else{
    printf(" empate:\n");

}

printf("\n");


printf("carta1:pais :%s,pontos_turisticos: %d\n",pais,pontos_turisticos);
printf("carta2:pais2 :%s,pontos_turisticos: %d\n",pais2,pontos_turisticos2);

if(pontos_turisticos > pontos_turisticos2){
    printf("%s:pontos_turisticos carta1 venceu:\n",pais);
}else if(pontos_turisticos < pontos_turisticos2) {
    printf("%s:pontos_turisticos2 carta2 venceu:\n",pais2);
}else{
    printf("empate:\n");
}
printf("\n");


printf("carta1:pais :%s,dencidade_populacional: %.2f hab/ Km²\n",pais, dencidade_populacional);
printf("carta2:pais :%s,dencidade_populacional2: %.2f hab/ Km²\n",pais2, dencidade_populacional2);

if(dencidade_populacional > dencidade_populacional2){
    printf("%s:dencidade_populacional carta venceu:\n",pais);
}else if(dencidade_populacional < dencidade_populacional2) {
    printf("%s:dencidade_populacional2 carta2 venceu:\n",pais2);
}else{
    printf("empate:\n");
}
printf("\n");


printf("carta1:pais :%s,pib_per_capita: %.2f reais\n",pais,pib_per_capita);
printf("carta2:pais2 :%s,pib_per_capita2: %.2f reais\n",pais2,pib_per_capita2);

if(pib_per_capita > pib_per_capita2){
    printf("%s:pib_per_capita carta1 venceu:\n",pais);
}else if(pib_per_capita < pib_per_capita2) {
    printf("%s:pib_per_capita2 carta2 venceu:\n",pais2);
}else{
    printf("empate:\n");
}

printf("\n");

printf("carta1:pais :%s,superpoder:%.2f\n",pais,superpoder);
printf("carta2:pais2 :%s,superpoder2:%.2f\n",pais2,superpoder2);

if(superpoder>superpoder2){
     printf("%s:superpoder carta1 venceu :\n",pais);
}else if(superpoder < superpoder2) {
    printf("%s:superpoder2 carta2 venceu:\n",pais2);

}else{
    printf("empate:\n");
}

printf("\n");
printf("[## bem vindo ##]:\n");
printf("[## escolha um atributos para comparar ## ]:\n");
printf("[**************************************************]\n");
printf("pais: %s\n",pais);
printf("pais2: %s\n",pais2);
printf("[ 1 ] :[populaçao]\n");
printf("[ 2 ] :[area     ]\n");
printf("[ 3 ] :[pib      ]\n");
printf(" escolha os atributos que voçe deseja conparar:\n");
scanf("%d",&escolha);


//printf("pais: %s\n",pais);
//printf("pais2: %s\n",pais2);

switch(escolha){

    case 1:
        if(populacao > populacao2){
             printf("carta1: pais :%s:populacao:%.2f\n",pais,populacao);
            printf("carta2: pais2:%s populacao2:%.2f\n",pais2,populacao2);
            
            printf("Resultado: população: %s venceu!\n", pais);
        }else if (populacao < populacao2){
             printf("carta1: pais :%s:populacao:%.2f\n",pais,populacao);
            printf("carta2: pais2:%s populacao2:%.2f\n",pais2,populacao2);
            
            printf("Resultado: população2: %s venceu!\n", pais2);  
        }else{
            printf("carta1: pais :%s:populacao:%.2f\n",pais,populacao);
            printf("carta2: pais2:%s populacao2:%.2f\n",pais2,populacao2);
            
            printf("**empate**\n");
        }
        break;
    case 2:
        if(area > area2){
            printf("carta1:pais :%s,area:%.2f Km²\n",pais,area);
            printf("carta2:pais2 :%s,area2:%.2f Km²\n",pais2,area2);

            printf("Resultado área: %s venceu!\n", pais);
        }else if(area < area2){
            printf("carta1:pais :%s,area:%.2f Km²\n",pais,area);
            printf("carta2:pais2 :%s,area2:%.2f Km²\n",pais2,area2);

            printf("Resultado área2: %s venceu!\n", pais2);
        }else{
            printf("carta1:pais :%s,area:%.2f Km²\n",pais,area);
            printf("carta2:pais2 :%s,area2:%.2f Km²\n",pais2,area2);

            printf("empate\n");
        }
        break;
    case 3:
        if(pib > pib2){
            printf("carta1:pais :%s,pib:%.2f bilhoes de reais\n",pais,pib);
            printf("carta2:pais2 :%s,pib2:%.2f bilhoes de reais\n",pais2,pib2);

            printf("Resultado PIB: %s venceu!\n", pais);
        }else if(pib < pib2){
            printf("carta1:pais :%s,pib:%.2f bilhoes de reais\n",pais,pib);
            printf("carta2:pais2 :%s,pib2:%.2f bilhoes de reais\n",pais2,pib2);
 
            printf("Resultado PIB2: %s venceu!\n", pais2);
        }else{
            printf("carta1:pais :%s,pib:%.2f bilhoes de reais\n",pais,pib);
            printf("carta2:pais2 :%s,pib2:%.2f bilhoes de reais\n",pais2,pib2);

            printf("empate\n");
        }
        break;
    default:
        printf("Opção inválida!\n");
        break;
    }



//case 1:
    //printf("opçao:populaçao:\n");
    //break;
//case 2:
    //printf("opçao;area:\n");
    //break;
//case 3:
    //printf("opçao:pib:\n");   
    //break;
//default:
    //break;
//}

//if(populacao > populacao2){
// printf("Resultado:populacao: %s venceu!\n", pais);
//}else if (populacao < populacao2){
   //printf("Resultado:populaçao2: %s venceu!\n", pais2);  
//}else{
    //printf("**empate**:\n");
//}


//if(area > area2){
//printf("resultado area:%s venceu:\n",pais);
//}else if(area < area2){
   // printf("resultado area2:%s venceu:\n",pais2);
//}else{
    //printf("empate:\n");
//}


//if(pib > pib2){
   //printf("resultado pib:%s venceu:\n",pais);
//}else if(pib < pib2){ 
    //printf("resultado pib2:%s venceu:\n",pais2);
//}else{
     
    //printf("empate:\n");
//}


return 0;

}
 




   


















   











    