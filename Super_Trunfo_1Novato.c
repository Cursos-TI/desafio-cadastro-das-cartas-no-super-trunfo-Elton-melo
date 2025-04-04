#include <stdio.h>

int main() {


    
    // Declarando variáveis para armazenar as informações do jogo//
    char estado;
    char cidade[10];
    char nome[50];
    int populacao;
    float area;
    float pib;
    int ponto_turistico;

     //Criando interacao com usuario para cadastrar as cartas //
        printf("**** Bem vindo ao jogo super trunfo ****\n\n");
     
        printf("Digite o estado (A a H):\n");
        scanf("%c", &estado);
        printf("Digite o codigo da cidade ( 1 a 4 ):\n");
        scanf("%s", &cidade);
        getchar();//ultilizado para acertar o espaco desnecesario na funcao (fgets)//
        printf("Digite o nome da cidade:\n");
        fgets(nome,sizeof(nome),stdin);
        printf("Digite a populacao da cidade :\n");
        scanf("%d",&populacao);
        printf("Digite a área da cidade (em km²):\n ");
        scanf("%f", &area);
        printf("Digite o PIB da cidade :\n ");
        scanf("%f", &pib);
        printf("Digite o número de pontos turísticos da cidade:\n ");
        scanf("%d", &ponto_turistico);

         //Exibindo os dados das cartas cadastrada pelo usuario//
            printf("\n\n****Dados da carta****\n\n");

            printf("Estado:%c\n",estado);
            printf("Codigo da cidade :%s\n",cidade);
            printf("Nome da cidade :%s\n",nome);
            printf("Populacao:%d\n",populacao);
            printf("Área: %.2f km²\n",area);
            printf("PIB:%.2f\n",pib);
            printf("Ponto turistico :%d\n",ponto_turistico);


printf("\n\n*****Cadatro concluido com sucesso*****\n");


    




return 0;




}
