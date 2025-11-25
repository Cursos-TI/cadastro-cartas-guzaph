#include <stdio.h>

int main(){
    char letra[2], letra2[2], cod[3], cod2[3], cidade[50], cidade2[50];
    int populacao, populacao2, turismo, turismo2;
    float area, area2, pib, pib2;
   

    printf("Digite os dados da primeira carta:\nDigite uma letra de A a H representando os 8 estados: ");
    scanf("%s", letra);

    printf("Digite o código entre 01 e 04 para sua carta: ");
    scanf("%s", cod);

    printf("Agora digite o nome da cidade: ");
    scanf("%s", cidade);

    printf("Agora digite a população da cidade: ");
    scanf("%d", &populacao);

    printf("Agora digite a área da cidade em km²: ");
    scanf("%f", &area);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib);

    printf("Por fim, digite quantos pontos turísticos possui a cidade: ");
    scanf("%d", &turismo);

    printf("Carta 1:\nEstado: %s\nCódigo: %s%s\nNome da cidade: %s\nPopulação: %d\nÁrea: %fkm²\nPIB: %f\nPontos Turísticos: %d\n\n", letra, letra, cod, cidade, populacao, area, pib, turismo);
    
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-\n\na");
    printf("Agora digite os dados da segunda carta: \nDigite uma letra de A a H representando os 8 estados: ");
    scanf("%s", letra2);

    printf("Digite o código entre 01 e 04 para sua carta: ");
    scanf("%s", cod2);

    printf("Agora digite o nome da cidade: ");
    scanf("%s", cidade2);

    printf("Agora digite a população da cidade: ");
    scanf("%d", &populacao2);

    printf("Agora digite a área da cidade em km²: ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib2);

    printf("Por fim, digite quantos pontos turísticos possui a cidade: ");
    scanf("%d", &turismo2);

    printf("Carta 2:\nEstado: %s\nCódigo: %s%s\nNome da cidade: %s\nPopulação: %d\nÁrea: %fkm²\nPIB: %f\nPontos Turísticos: %d\n", letra2, letra2, cod2, cidade2, populacao2, area2, pib2, turismo2);
    



    return 0;
}
