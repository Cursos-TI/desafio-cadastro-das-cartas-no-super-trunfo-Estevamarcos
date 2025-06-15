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

    // carta 2 - Tapiratiba
    char estado2[]= "SP";
    char codigo2[]= "B02";
    char NomeCidade2[]="Tapiratiba";
    int populacao2= 15936;
    float area2= 220.575;
    float PIB2= 161548000.0;
    int pontosTuristicos2=3;

  
    // Exibição da carta 1
    printf("Carta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", NomeCidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.3f km²\n", area1);
    printf("PIB: R$.%.2f\n", PIB1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    
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

return 0;
}