/*
 * Program.c
 * Conversão dos 100 exercícios presentes no Program.cs fornecido.
 *
 * Compile com GCC:
 *     gcc Program.c -o Program -lm
 *
 * Por padrão, EXERCICIO = 0 abre um menu para escolher o exercício.
 * Para executar diretamente um exercício, altere EXERCICIO para 1..100.
 *
 * Observação: a conversão preserva a lógica e as mensagens do código C#
 * fornecido. Onde havia limitações/erros evidentes de indexação, a
 * implementação foi adaptada para evitar comportamento indefinido em C.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define EXERCICIO 0

void ex01(void){ printf("Hello, World!\n"); }

void ex02(void){
    int A,B,X; scanf("%d",&A); scanf("%d",&B); X=A+B;
    printf("X = %d\n",X);
}

void ex03(void){
    double pi=3.14159,raio,area; scanf("%lf",&raio);
    area=pi*raio*raio; printf("A=%.4f\n",area);
}

void ex04(void){
    int A,B,SOMA; scanf("%d",&A); scanf("%d",&B); SOMA=A+B;
    printf("SOMA = %d\n",SOMA);
}

void ex05(void){
    int A,B,PROD; scanf("%d",&A); scanf("%d",&B); PROD=A*B;
    printf("PROD = %d\n",PROD);
}

void ex06(void){
    double A,B,MEDIA; scanf("%lf",&A); scanf("%lf",&B);
    MEDIA=(A*3.5+B*7.5)/11.0; printf("MEDIA = %.5f\n",MEDIA);
}

void ex07(void){
    double A,B,C,MEDIA; scanf("%lf",&A); scanf("%lf",&B); scanf("%lf",&C);
    MEDIA=(A*2+B*3+C*5)/10.0; printf("MEDIA = %.1f\n",MEDIA);
}

void ex08(void){
    int A,B,C,D,DIFERENCA; scanf("%d",&A);scanf("%d",&B);scanf("%d",&C);scanf("%d",&D);
    DIFERENCA=A*B-C*D; printf("DIFERENCA = %d\n",DIFERENCA);
}

void ex09(void){
    int numero,horas; double valorPorHora,salario;
    scanf("%d",&numero);scanf("%d",&horas);scanf("%lf",&valorPorHora);
    salario=horas*valorPorHora;
    printf("NUMBER = %d\nSALARY = U$ %.2f\n",numero,salario);
}

void ex10(void){
    char nome[100]; double salarioFixo,vendaTotal,valorTotal;
    scanf(" %99[^\n]",nome); scanf("%lf",&salarioFixo); scanf("%lf",&vendaTotal);
    valorTotal=0.15*vendaTotal+salarioFixo; printf("TOTAL = R$ %.2f\n",valorTotal);
}

void ex11(void){
    int codigo1,numero1,codigo2,numero2; double valor1,valor2,valor;
    scanf("%d %d %lf",&codigo1,&numero1,&valor1);
    scanf("%d %d %lf",&codigo2,&numero2,&valor2);
    valor=numero1*valor1+numero2*valor2;
    printf("VALOR A PAGAR: R$ %.2f\n",valor);
}

void ex12(void){
    double raio,volume; const double pi=3.14159; scanf("%lf",&raio);
    volume=(4.0/3.0)*pi*raio*raio*raio; printf("VOLUME = %.3f\n",volume);
}

void ex13(void){
    double A,B,C; scanf("%lf %lf %lf",&A,&B,&C);
    printf("TRIANGULO: %.3f\nCIRCULO: %.3f\nTRAPEZIO: %.3f\nQUADRADO: %.3f\nRETANGULO: %.3f\n",
           A*C/2.0,3.14159*C*C,(A+B)*C/2.0,B*B,A*B);
}

void ex14(void){
    int a,b,c,maiorAB,maiorABC; scanf("%d %d %d",&a,&b,&c);
    maiorAB=(a+b+abs(a-b))/2; maiorABC=(maiorAB+c+abs(maiorAB-c))/2;
    printf("%d eh o maior\n",maiorABC);
}

void ex15(void){
    int X; double Y,Z; scanf("%d",&X);scanf("%lf",&Y); Z=X;
    printf("%.3f km/l\n",Z/Y);
}

void ex16(void){
    double x1,y1,x2,y2; scanf("%lf %lf",&x1,&y1);scanf("%lf %lf",&x2,&y2);
    printf("%.4f\n",sqrt(pow(x2-x1,2)+pow(y2-y1,2)));
}

void ex17(void){
    int km; scanf("%d",&km); printf("%d minutos\n",km*2);
}

void ex18(void){
    int horas,velocidade; double distancia;
    scanf("%d",&horas);scanf("%d",&velocidade); distancia=velocidade*horas;
    printf("%.3f\n",distancia/12.0);
}

void ex19(void){
    int n,valorDigitado,cem,cinquenta,vinte,dez,cinco,dois,um;
    scanf("%d",&n); valorDigitado=n;
    cem=n/100;n%=100; cinquenta=n/50;n%=50; vinte=n/20;n%=20;
    dez=n/10;n%=10; cinco=n/5;n%=5; dois=n/2;n%=2; um=n;
    printf("%d\n%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n",
           valorDigitado,cem,cinquenta,vinte,dez,cinco,dois,um);
}

void ex20(void){
    int s,horas,minutos,segundos; scanf("%d",&s);
    horas=s/3600; minutos=(s%3600)/60; segundos=s%60;
    printf("%d:%d:%d\n",horas,minutos,segundos);
}

void ex21(void){
    int dias,ano,mes; scanf("%d",&dias);
    ano=dias/365;dias%=365;mes=dias/30;dias%=30;
    printf("%d ano (s)\n%d mes (es)\n%d dia (s)\n",ano,mes,dias);
}

void ex22(void){
    double dinheiro; int nota100,nota50,nota20,nota10,nota5,nota2;
    int moeda1,moeda50,moeda25,moeda10,moeda5,moeda01;
    long long cent;
    scanf("%lf",&dinheiro);
    cent=(long long)llround(dinheiro*100.0);
    nota100=cent/10000;cent%=10000;nota50=cent/5000;cent%=5000;
    nota20=cent/2000;cent%=2000;nota10=cent/1000;cent%=1000;
    nota5=cent/500;cent%=500;nota2=cent/200;cent%=200;
    moeda1=cent/100;cent%=100;moeda50=cent/50;cent%=50;
    moeda25=cent/25;cent%=25;moeda10=cent/10;cent%=10;
    moeda5=cent/5;cent%=5;moeda01=(int)cent;
    printf("NOTAS:\n%d nota(s) de R$ 100.00\n%d nota(s) de R$ 50.00\n%d nota(s) de R$ 20.00\n%d nota(s) de R$ 10.00\n%d nota(s) de R$ 5.00\n%d nota(s) de R$ 2.00\nMOEDAS:\n%d moeda(s) de R$ 1.00\n%d moeda(s) de R$ 0.50\n%d moeda(s) de R$ 0.25\n%d moeda(s) de R$ 0.10\n%d moeda(s) de R$ 0.05\n%d moeda(s) de R$ 0.01\n",
           nota100,nota50,nota20,nota10,nota5,nota2,moeda1,moeda50,moeda25,moeda10,moeda5,moeda01);
}

void ex23(void){
    int A,B,C,D;scanf("%d %d %d %d",&A,&B,&C,&D);
    if(B>C&&D>A&&C+D>A+B&&C>0&&D>0&&A%2==0)printf("valores aceitos\n");
    else printf("valores nao aceitos\n");
}

void ex24(void){
    double A,B,C,delta;scanf("%lf %lf %lf",&A,&B,&C);
    delta=B*B-4*A*C;
    if(A==0||delta<0)printf("Impossivel calcular\n");
    else printf("R1 = %.5f\nR2 = %.5f\n",(-B+sqrt(delta))/(2*A),(-B-sqrt(delta))/(2*A));
}

void ex25(void){
    double n;scanf("%lf",&n);
    if(n>0&&n<=25)printf("Intervalo [0,25]\n");
    else if(n>25&&n<=50)printf("Intervalo (25,50]\n");
    else if(n>50&&n<=75)printf("Intervalo (50,75]\n");
    else if(n>75&&n<=100)printf("Intervalo (75,100]\n");
    else printf("Fora de intervalo\n");
}

void ex26(void){
    int codigo,q;double total=0;scanf("%d %d",&codigo,&q);
    switch(codigo){
        case 1:total=4.00*q;break;case 2:total=4.50*q;break;case 3:total=5.00*q;break;
        case 4:total=2.00*q;break;case 5:total=1.50*q;break;
        default:printf("Valor inválido\n");return;
    } printf("Total: R$ %.2f\n",total);
}

void ex27(void){
    double n1,n2,n3,n4,media,exame,final;
    scanf("%lf %lf %lf %lf",&n1,&n2,&n3,&n4);
    media=trunc(n1*2+n2*3+n3*4+n4)/10.0;
    printf("Media: %.1f\n",media);
    if(media>=7)printf("Aluno aprovado.\n");
    else if(media>=5){
        printf("Aluno em exame.\n");scanf("%lf",&exame);printf("Nota do exame: %.1f\n",exame);
        final=(media+exame)/2.0;
        if(final>=5)printf("Aluno aprovado.\n");
        else printf("Aluno reprovado.\n");
        printf("Media final: %.1f\n",final);
    }else printf("Aluno reprovado.\n");
}

void ex28(void){
    double x,y;scanf("%lf %lf",&x,&y);
    if(x>0&&y>0)printf("Q1\n");else if(x<0&&y>0)printf("Q2\n");
    else if(x<0&&y<0)printf("Q3\n");else if(x>0&&y<0)printf("Q4\n");
    else if(x==0&&y!=0)printf("Eixo Y\n");else if(x!=0&&y==0)printf("Eixo X\n");
    else printf("Origem\n");
}

void ex29(void){
    int n[3],i,j,t;scanf("%d %d %d",&n[0],&n[1],&n[2]);
    int original[3]={n[0],n[1],n[2]};
    for(i=0;i<3;i++)for(j=i+1;j<3;j++)if(n[i]>n[j]){t=n[i];n[i]=n[j];n[j]=t;}
    for(i=0;i<3;i++)printf("%d\n",n[i]);printf("\n");
    for(i=0;i<3;i++)printf("%d\n",original[i]);
}

void ex30(void){
    double a,b,c;scanf("%lf %lf %lf",&a,&b,&c);
    if(a+b>c&&a+c>b&&b+c>a)printf("Perimetro: %.1f\n",a+b+c);
    else printf("Area: %.1f\n",(a+b)*c/2.0);
}

void ex31(void){
    int a,b;scanf("%d %d",&a,&b);
    if(a%b==0||b%a==0)printf("Sao Multiplos\n");else printf("Nao sao Multiplos\n");
}

void ex32(void){
    double a,b,c,t;scanf("%lf %lf %lf",&a,&b,&c);
    if(a<b){t=a;a=b;b=t;}if(a<c){t=a;a=c;c=t;}if(b<c){t=b;b=c;c=t;}
    if(a>=b+c)printf("NAO FORMA TRIANGULO\n");
    else{
        if(fabs(a*a-(b*b+c*c))<1e-9)printf("TRIANGULO RETANGULO\n");
        else if(a*a>b*b+c*c)printf("TRIANGULO OBTUSANGULO\n");
        else printf("TRIANGULO ACUTANGULO\n");
        if(a==b&&b==c)printf("TRIANGULO EQUILATERO\n");
        else if(a==b||b==c||a==c)printf("TRIANGULO ISOSCELES\n");
    }
}

void ex33(void){
    int a,b;scanf("%d %d",&a,&b);
    if(a>b)printf("O JOGO DUROU %d HORA(S)\n",b+24-a);
    else if(a<b)printf("O JOGO DUROU %d HORA(S)\n",b-a);
    else printf("O JOGO DUROU 24 HORA(S)\n");
}

void ex34(void){
    int ha,ma,hb,mb,temp;scanf("%d %d %d %d",&ha,&ma,&hb,&mb);
    temp=hb*60+mb-(ha*60+ma);if(temp<=0)temp+=1440;
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",temp/60,temp%60);
}

void ex35(void){
    double s,p,n;scanf("%lf",&s);
    if(s>0&&s<=400)p=15;else if(s<=800)p=12;else if(s<=1200)p=10;else if(s<=2000)p=7;else p=4;
    n=s*(1+p/100);printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %.0f %%\n",n,n-s,p);
}

void ex36(void){
    char a[30],b[30],c[30];scanf("%29s%29s%29s",a,b,c);
    if(strcmp(a,"vertebrado")==0){
        if(strcmp(b,"ave")==0){if(strcmp(c,"carnivoro")==0)printf("aguia\n");else printf("pomba\n");}
        else {if(strcmp(c,"onivoro")==0)printf("homem\n");else printf("vaca\n");}
    }else{
        if(strcmp(b,"inseto")==0){if(strcmp(c,"hematofago")==0)printf("pulga\n");else printf("lagarta\n");}
        else {if(strcmp(c,"hematofago")==0)printf("sanguessuga\n");else printf("minhoca\n");}
    }
}

void ex37(void){
    int ddd;scanf("%d",&ddd);
    switch(ddd){
        case 61:printf("Brasilia\n");break;case 71:printf("Salvador\n");break;case 11:printf("Sao Paulo\n");break;
        case 21:printf("Rio de Janeiro\n");break;case 32:printf("Juiz de Fora\n");break;case 19:printf("Campinas\n");break;
        case 27:printf("Vitoria\n");break;case 31:printf("Belo Horizonte\n");break;default:printf("DDD nao cadastrado\n");
    }
}

void ex38(void){
    double s;scanf("%lf",&s);
    if(s<=2000)printf("Isento\n");
    else if(s<=3000)printf("R$ %.2f\n",(s-2000)*.08);
    else if(s<=4500)printf("R$ %.2f\n",1000*.08+(s-3000)*.18);
    else printf("R$ %.2f\n",1000*.08+1500*.18+(s-4500)*.28);
}

void ex39(void){
    int m;scanf("%d",&m);
    const char *meses[]={"","January","February","March","April","May","June","July","August","September","October","November","December"};
    if(m>=1&&m<=12)printf("%s\n",meses[m]);
}

void ex40(void){ for(int i=1;i<=100;i++)if(i%2==0)printf("%d\n",i); }

void ex41(void){
    int cont=0;double x;for(int i=0;i<6;i++){scanf("%lf",&x);if(x>0)cont++;}
    printf("%d valores positivos\n",cont);
}

void ex42(void){
    int d1,h1,m1,s1,d2,h2,m2,s2;
    char lixo[10];
    scanf("Dia %d",&d1);scanf("%d : %d : %d",&h1,&m1,&s1);
    scanf("Dia %d",&d2);scanf("%d : %d : %d",&h2,&m2,&s2);
    (void)lixo;
    int inicio=d1*86400+h1*3600+m1*60+s1,fim=d2*86400+h2*3600+m2*60+s2,d=fim-inicio;
    printf("%d dia(s)\n",d/86400);d%=86400;printf("%d hora(s)\n",d/3600);d%=3600;
    printf("%d minuto(s)\n",d/60);printf("%d segundo(s)\n",d%60);
}

void ex43(void){
    double soma=0,n;int cont=0;for(int i=0;i<6;i++){scanf("%lf",&n);if(n>0){soma+=n;cont++;}}
    printf("%d valores positivos\n%.1f\n",cont,soma/cont);
}

void ex44(void){
    int cont=0,n;for(int i=0;i<5;i++){scanf("%d",&n);if(n%2==0)cont++;}
    printf("%d valores pares\n",cont);
}

void ex45(void){
    int par=0,impar=0,pos=0,neg=0,n;
    for(int i=0;i<5;i++){scanf("%d",&n);if(n%2==0)par++;else impar++;if(n>0)pos++;if(n<0)neg++;}
    printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n",par,impar,pos,neg);
}

void ex46(void){
    int n;scanf("%d",&n);for(int i=1;i<=n;i++)if(i%2)printf("%d\n",i);
}

void ex47(void){
    int n;scanf("%d",&n);for(int i=n;i<=n+11;i++)if(i%2)printf("%d\n",i);
}

void ex48(void){
    int x,y,soma=0;scanf("%d %d",&x,&y);
    if(x>y){int t=x;x=y;y=t;}for(int i=x+1;i<y;i++)if(i%2)soma+=i;
    printf("%d\n",soma);
}

void ex49(void){
    int n,x,in=0,out=0;scanf("%d",&n);for(int i=0;i<n;i++){scanf("%d",&x);if(x>=10&&x<=20)in++;else out++;}
    printf("%d in\n%d out\n",in,out);
}

void ex50(void){
    int n;scanf("%d",&n);for(int i=1;i<=n;i++)if(i%2==0)printf("%d ^ 2 = %.0f\n",i,pow(i,2));
}

void ex51(void){
    int n,x;scanf("%d",&n);for(int i=0;i<n;i++){scanf("%d",&x);
    if(x==0)printf("NULL\n");else if(x%2==0&&x>0)printf("EVEN POSITIVE\n");
    else if(x%2==0)printf("EVEN NEGATIVE\n");else if(x>0)printf("ODD POSITIVE\n");else printf("ODD NEGATIVE\n");}
}

void ex52(void){
    int n;scanf("%d",&n);for(int i=1;i<=10000;i++)if(i%n==2)printf("%d\n",i);
}

void ex53(void){
    int n;scanf("%d",&n);for(int i=1;i<=10;i++)printf("%d x %d = %d\n",i,n,i*n);
}

void ex54(void){
    int n;double a,b,c;scanf("%d",&n);for(int i=0;i<n;i++){scanf("%lf %lf %lf",&a,&b,&c);printf("%.1f\n",(a*2+b*3+c*5)/10.0);}
}

void ex55(void){
    int maior=0,posicao=0,x;for(int i=1;i<=100;i++){scanf("%d",&x);if(x>maior){maior=x;posicao=i;}}
    printf("%d\n%d\n",maior,posicao);
}

void ex56(void){
    int n,soma=0,coelho=0,sapo=0,rato=0,q;char tipo;
    scanf("%d",&n);for(int i=0;i<n;i++){scanf("%d %c",&q,&tipo);soma+=q;if(tipo=='R')rato+=q;else if(tipo=='S')sapo+=q;else if(tipo=='C')coelho+=q;}
    printf("Total: %d cobaias\nTotal de coelhos: %d\nTotal de ratos: %d\nTotal de sapos: %d\nPercentual de coelhos: %.2f %%\nPercentual de ratos: %.2f %%\nPercentual de sapos: %.2f %%\n",
           soma,coelho,rato,sapo,100.0*coelho/soma,100.0*rato/soma,100.0*sapo/soma);
}

void ex57(void){int j=60;for(int i=1;j>=0;i+=3,j-=5)printf("I=%d J=%d\n",i,j);}

void ex58(void){
    int j;for(int i=1;i<10;i+=2){j=7;for(int x=0;x<3;x++)printf("I=%d J=%d\n",i,j--);}
}

void ex59(void){
    int j=7;for(int i=1;i<10;i+=2){for(int x=0;x<3;x++)printf("I=%d J=%d\n",i,j--);j+=5;}
}

void ex60(void){
    /* Evita acumulação de erro de ponto flutuante usando 0..10 inteiros. */
    for(int k=0;k<=10;k++){
        double i=k/5.0,j1=1+i,j2=2+i,j3=3+i;
        if(k%5==0)printf("I=%.0f J=%.0f\nI=%.0f J=%.0f\nI=%.0f J=%.0f\n",i,j1,i,j2,i,j3);
        else printf("I=%.1f J=%.1f\nI=%.1f J=%.1f\nI=%.1f J=%.1f\n",i,j1,i,j2,i,j3);
    }
}

