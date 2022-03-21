/*EL2208 Praktikum Pemecahan Masalah dengan C 2021/2022
*Modul            : 5 - Recursion
*Percobaan        : -
*Hari dan Tanggal : Selasa, 22 Maret 2022
*Nama (NIM)       : -
*Asisten (NIM)    : -
*Nama File        : soal-01.c
*Deskripsi        : -
*/

#include <stdio.h>
#include <stdlib.h>

void SegitigaRec(int arr[] , int n) {
	if (n < 1) {
	  return;
	}
	int temp[n - 1];
	for (int i = 0; i < n - 1; i++) {
	  int x = arr[i] + arr[i + 1];
	  temp[i] = x;
	}
	SegitigaRec(temp, n - 1);
	for (int i = 0; i < n ; i++) {
	  if(i == n - 1)
		 printf("%d ",arr[i]);
	  else
		 printf("%d, ",arr[i]);
	}
	printf("\n");
}

int main() {
	int size;
	printf("Program Piramida Penjumlahan\n");
	printf("Silahkan masukkan jumlah angka yang akan diinput: ");
	scanf("%d", &size);
	
	if (size > 0){
		int inputN[size];
		printf("\nSilahkan masukkan %d input: \n", size);
		for (int i = 0; i < size; i++){
			printf("Input ke-%d : ", i+1);
			scanf("%d", &inputN[i]);
		}
		printf("\nHasil Piramida Penjumlahan :\n");
		SegitigaRec(inputN, size);
	}
	else{
		printf("Input Tidak Valid!");
	}
	return 0;
}

