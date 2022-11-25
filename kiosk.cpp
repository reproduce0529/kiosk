#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void ChooseMenu();
void buy_charge();
void payed_total();
void defValue();
void exit();
int totalPay = 0;

struct charger {
		char name[100];
		int price;
		int stockNum;
};

struct charger arr1 = {"c타입(안드로이드)",3000,300};
struct charger arr2 = {"라이트닝8핀(아이폰)",2000,200};
struct charger arr3 = {"마이크로5핀(구형 안드로이드)",1000,100};




void buy_charge(){
	int bc_option = 0; 
	
	
	printf("1.c타입(안드로이드)\n");
	printf("2.라이트닝8핀(아이폰)\n");
	printf("3.마이크로5핀(구형 안드로이드)\n");
	printf("4.처음으로 돌아가기\n");
	printf("원하시는 충전기를 고르세요.\n선택 : ");	
	
	scanf("%d", &bc_option);
	
	struct charger array = {};
	
	switch(bc_option){
		case 1:
			array = arr1;			
			break;
		case 2:
			array = arr2;
			break;
		case 3:
			array = arr3;
			break;
		case 4:
			ChooseMenu();
			break;
			
		default:
			printf("==========================\n");
			printf("잘못된 값을 입력하였습니다.\n");
			buy_charge(); 
			break;
			
	}
	
	int money_a = 0;
	
	printf("==========================\n");
	printf("지폐를 투입하세요\n");
	printf("==========================\n");
	printf("투입하신 액수:"); 
	
	scanf("%d", &money_a);
				
	int minus = 0;
	minus = array.price - money_a;
	if(minus > 0){
		printf("%d원이 부족합니다. %s 충전기의 가격은 %d원입니다.\n", minus, array.name, array.price);
		buy_charge();
	}else if(minus == 0){
		printf("결제가 완료되었습니다.\n");
		printf("%s 충전기를 가져가세요.\n", array.name);
		array.stockNum = array.stockNum - 1;
		totalPay = totalPay + array.price;
		printf("남은 충전기는 %d개 입니다.\n", array.stockNum);
		switch(bc_option){
		case 1:
			arr1 = array;			
			break;
		case 2:
			arr2 = array;
			break;
		case 3:
			arr3 = array;
			break;
			
	}
		buy_charge();
	}else{
		printf("결제가 완료되었습니다.\n");
		printf("%s 충전기를 가져가세요.\n", array.name);
		printf("거스름돈은 %d 원 입니다.\n", minus * -1);
		array.stockNum = array.stockNum - 1;
		totalPay = totalPay + array.price;
		printf("남은 충전기는 %d개 입니다.\n", array.stockNum);
		switch(bc_option){
		case 1:
			arr1 = array;			
			break;
		case 2:
			arr2 = array;
			break;
		case 3:
			arr3 = array;
			break;
			
	}
		buy_charge();
	}
	
	
	
	
	
}


























void ChooseMenu(){
	int option;	
	printf("==========================\n");
	printf("1.충전하기\n");
	printf("2.수익 확인하기\n");
	printf("3.종료하기\n");
	printf("선택 : ");
	scanf("%d", &option);
	
	switch(option){
		case 1:
			buy_charge();
			break;
		
		case 2:
			payed_total();
			break;
		
		case 3:
			exit();
			break;
		
		default:
			defValue();
			break;		
	}
	
}

void payed_total(){
	printf("==========================\n");
	printf("현재까지 이 키오스크의 수입은 %d원 입니다.\n\n", totalPay);
	printf("1. 처음으로 돌아가기\n");
	printf("2. 프로그램 종료하기\n");
	
	printf("선택 : ");
	
	int op = 0;
	scanf("%d", &op);
	if(op == 1){
		ChooseMenu();
	}else if(op == 2){
		exit();
	}
}


void exit(){
	printf("==========================\n");
	printf("프로그램을 종료합니다.\n");
	exit(0); 
}

void defValue(){
	printf("==========================\n");
	printf("잘못된 값을 입력하였습니다.\n");
	ChooseMenu(); 
}





int main(){
	int  charger_type, scarce, change;
	struct charger {
		char name[100];
		int price;
		int stockNum;
	};
	struct charger chargerstock[] = { {"c타입(안드로이드)",3000,300},
	{"라이트닝8핀(아이폰)",2000,200},
	{"마이크로5핀(구형 안드로이드)",1000,100} };
	
	int user_ch = 0;
	
	
	while(1){
		ChooseMenu();
	}
	
	
	
	
}
