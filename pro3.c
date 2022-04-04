
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<unistd.h>



 void dcml_bni_v_fl_32(){
  double x;
 printf("donner un nbr double  ");
 scanf("%lf",&x);
 if(x>=0){
    int a;
double b;
a=x;
    b=x-a;
int i,t[23];
i=0;
while(a!=0){
    t[i]=a%2;
    a=a/2;
 i++;
}
for(int j=0;j<i/2;j++){
    int r=t[j];
    t[j]=t[i-j-1];
    t[i-j-1]=r;
}
int e=i-1+127,p[8];
int r=0;
while(e!=0){
   p[r]=e%2;
    e=e/2;
    r++;
}
int u=i;
for(int j=i;j<23;j++){
b=b*2;
int l=b;
t[u]=l;
u++;
if(l==1)
 b=b-l;
}
printf("\n");
printf("le nbr en bianair sur 32 bites est \n");
printf("0");
for(int j=7;j>=0;j--)
    printf("%d",p[j]);
for(int j=1;j<23;j++)
    printf("%d",t[j]);
 }
else{
        x=-x;
     int a;
double b;
a=x;
b=x-a;
int i,t[23];
i=0;
while(a!=0){
    t[i]=a%2;
    a=a/2;
 i++;
}
for(int j=0;j<i/2;j++){
    int r=t[j];
    t[j]=t[i-j-1];
    t[i-j-1]=r;
}
int e=i-1+127,p[8];
int r=0;
while(e!=0){
   p[r]=e%2;
    e=e/2;
    r++;
}
int u=i;
for(int j=i;j<23;j++){
b=b*2;
int l=b;
t[u]=l;
u++;
if(l==1)
 b=b-l;
}
printf("\n");
printf("le nbr en bianair sur 32 bites est \n");
printf("1");
for(int j=7;j>=0;j--)
    printf("%d",p[j]);
for(int j=1;j<23;j++)
    printf("%d",t[j]);

}
}






 void dcm_to_bn_v_f_64b(){
  double x;
 printf("donner un nbr dcml ");
 scanf("%lf",&x);
 if(x>=0){
    int a;
double b;
a=x;
b=x-a;
int i,t[52];
i=0;
while(a!=0){
    t[i]=a%2;
    a=a/2;
 i++;
}
for(int j=0;j<i/2;j++){
    int r=t[j];
    t[j]=t[i-j-1];
    t[i-j-1]=r;
}
int e=i-1+1023,p[11];
int r=0;
while(e!=0){
   p[r]=e%2;
    e=e/2;
    r++;
}
int u=i;
for(int j=i;j<54;j++){
b=b*2;
int l=b;
t[u]=l;
u++;
if(l==1)
 b=b-l;
}
printf("\n");
printf("le nbr en bianair sur 64 bites est \n");
printf("0");
for(int j=10;j>=0;j--)
    printf("%d",p[j]);
for(int j=1;j<54;j++)
    printf("%d",t[j]);
 }
else {
     x=-x;
     int a;
double b;
a=x;
b=x-a;
int i,t[54];
i=0;
while(a!=0){
    t[i]=a%2;
    a=a/2;
 i++;
}
for(int j=0;j<i/2;j++){
    int r=t[j];
    t[j]=t[i-j-1];
    t[i-j-1]=r;
}
int e=i-1+1023,p[11];
int r=0;
while(e!=0){
   p[r]=e%2;
    e=e/2;
    r++;
}
int u=i;
for(int j=i;j<54;j++){
b=b*2;
int l=b;
t[u]=l;
u++;
if(l==1)
 b=b-l;
}
printf("\n");
printf("le nbr en bianair sur 64 bites est \n");
printf("1");
for(int j=10;j>=0;j--)
    printf("%d",p[j]);
for(int j=1;j<54;j++)
    printf("%d",t[j]);
}
 }








 void bn_32_b_to_dcml(){
  int uu=7,ss=0;
  printf("donner 32 bites du nmb\n");
  printf("\n");
  int pp[32],ii;
  for(int ii=0;ii<32;ii++){
    printf("donner le %d eme bit\n",ii+1);
    scanf("%d",pp+ii);
    while(pp[ii]!=0 && pp[ii]!=1){
    printf("attention! donne le eme %d bit\n",ii+1);
    scanf("%d",pp+ii);
    }
    }

    printf("\n");
    printf("le nbr que tu saisis");
    printf("\n");
    for(int i=0;i<32;i++)
    printf("%d",pp[i]);

     printf("\n");
     for(int jj=1;jj<=8;jj++){
     ss=ss+pp[jj]*pow(2,uu);
     uu--;
     }
     int a=ss-127;
     int yy[a+1],ll=1;
     for(int jj=9;jj<=9+a;jj++){
        yy[0]=1;
        yy[ll]=pp[jj];
        ll++;
     }
     int tt=0,rr=a;
     for(int jj=0;jj<=a;jj++){
        tt=tt+yy[jj]*pow(2,rr);
        rr--;
     }
double mm=0.00000;
int K=1;
for(int jj=a+9;jj<32;jj++){
    mm=mm+pp[jj]*pow(2,-K);
K++;
}
if(pp[0]==1){
        printf("-");
  printf("%lf",tt+mm);
 printf("\n");}
else{

        printf("+");
  printf("%lf",tt+mm);
 printf("\n");
}
 }