void ex61(void){
    int n,a,b;scanf("%d",&n);
    for(int k=0;k<n;k++){int soma=0;scanf("%d %d",&a,&b);if(a>b){int t=a;a=b;b=t;}
    for(int x=a+1;x<b;x++)if(x%2)soma+=x;printf("%d\n",soma);}
}

void ex62(void){
    int x,y;while(scanf("%d %d",&x,&y)==2&&x>0&&y>0){
        int a=x,b=y,soma=0;if(a>b){int t=a;a=b;b=t;}
        for(int i=a;i<=b;i++){printf("%d ",i);soma+=i;}printf("Sum=%d\n",soma);
    }
}

void ex63(void){
    int x,y;while(scanf("%d %d",&x,&y)==2&&x!=y)printf("%s\n",x>y?"Decrescente":"Crescente");
}

void ex64(void){
    int senha;scanf("%d",&senha);while(senha!=2002){printf("Senha Invalida\n");scanf("%d",&senha);}
    printf("Acesso Permitido\n");
}

void ex65(void){
    int x,y;while(scanf("%d %d",&x,&y)==2&&x!=0&&y!=0){
        if(x>0&&y>0)printf("primeiro\n");else if(x<0&&y>0)printf("segundo\n");
        else if(x<0&&y<0)printf("terceiro\n");else printf("quarto\n");
    }
}

