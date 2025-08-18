#include <stdio.h> 

int main(){
    printf("Cadastro carta1!\n");
    char estado1 = 'A';
    char codigo_da_carta1[50] =  "A(01)";
    char nome_da_cidade1[50] =  "São Paulo"; 
    int populacao1 = 12325000;
    double area1 = 1521.11 ;
    double PIB1 = 699.28;
    int pontos_turisticos1 = 50;
    double densidade_populacional1 = 8102.47;
    double PIB_per_Capita1 = 56724.32; 

    printf(" O estado1 é: %c\n", estado1);
    printf(" O codigo_da_carta1 é: %s\n", codigo_da_carta1);
    printf(" O nome_da_cidade1 é: %s\n", nome_da_cidade1);
    printf(" A populacao1 é: %d\n", populacao1);
    printf(" A area1 é: %g km\u00b2\n",area1);
    printf(" O PIB1 é: %g bilhões de reais\n", PIB1);
    printf(" Os pontos_turisticos1 é: %d\n", pontos_turisticos1);
    printf(" A densidade_populacional1 é: %g hab/km\u00b2\n",densidade_populacional1);
    printf(" O PIB_per_Capita1 é: %g Reais\n", PIB_per_Capita1);


    printf("Cadastro carta2!\n");
    
    char estado2 = 'B';
    char codigo_da_carta2[50] =  "B(02)";
    char nome_da_cidade2[50] =  "Rio de Janeiro"; 
    int populacao2 = 6748000;
    double area2 = 1200.25;
    double PIB2 = 300.50;
    int pontos_turisticos2 = 30; 
    double densidade_populacional2 = 5622.24;
    double PIB_per_Capita2 = 44532.91; 

    printf(" O estado2 é: %c\n", estado2);
    printf(" O codigo_da_carta2 é: %s\n", codigo_da_carta2);
    printf(" O nome_da_cidade2 é: %s\n", nome_da_cidade2);
    printf(" A populacao2 é: %d\n", populacao2);
    printf(" A area2 é: %g km\u00b2\n",area2);
    printf(" O PIB2 é: %g bilhões de reais\n", PIB2);
    printf(" Os pontos_turisticos2 é: %d\n", pontos_turisticos2);
    printf(" A densidade_populacional2 é: %g hab/km\u00b2\n",densidade_populacional2);
    printf(" O PIB_per_Capita2 é: %g Reais\n", PIB_per_Capita2);
}
