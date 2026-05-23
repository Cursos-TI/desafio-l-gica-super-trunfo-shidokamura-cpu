#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    char estado1[2], estado2[2];
    char codigo_do_estado1[3], codigo_do_estado2[3];
    char nome_da_cidade1[20], nome_da_cidade2[20];
    int populacao1, populacao2;
    float area1, area2;
    long double pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;
    float densidade_populacional1, densidade_populacional2;
    long double pib_per_capita1, pib_per_capita2;
    long double super_trunfo1, super_trunfo2;  
    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio
    printf("Primeira Carta:\n");
    printf("Digite o nome do estado: \n");
    scanf("%s", estado1);
    printf("Digite o codigo da carta: (Letra + Numero) \n");
    scanf("%s", codigo_do_estado1);
    printf("Digite o nome da cidade: \n");
    scanf("%s", nome_da_cidade1);
    printf("Digite a populacao: \n");
    scanf("%d", &populacao1);
    printf("Digite a area em km²: \n");
    scanf("%f", &area1);
    printf("Digite o PIB: \n");
    scanf("%Lf", &pib1);
    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &pontos_turisticos1);
    densidade_populacional1 = (float)populacao1 / area1;
    pib_per_capita1 = pib1 / area1;
    super_trunfo1 = (float)populacao1 + area1 + pib1 + (float)pontos_turisticos1 + 1/densidade_populacional1 + pib_per_capita1;

    printf("Segunda Carta: \n");
    printf("Digite o nome do estado: \n");
    scanf("%s", estado2);
    printf("Digite o codigo da carta: (Letra + Numero) \n");
    scanf("%s", codigo_do_estado2);
    printf("Digite o nome da cidade: \n");
    scanf("%s", nome_da_cidade2);
    printf("Digite a populacao: \n");
    scanf("%d", &populacao2);
    printf("Digite a area em km²: \n");
    scanf("%f", &area2);
    printf("Digite o PIB: \n");
    scanf("%Lf", &pib2);
    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &pontos_turisticos2);
    densidade_populacional2 = (float)populacao2 / area2;
    pib_per_capita2 = pib2 / area2;
    super_trunfo2 = (float)populacao2 + area2 + pib2 + (float)pontos_turisticos2 + 1/densidade_populacional2 + pib_per_capita2;  

    // Área para exibição dos dados da cidade
    printf("carta 1:\nEstado: %s\nCódigo do Estado: %s\nNome da Cidade: %s\nPopulação: %d\nArea: %fkm²\nPIB: %.2LfR$\nPontos Turisticos: %d\nDensidade populacional: %.3f\nPIB per capita: %.2LfR$\nSUPER TRUNFO: %.Lf\n", estado1, codigo_do_estado1, nome_da_cidade1, populacao1, area1, pib1, pontos_turisticos1, densidade_populacional1, pib_per_capita1, super_trunfo1);
    printf("carta 2:\nEstado: %s\nCódigo do Estado: %s\nNome da Cidade: %s\nPopulação: %d\nArea: %fkm²\nPIB: %.2LfR$\nPontos Turisticos: %d\nDensidade populacional: %.3f\nPIB per capita: %.2LfR$\nSUPER TRUNFO: %.Lf\n", estado2, codigo_do_estado2, nome_da_cidade2, populacao2, area2, pib2, pontos_turisticos2, densidade_populacional2, pib_per_capita2, super_trunfo2);
    
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

    return 0;
}
