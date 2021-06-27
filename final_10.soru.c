#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/* 2.Girilen 10 adet sayi bir diziye atanacaktýr. Bu dizi divide fonksiyonuna gönderilecektir. 
Fonksiyon pozitifleri bir diziye negatifleri 
bir diziye atayan fonksiyonu ve main C kodunu yazýnýz. */


int irdele (int array[])
{
	int pozitif[10],negatif[10];
	int i,ps=0,ns=0,j,islem;
	
	for(i=0;i<10;i++)
	{
		
		if (array[i] < 0)
		{	
			negatif[ns] = array[i];
			ns++;
		}
		else
		{
			pozitif[ps] = array [i];
			ps++;
		}
	}
	
	printf("\n Negatif ise 1 : Pozitif ise 2 \n");
	scanf("%d",&islem);
	
	
	 switch (islem)
	{ 
	
	case 1:
	 
	for (j=0;j<ns;j++)
	{
		printf("%d \n",negatif[j]);
	}
	
		break;
	
	case 2:
	
	for (j=0;j<ps;j++)
	{
		printf("%d \n",pozitif[j]);
	}
	
		break;
	
	default:
		
		printf("Gecerli bir sey giriniz !!");
		
		break;
	
	}
 
	
	
	
	return islem;
}

int main(int argc, char *argv[]) {
	
int i=0;
int dizi[10];

printf(" 10 adet sayi giriniz  \n");

while (i<10)
{
printf("%d. sayi : ",i+1);
scanf("%d",&dizi[i]);
i++;
}
	
irdele(dizi);


	return 0;
}