void ex66(void){
    int n,x,y;scanf("%d",&n);for(int i=0;i<n;i++){scanf("%d %d",&x,&y);
    if(y==0)printf("divisao impossivel\n");else printf("%.1f\n",(double)x/y);}
}

void ex67(void){
    double n1,n2;scanf("%lf",&n1);while(n1<.10||n1>10){printf("nota invalida\n");scanf("%lf",&n1);}
    scanf("%lf",&n2);while(n2<.10||n2>10){printf("nota invalida\n");scanf("%lf",&n2);}
    printf("media = %.2f\n",(n1+n2)/2);
}

void ex68(void){
    int x=0;double n1,n2;
    do{
        scanf("%lf",&n1);while(n1<.10||n1>10){printf("nota invalida\n");scanf("%lf",&n1);}
        scanf("%lf",&n2);while(n2<.10||n2>10){printf("nota invalida\n");scanf("%lf",&n2);}
        printf("media = %.2f\n",(n1+n2)/2);printf("novo calculo (1-sim 2-nao)\n");scanf("%d",&x);
        while(x<1||x>2){printf("novo calculo (1-sim 2-nao)\n");scanf("%d",&x);}
    }while(x==1);
}

void ex69(void){
    int x=0,q=0,inter=0,gremio=0,empate=0,g1,g2;
    do{q++;scanf("%d %d",&g1,&g2);if(g1>g2)inter++;else if(g2>g1)gremio++;else empate++;
        printf("Novo grenal (1-sim 2-nao)\n");scanf("%d",&x);
    }while(x==1);
    printf("%d grenais\nInter:%d\nGremio:%d\nEmpates:%d\n",q,inter,gremio,empate);
    if(inter>gremio)printf("Inter venceu mais\n");else if(gremio>inter)printf("Gremio venceu mais\n");else printf("Nao houve vencedor\n");
}

