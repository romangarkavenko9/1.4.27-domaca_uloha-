#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int *najdi_najdlhsi_monotonny_usek(int*p,int lp,int *ip){
	
	int i,j;
	int a=0;
	int *z;
	int *A[15];
	srand(time(0));
    
	printf("   %d   ",p);
	for(i=0;i<15;i++)
	{	
	A[i]=(p+i);
	printf(" %d ",*A[i]);	
	}
	
	int mas[15]={};
	int pocet=1;
	
	for (i=a; i<15; i++)
	{
		for (j=a; j<15;j++)
		{
			if (*A[j]<=*A[j+1])
			{
				pocet=pocet+1;
				a++;
			}
			else
			{
				a++;
				break;
			}
		}
		
		mas[i]=pocet;
		pocet=1;
	}
	
	int rastuci_usek=0;
	
	for (j=0; j<15;j++)
	{
		if(mas[j]>rastuci_usek)
		rastuci_usek=mas[j];
	}
	
	a=0;
	
	for (i=a; i<15; i++)
	{
		for (j=a; j<15;j++)
		{
			if (*A[j]>=*A[j+1])
			{
				pocet=pocet+1;
				a++;
			}
			else
			{
				a++;
				break;
			}
		}
		
		mas[i]=pocet;
		pocet=1;
	}
	
	int klesajuci_usek=0;
	
	for (j=0; j<15;j++)
	{
		if(mas[j]>klesajuci_usek)
		klesajuci_usek=mas[j];
	}
	
	if (rastuci_usek>klesajuci_usek)
	{
		a=0; 
		  
		for (i=a; i<15; i++)
		{
			for (j=a; j<15;j++)
			{
	    		if (*A[j]<=*A[j+1])
				{
					pocet=pocet+1;
					a++;
				}
				else
				{
					a++;
					
					if (pocet==rastuci_usek)
					p=A[j-rastuci_usek+1];
					break;
				}
			}
			
			mas[i]=pocet;
			pocet=1;
		}
	}	
	else
	{ 	
		a=0;
		
		for (i=a; i<15; i++)
		{	
			for (j=a; j<15;j++)
			{
				if (*A[j]>=*A[j+1])
				{
					pocet=pocet+1;
					a++;
				}
				else
				{
					a++;
					
					if (pocet==klesajuci_usek)
					p=A[j-klesajuci_usek+1];
					break;
				}
			}
			
			mas[i]=pocet;
			pocet=1;
		}
	}
	  
	int najvacsi_usek;
	
	if (rastuci_usek>klesajuci_usek)
	najvacsi_usek=rastuci_usek;
	else najvacsi_usek = klesajuci_usek;
	
	*ip=najvacsi_usek;
printf("   %d   ",A[2]);
	return p;
	
}	

int main()
{
	int lp,*ip,*p;
	int *c,d;
		srand(time(0));
	int A[15];
	int i;
	for(i=0;i<15;i++)
	{
		lp=rand()%10+1;
		A[i]=lp;


		
	}
		
	p=&A[0];

	printf("\n");
	
	ip=&d;
	
	c=najdi_najdlhsi_monotonny_usek(p,lp,ip);
	printf("%d",c);
	for (i=0;i<d;i++){
	
	printf(" %d ",*(c+i));}
	
	printf("Adresa najdlhsieho monotonneho useka: %d\n ",c);
	printf("Dlzka najdlhsieho monotonneho useka: %d",d);
}
