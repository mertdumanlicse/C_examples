#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <time.h>
void Transpoze(int,int);
void Addition(int,int);
void Multiplacation(int,int,int,int);

int main(){
	
srand (time(NULL) ) ;
int operation;
printf("Please,enter the process you want to do.\n");
printf("Enter '1' for do Transpose.\n");
printf("Enter '2' for do Addition.\n");
printf("Enter '3' for do Multiplication.\n");
scanf("%d",&operation);

switch(operation)
{
	case 1:
		{
		int x,y;
		Transpoze(x,y);
		break;
		}
		
	case 2:
		{
		int x,y;
		Addition(x,y);
		break;
		}
		
	case 3:
		{
		int x,y,z,t;
		Multiplacation(x,y,z,t);		
		break;
		}
		
	default:
		{
		printf("Please,enter one of the proper numbers.");
		break;
		}
}
return 0;}

//-----------------------------------------------------------------------------------------------------------------------

void Transpoze(int x,int y)
{
	printf("Enter the dimensions of the matrix you want to create.\n");
	int a1,b1;
	scanf("%d",&a1);
	scanf("%d",&b1);
		while(a1<1)
		{
		printf("Please, enter a natural number for number of lines.\n");
		scanf("%d", &a1);
		}
		while(b1<1)
		{
		printf("Please, enter a natural number for number of columns.\n");
		scanf("%d", &b1);
		}
	int q,p;
	q=a1;
	p=b1;
	int matris[a1][b1];
	int k=0;
	int j=0;
		for(k=0;k<q;k++)
		{
			for(j=0;j<p;j++)
			{
			int x;
			x=rand();
			matris[k][j]=x;
			}
		}
							
	printf("\t\tMATRIX\n");
	int m,n;
	m=0;
	n=0;
		for(m=0;m<q;m++)
		{
			for(n=0;n<p;n++)
			printf("%d\t\t",matris[m][n]);
		printf("\n");
		}
		
	printf("\t\tTRANSPOSE\n");
	int t1,t2;
	t1=0;
	t2=0;
		for(t2=0;t2<p;t2++)
		{
			for(t1=0;t1<q;t1++)
			printf("%d\t\t",matris[t1][t2]);
		printf("\n");
		}
}
				
//-----------------------------------------------------------------------------------------------------------------------

void Addition(int x,int y)
{
	printf("Enter the dimensions of the matrixs you want to create.\n");
	int a2,b2;
	scanf("%d",&a2);
	scanf("%d",&b2);
		while(a2<1)
		{
		printf("Please, enter a natural number for number of lines.\n");
		scanf("%d", &a2);
		}
		while(b2<1)
		{
		printf("Please, enter a natural number for number of columns.\n");
		scanf("%d", &b2);
		}
	int q2,p2;
	q2=a2;
	p2=b2;
	int matris1[a2][b2];
	int matris2[a2][b2];
	int k1=0;
	int j1=0;
		for(k1=0;k1<q2;k1++)
		{
			for(j1=0;j1<p2;j1++)
			{
			int y;
			y=rand();
			matris1[k1][j1]=y;
			}
		}
	int k2=0;
	int j2=0;
		for(k2=0;k2<q2;k2++)
		{
			for(j2=0;j2<p2;j2++)
			{
			int z;
			z=rand();
			matris2[k2][j2]=z;
			}
		}
	int matristotal[a2][b2];
	int total1=0;
	int total2=0;
		for(total1=0;total1<q2;total1++)
		{
			for(total2=0;total2<p2;total2++)
			{
			matristotal[total1][total2]=matris1[total1][total2]+matris2[total1][total2];
			}
		}		
	printf("\t\tMATRIX1\n");
	int m1,n1;
	m1=0;
	n1=0;
		for(m1=0;m1<q2;m1++)
		{
			for(n1=0;n1<p2;n1++)
			printf("%d\t\t",matris1[m1][n1]);
		printf("\n");
		}
	printf("\t\tMATRIX2\n");
	int m2,n2;
	m2=0;
	n2=0;
		for(m2=0;m2<q2;m2++)
		{
			for(n2=0;n2<p2;n2++)
			printf("%d\t\t",matris2[m2][n2]);
		printf("\n");
		}
	printf("\t\tTOTAL\n");
	int m3,n3;
	m3=0;
	n3=0;
		for(m3=0;m3<q2;m3++)
		{
			for(n3=0;n3<p2;n3++)
			printf("%d\t\t",matristotal[m3][n3]);
		printf("\n");
		}
}

