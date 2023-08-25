#include <stdio.h>
#include <time.h>


int main(void) {
  int j=1;
  int i=0;
  int diasemana = 0;
  int dia = 0;
  int mes = 0;
  int ano = 0;
  time_t tempo = time(NULL);
  
  struct tm tm = *localtime(&tempo);
  while(i<j){
  
  printf("Agora sao exatamente %d-%d-%d: %d:%d:%d \n\n",tm.tm_mday,tm.tm_mon+1,tm.tm_year+1900,tm.tm_hour-3,tm.tm_min,tm.tm_sec);  


diasemana = tm.tm_wday+1;
switch(diasemana){
  case 1:
    printf("Hoje: domingo\n");
    break;

  case 2:
    printf("Hoje: segunda\n");
    break;

  case 3:
    printf("Hoje: terca\n");
    break;

  case 4:
    printf("Hoje: quarta\n");
    break;

  case 5:
    printf("Hoje: quinta\n");
    break;

  case 6:
    printf("Hoje: sexta\n");
    break;

  case 7:
    printf("Hoje: sabado\n");
    break;
}
  dia = tm.tm_yday; 
  mes = tm.tm_mon;
  
  ano = tm.tm_year+1900;
  if(ano % 4 ==  0){
  printf("Hoje estamos no %d° dia do ano e no mês %d\n\n",dia+2,mes+1); 
  printf("Estamos no ano %d e este ano sera bissexto\n",ano);  
  }
  if(ano%4 != 0){
     printf("Hoje estamos no %d° dia do ano e no mês %d\n\n",dia+1,mes+1); 
    printf("Estamos no ano %d e este ano n sera bissexto\n",ano);
  }
  
  
  
  

return 0;
}}
