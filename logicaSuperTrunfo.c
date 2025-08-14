#include <stdio.h>

int main() {

    //                                             CARTA 1
    char cidade1[50];
    char estado1[3];
    unsigned long int populacao1;
    int pontos_turisticos1;
    float pib1; 
    float area1;
    char codigo1[10]; 
    float densidade_populacional1;
    float PIB_percapita1;
    float superpoder1; 
    
    printf("Carta 1 \n");

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade1);

    printf("Digite a sigla do estado: ");
    scanf("%s", estado1);

    printf("Digite o codigo: ");
    scanf("%s", codigo1);

    printf("Digite a populacao: ");
    scanf("%lu", &populacao1);

    printf("Digite a quantidade de pontos turisticos: ");
    scanf("%d", &pontos_turisticos1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);
    
    printf("Digite a área: ");
    scanf("%f", &area1);
    

    // CARTA 2
    char cidade2[50];
    char estado2[3];
    unsigned long int populacao2;
    int pontos_turisticos2;
    float pib2; 
    float area2;
    char codigo2[10]; 
    float densidade_populacional2;
    float PIB_percapita2;
    float superpoder2;
    
    printf("Carta 2 \n");

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade2);

    printf("Digite a sigla do estado: ");
    scanf("%s", estado2);
    
    printf("Digite o codigo: ");
    scanf("%s", codigo2);

    printf("Digite a populacao: ");
    scanf("%lu", &populacao2);

    printf("Digite quantos pontos turisticos: ");
    scanf("%d", &pontos_turisticos2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);
    
    printf("Digite a área: ");
    scanf("%f", &area2);

    // CALCULOS
    densidade_populacional1 = (float) populacao1 / area1;
    densidade_populacional2 = (float) populacao2 / area2;
    PIB_percapita1 = (float) pib1 / populacao1;
    PIB_percapita2 = (float) pib2 / populacao2;
    superpoder1 = (float) populacao1 + pontos_turisticos1 + pib1 + area1 + (1 /densidade_populacional1) + PIB_percapita1;
    superpoder2 = (float) populacao2 + pontos_turisticos2 + pib2 + area2 + (1 /densidade_populacional2) + PIB_percapita2;

    // MOSTRAR INFORMAÇÕES
    printf("\n--- Carta 1 ---\n");  
    printf("Cidade: %s\n", cidade1);
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("População: %lu\n", populacao1);
    printf("Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("PIB: R$ %.2f\n", pib1);
    printf("Área: %f km²\n", area1);
    printf("Densidade Populacional: %.2f\n", densidade_populacional1);
    printf("PIB per capita: %.2f\n", PIB_percapita1);
    printf("O super poder é: %f \n", superpoder1);

    printf("\n--- Carta 2 ---\n");
    printf("Cidade: %s\n", cidade2);
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("População: %lu\n", populacao2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("PIB: R$ %.2f \n", pib2);
    printf("Área: %f km²\n", area2);
    printf("Densidade Populacional: %.2f\n", densidade_populacional2);
    printf("PIB per capita: %.2f\n", PIB_percapita2);
    printf("O super poder é: %f \n", superpoder2);
  
    // COMPARAÇÕES


    printf("\n--- COMPARAÇÕES ---\n");
    if (populacao1> populacao2){
        printf("Carta 1 ganhou, populacao: %lu\n", populacao1);
    } else {
        printf("Carta 2 ganhou, populacao: %lu\n", populacao2);
    }   
    if (pontos_turisticos1> pontos_turisticos2){
        printf("Carta 1 ganhou, pontos turisticos: %d\n", pontos_turisticos1);
    } else {
        printf("Carta 2 ganhou, pontos turisticos: %d\n", pontos_turisticos2);
    }
    if (pib1> pib2){
        printf("Carta 1 ganhou, PIB: %f\n", pib1);
    } else {
        printf("Carta 2 ganhou, PIB: %f\n", pib2);
    }
    if (area1> area2){
        printf("Carta 1 ganhou, area: %f\n", area1);
    } else {
        printf("Carta 2 ganhou, area: %f\n", area2);
    }
    if (densidade_populacional1 < densidade_populacional2){
        printf("Carta 1 ganhou, Dendidade Populacional: %f\n", densidade_populacional1);
    } else {
        printf("Carta 2 ganhou, Densidade Populacional: %f\n", densidade_populacional2);
    }
    if (PIB_percapita1> PIB_percapita2){
        printf("Carta 1 ganhou, PIB per capita: %.2f\n", PIB_percapita1);
    } else {
        printf("Carta 2 ganhou, PIB per capita: %.2f\n", PIB_percapita2);
    }
    if (superpoder1> superpoder2){
        printf("Carta 1 ganhou, Super poder: %f\n", superpoder1);
    } else {
        printf("Carta 2 ganhou, Super poder: %f\n", superpoder2);
    }

    
    


return 0;
}