void ex70(void){
    int x,y,soma=0;scanf("%d %d",&x,&y);if(x>y){int t=x;x=y;y=t;}
    for(int i=x;i<=y;i++)if(i%13!=0)soma+=abs(i);printf("%d\n",soma);
}

void ex71(void){
    int x,y;scanf("%d %d",&x,&y);if(x>y){int t=x;x=y;y=t;}
    for(int i=x+1;i<y;i++)if(i%5==2||i%5==3)printf("%d\n",i);
}

void ex72(void){
    int n,alcool=0,gasolina=0,diesel=0;do{scanf("%d",&n);while(n<1||n>4)scanf("%d",&n);
    if(n==1)alcool++;else if(n==2)gasolina++;else if(n==3)diesel++;}while(n!=4);
    printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n",alcool,gasolina,diesel);
}

void ex73(void){
    int n,x=1,y=3;scanf("%d",&n);for(int i=0;i<n;i++){while(x<=y)printf("%d ",x++);printf("PUM\n");x++;y+=4;}
}

void ex74(void){
    int n;scanf("%d",&n);for(int i=1;i<=n;i++)printf("%d %.0f %.0f\n",i,pow(i,2),pow(i,3));
}

void ex75(void){
    int n;scanf("%d",&n);for(int i=1;i<=n;i++){
        printf("%d %.0f %.0f\n",i,pow(i,2),pow(i,3));
        printf("%d %.0f %.0f\n",i,pow(i,2)+1,pow(i,3)+1);
    }
}

