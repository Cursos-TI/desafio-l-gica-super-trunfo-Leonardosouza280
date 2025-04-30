//#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

//int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

  //  return 0;
//}

#include <stdint.h>
#include <stdlib.h>
#include <time.h>


int main(){
    char Codigodacarta1[5] = "A01";
    char estado1[30] = "Pernambuco";
    char cidade1 [30] = "Recife";
    float PIB1 = 5497030500;
    int populacao1 = 1488920;
    float area1 = 218000;
    int NPT1 = 25;
    float Densidade_populacinal1, PIB_PER_CAPITAL1;
    int escolhajogador1;

    char Codigodacarta2[5] = "A02";
    char estado2[30] = "Rio Grande do Norte";
    char cidade2 [30] = "Natal";
    float PIB2 = 2425025900;
    int populacao2 = 751300;
    float area2 = 167300;
    int NPT2 = 31;
    float Densidade_populacinal2, PIB_PER_CAPITAL2;
    int escolhacomputador2;
    srand(time(0));

printf("O Codigo da carta é:%s\n", Codigodacarta1); 
printf("O estado da carta é:%s\n", estado1);
printf("A cidade da carta é:%s\n", cidade1);
printf("O pib da carta é: %.2f\n", PIB1);
printf("A popolação da carta é:%d\n", populacao1);
printf("A area da carta é:%.2f\n", area1);
printf("O Número de Pontos turistico da carta é:%d\n", NPT1);

Densidade_populacinal1 = populacao1 / area1;
printf("A densidade populacional da carta é:%.2f\n", Densidade_populacinal1);
PIB_PER_CAPITAL1 = PIB1/ populacao1;
printf("O PIB per Capital da carta é:%.2f\n\n\n", PIB_PER_CAPITAL1);

//Dados da segunda carta.
printf("O Codigo da carta é:%s\n", Codigodacarta2); 
printf("O estado da carta é:%s\n", estado2);
printf("A cidade da carta é:%s\n", cidade2);
printf("O pib da carta é: %.2f\n", PIB2);
printf("A popolação da carta é:%d\n", populacao2);
printf("A area da carta é:%.2f\n", area2);
printf("O Número de Pontos turistico da carta é:%d\n", NPT2);

Densidade_populacinal2 = populacao2 / area2;
printf("A densidade populacional da carta é:%.2f\n", Densidade_populacinal2);
PIB_PER_CAPITAL2 = PIB2/ populacao2;
printf("O PIB per Capital da carta é:%.2f\n\n\n", PIB_PER_CAPITAL2);

printf("***HORA DA SABER QUEM GANHA***\n\n");

if(populacao1 > populacao2){
    printf("Recife (carta01) Venceu em população\n");
}else{
    printf("Natal (Carta02) Venceu em populaçaõ\n");
}
if(area1 > area2){
    printf("Recife (carta01) Venceu em Área\n");
}else{
    printf("Natal (Carta02) Venceu em Área\n");
}
if(PIB1 > PIB2){
    printf("Recife (Carta01) Venceu em PIB\n");
}else{
    printf("Natal (Carta02) Venceu em PIB\n");
}
if(NPT1 > NPT2){
    printf("Recife(Carta01) Venceu em Número de Pontos Turísticos\n");
}else{
    printf("Natal (Carta02) Venceu em Número de Pontos Turísticos\n");
}
if(PIB_PER_CAPITAL1 > PIB_PER_CAPITAL2){
    printf("Recife (Carta01) Venceu em PIB PER CAPITAL\n");
}else{
    printf("Natal (Carta02) Venceu em PIB PER CAPITAL\n");
}
if (Densidade_populacinal1 < Densidade_populacinal2){
    printf("Recife (carta01) Venceu em Densidade Populacional\n");
}else{
    printf("Natal (Carta02) Venceu em Densidade Populacional\n");
}
//ter que criar 2 varieaveis, Jogador1 e jogador2.
//escolher computador = rand () % 6 +1;
//Switch com jogador1 depois switch com computador2(Jogador1 - Area Natal)(Jogador2 area - pernambuco).
printf("**Jogo de Super Trunfo**\n\n");
printf("Escolha uma opção\n");
printf("1. População\n");
printf("2. Área\n");
printf("3. PIB\n");
printf("4. Número de Pontos Túristicos\n");
printf("5.PIB PER Capital\n");
printf("6.Densidade Demografica\n");
printf("Escolha: ");
scanf("%d", &escolhajogador1);
escolhacomputador2 = rand() % 6 +1;

switch (escolhajogador1)
{
case 1:
    printf("Jogador1 - População Pernambuco\n");
    break;
    case 2:
    printf("Jogador1 - Área Pernambuco\n");
    break;
    case 3:
    printf("Jogador1 - PIB Pernambuco\n");
    break;
    case 4:
    printf("Jogador1 - Número de Pontos túristicos Pernambuco\n");
    break;
    case 5:
    printf("Jogador1 - PIB PER CAPITAL Pernambuco\n");
    break;
    case 6:
    printf("Jogador1 - Densidade demografica Pernambuco\n");
    break;

default: 
printf("Opção invalida\n");
    break;
}
switch (escolhacomputador2)
{case 1:
    printf("Computador - População Natal\n");
    break;
    case 2:
    printf("Computador - Área Natal\n");
    break;
    case 3:
    printf("Computador - PIB Natal\n");
    break;
    case 4:
    printf("Computador - Número de Pontos túristicos Natal\n");
    break;
    case 5:
    printf("Computador - PIB PER CAPITAL Natal\n");
    break;
    case 6:
    printf("Computador - Densidade demografica Natal\n");
    break;
}
if(escolhajogador1 == escolhacomputador2){
    printf("###Jogo Empatou###\n");
}else if (escolhajogador1 > escolhacomputador2){
    printf("Parabens voce ganhou\n");
}else{
    printf("Voce perdeu\n");
}


return 0;
}
