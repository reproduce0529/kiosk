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

struct charger arr1 = {"cŸ��(�ȵ���̵�)",3000,300};
struct charger arr2 = {"����Ʈ��8��(������)",2000,200};
struct charger arr3 = {"����ũ��5��(���� �ȵ���̵�)",1000,100};




void buy_charge(){
	int bc_option = 0; 
	
	
	printf("1.cŸ��(�ȵ���̵�)\n");
	printf("2.����Ʈ��8��(������)\n");
	printf("3.����ũ��5��(���� �ȵ���̵�)\n");
	printf("4.ó������ ���ư���\n");
	printf("���Ͻô� �����⸦ ������.\n���� : ");	
	
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
			printf("�߸��� ���� �Է��Ͽ����ϴ�.\n");
			buy_charge(); 
			break;
			
	}
	
	int money_a = 0;
	
	printf("==========================\n");
	printf("���� �����ϼ���\n");
	printf("==========================\n");
	printf("�����Ͻ� �׼�:"); 
	
	scanf("%d", &money_a);
				
	int minus = 0;
	minus = array.price - money_a;
	if(minus > 0){
		printf("%d���� �����մϴ�. %s �������� ������ %d���Դϴ�.\n", minus, array.name, array.price);
		buy_charge();
	}else if(minus == 0){
		printf("������ �Ϸ�Ǿ����ϴ�.\n");
		printf("%s �����⸦ ����������.\n", array.name);
		array.stockNum = array.stockNum - 1;
		totalPay = totalPay + array.price;
		printf("���� ������� %d�� �Դϴ�.\n", array.stockNum);
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
		printf("������ �Ϸ�Ǿ����ϴ�.\n");
		printf("%s �����⸦ ����������.\n", array.name);
		printf("�Ž������� %d �� �Դϴ�.\n", minus * -1);
		array.stockNum = array.stockNum - 1;
		totalPay = totalPay + array.price;
		printf("���� ������� %d�� �Դϴ�.\n", array.stockNum);
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
	printf("1.�����ϱ�\n");
	printf("2.���� Ȯ���ϱ�\n");
	printf("3.�����ϱ�\n");
	printf("���� : ");
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
	printf("������� �� Ű����ũ�� ������ %d�� �Դϴ�.\n\n", totalPay);
	printf("1. ó������ ���ư���\n");
	printf("2. ���α׷� �����ϱ�\n");
	
	printf("���� : ");
	
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
	printf("���α׷��� �����մϴ�.\n");
	exit(0); 
}

void defValue(){
	printf("==========================\n");
	printf("�߸��� ���� �Է��Ͽ����ϴ�.\n");
	ChooseMenu(); 
}





int main(){
	int  charger_type, scarce, change;
	struct charger {
		char name[100];
		int price;
		int stockNum;
	};
	struct charger chargerstock[] = { {"cŸ��(�ȵ���̵�)",3000,300},
	{"����Ʈ��8��(������)",2000,200},
	{"����ũ��5��(���� �ȵ���̵�)",1000,100} };
	
	int user_ch = 0;
	
	
	while(1){
		ChooseMenu();
	}
	
	
	
	
}