void ex76(void){
    int x,y;scanf("%d %d",&x,&y);int valor=1;
    for(int linha=0;valor<=y;linha++){for(int col=0;col<x&&valor<=y;col++,valor++){
        if(col)printf(" ");printf("%d",valor);}printf("\n");}
}

void ex77(void){
    int x;while(scanf("%d",&x)==1&&x!=0){for(int i=1;i<=x;i++){if(i>1)printf(" ");printf("%d",i);}printf("\n");}
}

void ex78(void){
    int A,N,soma=0,x;scanf("%d",&A);
    /* O C# procurava o primeiro valor positivo entre os demais valores lidos.
       Aqui usamos leitura até encontrar esse valor, sem acesso fora do vetor. */
    while(scanf("%d",&x)==1){if(x>0){N=x;break;}}
    for(int i=0;i<N;i++)soma+=A+i;printf("%d\n",soma);
}

void ex79(void){
    int X,Z,soma=0,contador=0;scanf("%d",&X);scanf("%d",&Z);
    while(Z<=X)scanf("%d",&Z);
    for(int i=X;soma<=Z;i++){soma+=i;contador++;}printf("%d\n",contador);
}

void ex80(void){
    int n;scanf("%d",&n);long long a=0,b=1,prox;
    for(int i=0;i<n;i++){if(i<2)printf("%d",i);else{prox=a+b;a=b;b=prox;printf("%lld",prox);}
        if(i<n-1)printf(" ");}printf("\n");
}

