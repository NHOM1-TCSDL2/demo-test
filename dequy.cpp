#include<stdio.h>
int tong1(int n)
	{
		if (n == 1) {
        return 1;
    } else {
        return n + tong1(n - 1);
    }
	}
	
//	bài2
int tong2(int n) {
    if (n == 1) {
        return 1; 
    } else if (n % 2 == 0) {
        return -n + tong2(n - 1); 
    } else {
        return n + tong2(n - 1); 
    }
} 
// bai3
int tong3(int n){
	if(n==1)
	return -1;
	else if(n%2==0)
	return n+tong3(n-1);
		else
		return -n+tong3(n-1); 
		
}
//bai4
float tong4(int n)
{
	if(n==1)
	return 1;
	else 
		return 1.0/n+tong4(n-1);
		
}
//bai 5
float tong5(int n)
{
	if(n==1)
	return 1;
	else
		if(n%2==0)
			return -1.0/n+tong5(n-1);
		else
			return 1.0/n+tong5(n-1);
			
}
//bai 6
float tong6(int n)
{
	if(n==1)
	return -1;
	else
		if(n%2==0)
			return tong6(n-1)+1.0/n;
		else
			return tong6(n-1)-1.0/n;
		
			
}
//bai 7
float tong7(int n)
{
	if(n==1||n==0)
		return 1;
	else 
		return n*tong7(n-1);		
}
//bai 8
float tong8(int n)
{
	if(n==1)
	 return -1;
	else
		return tong8(n-1)+1.0/tong7(n); 
	
}
//bai9
float tong9(int n)
{
	if(n==1)
		return 1;
	else
	 	if(n%2==0)
	 		return -1.0/tong7(n)+tong9(n-1);
	 	else
	 		return 1.0/tong7(n)+tong9(n-1);
	
 } 
 //bai 10
 float tong10(int n)
{
	if(n==1)
		return -1;
	else
	 	if(n%2==0)
	 		return 1.0/tong7(n)+tong10(n-1);
	 	else
	 		return -1.0/tong7(n)+tong10(n-1);
 } 
main()
{
	int bai, n;
	printf("nhap Lua chon cua ban: \n");
	printf("1) Tinh tong S = 1 + 2 + ... + n (n nhap vao tu ban phim)\n");
    printf("2) Tinh tong S = 1 - 2 + 3 - 4 + ... + n (n nhap vao tu ban phim)\n");
    printf("3) Tinh tong S = -1 + 2 - 3 + 4 + ... + n (n nhap vao tu ban phim)\n");
    printf("4) Tinh tong S = 1 + 1/2 + 1/3 + ... + 1/n (n nhap vao tu ban phim)\n");
    printf("5) Tinh tong S = 1 - 1/2 + 1/3 - ... +/- 1/n (n nhap vao tu ban phim)\n");
    printf("6) Tinh tong S = -1 + 1/2 - 1/3 + ... +/- 1/n (n nhap vao tu ban phim)\n");
    printf("7) Tinh n!\n");
    printf("8) Tinh tong S = 1 + 1/2! + 1/3! + ... + 1/n! (n nhap vao tu ban phim)\n");
    printf("9) Tinh tong S = 1 - 1/2! + 1/3! - ... +/- 1/n! (n nhap vao tu ban phim)\n");
    printf("10) Tinh tong S = -1 + 1/2! - 1/3! + ... +/- 1/n! (n nhap vao tu ban phim)\n");
    
	printf("nhap bai so ");
	scanf("%d",&bai);
	printf("nhap so n ");
	scanf("%d",&n);
	switch(bai) 
	{
		case 1 : printf("n = %d", tong1(n));break;
		case 2 : printf("s = %d", tong2(n));break;
		case 3 : printf("s = %d", tong3(n));break;
		case 4 : printf("s = %.3f", tong4(n));break;
		case 5 : printf("s = %.3f", tong5(n));break;
		case 6 : printf("s = %.3f", tong6(n));break;
		case 7 : printf("s = %f", tong7(n));break;
		case 8 : printf("s = %.7f", tong8(n));break;
		case 9 : printf("s = %0.7f", tong9(n));break;
		case 10 : printf("s = %0.7f", tong10(n));break;
	 } 
}

