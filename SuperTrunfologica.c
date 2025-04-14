#include <stdio.h>
    int main(){  // principais funçoes
        printf("Desafio Super Trunfo \n");  // exbição do nome do jogo
        
    
        // CARTA 1
        printf("Carta 01\n"); // Exibição da Carta 01
    
    
        unsigned long int populacao1;              //declarando cada variavel da carta 01
        int pontosturisticos1;
        float areakm1;
        float pib1;
        char estado1[2];  
        char codcarta1[4];
        char cidade1[50];
        float pibpercapita1;
        float densidade1;
        float pibcapita1 ;
        float superpoder1 ;
    
        printf("Digite a letra do Estado entre A e H:\n");   // Leitura e inserção de dados pelos usuários
        scanf("%s", &estado1);
    
       
        printf("Digite o codigo da carta entre 01 e 04 (ex:A01):\n");
        scanf("%s", &codcarta1);
    
        while (getchar ()!='\n'); // uso do while getchat para limpar buffer
        printf("Digite o nome da Cidade:\n");
        fgets(cidade1, 50, stdin);   // uso de fgtes para leitura de palavras separadas
        
        printf("Digite a População da Cidade:\n");
        scanf("%lu", &populacao1);
            
        printf("Digite a area em km²:\n");
        scanf("%f", &areakm1);
    
        printf("Digite o PIB:\n");
        scanf("%f", &pib1);
    
        printf("Digite a quantidade de pontos turisticos:\n");
        scanf("%i", &pontosturisticos1);
    
        pibpercapita1 =  pib1 * 1000000000 / (float) populacao1; // calculo de pib per capita usando casting
        densidade1 = (float)populacao1 / areakm1;
        superpoder1 = (float)populacao1 + areakm1 + pontosturisticos1 + pibpercapita1 + (1.0 / densidade1);
    
    
        //CARTA 2
        printf("Carta 02\n");
    
        unsigned long int populacao2;              //declarando cada variavel da carta 02
        int pontosturisticos2;
        float areakm2;
        float pib2;
        char estado2[2];  
        char codcarta2[4];
        char cidade2[50];
        float pibpercapita2;
        float densidade2 ;
        float pibcapita2 ;
        float superpoder2;
    
    
        printf("Digite a letra do Estado entre A e H:\n");   // Leitura e inserção dos dados pelos usuários
        scanf("%s", &estado2);
    
       
        printf("Digite o codigo da carta entre 01 e 04 (ex:A01):\n");
        scanf("%s", &codcarta2);
    
        while (getchar ()!='\n');
        printf("Digite o nome da Cidade:\n");
        fgets(cidade2, 50, stdin);
        
        printf("Digite a População da Cidade:\n");
        scanf("%lu", &populacao2);
            
        printf("Digite a area em km²:\n");
        scanf("%f", &areakm2);
    
        printf("Digite o PIB:\n");
        scanf("%f", &pib2);
    
        printf("Digite a quantidade de pontos turisticos:\n");
        scanf("%i", &pontosturisticos2);
    
        pibpercapita2 =  pib2 * 1000000000 / (float) populacao2; // calculo usando casting
        densidade2 = (float)populacao2 / areakm2;
        superpoder2 = populacao2 + areakm2 + pontosturisticos2 + pibpercapita2 + (1.0f / densidade2);
    
    
        //Exibição do resultado das cartas
    
        printf("Informações Carta 01\n");                                  // exibição do resultado da carta 01
        printf("Estado: %s\n", estado1 );
        printf("Codigo: %s\n", codcarta1);
        printf("Cidade: %s\n", cidade1);
        printf("População: %lu\n", populacao1);
        printf("Area Km²: %.2f\n", areakm1);
        printf("PIB: %.2f\n", pib1);
        printf("Pontos Turisticos: %i\n", pontosturisticos1);
        printf("Densidade Populacional: %.2f hab/km²\n", populacao1 / areakm1);
        printf("PIB per capita: %.2f reais\n", pibpercapita1);
        printf("Super Poder: %.2f\n" , superpoder1);
    
    
    
        printf("Informações Carta 02\n");                              // exibição da resultado da carta 02
        printf("Estado: %s\n", estado2 );
        printf("Codigo: %s\n", codcarta2);
        printf("Cidade: %s", cidade2);
        printf("População: %lu\n", populacao2);
        printf("Area Km²: %.2f\n", areakm2);
        printf("PIB: %.2f\n", pib2);
        printf("Pontos Turisticos: %i\n", pontosturisticos2);
        printf("Densidade Populacional: %.2f hab/km²\n", populacao2 / areakm2);
        printf("PIB per capita: %.2f reais\n", pibpercapita2);
        printf("Super Poder: %.2f\n" , superpoder2);


        printf("Carta 1 - São Paulo: %lu\n", populacao1);
        printf("Carta 2 -  Rio de Janeiro: %lu\n", populacao2);

        if (populacao1 > populacao2) {                 //Uso do if e else para decisão composta. 
            printf ("Cidade 1 tem maior População.\n");
        }else { 
            printf ("Cidade 2 tem maior População.\n");
        }

    

        // Resultado Final
    
        printf ("Resultado \n");  // resultado comparando cada carta
        int resultado;
    
        resultado = populacao1 > populacao2 ;
        printf ("População: Carta %d venceu ('%d')\n", resultado ? 1:2, resultado );
    
        resultado = areakm1 > areakm2 ;
        printf ("Área: Carta %d venceu (%d)\n", resultado ? 1:2 , resultado);
    
        resultado = pib1 > pib2 ;
        printf ("PIB: Carta %d venceu (%d)\n", resultado ? 1:2 , resultado);
    
        resultado = pontosturisticos1 > pontosturisticos2 ;
        printf ("Pontos Turísticos: Carta %d venceu (%d)\n", resultado ? 1:2 ,  resultado);
    
        resultado = densidade1 < densidade2 ;
        printf ("Densidade Populacional: Carta %d venceu (%d)\n", resultado ? 1:2 , resultado);
    
        resultado = pibpercapita1 > pibpercapita2 ;
        printf ("PIB Per Capita: Carta %d venceu (%d)\n", resultado ? 1:2 , resultado);
    
        resultado = superpoder1 > superpoder2 ;
        printf ("Super Poder: Carta %d venceu (%d)\n", resultado ? 1:2 , resultado);
    
     
        return 0;












}