void ex81(void){
    int n;long long fat=1;scanf("%d",&n);for(int i=1;i<=n;i++)fat*=i;printf("%lld\n",fat);
}

void ex82(void){
    int idade,soma=0,cont=0;scanf("%d",&idade);while(idade>0){soma+=idade;cont++;scanf("%d",&idade);}
    printf("%.2f\n",(double)soma/cont);
}

void ex83(void){
    double S=1;for(int i=2;i<=100;i++)S+=1.0/i;printf("%.2f\n",S);
}

void ex84(void){
    double S=0,numerador=1,denominador=1;for(int i=0;i<20;i++){S+=numerador/denominador;numerador+=2;denominador*=2;}
    printf("%.2f\n",S);
}

void ex85(void){
    int n;scanf("%d",&n);for(int i=1;i<=n;i++)if(n%i==0)printf("%d\n",i);
}

void ex86(void){
    int n,a,b;scanf("%d",&n);for(int k=0;k<n;k++){scanf("%d %d",&a,&b);int soma=0,cont=0;
    for(int x=a;cont<b;x++)if(x%2!=0){soma+=x;cont++;}printf("%d\n",soma);}
}

void ex87(void){
    int x;scanf("%d",&x);while(x!=0){int soma=0,cont=0;for(int i=x;cont<5;i++)if(i%2==0){soma+=i;cont++;}
    printf("%d\n",soma);scanf("%d",&x);}
}

void ex88(void){
    int teste;scanf("%d",&teste);for(int k=0;k<teste;k++){int PA,PB,anos=0;double G1,G2;
    scanf("%d %d %lf %lf",&PA,&PB,&G1,&G2);
    while(PA<=PB&&anos<=100){PA+=(int)(PA*G1/100.0);PB+=(int)(PB*G2/100.0);anos++;}
    if(anos>100)printf("Mais de 1 seculo.\n");else printf("%d anos.\n",anos);}
}

void ex89(void){
    int n,x;scanf("%d",&n);for(int k=0;k<n;k++){scanf("%d",&x);int soma=0;
    for(int y=1;y<x;y++)if(x%y==0)soma+=y;
    if(soma==x)printf("%d eh perfeito\n",x);else printf("%d nao eh perfeito\n",x);}
}

void ex90(void){
    int teste,x;scanf("%d",&teste);for(int k=0;k<teste;k++){scanf("%d",&x);int primo=x>1;
    for(int d=2;d*d<=x;d++)if(x%d==0){primo=0;break;}
    if(primo)printf("%d eh primo\n",x);else printf("%d nao eh primo\n",x);}
}

void ex91(void){
    int x[10];for(int i=0;i<10;i++){scanf("%d",&x[i]);if(x[i]<=0)x[i]=1;printf("X[%d] = %d\n",i,x[i]);}
}

void ex92(void){
    int n[10],num;scanf("%d",&num);for(int i=0;i<10;i++){n[i]=num;printf("N[%d] = %d\n",i,n[i]);num*=2;}
}

void ex93(void){
    double A[100];for(int i=0;i<100;i++){scanf("%lf",&A[i]);if(A[i]<=10)printf("A[%d] = %.1f\n",i,A[i]);}
}

void ex94(void){
    int N[20];for(int i=0;i<20;i++)scanf("%d",&N[i]);
    for(int i=0,j=19;i<j;i++,j--){int t=N[i];N[i]=N[j];N[j]=t;}
    for(int i=0;i<20;i++)printf("N[%d] = %d\n",i,N[i]);
}

void ex95(void){
    int T,N;scanf("%d",&T);for(int k=0;k<T;k++){unsigned long long a=0,b=1,f=0;scanf("%d",&N);
    for(int i=0;i<=N;i++){if(i<2)f=i;else{f=a+b;a=b;b=f;}}printf("Fib(%d) = %llu\n",N,f);}
}

void ex96(void){
    int N[1000],T,x=0;scanf("%d",&T);
    for(int i=0;i<1000;i++){if(x<T){N[i]=x;printf("N[%d] = %d\n",i,N[i]);x++;}if(x==T)x=0;}
}

void ex97(void){
    double N[100],x;scanf("%lf",&x);for(int i=0;i<100;i++){N[i]=x;
    double v=trunc(N[i]*10000.0)/10000.0;printf("N[%d] = %.4f\n",i,v);x/=2.0;}
}

void ex98(void){
    int Par[5],Impar[5],ip=0,ii=0,n;
    for(int i=0;i<15;i++){scanf("%d",&n);
        if(n%2==0){Par[ip++]=n;if(ip==5){for(int j=0;j<5;j++)printf("par[%d] = %d\n",j,Par[j]);ip=0;}}
        else{Impar[ii++]=n;if(ii==5){for(int j=0;j<5;j++)printf("impar[%d] = %d\n",j,Impar[j]);ii=0;}}
    }
    for(int j=0;j<ii;j++)printf("impar[%d] = %d\n",j,Impar[j]);
    for(int j=0;j<ip;j++)printf("par[%d] = %d\n",j,Par[j]);
}