void bn_64_b_to_dcml(){
 int uu=10,ss=0;
  printf("donner 64 bites du nmb\n");
  printf("\n");
  int pp[64],ii;
  for(int ii=0;ii<64;ii++){
    printf("donner le %d eme bit\n",ii+1);
    scanf("%d",pp+ii);
  while(pp[ii]!=0 && pp[ii]!=1){
    printf("attention! donne le eme %d bit\n",ii+1);
    scanf("%d",pp+ii);
    }
    }

    printf("\n");
    printf("le nbr que tu saisis");
    printf("\n");
    for(int i=0;i<64;i++)
    printf("%d",pp[i]);

     printf("\n");
    if(pp[0]==0){
     printf("+");
     for(int jj=1;jj<=11;jj++){
     ss=ss+pp[jj]*pow(2,uu);
     uu--;
     }
     int a=ss-1023;
     int yy[a+1],ll=1;
     for(int jj=12;jj<=12+a;jj++){
        yy[0]=1;
        yy[ll]=pp[jj];
        ll++;
     }
     int tt=0,rr=a;
     for(int jj=0;jj<=a;jj++){
        tt=tt+yy[jj]*pow(2,rr);
        rr--;
     }
double mm=0.00000;
int K=1;
for(int jj=a+12;jj<64;jj++){
    mm=mm+pp[jj]*pow(2,-K);
K++;
}
  printf("%lf",tt+mm);
 printf("\n");

}
else if(pp[0]==1)
{
       printf("-");
     for(int jj=1;jj<=11;jj++){
     ss=ss+pp[jj]*pow(2,uu);
     uu--;
     }
     int a=ss-1023;
     int yy[a+1],ll=1;
     for(int jj=12;jj<=12+a;jj++){
        yy[0]=1;
        yy[ll]=pp[jj];
        ll++;
     }
     int tt=0,rr=a;
     for(int jj=0;jj<=a;jj++){
        tt=tt+yy[jj]*pow(2,rr);
        rr--;
     }
double mm=0.00000;
int K=1;
for(int jj=a+12;jj<64;jj++){
    mm=mm+pp[jj]*pow(2,-K);
K++;
}
  printf("%lf",tt+mm);
 printf("\n");
}
}







void bn_fix_to_dcml(){
printf("choisir le nbr du bit 8 or 16 or 32 or 64");
int o;
int s=0;
double d=0;
scanf("%d",&o);
int p[o],i;
for(i=0;i<o;i++){
    printf("donner le %d eme bites \n",i+1);
    scanf("%d",p+i);
    while(p[i]!=0 && p[i]!=1){
    printf("attention! donne le eme %d bit\n",i+1);
    scanf("%d",p+i);
    }
}
int u=(o/2)-1;
for(int j=1;j<=o/2;j++){
   s=s+p[j]*pow(2,u);
   u--;
}
int k=1;
for(int j=o/2+1;j<o;j++){
    d=d+p[j]*pow(2,-k);
    k++;
}
if(p[0]==1){
    printf("nmb in dcm '10' is: \n");
    printf("-");
    printf("%lf",d+s);
}
else {
    printf("nmb in dcml '10' is :\n");
    printf("+");
    printf("%lf",d+s);
}
}





void dcm_fix_to_bn(){
printf("give a nmb \n");
double z;
scanf("%lf",&z);
int a=z,i=0,*p;
double w=z-a;
p=(int*)malloc(sizeof(int));
while(a!=0){
    p[i]=a%2;
    a=a/2;
    i++;
    p=(int*)realloc(p,(i+1)*sizeof(int));

}

printf("nmb peux presente sur %d bites pour la partie entier alors les bites obssirver pour la partie fractionnel est %d  \n",i+1,i);

if(i+1<=8){
    printf("on va travailler sur 8 bites  1 bit pour signe et 4 pour partie entier \n");
    if(z>0){
      int t[8],k=i;
      t[0]=0;
      for(int j=1;j<=i;j++){
        t[j]=p[k];
        k--;
      }
      double M;
      for(int j=5;j<=7;j++){
        M=w*2;
        t[j]=M;
        if(M>=1)
            M--;
      }
      printf("nbr en binaire est \n");
      for(int j=0;j<8;j++)
            printf("%d",t[j]);
    }
    if(z<0){
        int t[8],k=i;
        t[0]=1;
        for(int j;j<=i;j++){
            t[j]=p[k];
            k=k-1;

        }
        double m;
        for(int j=1;j<=i;j++){
            m=w*2;
            t[j]=m;
            if(m>=1){
                m=m-1;
            }
        }
    }



}
else if(8<i+1 && i+1<=16){
    printf("on va travailler sur 16 bites 1 bit pour le signe et 8 bites pour la partie entier et 7 bits pour la partie fractionnel\n");







}

else if(16<i+1 && i+1<=32){
    printf("on va travailler sur 32 bites ");
}
else {
      printf("on va travailler sur 64 bites\n");
}






}



















 main(){

printf("if u wanna transfert from dcml to binary then tap 1 \n");
printf("if u wanna transfert from binary to dcml then tap 2 \n");
int r;
scanf("%d",&r);
if(r==1){
  printf(" if u wanna work with 32 bit virgule flottate then tap 1\n ");
  printf("if u wanna work with 64 bit virgule flottate then tap 2\n");
  printf("if u wanna work with virgule fix then tap 3");
  int u;
  scanf("%d",&u);
  if(u==1)
   dcml_bni_v_fl_32();
  else if(u==2)
    dcm_to_bn_v_f_64b();
  else
    dcm_fix_to_bn();
}

else if(r==2){
   printf(" if u wanna work with 32 bit virgule flottate then tap 1\n ");
  printf("if u wanna work with 64 bit virgule flottate then tap 2\n");
  printf("if u wanna work with virgule fix then tap 3");
  int k;
  scanf("%d",&k);
  if(k==1)
        bn_32_b_to_dcml();
  else if(k==2)
    bn_64_b_to_dcml();
  else
 bn_fix_to_dcml();

}



}







