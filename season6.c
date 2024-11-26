#include <stdio.h>
#include <math.h>

int main() {
	//Bai tap 1
    int i, num, sum = 0;
    for (i = 0; i < 5; i++) {
        printf("Nhap so thu %d: ", i + 1);
        scanf("%d", &num);
        if (num % 2 != 0) {
            sum += num;
        }
    }
    printf("\nTong cac so le la: %d\n", sum);
	
	//Bai tap 2
	int num1, ii;
    int soChan = 0, soLe = 0;
    for (ii = 0; ii < 5; ii++) {
        printf("Nhap so thu %d: ", ii + 1);
        scanf("%d", &num1);
        if (num1 % 2 == 0) {
            soChan++;
        } else {
            soLe++;
        }
    }
    printf("So luong so chan: %d\n", soChan);
    printf("So luong so le: %d\n", soLe);
    
    //Bai tap 3
    int pass = 123456,enter;
    printf("Nhap mat khau:\n");
    scanf("%d", &enter);
    if (enter == pass){
    	printf("Mat khau dung\n");
	}else {
		printf("Mat khau sai\n");
	}
	
	//Bai tap 4
	float a, b, c, delta, x1, x2;
    printf("Nhap he so a: ");
    scanf("%f", &a);
    printf("Nhap he so b: ");
    scanf("%f", &b);
    printf("Nhap he so c: ");
    scanf("%f", &c);
    if (a == 0) {
        printf("Phuong trinh khong phai phuong trinh bac 2\n");
    } else {
        delta = b * b - 4 * a * c;
        if (delta > 0) {
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            printf("Phuong trinh co hai nghiem phan biet: x1 = %.2f, x2 = %.2f\n", x1, x2);
        } else if (delta == 0) {
            x1 = -b / (2 * a);
            printf("Phuong trinh co nghiem kep: x = %.2f\n", x1);
        } else {
            printf("Phuong trinh vo nghiem\n");
        }
    }
    
    //Bai tap 5
    int year, $month, days;
    printf("Nhap nam: ");
    scanf("%d", &year);
    printf("Nhap thang: ");
    scanf("%d", &$month);
    int LeapYear = (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
    if ($month == 1 || $month == 3 || $month == 5 || $month == 7 || $month == 8 || $month == 10 || $month == 12) {
        days = 31;
    } else if ($month == 4 || $month == 6 || $month == 9 || $month == 11) {
        days = 30;
    } else if ($month == 2) {
        if (LeapYear) {
            days = 29;
        } else {
            days = 28; 
        }
    } else {
        printf("Thang khong hop le\n");
        return 0;
    }
    printf("Thang %d trong nam %d co %d ngay\n", $month, year, days);
    
    //Bai tap 6
    int iiii;
    for (iiii = 1; iiii <= 100; iiii++) {
        if (iiii % 3 == 0 && iiii % 5 == 0) {
            printf("FizzBuzz\n");
        }
        else if (iiii % 3 == 0) {
            printf("Fizz\n");
        }
        else if (iiii % 5 == 0) {
            printf("Buzz\n");
        }
        else {
            printf("%d\n", iiii);
        }
    }
    
    //Bai tap 7
    int o, p;
    printf("Nhap vao mot so nguyen:\n");
    scanf("%d",&o);
    if (o <= 0){
    	printf("ko phai so nguyen duong");
    	return 1;
	}
	printf("cac uoc cua %d la:",o);
	for (p = 1; p <= o; p++){
		if(o % p == 0){
			printf("%d\t",p);
		}
	}
	
	//Bai tap 8
	double principal, rate, totalAmount, interest;
    int months2;
    printf("\nNhap vao so tien gui ban dau: ");
    scanf("%lf", &principal);
    printf("Nhap vao lai suat thang %: ");
    scanf("%lf", &rate);
    printf("Nhap vao so thang gui: ");
    scanf("%d", &months2);
    totalAmount = principal * pow((1 + rate / 100), months2);
    interest = totalAmount - principal;
    printf("Tien lai: %.3f\n", interest);
    printf("Tien nhan duoc: %.3f\n", totalAmount);
    
    //Bai tap 10
	int num2,iii;
    printf("Nhap vao mot so nguyen\n");
    scanf("%d",&num2);
    if(num2 == 2){
    	printf("%d la so nguyen to\n",num2);
	}
    if(num2 <= 1){
    	printf("Khong phai so nguyen to\n");
	}for (iii = 2;iii < num2;iii++){
		if(num2 % iii == 0){
			printf("%d khong phai so nguyen to\n",num2);
			break;
		}else{
			printf("%d la so nguyen to\n",num2);
			break;
		}
	}

	//Bai tap 13
    int day, month;
    printf("Nhap ngay sinh: ");
    scanf("%d", &day);
    printf("Nhap thang sinh: ");
    scanf("%d", &month);
    if ((month == 3 && day >= 21) || (month == 4 && day <= 19)) {
        printf("Cung hoang dao cua ban: Bach Duong\n");
    } else if ((month == 4 && day >= 20) || (month == 5 && day <= 20)) {
        printf("Cung hoang dao cua ban: Kim Nguu\n");
    } else if ((month == 5 && day >= 21) || (month == 6 && day <= 20)) {
        printf("Cung hoang dao cua ban: Song Tu\n");
    } else if ((month == 6 && day >= 21) || (month == 7 && day <= 22)) {
        printf("Cung hoang dao cua ban: Cu Giai\n");
    } else if ((month == 7 && day >= 23) || (month == 8 && day <= 22)) {
        printf("Cung hoang dao cua ban: Su Tu\n");
    } else if ((month == 8 && day >= 23) || (month == 9 && day <= 22)) {
        printf("Cung hoang dao cua ban: Xu Nu\n");
    } else if ((month == 9 && day >= 23) || (month == 10 && day <= 22)) {
        printf("Cung hoang dao cua ban: Thien Binh\n");
    } else if ((month == 10 && day >= 23) || (month == 11 && day <= 21)) {
        printf("Cung hoang dao cua ban: Bo Cap\n");
    } else if ((month == 11 && day >= 22) || (month == 12 && day <= 21)) {
        printf("Cung hoang dao cua ban: Nhan Ma\n");
    } else if ((month == 12 && day >= 22) || (month == 1 && day <= 19)) {
        printf("Cung hoang dao cua ban: Ma Ket\n");
    } else if ((month == 1 && day >= 20) || (month == 2 && day <= 18)) {
        printf("Cung hoang dao cua ban: Bao Binh\n");
    } else if ((month == 2 && day >= 19) || (month == 3 && day <= 20)) {
        printf("Cung hoang dao cua ban: Song Ngu\n");
    } else {
        printf("Ngay sinh khong hop le!\n");
    }	
    
    return 0;
}