void ex99(void){
    int n,menor,posicao=0;scanf("%d",&n);int *x=malloc(n*sizeof(int));if(!x)return;
    for(int i=0;i<n;i++)scanf("%d",&x[i]);menor=x[0];
    for(int i=0;i<n;i++)if(x[i]<menor){menor=x[i];posicao=i;}
    printf("Menor valor: %d\nPosicao: %d\n",menor,posicao);free(x);
}

void ex100(void){
    double M[12][12],soma=0;int L;char T;
    scanf("%d",&L);scanf(" %c",&T);
    for(int l=0;l<12;l++)for(int c=0;c<12;c++)scanf("%lf",&M[l][c]);
    if(T=='S'){for(int c=0;c<12;c++)soma+=M[L][c];printf("%.1f\n",soma);}
    else if(T=='M'){for(int c=0;c<12;c++)soma+=M[L][c];printf("%.1f\n",soma/12.0);}
}

void ex101(void)
{

}

void ex102(void)
{
    char O;
    float M[12][12];
    float soma = 0, media = 0;
    int contador = 0;

    scanf("%c", &O);

    for(int i = 0; i < 12; i++)
        for(int j = 0; j < 12; j++)
            scanf("%f", M[i][j]);

    for(int i = 0; i < 12; i++)
    {
        for(int j = 0; j < 12; j++)
        {
            soma += M[i][j];
            contador++;
        }
    }
    media = soma / contador;

    if(O == 'S')
        printf("%.1f\n",soma);
    else if(O == 'M')
        printf("%.1f\n", media);
    
}

void ex103(void)
{
    char operacao;
    float M[12][12], soma = 0.0f, contador = 0.0f;

    scanf("%c", &operacao);

    for(int i = 0; i < 12; i++)
        for(int j = 0; j < 12; j++)
            scanf("%f", &M[i][j]);

    for(int i = 1; i < 12; i++)
    {
        for(int j = 0; j < i; j++)
        {
            soma += M[i][j];
            contador++;
        }

    }

    switch (operacao)
    {
    case 'S': printf("%.1f\n", soma); break;
    case 'M': printf("%.1f\n", soma / contador); break;
    default: break;
    }
}

void ex104(void)
{
    char operacao;
    float M[12][12], soma = 0.0f, contador = 0.0f;

    scanf("%c", &operacao);

    for(int i = 0; i < 12; i++)
        for(int j = 0; j < 12; j++)
            scanf("%f", &M[i][j]);

    for(int i = 0; i < 11; i++)
    {
        for(int j = 0; 11 - i; j++)
        {
            soma += M[i][j];
            contador++;
        }

    }

    switch (operacao)
    {
    case 'S': printf("%.1f\n", soma); break;
    case 'M': printf("%.1f\n", soma / contador); break;
    default: break;
    }
}

void ex105(void)
{
    char operacao;
    float M[12][12], soma = 0.0f, contador = 0.0f;
    int aux = 0;
    scanf("%c", &operacao);

    for(int i = 0; i < 12; i++)
        for(int j = 0; j < 12; j++)
            scanf("%f", &M[i][j]);

    for(int i = 11; i > 0; i--)
    {
        for(int j = 1 + aux; j < 12;j++)
        {
            soma += M[i][j];
            contador++;
        }
        aux++;

    }

    switch (operacao)
    {
    case 'S': printf("%.1f\n", soma); break;
    case 'M': printf("%.1f\n", soma / contador); break;
    default: break;
    }
}

void ex106(void)
{
    char operacao;
    double M[12][12], soma = 0.0f; 
    int contador = 0;
    scanf("%c", &operacao);

    for(int i = 0; i < 12; i++)
        for(int j = 0; j < 12; j++)
            scanf("%lf", &M[i][j]);

    for(int i = 0; i < 5; i++)
    {
        for(int j = 1 + i; j < 11 - i; j++)
        {
            soma += M[i][j];
            contador++;
        }

    }

    switch (operacao)
    {
    case 'S': printf("%.1lf\n", soma); break;
    case 'M': printf("%.1lf\n", soma / contador); break;
    default: break;
    }
}

void ex107(void)
{
    char operacao;
    double M[12][12], soma = 0.0f; 
    int contador = 0, aux = 0;
    scanf("%c", &operacao);

    for(int i = 0; i < 12; i++)
        for(int j = 0; j < 12; j++)
            scanf("%lf", &M[i][j]);

    for(int i = 11; i > 6; i--)
    {
        for(int j = 1 + aux; j < 11 - aux; j++)
        {
            soma += M[i][j];
            contador++;
        }
        aux++;
    }

    switch (operacao)
    {
    case 'S': printf("%.1lf\n", soma); break;
    case 'M': printf("%.1lf\n", soma / contador); break;
    default: break;
    }
}

void ex108(void)
{
    char operacao;
    double M[12][12], soma = 0.0f; 
    int contador = 0, aux = 0;
    scanf("%c", &operacao);

    for(int i = 0; i < 12; i++)
        for(int j = 0; j < 12; j++)
            scanf("%lf", &M[i][j]);

    for(int i = 0; i < 5; i++)
    {
        for(int j = 1 + aux; j < 11 - aux; j++)
        {
            soma += M[j][i];
            contador++;
        }
        aux++;
    }

    switch (operacao)
    {
    case 'S': printf("%.1lf\n", soma); break;
    case 'M': printf("%.1lf\n", soma / contador); break;
    default: break;
    }
}

