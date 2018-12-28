#include<stdio.h>
#include"vetor.h"

#define c 1000
#define mc 100
#define bp 100


void main(){
int i,j,d,e,peak[bp][2],cpeak=0,maior=0;
char sub=1,des=0;
//for(i=0;i<c;i++)
//  printf("%d\n",H[i]);
for(i=0;i<c-mc;i++){
  e=d,d=0;
  for(j=0;j<mc;j++)
    d+=H[i+j]*H[j];
  if(sub&&d<e){
    sub=0,des=1,peak[cpeak][0]=d,peak[cpeak][1]=i,cpeak++;
    if(maior<d)maior=d;}
  if(des&&d>e)sub=1,des=0;//,peak[cpeak][0]=d,peak[cpeak][1]=i,cpeak++;
  //printf("%d\n",d);
}

sub=1,j=0,maior=maior*.6;
for(i=0;i<cpeak;i++)
  if(peak[i][0]>maior)
    if(sub)d=peak[i][1],sub=0; else e=peak[i][1],j++;

printf("%f\n",(float)(e-d)/j);

return;


}