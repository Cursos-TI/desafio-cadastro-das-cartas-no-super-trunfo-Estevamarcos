#include <stdio.h>
int main() {
    // carta 1 - Guaxupé
    char estado1[]= "MG";
    char codigo1[]= "A01";
    char NomeCidade1[]="Guaxupé";
    int populacao1= 52621;
    float area1= 286398;
    float PIB1= 270577155.89;
    int pontosTuristicos1 = 4;

     //cálculos
    float densidade1 = populacao1 / area1;
    float pibPerCapita1 = PIB1 / populacao1;
    float superPoder1 = (float)populacao1 + area1 + PIB1 + pontosTuristicos1 + pibPerCapita1 + (1.0 / densidade1);

    // carta 2 - Tapiratiba
    char estado2[]= "SP";
    char codigo2[]= "B02";
    char NomeCidade2[]="Tapiratiba";
    int populacao2= 15936;
    float area2= 220.575;
    float PIB2= 161548000.0;
    int pontosTuristicos2=3;

     // cálculos
    float densidade2 = populacao2 / area2;
    float pibPerCapita2 = PIB2 / populacao2;
    float superPoder2 = (float)populacao2 + area2 + PIB2 + pontosTuristicos2 + pibPerCapita2 + (1.0 / densidade2);

  
    // Exibição da carta 1
    printf("Carta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", NomeCidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.3f km²\n", area1);
    printf("PIB: R$.%.2f\n", PIB1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

     // cálculos
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: R$%.2f\n", pibPerCapita1 );
    printf("Super Poder: %.2f\n", superPoder1);
    
      printf("\n"); // aqui pula-se uma linha

    // Exibição da carta 2
    printf("Carta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", NomeCidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.3f km²\n", area2);
    printf("PIB: R$%.2f\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n",pontosTuristicos2);

    //Cálculos
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: R$%.2f\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

     // comparação de cartas
    printf("\n--- Comparação de Cartas ---\n");

    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", PIB1 > PIB2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontosTuristicos1 > pontosTuristicos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2); // menor vence
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPerCapita1 > pibPerCapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);


return 0;
}