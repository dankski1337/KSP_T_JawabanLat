#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

typedef char string[50];
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
bool cekAkun(string username, string pass);
float luas(float panjang, float lebar);
float keliling(float panjang, float lebar);
float volumeKubus(float sisi);
float luasKubus(float sisi);
float kelKubus(float sisi);

int main(int argc, char *argv[]) {
	string username, pass;
	float panjang, lebar, sisi;
	
	//Menu Login dengan perulangan while
	while(true){
		system("cls");
		printf("\n\t\t---- LOGIN ----\n");
		//Input username login
		while(true){
			printf("\tUsername\t: ");fflush(stdin);gets(username);
			if(strlen(username)!=0) break;
			printf("\n\tUsername tidak boleh kosong!\n\n");
		}
		//Input password login
		while(true){
			printf("\tPassword\t: ");fflush(stdin);gets(pass);
			if(strlen(pass)!=0) break;
			printf("\n\tPassword tidak boleh kosong!\n\n");
		}
		//Cek username dan pass apakah sesuai/tidak menggunakan fungsi cekAkun(username, pass);
		if(cekAkun(username, pass)){
			printf("\n\tBerhasil Login!");
			getch();
			break;
		}
			printf("\n\tUsername atau password salah!\n");
			getch();
	}
	
	system("cls");
	
	printf("\n\t\t-- Selamat datang di menu Geometri --\n");
	//input bangun datar
	printf("\n\t\t- Input bangun datar Persegi Panjang -\n");
	while(true){
		printf("\tMasukkan panjang\t: ");scanf("%f", &panjang);
		if(panjang>0) break;
		printf("\n\tPanjang harus lebih dari 0!\n\n");
	}
	while(true){
		printf("\tMasukkan lebar\t\t: ");scanf("%f", &lebar);
		if(lebar>0) break;
		printf("\n\tLebar harus lebih dari 0!\n\n");
	}
	
	//input bangun ruang
	printf("\n\t\t- Input bangun ruang kubus -\n");
	while(true){
		printf("\tMasukkan sisi\t: ");scanf("%f", &sisi);
		if(sisi>0) break;
		printf("\n\tSisi harus lebih dari 0!\n\n");
	}
	
	//tampil bangun datar
	printf("\n\t\t--- BANGUN DATAR PERSEGI PANJANG ---");
	printf("\n\tLuas\t\t: %.2f", luas(panjang, lebar));
	printf("\n\tKeliling\t: %.2f", keliling(panjang, lebar));
	//tampil bangun ruang
	printf("\n\t\t--- BANGUN RUANG KUBUS ---");
	printf("\n\tVolume\t\t: %.2f", volumeKubus(sisi));
	printf("\n\tLuas\t\t: %.2f", luasKubus(sisi));
	printf("\n\tKeliling\t: %.2f", kelKubus(sisi));
	getch();
	return 0;
}

bool cekAkun(string username, string pass){
	if(strcmp(username, "Geometri")==0 && strcmp(pass, "geometri401")==0)
		return true;
	else return false;
}

float luas(float panjang, float lebar){
	return panjang*lebar;
}

float keliling(float panjang, float lebar){
	return 2*(panjang+lebar);
}

float volumeKubus(float sisi){
	return sisi*sisi*sisi;
}

float luasKubus(float sisi){
	return 6*sisi*sisi;
}

float kelKubus(float sisi){
	return 12*sisi;
}
