#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
int i,j,k,l,a,b,c,d,e,f,g,h=1,m=0,n;

char s[10][10]={ {" "} ,{" one "}, {" two "}, {" three "}, {" four "},{" five "},{" six "},{" seven "},{" eight "},{" nine "}};
char t[10][10]={{""}, {" ten "},{"twenty"},{"thirty"},{"forty"},{"fifty"},{"sixty"},{"seventy"},{"eighty"},{"ninety"}  } ;
char u[10][10]={{""},{"eleven"},{"twelve"},{"thirteen"},{"fourteen"},{"fifteen"},{"sixteen"},{"seventeen"},{"eighteen"},{"nineteen"}  };

total_recall:
printf("\nenter the number");
scanf("%d",&a);

if(a==0)
{
	printf("zero");
	goto end;
}
b=a;
c=1;
g=a;
for(i=b;i>9;i=b)
{
	b=b/10;
	c++;
}

	if(c==1)
		printf(" %s ",s[a]);

	if(c==4)
	{
		f=a/1000;
		a=a%1000;
		printf(" %s thousand ",s[f]);
		if(a!=0)
		goto hello;
	 }

	if(c==5)
	{
		 a=a/1000;
		 goto again;
		 bro:
		 printf(" thousand ");
		 a=g%1000;
		 goto hii;
	 }
	if(c==3)
	{
		 hello:
		 hii:
		 f=a/100;
		 a=a%100;
		 if(f!=0)
		 printf(" %s hundred ",s[f]);
		 if(a!=0)
		 goto repeat;
	}



	if(c==2)
	{
		repeat:
		again:
		d=a/10;
		e=a%10;
		if(a%10==0)
		{
			printf(" %s ",t[d]) ;
			goto end;
		}

		if(d!=1)
		{
			printf(" %s %s",t[d],s[e]);
			goto end;
		}

		if(d==1)
		{
			printf(" %s ",u[e]);
			goto end;
		}
	}
end:
for(h=0;m<1;m++)
{
	if(c==5)
	{
		m=1;
		goto bro;
	}
}
getch();
printf("\nif u want to enter the number again press Y \nif not press any button to exit");
n=getch();
if(n=='y')
goto total_recall;
else
{
}
}
