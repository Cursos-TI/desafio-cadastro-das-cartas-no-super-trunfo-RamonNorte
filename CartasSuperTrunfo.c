#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char estado[20]="A";
    char codigo[20]= "A01";
    char cidade[20] = "São Paulo" ;
    int Populacao=12325000 ;
    float Area= 1521.11 ;
    float PIB= 699.28 ;
    int Pontos_Turisticos=50 ;
    float Densidade_Populacional= Populacao/Area ;
    float PIB_per_Capita= PIB/Populacao ;
    
    char estado2[20]="B";
    char codigo2[20]= "B02";
    char cidade2[20] = "Rio de Janeiro" ;
    int Populacao2=6748000 ;
    float Area2= 1200.25  ;
    float PIB2= 300.50  ;
    int Pontos_Turisticos2=30  ;


printf("Carta 1\n");
printf("Estado: %s\n", estado) ; 
printf("Código: %s\n", codigo);
printf("Cidade: %s\n", cidade); 
printf("População: %d\n", Populacao); 
printf("Área: %.2f km²\n", Area); 
printf("PIB: %.2f bilhões\n", PIB);
printf("Densidade Populacional:%.2f bilhões\n", Densidade_Populacional);
printf("PIB per Capita:%.2f reais\n", PIB_per_Capita);


printf("carta 2\n");
printf("Estado: %s\n", estado2) ; 
printf("Código: %s\n", codigo2);
printf("Cidade: %s\n", cidade2); 
printf("População: %d\n", Populacao2); 
printf("Área: %.2f km²\n", Area2); 
printf("PIB: %.2f bilhões\n", PIB2);
printf("Pontos Turísticos: %d\n", Pontos_Turisticos2);
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
