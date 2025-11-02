#include <stdio.h>

int main() {
//variáveis

char estado, estado2;
char codigo[5], codigo2[5];
char pais[30], pais2[30];
unsigned long int populacao, populacao2; 
int pontos_turisticos, pontos_turisticos2;
float area, PIB, area2, PIB2;
   



//solicitação de dados ao usuário
//Carta 1
printf ("\nDados da Carta 1:\n");
printf ("Digite uma letra de A-H: \n");
scanf (" %c", &estado);

printf ("Digite o código da carta (letra + número de 01 a 04): \n");
scanf ("%s", codigo);

printf ("Digite o nome do país: \n");
scanf ("%s", pais);

printf ("Digite o número de habitantes do país: \n");
scanf ("%lu", &populacao);

printf ("Digite a área do país em km²: \n");
scanf ("%f", &area);

printf ("Digite o PIB do país: \n");
scanf ("%f", &PIB);

printf ("Digite a quantidade de pontos turísticos do país: \n");
scanf ("%d", &pontos_turisticos);

//váriaveis / densidade e PIB per capita / Super poder
float densidade = populacao/area;
float PIB_per_capita = PIB*1000000000/populacao;
float super_poder = populacao+area+PIB+pontos_turisticos+PIB_per_capita+(1/densidade);



//Carta 2
printf ("\nDados da Carta 2:\n"); 
     
printf ("Digite uma letra de A-H: \n");
scanf (" %c", &estado2);

printf ("Digite o código da carta (letra + número de 01 a 04): \n");
scanf ("%s", codigo2);

printf ("Digite o nome do país: \n");
scanf ("%s", pais2);

printf ("Digite o número de habitantes do país: \n");
scanf ("%lu", &populacao2);

printf ("Digite a área do país em km²: \n");
scanf ("%f", &area2);

printf ("Digite o PIB do país: \n");scanf ("%f", &PIB2);

printf ("Digite a quantidade de pontos turísticos do país: \n");
scanf ("%d", &pontos_turisticos2);

//váriaveis - densidade, PIB per capita e Super poder
float densidade2 = populacao2/area2;
float PIB_per_capita2 = PIB2*1000000000/populacao2;
float super_poder2 = populacao2+area2+PIB2+pontos_turisticos2+PIB_per_capita2+(1/densidade2);

//Variáveis para comparação das cartas

float resultado1, resultado2;
char opcao, opcao2;

//Comparação das cartas + menu interativo (primeiro atributo)

printf("\n\nEscolha qual atributo você deseja comparar:\n\n1. Nome do país\n2. População\n3. Área\n4. PIB\n5. Pontos turísticos\n6. Densidade demográfica\nEscolha o primeiro atributo: ");
scanf("%d", &opcao);


//Primeiro atributo

switch (opcao)
{
case 1:
case 'Nome do país':


    printf("\nNome do país:\n\nCarta 1: %s\nCarta 2: %s", pais, pais2);
    break;

case 2:
case 'População':
int atributo1 = populacao;

    printf("Comparação das cartas:\n\n");
    printf("País carta 1: %s\nPaís carta 2:%s\nAtributo: População\nPopulação carta 1: %d\nPopulação carta 2: %d\n\n", pais, pais2, populacao, populacao2);

    resultado1 = (populacao > populacao2) ? 1 : (populacao < populacao2)? 2 : 0;

    resultado1 == 1 ? printf("Carta 1 venceu!") : resultado1 == 2 ? printf("Carta 2 Venceu!") : printf("Empate!");

    break;

case 3:
case 'Área':
float atributo1 = area;

    printf("Comparação das cartas:\n\n");
    printf("País carta 1: %s\nPaís carta 2:%s\nAtributo: Área\nÁrea carta 1: %.2fkm²\nÁrea carta 2: %.2fkm²\n\n", pais, pais2, area, area2);

    resultado1 = (area > area2) ? 1 : (area < area2)? 2 : 0;
    resultado1 == 1 ? printf("Carta 1 venceu!") : resultado1 == 2 ? printf("Carta 2 Venceu!") : printf("Empate!");


    break;

case 4:
case 'PIB':
float atributo1 = PIB;

    printf("Comparação das cartas:\n\n");
    printf("País carta 1: %s\nPaís carta 2:%s\nAtributo: PIB\nPIB carta 1: %.2f bilhões de reais\nPIB carta 2: %.2f bilhões de reais\n\n", pais, pais2, PIB, PIB2);

    resultado1 = (PIB > PIB2) ? 1 : (PIB < PIB2)? 2 : 0;
    resultado1 == 1 ? printf("Carta 1 venceu!") : resultado1 == 2 ? printf("Carta 2 Venceu!") : printf("Empate!");

    break;


case 5:
case 'Pontos turísticos':
int atributo1 = pontos_turisticos;

    printf("Comparação das cartas:\n\n");
    printf("País carta 1: %s\nPaís carta 2:%s\nAtributo: Pontos turísticos\nPontos turísticos carta 1: %d\nPontos turísticos carta 2: %d\n\n", pais, pais2, pontos_turisticos, pontos_turisticos2);

    resultado1 = (pontos_turisticos > pontos_turisticos2) ? 1 : (pontos_turisticos < pontos_turisticos2)? 2 : 0;
    resultado1 == 1 ? printf("Carta 1 venceu!") : resultado1 == 2 ? printf("Carta 2 Venceu!") : printf("Empate!");


    break;


case 6:
case 'Densidade':
int atributo1 = densidade;

    printf("Comparação das cartas:\n\n");
    printf("País carta 1: %s\nPaís carta 2:%s\nAtributo: Densidade\nDensidade carta 1: %d\nDensidade carta 2: %d\n\n", pais, pais2, densidade, densidade2);

    resultado1 = (densidade < densidade2) ? 1 : (densidade > densidade2)? 2 : 0;
    resultado1 == 1 ? printf("Carta 1 venceu!") : resultado1 == 2 ? printf("Carta 2 Venceu!") : printf("Empate!");

    break;
default:
    printf("Opção inválida!");
    break;
}


//Menu segundo atributo

printf("\n\nEscolha o segundo atributo que você deseja comparar:\n(Não se esqueça que você não deve escolher o atributo anterior novamente)\n\n1. Nome do país\n2. População\n3. Área\n4. PIB\n5. Pontos turísticos\n6. Densidade demográfica\nEscolha o primeiro atributo: ");
scanf("%d", &opcao2);

//Comparação segundo atributo


switch (opcao2)
{
case 1:
case 'Nome do país':


    printf("\nNome do país:\n\nCarta 1: %s\nCarta 2: %s", pais, pais2);
    break;

case 2:
case 'População':


    printf("Comparação das cartas:\n\n");
    printf("País carta 1: %s\nPaís carta 2:%s\nAtributo: População\nPopulação carta 1: %d\nPopulação carta 2: %d\n\n", pais, pais2, populacao, populacao2);


    resultado2 = (populacao > populacao2) ? 1 : (populacao < populacao2)? 2 : 0;
    resultado1 == 1 ? printf("Carta 1 venceu!") : resultado1 == 2 ? printf("Carta 2 Venceu!") : printf("Empate!");

    break;

case 3:
case 'Área':
float atributo2 = area2;

    printf("Comparação das cartas:\n\n");
    printf("País carta 1: %s\nPaís carta 2:%s\nAtributo: Área\nÁrea carta 1: %.2fkm²\nÁrea carta 2: %.2fkm²\n\n", pais, pais2, area, area2);

    resultado1 = (area > area2) ? 1 : (area < area2)? 2 : 0;
    resultado1 == 1 ? printf("Carta 1 venceu!") : resultado1 == 2 ? printf("Carta 2 Venceu!") : printf("Empate!");

    break;

case 4:
case 'PIB':
float atributo2 = PIB2;

    printf("Comparação das cartas:\n\n");
    printf("País carta 1: %s\nPaís carta 2:%s\nAtributo: PIB\nPIB carta 1: %.2f bilhões de reais\nPIB carta 2: %.2f bilhões de reais\n\n", pais, pais2, PIB, PIB2);

    resultado1 = (PIB > PIB2) ? 1 : (PIB < PIB2)? 2 : 0;
    resultado1 == 1 ? printf("Carta 1 venceu!") : resultado1 == 2 ? printf("Carta 2 Venceu!") : printf("Empate!");

    break;


case 5:
case 'Pontos turísticos':
int atributo2 = pontos_turisticos2;

    printf("Comparação das cartas:\n\n");
    printf("País carta 1: %s\nPaís carta 2:%s\nAtributo: Pontos turísticos\nPontos turísticos carta 1: %d\nPontos turísticos carta 2: %d\n\n", pais, pais2, pontos_turisticos, pontos_turisticos2);

    resultado1 = (pontos_turisticos > pontos_turisticos2) ? 1 : (pontos_turisticos < pontos_turisticos2)? 2 : 0;
    resultado1 == 1 ? printf("Carta 1 venceu!") : resultado1 == 2 ? printf("Carta 2 Venceu!") : printf("Empate!");

    break;


case 6:
case 'Densidade':
int atributo2 = densidade2;

    printf("Comparação das cartas:\n\n");
    printf("País carta 1: %s\nPaís carta 2:%s\nAtributo: Densidade\nDensidade carta 1: %d\nDensidade carta 2: %d\n\n", pais, pais2, densidade, densidade2);

    resultado1 = (densidade < densidade2) ? 1 : (densidade > densidade2)? 2 : 0;
    resultado1 == 1 ? printf("Carta 1 venceu!") : resultado1 == 2 ? printf("Carta 2 Venceu!") : printf("Empate!");

    break;
default:
    printf("Opção inválida!");
    break;
}


//Resultado comparação dos dois atributos

printf ("\n\n**Resultado - comparação entre os dois atributos**\n\n");
printf("Atributo 1 : %s", resultado1);
printf("Atributo 2 : %s", resultado2);
resultado1 && resultado2 == 1 ? printf ("Carta 1 venceu o jogo!") :
resultado1 && resultado2 == 2 ? printf ("Carta 2 venceu o jogo!") :
printf ("Empate!");
 
 

return 0;
}