#include <stdio.h>
#include <stdlib.h>

int main()
{
  FILE *lista_frutas;
  lista_frutas = fopen("frutas.txt", "w");
  int quantidade;
  int items = 0;

  printf("Bem-vindo a Fruta Doce Store!\n");
  printf("Aqui voce encontra as melhores frutas da regiao!\n");

  void userInput()
  {
    printf("Digite o numero correspondente: (Digite 0 para sair)\n");
    scanf("%d", &quantidade);
  }

  while (1)
  {
    printf("1 - Banana\n");
    printf("2 - Maca\n");
    printf("3 - Pera\n");
    printf("4 - Uva\n");
    printf("5 - Morango\n");
    printf("0 - Sair\n");
    printf("Quantidade de frutas compradas: %d\n", items);
    userInput();
    system("cls || clear");
    if (quantidade == 0)
    {
      printf("Obrigado por comprar na Fruta Doce Store!\n Sua lista foi salva no arquivo frutas.txt\n");
      break;
    }
    else if (quantidade == 1)
    {
      fprintf(lista_frutas, "Banana\n");
      items++;
    }
    else if (quantidade == 2)
    {
      fprintf(lista_frutas, "Maca\n");
      items++;
    }
    else if (quantidade == 3)
    {
      fprintf(lista_frutas, "Pera\n");
      items++;
    }
    else if (quantidade == 4)
    {
      fprintf(lista_frutas, "Uva\n");
      items++;
    }
    else if (quantidade == 5)
    {
      fprintf(lista_frutas, "Morango\n");
      items++;
    }
    else
    {
      printf("Opção inválida!\n");
    }
  }
  fclose(lista_frutas);
  return 0;
}