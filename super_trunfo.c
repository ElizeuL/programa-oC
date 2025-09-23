#include <stdio.h>

// Programa para cadastrar e exibir informações de duas cartas do Super Trunfo de Países
int main() {
    // Declaração de variáveis para a carta 1
    char estado1;
    char codigo1[4];            // Exemplo: "A01"
    char nome_cidade1[100];     // Buffer para o nome da cidade
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;

    // Declaração de variáveis para a carta 2
    char estado2;
    char codigo2[4];            // Exemplo: "B02"
    char nome_cidade2[100];     // Buffer para o nome da cidade
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;

    // Instruções para o usuário - Carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Digite o estado (uma letra de A a H): ");
    scanf(" %c", &estado1);
    printf("Digite o código da carta (exemplo A01): ");
    scanf("%3s", codigo1);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome_cidade1);  // Lê linha inteira até o Enter
    printf("Digite a população da cidade (inteiro): ");
    scanf("%d", &populacao1);
    printf("Digite a área da cidade (em km², float): ");
    scanf("%f", &area1);
    printf("Digite o PIB da cidade (float): ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos (inteiro): ");
    scanf("%d", &pontos_turisticos1);

    printf("\n"); // Linha em branco para separar as entradas

    // Instruções para o usuário - Carta 2
    printf("Cadastro da Carta 2:\n");
    printf("Digite o estado (uma letra de A a H): ");
    scanf(" %c", &estado2);
    printf("Digite o código da carta (exemplo B02): ");
    scanf("%3s", codigo2);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome_cidade2);  // Lê linha inteira até o Enter
    printf("Digite a população da cidade (inteiro): ");
    scanf("%d", &populacao2);
    printf("Digite a área da cidade (em km², float): ");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade (float): ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos (inteiro): ");
    scanf("%d", &pontos_turisticos2);

    printf("\n"); // Linha em branco antes da exibição das cartas

    // Exibição da carta 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);

    printf("\n"); // Linha em branco entre as cartas

    // Exibição da carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);

    return 0;
}
  
