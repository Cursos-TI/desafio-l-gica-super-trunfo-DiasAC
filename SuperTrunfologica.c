#include <stdio.h>
    int main(){  // principais funçoes
        

        unsigned long int populacao1;              //declarando cada variavel da carta 01
        int pontosturisticos1;
        float areakm1;
        float pib1;
        char estado1[2];  
        char codcarta1[4];
        char cidade1[50];
        float pibpercapita1; 
        float densidade1;
        float superpoder1;
        


        unsigned long int populacao2;              //declarando cada variavel da carta 02
        int pontosturisticos2;
        float areakm2;
        float pib2;
        char estado2[2];  
        char codcarta2[4];
        char cidade2[50];
        float pibpercapita2 ;
        float densidade2 ;
        float superpoder2 ;
        

        int opcao;                // variavel usada no uso do switch
         
        printf("### Desafio Super Trunfo ### \n");  // exbição do nome do jogo
        
        printf("Menu Principal\n");      //Menu interativo inicial 
        printf("1. Iniciar Jogo\n");
        printf("2. Sair\n");
        printf("Escolha uma opção: \n");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            printf ("Iniciando o jogo\n");

                     // CARTA 1
        printf(" ### Carta 01 ### \n"); // Exibição da Carta 01
    
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

        pibpercapita1 = pib1 * 1000000000 / (float) populacao1; // calculo usando casting
        densidade1 = (float)populacao1 / areakm1;
        superpoder1 = populacao1 + areakm1 + pontosturisticos1 + pibpercapita1 + (1.0f / densidade1);
    
        
    
    
        //CARTA 2
        printf(" ### Carta 02 ### \n");
    
        
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
    
        printf("### Informações Carta 01 ###\n");                                  // exibição do resultado da carta 01
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
    
    
    
        printf("### Informações Carta 02 ###\n");                              // exibição da resultado da carta 02
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

       

        switch (escolhaJogador1) {                         // Uso do Switch para selecionar cada decisão juntamente com o uso de if, else if e else para escolhas de decisões com condições hierarquicas.
            case 1:
                printf("\n--- Resultado da Comparação ---\n");
                printf("Cidade 1: %s", cidade1);
                printf("Cidade 2: %s", cidade2);
                printf("Atributo: População\n");
                printf("População da Carta 01: %lu\n", populacao1);
                printf("População da Carta 02: %lu\n", populacao2);
                if (populacao1 > populacao2)
                    printf("Carta 01 vence no atributo População!\n");
                else if (populacao2 > populacao1)
                    printf("Carta 02 vence no atributo População!\n");
                else
                    printf("Empate!\n");
                break;

            case 2:
                printf("\n--- Resultado da Comparação ---\n");
                printf("Cidade 1: %s", cidade1);
                printf("Cidade 2: %s", cidade2);
                printf("Atributo: Área\n");
                printf("Área da Carta 01: %.2f km²\n", areakm1);
                printf("Área da Carta 02: %.2f km²\n", areakm2);
                if (areakm1 > areakm2)
                    printf("Carta 01 vence no atributo Área!\n");
                else if (areakm2 > areakm1)
                    printf("Carta 02 vence no atributo Área!\n");
                else
                    printf("Empate!\n");
                break;

            case 3:
                printf("\n--- Resultado da Comparação ---\n");
                printf("Cidade 1: %s", cidade1);
                printf("Cidade 2: %s", cidade2);
                printf("Atributo: PIB\n");
                printf("PIB da Carta 01: %.2f bilhões\n", pib1);
                printf("PIB da Carta 02: %.2f bilhões\n", pib2);
                if (pib1 > pib2)
                    printf("Carta 01 vence no atributo PIB!\n");
                else if (pib2 > pib1)
                    printf("Carta 02 vence no atributo PIB!\n");
                else
                    printf("Empate!\n");
                break;

            case 4:
                printf("\n--- Resultado da Comparação ---\n");
                printf("Cidade 1: %s", cidade1);
                printf("Cidade 2: %s", cidade2);
                printf("Atributo: Pontos Turísticos\n");
                printf("Pontos Turísticos da Carta 01: %d\n", pontosturisticos1);
                printf("Pontos Turísticos da Carta 02: %d\n", pontosturisticos2);
                if (pontosturisticos1 > pontosturisticos2)
                    printf("Carta 01 vence no atributo Pontos Turísticos!\n");
                else if (pontosturisticos2 > pontosturisticos1)
                    printf("Carta 02 vence no atributo Pontos Turísticos!\n");
                else
                    printf("Empate!\n");
                break;

            case 5:
                printf("\n--- Resultado da Comparação ---\n");
                printf("Cidade 1: %s", cidade1);
                printf("Cidade 2: %s", cidade2);
                printf("Atributo: Densidade Demográfica\n");
                printf("Densidade da Carta 01: %.2f hab/km²\n", densidade1);
                printf("Densidade da Carta 02: %.2f hab/km²\n", densidade2);
                if (densidade1 < densidade2)
                    printf("Carta 01 vence no atributo Densidade Demográfica!\n");
                else if (densidade2 < densidade1)
                    printf("Carta 02 vence no atributo Densidade Demográfica!\n");
                else
                    printf("Empate!\n");
                break;

            case 6:
                printf("\n--- Resultado da Comparação ---\n");
                printf("Cidade 1: %s", cidade1);
                printf("Cidade 2: %s", cidade2);
                printf("Atributo: PIB per Capita\n");
                printf("PIB per Capita da Carta 01: %.2f reais\n", pibpercapita1);
                printf("PIB per Capita da Carta 02: %.2f reais\n", pibpercapita2);
                if (pibpercapita1 > pibpercapita2)
                    printf("Carta 01 vence no atributo PIB per Capita!\n");
                else if (pibpercapita2 > pibpercapita1)
                    printf("Carta 02 vence no atributo PIB per Capita!\n");
                else
                    printf("Empate!\n");
                break;

            case 7:
                printf("\n--- Resultado da Comparação ---\n");
                printf("Cidade 1: %s", cidade1);
                printf("Cidade 2: %s", cidade2);
                printf("Atributo: Super Poder\n");
                printf("Super Poder da Carta 01: %.2f\n", superpoder1);
                printf("Super Poder da Carta 02: %.2f\n", superpoder2);
                if (superpoder1 > superpoder2)
                    printf("Carta 01 vence no atributo Super Poder!\n");
                else if (superpoder2 > superpoder1)
                    printf("Carta 02 vence no atributo Super Poder!\n");
                else
                    printf("Empate!\n");
                break;

        default:
            printf("Opção de atributo inválida.\n");
            break;



        
            int atributo1, atributo2;                       // variaveis para comparar atributos diferentes da carta 01 e carta 02
            float valor1, valor2;
            char atributonome1[20], atributonome2[20];
            int escolha;
            escolha = atributo1, atributo2;

            printf ("** Escolha um atributo **\n");
            printf ("1 - População\n");
            printf ("2 - Área \n");
            printf ("3 - PIB\n");
            printf ("4 - Pontos Turísticos\n");
            printf ("5 - Densidade Populacional\n");
            printf ("6 - PIB Per Capita\n");
            printf ("7 - Super Poder\n");
            scanf ("%d" , &atributo1);

            
            printf ("** Escolha um atributo (DIFERENTE DO PRIMEIRO ESCOLHIDO) **\n");
            printf ("1 - População\n");
            printf ("2 - Área \n");
            printf ("3 - PIB\n");
            printf ("4 - Pontos Turísticos\n");
            printf ("5 - Densidade Populacional\n");
            printf ("6 - PIB Per Capita\n");
            printf ("7 - Super Poder\n");
            scanf ("%d" , &atributo2);

            if (atributo1 == atributo2) {
                printf("Escolha atributos diferentes.\n");
            } else {
                printf("Comparando...\n");
        
            if (atributo1 == 1) {
                valor1 = populacao1;
                printf("População");
            } else if (atributo1 == 2) {
                valor1 = areakm1;
                printf("Área");
            } else if (atributo1 == 3) {
                valor1 = pib1;
                printf("PIB");
            } else if (atributo1 == 4) {
                valor1 = pontosturisticos1;
                printf("Pontos Turísticos");
            } else if (atributo1 == 5) {
                valor1 = densidade1;
                printf("Densidade Populacional");
            } else if (atributo1 == 6) {
                valor1 = pibpercapita1;
                printf("PIB per Capita");
            } else if (atributo1 == 7) {
                valor1 = superpoder1;
                printf("Super Poder");
            } else {
                valor1 = 0;
                printf("Atributo Inválido");
            }


            if (atributo2 == 1) {
                valor2 = populacao2;
                printf("População");
            } else if (atributo2 == 2) {
                valor2 = areakm2;
                printf("Área");
            } else if (atributo2 == 3) {
                valor2 = pib2;
                printf("PIB");
            } else if (atributo2 == 4) {
                valor2 = pontosturisticos2;
                printf("Pontos Turísticos");
            } else if (atributo2 == 5) {
                valor2 = densidade2;
                printf("Densidade Populacional");
            } else if (atributo2 == 6) {
                valor2 = pibpercapita1;
                printf("PIB per Capita");
            } else if (atributo2 == 7) {
                valor2 = superpoder2;
                printf("Super Poder");
            } else {
                valor2 = 0;
                printf("Atributo Inválido");
            }
           
            printf("\n--- Comparação de Atributos ---\n");              // resultado da comparação de cartas e atributos diferentes
            printf("Carta 1: %s - %.2f\n", &atributo1, valor1);
            printf("Carta 2: %s - %.2f\n", &atributo2, valor2);

            
            if (valor1 > valor2) {
                printf("Resultado: Carta 1 vence!\n");
            } else if (valor1 < valor2) {
                printf("Resultado: Carta 2 vence!\n");
            } else {
                printf("Resultado: Empate!\n");
            }

    

                
        break;
    case 2:
        printf("Saindo...");
        break;
    default:
        printf ("Opção Inválida\n");
   
    }

    return 0;


    }

    }
    break;
    case 2:
        printf("Saindo...");
        break;
        default:
            printf ("Opção Inválida\n");
        
        }



        
return 0;
}