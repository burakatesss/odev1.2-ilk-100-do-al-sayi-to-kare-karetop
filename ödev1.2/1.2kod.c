
	/*
	 Burak ATEŞ ( Öğr. No.211451001) Algorithm and Programming Homework 1.2
 	ilk 100 doğal sayının toplamının karesi ile karelerinin toplamı arasındaki farkı bulan program
	 */ 

#include <stdio.h>
	
	int ty=0;						// 1'den 100'e kadar olan sayıların toplamı 	
	int tk=0;  						// toplamlarının karesi.
	int	kt=0; 						// karelerinin toplamı.
	int k=0;						// sayıların karesi tanımlaması.
	int	fark;						// fark tanımlaması.
	int i,s;						// i ve s isimli değişkenler tanımlandı sayaç için kullanılacak.
	int a,b;						// a ve b isimli değişkenler tanımlandı.

int main ()
{
 	a = top_kare ();				// a değişkeni sayıların toplamlarının karesini gösterir. Bu işlem top_kare fonksiyonu ile gerçekleştirilmiştir ve a'ya atanmıştır.
	b = kare_top ();				// b değişkeni sayıların karelerinin toplamını gösterir. Bu işlem kare_top fonksiyonu ile gerçekleştirilmiştir ve b'ye atanmıştır.
	fark = a -b;					// sayıların kareleri toplamı ile toplamının karesi arasındaki fark işlemi.
		
	printf("ilk 100 dogal sayinin toplaminin karesi %d\n",a); 			// sayıların toplamının karesi ekrana yazdırılıyor.
	printf("\nilk 100 dogal sayinin karelerinin toplami %d\n", b); 		// sayıların karelerinin toplamı ekrana yazdırılıyor.
	printf("\nilk 100 dogal sayinin toplaminin karesi ile karelerinin toplami arasindaki fark:%d\n", fark); 		//	iki sonucun farkı  ekrana yazdırılıyor.
	
	system("pause");
}


	
	int top_kare()					// sayıların toplamlarının karesini bulmak için üretilen fonksiyon.
	{		
	for(i=1;i<=100;i++)				// i 3'den başlayarak birer birer 100 e kadar gidecek (100 dahil).
		{
		ty=ty+i;					// 1'den 100'e kadar olan sayıların toplamı hesaplanıyor.
		}
	tk=ty*ty;						// sayıların toplamlarının karesi hesaplanıyor.
	return tk;						// toplamlarının karesi dışa aktarılıyor.
	}
	
  	int kare_top()					//  sayıların karelerinin toplamını bulmak için üretilen fonksiyon.
	{
	for(s=1;s<=100;s+=1)			// s 1'den başlayarak birer birer 100 e kadar gidecek (100 dahil).
		{
		k=s*s;						// sayıların karesi hesaplanıyor.
		kt=kt+k;					// sayıların karelerinin toplamı hesaplanıyor. 
		}		
	return kt;						// karelerinin toplamı dışa aktarılıyor.
	}
	
	
		