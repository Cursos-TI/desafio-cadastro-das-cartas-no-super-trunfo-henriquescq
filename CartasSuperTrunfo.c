#include <stdio.h>
/*
Criar um programa em C que permita ao usuário inserir os dados de duas cartas do Super Trunfo. Para cada carta, o usuário deverá fornecer as seguintes informações:

Estado: Uma letra de 'A' a 'H' (representando um dos oito estados). Tipo: char
 
Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03). Tipo: char[] (um array de caracteres, ou string)
 
Nome da Cidade: O nome da cidade. Tipo: char[] (string)
 
População: O número de habitantes da cidade. Tipo: int
 
Área (em km²): A área da cidade em quilômetros quadrados. Tipo: float
 
PIB: O Produto Interno Bruto da cidade. Tipo: float
 
Número de Pontos Turísticos: A quantidade de pontos turísticos na cidade. Tipo: int 

Obs: Nível Aventureiro irá expandir o sistema para incluir o cálculo de dois novos atributos: Densidade Populacional e PIB per capita.
*/

#include <stdio.h> // Biblioteca de IO

int main () {

    
    char letter_states [5], code_letter [10], name_city [50], letter_states1 [5], code_letter1 [10], name_city1 [50]; // Letra dos estados, código das cartas e nome da cidade.
    
    int tourist_attractions, tourist_attractions1, victory_cart, victory_cart1; // População, pontos turísticos.
    
    unsigned long int populat, populat1;
    
    unsigned long long int area, PIB, super_power, area1, PIB1, super_power1, counter; // Área, PIB (Produto interno bruto), Densidade Populacional, PIB por capital
    
    double population_density, PIB_per_capita, population_density1, PIB_per_capita1;
    /* Entrada de dados da carta 1. */

    printf ("Carta 1: \n");

    printf ("\nDigite uma Letra de 'A' a 'H' representando o estado desejado: ");
    scanf ("%s", &letter_states);

    printf ("Digite o código da carta A, dentre 01 a 04: %s", letter_states);
    scanf ("%s", &code_letter);

    printf ("Digite o nome da cidade: ");
    scanf ("%s", &name_city);

    printf ("Digite a população da cidade de %s: ", name_city);
    scanf ("%lu", &populat);

    printf ("Digite a área da cidade de %s: ", name_city);
    scanf ("%llu", &area);

    printf ("Digite o PIB da cidade de %s: ", name_city);
    scanf ("%llu", &PIB);
    
    printf ("Digite os números de pontos turísticos da cidade de %s: ", name_city);
    scanf ("%d", &tourist_attractions);

    /* Processamento da carta 1*/

    population_density = populat / area;
    PIB_per_capita = PIB / populat;

    /* Saída de dados da carta 1 */

    printf ("\nCarta 1: \n");

    printf ("\nEstado: %s \n", letter_states);
    printf ("Código: %s%s \n", letter_states, code_letter);
    printf ("Nome da Cidade: %s \n", name_city);
    printf ("População: %lu \n", populat);
    printf ("Área: %llu km² \n", area);
    printf ("PIB: %llu \n", PIB);
    printf ("Números de Pontos Turísticos: %d \n", tourist_attractions);
    printf ("Densidade Populacional: %.2f \n", population_density);
    printf ("PIB por capital: %.2f \n", PIB_per_capita);

    /* Super Poder */

    super_power = (populat + area + PIB + tourist_attractions + population_density + PIB_per_capita) / population_density;
    

    /* Entrada de dados da carta 2. */
   
    printf ("\nCarta 2: \n");

    printf ("\nDigite uma Letra de 'A' a 'H' representando o estado desejado: ");
    scanf (" %s", &letter_states1);

    printf ("Digite o código da carta A, dentre 01 a 04: %s", letter_states1);
    scanf (" %s", &code_letter1);

    printf ("Digite o nome da cidade: ");
    scanf ("%s", &name_city1);

    printf ("Digite a população da cidade de %s: ", name_city1);
    scanf ("%lu", &populat1);

    printf ("Digite a área da cidade de %s: ", name_city1);
    scanf ("%llu", &area1);

    printf ("Digite o PIB da cidade de %s: ", name_city1);
    scanf ("%llu", &PIB1);
    
    printf ("Digite os números de pontos turísticos da cidade de %s: ", name_city1);
    scanf ("%d", &tourist_attractions1);

    /* Processamento da carta 2*/

    population_density1 = populat1 / area1;
    PIB_per_capita1 = PIB1 / populat1;

    /* Saída de dados da carta 2 */

    printf ("\nCarta 2: \n");

    printf ("\nEstado: %s \n", letter_states1);
    printf ("Código: %s%s \n", letter_states1, code_letter1);
    printf ("Nome da Cidade: %s \n", name_city1);
    printf ("População: %lu \n", populat1);
    printf ("Área: %llu km² \n", area1);
    printf ("PIB: %llu \n", PIB1);
    printf ("Números de Pontos Turísticos: %d \n", tourist_attractions1);
    printf ("Densidade Populacional: %.2f \n", population_density1);
    printf ("PIB por capital: %.2f \n", PIB_per_capita1);

    /* Super Poder */

    super_power1 = (populat1 + area1 + PIB1 + tourist_attractions1 + population_density1 + PIB_per_capita1) / population_density1;

    printf ("\nComparação de atributos e representação de valores de qual irá vencer: \nCarta 1 = 1 \nCarta 2 = 0\n");
    
    victory_cart = 0; // essas duas declarações como valor zero é para somar a quantidade de atributos e com isso comparar qual, dentre das duas cartas, foi a vencedora.
    victory_cart1 = 0;

    /* Comparação da Pupulação */

    if (populat > populat1 ) {
        victory_cart = victory_cart + 1;
        printf ("\n1. Na comparação da população entre a carta um e a carta dois = 1\n");
    }
    else {
        victory_cart1 = victory_cart1 + 1;
        printf ("\n1. Na comparação da população entre a carta um e a carta dois = 0\n");
    }

    /* Comparação da área */
        
    if (area > area1 ) {
        victory_cart = victory_cart + 1;
        printf ("2. Na comparação da área entre a carta um e a carta dois = 1\n");
    }
    else {
        victory_cart1 = victory_cart1 + 1;
        printf ("%d", victory_cart1);
        printf ("2. Na comparação da área entre a carta um e a carta dois = 0\n");
    }

    /* Comparação do PIB */

    if (PIB > PIB1 ) {
        victory_cart = victory_cart + 1;
        printf ("3. Na comparação do PIB entre a carta um e a carta dois = 1\n");
    }
    else {
        victory_cart1 = victory_cart1 + 1;
        printf ("3. Na comparação do PIB entre a carta um e a carta dois = 0\n");
    }

    /* Comparação dos Pontos Turísticos */

    if (tourist_attractions > tourist_attractions1) {
        victory_cart = victory_cart + 1;
        printf ("4. Na comparação dos Pontos Turísticos entre a carta um e a carta dois = 1\n");
    }
    else {
        victory_cart1 = victory_cart1 + 1;
        printf ("4. Na comparação dos Pontos Turísticos entre a carta um e a carta dois = 0\n");
    }
    /* Comparação da Densidade Populacional*/

    if (population_density < population_density1 ) {
        victory_cart = victory_cart + 1;
        printf ("5. Na comparação da Densidade Populacional entre a carta um e a carta dois = 1\n");
    }
    else {
        victory_cart1 = victory_cart1 + 1;
        printf ("5. Na comparação da Densidade Populacional entre a carta um e a carta dois = 0\n");
    }

    /* Comparação do PIB por capital*/

    if (PIB_per_capita > PIB_per_capita1 ) {
        victory_cart = victory_cart + 1;
        printf ("6. Na comparação do PIB por capital entre a carta um e a carta dois = 1\n");
    }
    else {
        victory_cart1 = victory_cart1 + 1;
        printf ("6. Na comparação do PIB por capital entre a carta um e a carta dois = 0\n");
    }

    /* Saída dos resutados de quem venceu */

    if (victory_cart > victory_cart1){
        printf ("\nQuantidades de atributos vencerdores: ");
        printf ("\nNa comparação de atributos dentre uma carta e outra, a vencedora foi a carta 1 com %d atributos vencedores e a carta 2 teve %d atributos.\n", victory_cart, victory_cart1);
    }
    else {
        printf ("\nQuantidades de atributos vencerdores: ");
        printf ("\nNa comparação de atributos dentre uma carta e outra, a vencedora foi a carta 2 com %d atributos vencedores e a carta 1 teve %d atributos.\n", victory_cart1, victory_cart);
    }

    if (super_power > super_power1){
        printf ("\nSuper poder: ");
        printf ("\nA carta 1 ganha com %llu pontos no super poder.", super_power);
    }
    else {
        printf ("\nSuper poder: ");
        printf ("\nA carta 2 ganha com %llu pontos no super poder.", super_power1);
    }

    return 0;
}
