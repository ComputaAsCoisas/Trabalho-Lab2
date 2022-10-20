#include <stdio.h>
int main(){
int J, C, R;
do{
  printf("                Pedra, papel e tesoura.\n");
  printf("0.Pedra.\n");
  printf("1.Papel.\n");
  printf("2.Tesoura.\n");
  printf("3.Lagarto.\n");
  printf("4.Spock.\n");
  scanf("%d", &J);
  C=rand() % 4;
  if(J==0&&C==1){
    printf("Voce: Pedra, Computador: Papel.\n");
    printf("Voce Perdeu!!!\n");}
  else if(J==0&&C==2){
      printf("Voce: Pedra, Computador: Tesoura.\n");
      printf("Voce Venceu!!!\n");}
      else if(J==0&&C==0){
          printf("Voce: Pedra, Computador: Pedra.\n");
          printf("Empate!!!\n");}
          else if(J==1&&C==0){
              printf("Voce: Papel, Computador: Pedra.\n");
              printf("Voce Venceu!!!\n");}
              else if(J==1&&C==1){
                  printf("Voce: Papel, Computador: Papel.\n");
                  printf("Empate!!!\n");}
                  else if(J==1&&C==2){
                      printf("Voce: Papel, Computador: Tesoura.\n");
                      printf("Voce Perdeu!!!\n");}
                      else if(J==2&&C==0){
                          printf("Voce: Tesoura, Computador: Pedra.\n");
                          printf("Voce Perdeu!!!\n");}
                          else if(J==2&&C==1){
                              printf("Voce: Tesoura, Computador: Papel.\n");
                              printf("Voce Venceu!!!\n");}
                              else if(J==2&&C==2){
                                  printf("Voce: Tesoura, Computador: Tesoura.\n");
                                  printf("Empate!!!\n");}
                                  else if(J==0&&C==3){
                                      printf("Voce: Pedra, Computador: Lagarto.\n");
                                      printf("Voce Venceu\n");}
                                      else if(J==0&&C==4){
                                          printf("Voce: Pedra, Computador: Spock.\n");
                                          printf("Voce Perdeu!!!\n");}
                                          else if(J==1&&C==3){
                                              printf("Voce: Papel, Computador: Lagarto.\n");
                                              printf("Voce Perdeu!!!\n");}
                                              else if(J==1&&C==4){
                                                  printf("Voce: Papel, Computador: Spock.\n");
                                                  printf("Voce Venceu!!!\n");}
                                                  else if(J==2&&C==3){
                                                      printf("Voce: Tesoura, Computador: Lagarto.\n");
                                                      printf("Voce Venceu!!!\n");}
                                                      else if(J==2&&C==4){
                                                          printf("Voce: Tesoura, Computador: Spock.\n");
                                                          printf("Voce Perdeu!!!\n");}
                                                          else if(J==3&&C==3){
                                                              printf("Voce: Lagarto, Computador: Lagarto.\n");
                                                              printf("Empate!!!\n");}
                                                              else if(J==3&&C==4){
                                                                  printf("Voce: Lagarto, Computador: Spock.\n");
                                                                  printf("Voce Venceu!!!\n");}
                                                                  else if(J==4&&C==3){
                                                                      printf("Voce: Spock, Computador: Lagarto.\n");
                                                                      printf("Voce Perdeu!!!\n");}
                                                                      else if(J==4&&C==4){
                                                                          printf("Voce: Spock, Computador: Spock.\n");
                                                                          printf("Empate!!!\n");}
  printf("Deseja jogar novamente? 1.Sim, 2.Nao.\n");
  scanf("%d", &R);
}while(R==1);
}