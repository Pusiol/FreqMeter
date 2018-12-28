#include<stdio.h>
#include"vetor.h"

#define mc 100
#define bp 100


float frq(int *vetorzao,int tamanho){
int i,j,d,e,peak[bp][2],cpeak=0,maior=0;
char sub=1;
//for(i=0;i<tamanho;i++)
//  printf("%d\n",vetorzao[i]);
for(i=mc;i<tamanho-mc;i++){
  e=d,d=0;
  for(j=0;j<mc;j++)
    d+=vetorzao[i+j]*vetorzao[j];
  if(sub&&d<e){
    sub=0,peak[cpeak][0]=d,peak[cpeak][1]=i,cpeak++;
    if(maior<d)maior=d;}
  if(!sub&&d>e)sub=1;//,peak[cpeak][0]=d,peak[cpeak][1]=i,cpeak++;
  //printf("%d\n",d);
}

sub=1,j=0,maior=maior*.75;
for(i=0;i<cpeak;i++)
  if(peak[i][0]>maior)
    if(sub)d=peak[i][1],sub=0; else e=peak[i][1],j++;

//printf("%f\n",(float)(e-d)/j);

return (float)(e-d)/j;
}



void main(){
float w=frq(H,1000);
printf("%f\n",w);}