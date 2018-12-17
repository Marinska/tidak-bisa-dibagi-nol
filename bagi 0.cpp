#include <stdio.h>
int main()
{
	int a,b,hasil;
	printf("Masukan pembilang : ");
	scanf("%d",&a);
	printf("Masukan penyebut : ");
	scanf("%d",&b);
	if (b==0)
	{
		printf("Tidak bisa dibagi dengan NOL \nTolong masukan angka lain");
	}else{
		hasil=a/b;
		printf("Hasil bagi adalah %d",hasil);
	}
}
