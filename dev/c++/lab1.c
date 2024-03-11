#include<stdio.h>
int main(){
	int menu;
	printf("Menu");
	scanf("%d", &menu);
	switch(menu){
		case 1:{
			printf("\nBai 1:");
			int x;
			printf("\nNhap vao so nguyen x:");
			scanf("%d", &x);
			if(x>0){
				printf("\La so nguyen");
			}
			else{
				printf("\nKhong phai la so nguyen");
			}
			break;
		}
		case 2:{
			printf("Bai 2:");
			int N;
			int bien=0;
			printf("\nNhap N:");
			scanf("%d",&N);
			if(N<2){
				printf("\nSo %s khong phai la so nguyen to", N);
			}else{
				for(int i=1; i<=N; i++){
					if(N %i==0){
						bien+=1;
					}
				}
				if(bien==2){
					printf("\nSo %d la so nguyen to", N);
				}else{printf("\nSo %d khong phai la so nguyen to",N);
				}
			}
			break;
		}
		case 3:{
			printf("Bai 3:");
			int n;
			printf("\nNhap n=");
			scanf("%d", &n);
			int i=0;
			while(i*i<=n){
				if(i*i==n){
					printf("%d la so chinh phuong\n", n);
					return 0;
				}
				++i;
			}
			printf("%d khong phai la so chinh phuong\n",n);
			break;
		}
		default :{
			printf("Gia tri khong hop le");
			break;
		}
	}
	return 0;
}