//-----------------------------------------------------------------------------------------------------------------------
			
void Multiplacation(int x,int y,int z,int t)
{
	printf("Enter the dimensions of the matrixs you want to create.\n");

	int a3,b3;
	scanf("%d",&a3);
	scanf("%d",&b3);
		while(a3<1)
		{
		printf("Please, enter a natural number for number of lines.\n");
		scanf("%d", &a3);
		}
		while(b3<1)
		{
		printf("Please, enter a natural number for number of columns.\n");
		scanf("%d", &b3);
		}
		
	int a4,b4;
	scanf("%d",&a4);
	scanf("%d",&b4);
		while(a4<1)
		{
		printf("Please, enter a natural number for number of lines.\n");
		scanf("%d", &a4);
		}
		while(b4<1)
		{
		printf("Please, enter a natural number for number of columns.\n");
		scanf("%d", &b4);
		}
		
		if(b3!=a4)
		printf("b3(colums of first matrix) and a4(lines of second matrix) have to be equal according to the rules\n");
		while(b3!=a4)
		{
		printf("Please try again.\n");	
		scanf("%d",&a3);
		scanf("%d",&b3);
			while(a3<1)
			{
			printf("Please, enter a natural number for number of lines.\n");
			scanf("%d", &a3);
			}
			while(b3<1)
			{
			printf("Please, enter a natural number for number of columns.\n");
			scanf("%d", &b3);
			}
		scanf("%d",&a4);
		scanf("%d",&b4);
			while(a4<1)
			{
			printf("Please, enter a natural number for number of lines.\n");
			scanf("%d", &a4);
			}
			while(b4<1)
			{
			printf("Please, enter a natural number for number of columns.\n");
			scanf("%d", &b4);
			}
		}
		
	int q1,p1;
	q1=a3;
	p1=b3;
	int matris1[a3][b3];
	int k1=0;
	int j1=0;
		for(k1=0;k1<q1;k1++)
		{
			for(j1=0;j1<p1;j1++)
			{
			int x1;
			x1=rand();
			matris1[k1][j1]=x1;
			}
		}
		
	int q2,p2;
	q2=a4;
	p2=b4;
	int matris2[a4][b4];
	int k2=0;
	int j2=0;
		for(k2=0;k2<q2;k2++)
		{
			for(j2=0;j2<p2;j2++)
			{
			int x2;
			x2=rand();
			matris2[k2][j2]=x2;
			}
		}
	
	printf("\t\tMATRIX1\n");
	int m4,n4;
	m4=0;
	n4=0;
		for(m4=0;m4<q1;m4++)
		{
			for(n4=0;n4<p1;n4++)
			printf("%d\t\t",matris1[m4][n4]);
		printf("\n");
		}
	
	printf("\t\tMATRIX2\n");
	int m5,n5;
	m5=0;
	n5=0;
		for(m5=0;m5<q2;m5++)
		{
			for(n5=0;n5<p2;n5++)
			printf("%d\t\t",matris2[m5][n5]);
		printf("\n");
		}
			
	printf("\t\tMultiplication\n");
	int multiplication1;//1.Matrisin Satýr Sayýsý a3
	int multiplication2;//1.Matrisin Sütun Sayýsý b3
	int multiplication3;//2.Matrisin Sütun Sayýsý b4
	int tot=0;
	int matrismultiplication[a3][b4];
		for(multiplication1=0; multiplication1<a3; multiplication1++)
		{  //b3=a4
        	for(multiplication2=0; multiplication2<b4; multiplication2++)
			{
        	    for(multiplication3=0; multiplication3<b3; multiplication3++)
				{
                tot +=matris1[multiplication1][multiplication3]*matris2[multiplication3][multiplication2];  // Matris çarpma iþleminin algoritmasý
            	}
            matrismultiplication[multiplication1][multiplication2] = tot;  // Çýkan sonuc dizinin elemaný olarak yazýlýr
            tot = 0;   // Toplam tekrar kullanýlacaðý için 0 a eþitlenir.
            printf("%d ", matrismultiplication[multiplication1][multiplication2]); // çarpma iþlemi yapýlan eleman ekrana yazdýrýlýr. //Bunun için farklý bir for döngüsüne ihtiyac yoktur
        	}
        printf("\n");
		}
}
