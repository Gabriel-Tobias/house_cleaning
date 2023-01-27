#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int a, b, x, t;

struct cad_cliente // cadastro cleinte (usuario)
{
  char nome[50];
  char cpf[16];
  char endereco[30];
  char telefone[9];
  char email[30];
  char senha[8];
};

struct cad_funcionario // cadastro de funcionario  (diarista)
{
  char nome[50];
  char rg[12];
  char cpf[16];
  char endereco[30];
  char telefone[9];
  char email[30];
  char senha[8];
};

struct tela_servico // tela menu (tipo de limpeza cliente)
{
  char limpeza[11];
  char tamanho[10];
};
struct tela_atendimento //(tela de menu (funcionario)
{
  // printf("trazer os serviços aceitos pelo mesmo");
  //   printf("uma aba com os serviços disponiveis a confirmar:")
};
struct tela_funcionario1 //(tela de menu (funcionário triagem)
{
  //    printf("Ligar os cadastros pendentes para análise");
  //     printf("Saber como permitir a liberaçao dos cadastros:")
};
struct user_login // faz a validaçao de dados para eferuar login
{
  char email[30];
  char senha[8];
};

int main()
{
  setlocale(LC_ALL, "");

  printf("                                      <----Bem vindos a House Cleaning---->\n");

  printf("\n          <-------Selecione um número para selecionar as funções de instrução:------->\n");
  printf("   Selecione:\n\n (1)Cadastro de cliente\n (2)Cadastro funcionário\n (3)Login\n");
  scanf("%d", &a);

  if (a == 1)
  {
    struct cad_cliente usuario;
    printf("\nNome: ");
    fflush(stdin);
    fgets(usuario.nome, 50, stdin);

    printf("CPF: ");
    fflush(stdin);
    fgets(usuario.cpf, 16, stdin);

    printf("Endereço: ");
    fflush(stdin);
    fgets(usuario.endereco, 30, stdin);

    printf("telefone: ");
    fflush(stdin);
    fgets(usuario.telefone, 9, stdin);

    printf("E-mail: ");
    fflush(stdin);
    fgets(usuario.email, 20, stdin);

    printf("Senha: ");
    fflush(stdin);
    fgets(usuario.senha, 8, stdin);

    struct user_login login;

    printf("\n\n\n\n\n\n                                                            <-----LOGIN----->\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");

    printf("Email: \n");
    fflush(stdin);
    fgets(login.email, 30, stdin);

    printf("Senha: \n");
    fflush(stdin);
    fgets(login.senha, 8, stdin);

    if (login.email == usuario.email)
    {
      if (login.senha == usuario.senha)
      {
      }
      else
      {
        printf("dados incorretos");
      }
    }
    printf("Bem vindo,%s que tipo de serviço deseja solicitar:\n\n\n\n\n\n\n\n\n", usuario.nome);

    printf("Tipos de limpeza:\nLimpeza padrão: é a remoção de pó, resíduos de substancias organicas e inorganicas e a organizaçao do local, os procedimentos envolvem a remoçao seca ou molhada da sujeira, além de desinfecçao de banheiros, cozinhas e áreas de serviços.\n");

    printf("\nLimpeza pré-mudança: Antes de ocupar um local com roupas, móveis e objetos pessoais, é importante fazer uma limpeza minuciosa, retirando poeira e sujidades pelo nao uso do local, bactérias e microorganismos deixados por uso anterior. Uma faxineira pode, primeiramente, fazer uma limpeza geral e, depois, dedicar mais tempo a cada c�modo da casa removendo todo e qualquer tipo de sujeira contido no local, higienizando e desinfetando. Ap�s os locais estarem limpos, uma diarista poder� auxiliar na arruma��o dos ambientes, sempre comandada e supervisionada pela pessoa contratante.\n");

    printf("\nDigite:\n (4) para limpeza padrao\n (5) para limpeza pré-mudança:\n");
    scanf("%d", &b);

    if (b == 4)
    {
      int x;
      printf("Limpeza padrao, foi escolhida.\n");
      printf("Escolha o tamanho do apartamento:\n");
      printf("Apartamento de 60m a 80m :(VALOR) \t DIGITE 1\n");
      printf("\nApartamento de 80m a 100m :(VALOR) \t DIGITE 2\n");
      printf("\nApartamento de 100m a 120m :(VALOR) \t DIGITE 3\n");
      scanf("%d", &x);
      switch (x)
      {
      case 1:
        printf("\nDIRECIONA OS DADOS Já SELECIONADO PARA TELA DE AGENDAMENTO");
        break;
      case 2:
        printf("\nDIRECIONA OS DADOS Já SELECIONADO PARA TELA DE AGENDAMENTO");
        break;
      case 3:
        printf("\nDIRECIONA OS DADOS Já SELECIONADO PARA TELA DE AGENDAMENTO");
        break;
      }
    }
    else if (b == 5)
    {
      int x;
      printf("Limpeza pré-mudança, foi escolhida.\n");
      printf("Escolha o tamanho do apartamento:\n");
      printf("Apartamento de 60m a 80m :(VALOR) \t DIGITE 1\n");
      printf("Apartamento de 80m a 100m :(VALOR) \t DIGITE 2\n");
      printf("Apartamento de 100m a 120m :(VALOR) \t DIGITE 3\n");
      scanf("%d", &x);
      switch (x)
      {
      case 1:
        printf("\nDIRECIONA OS DADOS Já SELECIONADO PARA TELA DE AGENDAMENTO");
        break;
      case 2:
        printf("\nDIRECIONA OS DADOS Já SELECIONADO PARA TELA DE AGENDAMENTO");
        break;
      case 3:
        printf("\nDIRECIONA OS DADOS Já SELECIONADO PARA TELA DE AGENDAMENTO");
        break;
      }
    }
  }
  if (a == 2)
  {
    struct cad_funcionario colaborador;
    printf("\nNome:");
    fflush(stdin);
    fgets(colaborador.nome, 50, stdin);
    printf("\nRG:");
    fflush(stdin);
    fgets(colaborador.rg, 16, stdin);
    printf("CPF:");
    fflush(stdin);
    fgets(colaborador.cpf, 16, stdin);
    printf("Endereço:");
    fflush(stdin);
    fgets(colaborador.endereco, 30, stdin);
    printf("telefone:");
    fflush(stdin);
    fgets(colaborador.telefone, 9, stdin);
    printf("E-mail:");
    fflush(stdin);
    fgets(colaborador.email, 30, stdin);
    printf("Senha:");
    fflush(stdin);
    fgets(colaborador.senha, 8, stdin);

    struct user_login worker;

    printf("\n\n\n\n\n\n                                                            <-----LOGIN----->\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");

    printf("Email: \n");
    fflush(stdin);
    fgets(worker.email, 30, stdin);

    printf("Senha: \n");
    fflush(stdin);
    fgets(worker.senha, 8, stdin);

    if (worker.email == colaborador.email)
    {
      if (worker.senha == colaborador.senha)
      {
        printf("Bem vindo novamente,%s \n",colaborador.nome);
      }
      else
      {
        printf("dados incorretos");
      }
 
    printf("digite (8) para ver trabalhos disponiveis:\n");
    

    printf("(1)Limpeza padrão, apartamento 60m, na vila madalena, 20/10/2022 ás 10:30\n");

    printf("(2)Limpeza pré mudança, apartamento 80m, na vila madalena, 20/10/2022 ás 10:30\n");

    printf("(3)Limpeza padrão, apartamento 120m, na vila madalena, 20/10/2022 ás 10:30\n");

    switch (t){
    case 1:
      printf("Você aceitou uma limpeza padrão, agendada para o dia 20/10/2022 as 10:30 da manhã");
      break;

      case 2:
      printf("Você aceitou uma limpeza pré mudança, agendada para o dia 20/10/2022 as 10:30 da manhã");
      break;

      case 3:
      printf("Você aceitou uma limpeza padrão, agendada para o dia 20/10/2022 as 10:30 da manhã");
      break;
    
    default:
      break;
    }
  
   if (a == 3)
    {
      struct cad_cliente usuario;
      struct user_login login;

      printf("Email:\n");
      fflush(stdin);
      fgets(login.email, 30, stdin);

      printf("Senha:\n");
      fflush(stdin);
      fgets(login.senha, 8, stdin);

      if (login.email == usuario.email)
      {
        if (login.senha == usuario.senha)
        {
          printf("Bem vindo, %s", usuario.nome);
        }
      }
    }
  }
 return 0; 
}
}  