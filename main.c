#include <stdio.h>
int main(void) 
{
int temp[7][2];
int Max = 0,Min = 100,MidL,MidH,Tmp;
float SumH = 0,SumL = 0;
char name[100];
char day[7][10] = {"Monday","Tues","Wed","Thurs","Fri","Sat","Sun"};
printf("Enter youe name :");
scanf("%s",name);
printf("\nHello %s\n",name);
printf("--------------------------------------\n");
for(int i=0;i<7;i++){
  printf("High Temp %-9s :",day[i]);
  scanf("%d",&temp[i][0]);
  printf("Low  Temp %-9s :",day[i]);
  scanf("%d",&temp[i][1]);
}
printf("--------------------------------------\n");
for(int i=0;i<7;i++){
  for(int j=0;j<2;j++){
    if(temp[i][j]>Max){
      Max = temp[i][j];
    }
   else if(Min > temp[i][j]) {
     Min = temp[i][j];
   }
  }
}
printf("max Temerature is %d c\n",Max);
printf("min Temerature is %d c\n",Min);
for(int i=0;i<7;i++){
  SumH += temp[i][0];
}
printf("Average High Temperature is %2.f c\n",SumH/7);
for(int i=0;i<7;i++){
  SumH += temp[i][1];
}
printf("Average High Temperature is %2.f c\n",SumL/7);
for(int i=0;i<7;i++){
  for(int i=0;i<7;i++){
  SumH += temp[i][1];
  if(temp[i+1][0]>temp[i][0]) {
    Tmp = temp[i+1][0];
    temp [i+1][0] = temp[i][0];
    temp[i][0] = Tmp;
  }
  if(temp[i+1][1] > temp[i][1]) {
    Tmp = temp[i+1][1];
    temp[i+1][1] = temp[i][1];
    temp[i][1] = Tmp;
  }
  }
}
MidH = temp[3][0];
MidL = temp[2][1];
printf("Median High Temperature is %d c\n",MidH);
printf("Median High Temperature is %d c\n",MidL);
return 0;
}