#include <stdio.h> 

int main() {
    char estado1[50], estado2[50];
    char codigocarta1[50], codigocarta2[50];
    char nomeCidade1[50], nomeCidade2[50];
    int habitantes1, habitantes2;
    float areakm1, areakm2;
    float pib1, pib2;
    int pontoTuristico1, pontoTuristico2;

    printf("Digite uma inicial de A a H: \n");
    scanf("%s", &estado1);

    printf("Digite agora a inicial + um código (01,02...): \n");
    scanf("%s", &codigocarta1);

    printf("Agora, uma cidade: \n");
    scanf("%s", &nomeCidade1);

    printf("Digite o número de habitantes nessa cidade: \n");
    scanf("%d", &habitantes1);

    printf("Digite a area desta cidade: \n");
    scanf("%f", &areakm1);

    printf("Agora, o PIB dessa cidade: \n");
    scanf("%f", &pib1);

    printf("Por final, o numero de pontos turisticos!: \n");
    scanf("%d", &pontoTuristico1);

    printf("RESULTADO------CARTA--1------------------\n");

    printf("Carta 1: \n");

    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigocarta1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %.3d milhões de habitantes\n", habitantes1);
    printf("Área: %.3f km²\n", areakm1);
    printf("PIB: %.1f bilhões de reais\n", pib1);
    printf("Números de pontos turísticos: %d pontos turísticos\n", pontoTuristico1);

    printf("<-------------------------------------------------------------->\n");

    printf("Agora, vamos criar uma segunda carta, dessa vez com outra cidade!\n");
    
    printf("Digite uma inicial de A a H: \n");
    scanf("%s", &estado2);

    printf("Digite agora a inicial + um código (01,02...): \n");
    scanf("%s", &codigocarta2);

    printf("Agora, uma cidade: \n");
    scanf("%s", &nomeCidade2);

    printf("Digite o número de habitantes nessa cidade: \n");
    scanf("%d", &habitantes2);

    printf("Área dessa cidade: \n");
    scanf("%f", &areakm2);

    printf("Agora, o PIB dessa cidade: \n");
    scanf("%f", &pib2);

    printf("Por final, o numero de pontos turisticos!: \n");
    scanf("%d", &pontoTuristico2);

    printf("RESULTADO------CARTA--2------------------\n");

    printf("Carta 2: \n");

    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigocarta2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d milhões de habitantes \n", habitantes2);
    printf("Área: %.3f km²\n", areakm2);
    printf("PIB: %.3f bilhões de reais\n", pib2);
    printf("Números de pontos turísticos: %d pontos turísticos \n", pontoTuristico2);











return 0;

}