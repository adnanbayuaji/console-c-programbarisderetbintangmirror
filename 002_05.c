#include<stdio.h>

void main () 
{
	char pilihan;	//variabel pilihan untuk mengulangi program
	int n;			//variabel untuk nilai batasan angka
	int a;			//variabel bantuan untuk proses loop
	int b;			//variabel bantuan untuk proses loop
	do
	{
		system("cls");		//untuk membersihkan layar
		printf("\n\n\t ** Program Menampilkan Deret Bintang Mirror Horisontal **");		//judul program
		printf ("\n\n > Masukkan Batasan Angka : ");scanf ("%d", &n);					//meng input nilai batasan angka
		printf ("\n");
		for (a = 1; a <= n; a++) 						//pencacah (bagian atas)
		{ 
			for (b = 1; b <= a; b++)
			{
				printf ("*");
			}
			for (b = n-1; b >= a; b--) 
			{
				printf (" ");
			}
			for (b = a; b <= n-1; b++) 
			{
				printf (" ");
			}
			for (b = 1; b <= a; b++) 
			{ 
				printf ("*"); 
			} 
			
			printf ("\n");
		}
		for (a = 1; a <= n-1; a++) 						//pencacah (bagian bawah)
		{ 
			for (b = (n-a); b >= 1; b--) 
			{
				printf ("*");
			}
			for (b = 0; b <= a-1; b++) 
			{ 
				printf (" "); 
			} 
			for (b = a-1; b >= 0; b--) 
			{ 
				printf (" "); 
			} 
			for (b = 1; b <= (n-a); b++) 
			{ 
				printf ("*"); 
			}
			printf ("\n");
		}
			fflush(stdin); 												//membersihkan sisa proses yang sebelumnya
			printf("\n\nUlangi Kembali? [Y/N] ");scanf("%s",&pilihan);	//opsi untuk mengulangi program
		}
		while(pilihan=='y');
		if(pilihan=='n');
		{
			printf("\n\n===========================================================");
			printf("\n\t\tTerimakasih Telah Mencoba :)\n");
			printf("===========================================================\n\n");	
		}
}
