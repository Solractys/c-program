#include <stdio.h>
#include <stdlib.h>

int main()
{
  FILE *lista_frutas;
  lista_frutas = fopen("frutas.txt", "w");
  int quantidade;
  float items;
  float values[5] = {5.0, 2.3, 3.0, 4.4, 5.5};

  while (1)
  {
    printf("Bem-vindo a Fruta Doce Store!\n");
    printf("Aqui voce encontra as melhores frutas da regiao!\n");
    printf("1 - Banana R$%.2f \n", values[0]);
    printf("2 - Maca R$%.2f \n", values[1]);
    printf("3 - Pera R$%.2f \n", values[2]);
    printf("4 - Uva R$%.2f \n", values[3]);
    printf("5 - Morango R$%.2f \n", values[4]);
    printf("Quantidade de frutas compradas: %.2f\n", items);
    printf("Digite o numero correspondente: (Digite 0 para sair)\n");
    scanf("%d", &quantidade);
    system("cls || clear");
    if (quantidade == 0)
    {
      printf("Obrigado por comprar na Fruta Doce Store!\n Sua lista foi salva no arquivo frutas.txt\n");
      break;
    }
    else if (quantidade == 1)
    {
      fprintf(lista_frutas, "Banana\n %.2f", values[0]);
      items += values[0];
    }
    else if (quantidade == 2)
    {
      fprintf(lista_frutas, "Maca %.2f \n", values[1]);
      items += values[1];
    }
    else if (quantidade == 3)
    {
      fprintf(lista_frutas, "Pera %.2f \n", values[2]);
      items += values[2];
    }
    else if (quantidade == 4)
    {
      fprintf(lista_frutas, "Uva %.2f \n", values[3]);
      items += values[3];
    }
    else if (quantidade == 5)
    {
      fprintf(lista_frutas, "Morango %.2f \n", values[4]);
      items += values[4];
    }
    else
    {
      printf("Opção inválida!\n");
      break;
    }
  }
  fclose(lista_frutas);
  return 0;
}