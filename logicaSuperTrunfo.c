#include <stdio.h>

int main() {
    int opcao;  

    
        printf("\n--- MENU ---\n");
        printf("1. Jogar\n");
        printf("2. Regras\n");
        printf("3. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: {
                // ================== JOGO ===================
                // CARTA 1
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

                // ESCOLHER O ATRIBUTO
                int atributo;
                printf("\n--- ESCOLHA O ATRIBUTO PARA COMPARAR ---\n");
                printf("1. População\n");
                printf("2. Pontos Turísticos\n");
                printf("3. PIB\n");
                printf("4. Área\n");
                printf("5. Densidade Populacional\n");
                printf("6. PIB per capita\n");
                printf("7. Super Poder\n");
                printf("Escolha: ");
                scanf("%d", &atributo);

                switch(atributo) {
                    case 1:
                        printf("\nComparando População:\n");
                        printf("%s: %lu\n", cidade1, populacao1);
                        printf("%s: %lu\n", cidade2, populacao2);
                        if (populacao1 > populacao2) printf("Vencedor: %s\n", cidade1);
                        else if (populacao2 > populacao1) printf("Vencedor: %s\n", cidade2);
                        else printf("Empate!\n");
                        break;
                    case 2:
                        printf("\nComparando Pontos Turísticos:\n");
                        printf("%s: %d\n", cidade1, pontos_turisticos1);
                        printf("%s: %d\n", cidade2, pontos_turisticos2);
                        if (pontos_turisticos1 > pontos_turisticos2) printf("Vencedor: %s\n", cidade1);
                        else if (pontos_turisticos2 > pontos_turisticos1) printf("Vencedor: %s\n", cidade2);
                        else printf("Empate!\n");
                        break;
                    case 3:
                        printf("\nComparando PIB:\n");
                        printf("%s: %.2f\n", cidade1, pib1);
                        printf("%s: %.2f\n", cidade2, pib2);
                        if (pib1 > pib2) printf("Vencedor: %s\n", cidade1);
                        else if (pib2 > pib1) printf("Vencedor: %s\n", cidade2);
                        else printf("Empate!\n");
                        break;
                    case 4:
                        printf("\nComparando Área:\n");
                        printf("%s: %.2f\n", cidade1, area1);
                        printf("%s: %.2f\n", cidade2, area2);
                        if (area1 > area2) printf("Vencedor: %s\n", cidade1);
                        else if (area2 > area1) printf("Vencedor: %s\n", cidade2);
                        else printf("Empate!\n");
                        break;
                    case 5:
                        printf("\nComparando Densidade Populacional:\n");
                        printf("%s: %.2f\n", cidade1, densidade_populacional1);
                        printf("%s: %.2f\n", cidade2, densidade_populacional2);
                        if (densidade_populacional1 < densidade_populacional2) printf("Vencedor: %s\n", cidade1);
                        else if (densidade_populacional2 < densidade_populacional1) printf("Vencedor: %s\n", cidade2);
                        else printf("Empate!\n");
                        break;
                    case 6:
                        printf("\nComparando PIB per capita:\n");
                        printf("%s: %.2f\n", cidade1, PIB_percapita1);
                        printf("%s: %.2f\n", cidade2, PIB_percapita2);
                        if (PIB_percapita1 > PIB_percapita2) printf("Vencedor: %s\n", cidade1);
                        else if (PIB_percapita2 > PIB_percapita1) printf("Vencedor: %s\n", cidade2);
                        else printf("Empate!\n");
                        break;
                    case 7:
                        printf("\nComparando Super Poder:\n");
                        printf("%s: %.2f\n", cidade1, superpoder1);
                        printf("%s: %.2f\n", cidade2, superpoder2);
                        if (superpoder1 > superpoder2) printf("Vencedor: %s\n", cidade1);
                        else if (superpoder2 > superpoder1) printf("Vencedor: %s\n", cidade2);
                        else printf("Empate!\n");
                        break;
                }
                break;
            }
            case 2:
                printf("\n--- REGRAS ---\n");
                printf("1. Cada jogador escolhe uma carta com os atributos de uma cidade.\n");
                printf("2. Escolha um atributo para comparar.\n");
                printf("3. O jogador com o maior valor (ou menor, no caso de densidade populacional) vence.\n");
                printf("4. Em caso de empate, ninguem vence.\n");
                break;
            case 3:
                printf("Saindo do jogo...\n");
                break;
            default:
                printf("Opcao invalida!\n");
        }
    

    return 0;
}