void ex109(void)
{
    char operacao;
    double M[12][12], soma = 0.0f; 
    int contador = 0, aux = 0;

    scanf("%c", &operacao);

    for(int i = 0; i < 12; i++)
        for(int j = 0; j < 12; j++)
            scanf("%lf", &M[i][j]);

    for(int i = 11; i > 6; i--)
    {
        for(int j = 1 + aux; j < 11 - aux; j++)
        {
            soma += M[j][i];
            contador++;
        }
        aux++;
    }

    switch (operacao)
    {
    case 'S': printf("%.1lf\n", soma); break;
    case 'M': printf("%.1lf\n", soma / contador); break;
    default: break;
    }
}

void ex110(void)
{
    // int N, aux = 1;

    // do
    // {
    //     scanf("%d", &N);

    //     if(N == 0)
    //         break;
        
    //     int M[N][N];



        
                
    // }while(1);

    int n = 10;

    for(int i = 0; i < n ; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(i == 0 ||i == n - 1 || j == 0 || j == n - 1)
                printf("* ");
            else   
                printf("  ");
        }
        printf("\n");
    }
}

typedef void (*Funcao)(void);

void menu(void){
    const char *nomes[200]={
        "hello world","extremamente básico","área do circulo","soma simples","produto simples",
        "média 1","media 2","diferença","salário","salário com bônus","cálculo simples","esfera",
        "área","o maior","consumo","distância entre dois pontos","distância","gasto de combustível",
        "cédulas","conversão de tempo","idade em dias","notas e moedas","teste de seleção 1",
        "formula de bhaskara","intervalo","lanche","media3","coordenadas de um ponto","sort simples",
        "triângulo","múltiplo","tipos de triangulo","tempo de jogo","tempo de jogo com minutos",
        "aumento de salário","animal","ddd","imposto de renda","mês","numeros pares","numeros positivos",
        "tempo de um evento","positivos e média","pares entre cinco numeros","pares, impares, positivos e negativos",
        "numeros impares","seis numeros impares","soma de impares consecutivos","intervalo 2","quadrado de pares",
        "par ou impar","resto2","tabuada","media ponderada","maior e posição","experiencias","sequencia ij1",
        "sequencia ij2","sequencia ij3","sequencia ij4","soma de impares consecutivos II","sequencia de numeros e soma",
        "crescente e decrescente","senha fixa","quadrante","dividindo x por y","validação de nota",
        "varias notas com validação","grenais","multiplos de 13","resto da divisão","tipo de combustivel","pum",
        "quadrado ao cubo","sequencia logica","sequencia logica 2","sequencias crescentes","somando inteiros consecutivos",
        "ultrapassando z","fibonacci facil","fatorial simples","idades","sequencia s","sequencia s II","divisores",
        "soma de impares consecutivos III","soma de pares consecutivos","crescimento populacional","numero perfeito",
        "numero primo","substituição em vetorI","preenchimento de vetorI","seleção em vetor I","troca em vetor I",
        "fibonacci em vetor","preenchimento de vetor II","preenchimento de vetor III","preenchimento de vetor IV",
        "menor e posição","linha na matriz","Coluna na Martiz","Acima da Diagonal Principal","Abaixo da Diagonal Principal",
        "Acima da Diagonal Secundaria","Abaixo da Diagonal Secundaria","Area Superior","Area Inferior","Area Esquerda",
        "Area Direita","Matriz Quadrada I"
    };
    int quantidade = 0;

    while (nomes[quantidade] != NULL) {
        quantidade++;
    }
        for(int i=0;i<quantidade;i++)printf("%3d - %s\n",i+1,nomes[i]);
    }

int main(void){
    Funcao funcoes[200]={
        ex01,ex02,ex03,ex04,ex05,ex06,ex07,ex08,ex09,ex10,
        ex11,ex12,ex13,ex14,ex15,ex16,ex17,ex18,ex19,ex20,
        ex21,ex22,ex23,ex24,ex25,ex26,ex27,ex28,ex29,ex30,
        ex31,ex32,ex33,ex34,ex35,ex36,ex37,ex38,ex39,ex40,
        ex41,ex42,ex43,ex44,ex45,ex46,ex47,ex48,ex49,ex50,
        ex51,ex52,ex53,ex54,ex55,ex56,ex57,ex58,ex59,ex60,
        ex61,ex62,ex63,ex64,ex65,ex66,ex67,ex68,ex69,ex70,
        ex71,ex72,ex73,ex74,ex75,ex76,ex77,ex78,ex79,ex80,
        ex81,ex82,ex83,ex84,ex85,ex86,ex87,ex88,ex89,ex90,
        ex91,ex92,ex93,ex94,ex95,ex96,ex97,ex98,ex99,ex100,
        ex101,ex102,ex103,ex104,ex105,ex106,ex107,ex108,ex109,
        ex110
    };

#if EXERCICIO >= 1 && EXERCICIO <= 200
    funcoes[EXERCICIO-1]();
#else
    int opcao;
    menu();
    printf("\nEscolha o exercício: ");
    if(scanf("%d",&opcao)==1 && opcao>=1 && opcao<=200)
        funcoes[opcao-1]();
    else
        printf("Opcao invalida.\n");
#endif
    return 0;
}
