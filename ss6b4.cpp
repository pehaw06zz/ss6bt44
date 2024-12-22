#include<stdio.h>
#include<math.h>
int main(){
	long long a,b,c;
	printf("nhap cac he so a,b,c/n");
	scanf("%d",&a,&b,&c);
	if(a==0){
	   if(b==0){
	   	printf("c==0 phuong trinh vo so nghiem.\n: phuong trinh vo nghiem.\n");
	   }else{
	   	printf("phuonh trinh co nghiem duy nhat la %.2lf\n",-c,b);
	   }
	}else{
		long long delta= b*b-4*a*c;
		if(delta<0){
			printf("phuong trinh vo nghiem.\n");
		}else if(delta==0){
			printf("phuongtrih co nghiem kep: %.2fl\n",-b/(2*a));
		}else{
			printf("phuong trinh co hai nghiem rieng biet: x1= %.2fl\n x2= %.2fl\n", (-b + sqrt(delta)) / (2 * a), (-b - sqrt(delta)) / (2 * a));
		}
	}
	return 0;
}
