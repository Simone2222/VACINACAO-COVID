#include <stdio.h>
#include <string.h>
#define MAX_USUARIOS 50
typedef struct
{
  char nome[50], vacina[50], data[10], numeroLote[100], cpf[11];
int ativo ;

} Usuario;
Usuario usuarios[MAX_USUARIOS];

void menu();
void cadastrar();
void remover();
void pesquisar();
void listar();

int main(int argc, char const *argv[])
{
  menu();
  return 0;
}
void menu()
{
  system("clear");
  int op;
  do
  {
    printf("SISTEMA CADASTRO\n");
    printf("1- cadastrar \n2- remover \n3- pesquisar \n4- Listar \n0- sair\n");
    scanf("%d", &op);
    getchar();
    switch (op)
    {
    case 1:
      cadastrar();
      break;
    case 3:
      pesquisar();
      break;
    case 4:
      listar();
      break;
    }
    getchar();
  } while (op != 0);
}
void cadastrar()
{
  char nome[50], vacina[50], data[10], numeroLote[100], cpf[11];
  int op ;
  
  

  do
  {
   
    system("clear");
    printf("CADASTRAR USUARIO\n");
    printf("Nome: ");
    fgets(nome, sizeof(nome), stdin);
    printf("vacina: ");
    fgets(vacina, sizeof(vacina), stdin);
    printf("numero Lote: ");
    fgets(numeroLote, sizeof(numeroLote), stdin);
    printf("data ");
    fgets(data, sizeof(data), stdin);
    printf("CPF: ");
    fgets(cpf, sizeof(cpf), stdin);
    printf("\n1 - continuar\n0 - sair\n");
  
    for (int i = 0; i < MAX_USUARIOS; ++i)
    
    {
      if (usuarios[i].ativo == 0)
      {
        
        strcpy(usuarios[i].nome, nome);
        strcpy(usuarios[i].vacina, vacina);
        strcpy(usuarios[i].numeroLote, numeroLote);
        strcpy(usuarios[i].data, data);
        strcpy(usuarios[i].cpf, cpf);
        usuarios[i].ativo = 1;
        break;
      }
    }
    scanf("%d", &op);
    break;
    getchar();
  } while (op != 0);
}
void remover()
{
}
void pesquisar()
{
  system("clear");
  char nome[50], vacina[50], data[10], numeroLote[100], cpf[12];
  printf("Digite o CPF para pesquisar: ");
  fgets(cpf, sizeof(cpf), stdin);
  for (int i = 0; i < MAX_USUARIOS; ++i)
  {
    if (strstr(usuarios[i].cpf, cpf) != NULL)
    {
      printf("\nNome: %s", usuarios[i].nome);
      printf("vacina: %s", usuarios[i].vacina);
      printf("numero Lote: %s", usuarios[i].numeroLote);
      printf("data: %s", usuarios[i].data);
      printf("CPF: %s", usuarios[i].cpf);
      printf("-----------------------\n");
    }
  }
}
void listar()
{
  system("clear");
  printf("LISTA DE USUARIOS\n");
  for (int i = 0; i < MAX_USUARIOS; ++i)
  {
    if (usuarios[i].ativo == 1)
    {
      printf("\n-----------------------\n");
      printf("Nome: %s", usuarios[i].nome);
      printf("vacina: %s", usuarios[i].vacina);
      printf("numero Lote: %s", usuarios[i].numeroLote);
      printf("data: %s", usuarios[i].data);
      printf("CPF: %s", usuarios[i].cpf);
      printf("\n-----------------------\n");
    }
  }
  
}