#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#include<time.h>
#include<windows.h>
struct player{  //定義 9宮格 
	char n1;
	char n2;
	char n3;
	char n4;
	char n5;
	char n6;
	char n7;
	char n8;
	char n9;
};
struct player p1; //定義玩家 
int main(void){         //主函式
	system("title 專題");	
	system("color 0a");
	void Goto(int x,int y,char* word);
	int i,j;
	printf("玩:1 離開:0\n");
	scanf("%d",&i);
	while(i!=0){
		if(i==1){
		}
		system("pause");
		if(i==1){
			j=c1();
			if(j==4){
				printf("和局");
			}
			printf("\n再來一次:1  不想玩了:0\n");
			scanf("%d",&i);
			if(i==0){
				break;
			}
		}
		system("cls");
		printf("玩:1 離開:0\n");
		scanf("%d",&i);
	}	
}
int c1(void){   
	srand(time(NULL));
	int ju[9]={0};
	int i=0,j=0,k=0,pa,m=0;
	p1.n1=' ';
	p1.n2=' ';
	p1.n3=' ';
	p1.n4=' ';
	p1.n5=' ';
	p1.n6=' ';
	p1.n7=' ';
	p1.n8=' ';
	p1.n9=' ';
	while(j<4){
		k++;
		system("cls");
		printf("數字格子輸入:\n\n%c|%c|%c\n-------\n%c|%c|%c\n-------\n%c|%c|%c\n\n",p1.n1,p1.n2,p1.n3,p1.n4,p1.n5,p1.n6,p1.n7,p1.n8,p1.n9);
		if(k>4){
			break;
		}
		printf("請輸入:");
		fflush(stdin);
		scanf("%d",&i);
		if(i==1){
			p1.n1='O';
		}else if(i==2){
			p1.n2='O';
		}else if(i==3){
			p1.n3='O';
		}else if(i==4){
			p1.n4='O';
		}else if(i==5){
			p1.n5='O';
		}else if(i==6){
			p1.n6='O';
		}else if(i==7){
			p1.n7='O';
		}else if(i==8){
			p1.n8='O';
		}else if(i==9){
			p1.n9='O';
		}else{
			;
		}
		if(p1.n1=='X'&&p1.n2=='X'&&p1.n3!='O'){
			p1.n3='X';
			m=2;
		}else if(p1.n1=='X'&&p1.n3=='X'&&p1.n2!='O'){
			p1.n2='X';
			m=2;
		}else if(p1.n3=='X'&&p1.n2=='X'&&p1.n1!='O'){
			p1.n1='X';
			m=2;
		}else if(p1.n4=='X'&&p1.n5=='X'&&p1.n6!='O'){
			p1.n6='X';
			m=2;
		}else if(p1.n4=='X'&&p1.n6=='X'&&p1.n5!='O'){
			p1.n5='X';
			m=2;
		}else if(p1.n5=='X'&&p1.n6=='X'&&p1.n4!='O'){
			p1.n4='X';
			m=2;
		}else if(p1.n7=='X'&&p1.n8=='X'&&p1.n9!='O'){
			p1.n9='X';
			m=2;
		}else if(p1.n9=='X'&&p1.n7=='X'&&p1.n8!='O'){
			p1.n8='X';
			m=2;
		}else if(p1.n9=='X'&&p1.n8=='X'&&p1.n7!='O'){
			p1.n7='X';
			m=2;
		}else if(p1.n1=='X'&&p1.n4=='X'&&p1.n7!='O'){
			p1.n7='X';
			m=2;
		}else if(p1.n1=='X'&&p1.n7=='X'&&p1.n4!='O'){
			p1.n4='X';
			m=2;
		}else if(p1.n7=='X'&&p1.n4=='X'&&p1.n1!='O'){
			p1.n1='X';
			m=2;
		}else if(p1.n2=='X'&&p1.n5=='X'&&p1.n8!='O'){
			p1.n8='X';
			m=2;
		}else if(p1.n8=='X'&&p1.n2=='X'&&p1.n5!='O'){
			p1.n5='X';
			m=2;
		}else if(p1.n8=='X'&&p1.n5=='X'&&p1.n2!='O'){
			p1.n2='X';
			m=2;
		}else if(p1.n3=='X'&&p1.n6=='X'&&p1.n9!='O'){
			p1.n9='X';
			m=2;
		}else if(p1.n9=='X'&&p1.n3=='X'&&p1.n6!='O'){
			p1.n6='X';
			m=2;
		}else if(p1.n6=='X'&&p1.n6=='X'&&p1.n3!='O'){
			p1.n3='X';
			m=2;
		}else if(p1.n1=='X'&&p1.n5=='X'&&p1.n9!='O'){
			p1.n9='X';
			m=2;
		}else if(p1.n1=='X'&&p1.n9=='X'&&p1.n5!='O'){
			p1.n5='X';
			m=2;
		}else if(p1.n9=='X'&&p1.n5=='X'&&p1.n1!='O'){
			p1.n1='X';
			m=2;
		}else if(p1.n3=='X'&&p1.n5=='X'&&p1.n7!='O'){
			p1.n7='X';
			m=2;
		}else if(p1.n3=='X'&&p1.n7=='X'&&p1.n5!='O'){
			p1.n5='X';
			m=2;
		}else if(p1.n5=='X'&&p1.n7=='X'&&p1.n3!='O'){
			p1.n3='X';
			m=2;
		}else{
			;
		}
		if(m==2){
			system("cls");
			printf("數字格子輸入:\n\n%c|%c|%c\n-------\n%c|%c|%c\n-------\n%c|%c|%c\n\n",p1.n1,p1.n2,p1.n3,p1.n4,p1.n5,p1.n6,p1.n7,p1.n8,p1.n9);
			printf("loser");
			break;
		}
		if(k==1){
			if(i==5){
				p1.n1='X';
				m=1;
			}else{
				p1.n5='X';
			}
		}else if(k==2){
			if(m==1){	
				pa=10-i;
				if(pa==2){
					p1.n2='X';
				}else if(pa==3){
					p1.n3='X';
				}else if(pa==4){
					p1.n4='X';
				}else if(pa==6){
					p1.n6='X';
				}else if(pa==7){
					p1.n7='X';
				}else if(pa==8){
					p1.n8='X';
				}else if(pa==9){
					p1.n9='X';
				}else{
					;
				}
			}else{
				if(p1.n1=='O'&&p1.n2=='O'&&p1.n3!='X'){
					p1.n3='X';
				}else if(p1.n1=='O'&&p1.n3=='O'&&p1.n2!='X'){
					p1.n2='X';
				}else if(p1.n1=='O'&&p1.n2=='O'&&p1.n1!='X'){
					p1.n1='X';
				}else if(p1.n7=='O'&&p1.n8=='O'&&p1.n9!='X'){
					p1.n9='X';
				}else if(p1.n9=='O'&&p1.n7=='O'&&p1.n8!='X'){
					p1.n8='X';
				}else if(p1.n8=='O'&&p1.n9=='O'&&p1.n7!='X'){
					p1.n7='X';
				}else if(p1.n1=='O'&&p1.n4=='O'&&p1.n7!='X'){
					p1.n7='X';
				}else if(p1.n1=='O'&&p1.n7=='O'&&p1.n4!='X'){
					p1.n4='X';
				}else if(p1.n4=='O'&&p1.n7=='O'&&p1.n1!='X'){
					p1.n1='X';
				}else if(p1.n6=='O'&&p1.n3=='O'&&p1.n9!='X'){
					p1.n9='X';
				}else if(p1.n9=='O'&&p1.n3=='O'&&p1.n6!='X'){
					p1.n6='X';
				}else if(p1.n6=='O'&&p1.n9=='O'&&p1.n3!='X'){
					p1.n3='X';
				}else{
					if(p1.n1=='O'&&p1.n9=='O'){
						if(p1.n2!='O'&&p1.n2!='X'){
							p1.n2='X';
						}else if(p1.n4!='O'&&p1.n4!='X'){
							p1.n4='X';
						}else if(p1.n6!='O'&&p1.n6!='X'){
							p1.n6='X';
						}else if(p1.n8!='O'&&p1.n8!='X'){
							p1.n8='X';
						}
					}else if(p1.n3=='O'&&p1.n7=='O'){
						if(p1.n2!='O'&&p1.n2!='X'){
							p1.n2='X';
						}else if(p1.n4!='O'&&p1.n4!='X'){
							p1.n4='X';
						}else if(p1.n6!='O'&&p1.n6!='X'){
							p1.n6='X';
						}else if(p1.n8!='O'&&p1.n8!='X'){
							p1.n8='X';
						}
					}
					if(p1.n1!='O'&&p1.n1!='X'){
						p1.n1='X';
					}else if(p1.n2!='O'&&p1.n2!='X'){
						p1.n2='X';
					}else if(p1.n3!='O'&&p1.n3!='X'){
						p1.n3='X';
					}else if(p1.n4!='O'&&p1.n4!='X'){
						p1.n4='X';
					}else if(p1.n5!='O'&&p1.n5!='X'){
						p1.n5='X';
					}else if(p1.n6!='O'&&p1.n6!='X'){
						p1.n6='X';
					}else if(p1.n7!='O'&&p1.n7!='X'){
						p1.n7='X';
					}else if(p1.n8!='O'&&p1.n8!='X'){
						p1.n8='X';
					}else if(p1.n9!='O'&&p1.n9!='X'){
						p1.n9='X';
					}
				}
			}
		}else if(k==3){
			if(m==1){
				pa=10-i;
				if(pa==2){
					p1.n2='X';
				}else if(pa==3){
					p1.n3='X';
				}else if(pa==4){
					p1.n4='X';
				}else if(pa==6){
					p1.n6='X';
				}else if(pa==7){
					p1.n7='X';
				}else if(pa==8){
					p1.n8='X';
				}else if(pa==9){
					p1.n9='X';
				}else{
					;
				}
			}else{
				if(p1.n1=='O'&&p1.n2=='O'&&p1.n3!='X'){
					p1.n3='X';
				}else if(p1.n1=='O'&&p1.n3=='O'&&p1.n2!='X'){
					p1.n2='X';
				}else if(p1.n1=='O'&&p1.n2=='O'&&p1.n1!='X'){
					p1.n1='X';
				}else if(p1.n7=='O'&&p1.n8=='O'&&p1.n9!='X'){
					p1.n9='X';
				}else if(p1.n9=='O'&&p1.n7=='O'&&p1.n8!='X'){
					p1.n8='X';
				}else if(p1.n8=='O'&&p1.n9=='O'&&p1.n7!='X'){
					p1.n7='X';
				}else if(p1.n1=='O'&&p1.n4=='O'&&p1.n7!='X'){
					p1.n7='X';
				}else if(p1.n1=='O'&&p1.n7=='O'&&p1.n4!='X'){
					p1.n4='X';
				}else if(p1.n4=='O'&&p1.n7=='O'&&p1.n1!='X'){
					p1.n1='X';
				}else if(p1.n6=='O'&&p1.n3=='O'&&p1.n9!='X'){
					p1.n9='X';
				}else if(p1.n9=='O'&&p1.n3=='O'&&p1.n6!='X'){
					p1.n6='X';
				}else if(p1.n6=='O'&&p1.n9=='O'&&p1.n3!='X'){
					p1.n3='X';
				}else{
					if(p1.n1!='O'&&p1.n1!='X'){
						p1.n1='X';
					}else if(p1.n2!='O'&&p1.n2!='X'){
						p1.n2='X';
					}else if(p1.n3!='O'&&p1.n3!='X'){
						p1.n3='X';
					}else if(p1.n4!='O'&&p1.n4!='X'){
						p1.n4='X';
					}else if(p1.n5!='O'&&p1.n5!='X'){
						p1.n5='X';
					}else if(p1.n6!='O'&&p1.n6!='X'){
						p1.n6='X';
					}else if(p1.n7!='O'&&p1.n7!='X'){
						p1.n7='X';
					}else if(p1.n8!='O'&&p1.n8!='X'){
						p1.n8='X';
					}else if(p1.n9!='O'&&p1.n9!='X'){
						p1.n9='X';
					}
				}
			}
		}else if(k==4){
			if(m==1){
				pa=10-i;
				if(pa==2){
					p1.n2='X';
				}else if(pa==3){
					p1.n3='X';
				}else if(pa==4){
					p1.n4='X';
				}else if(pa==6){
					p1.n6='X';
				}else if(pa==7){
					p1.n7='X';
				}else if(pa==8){
					p1.n8='X';
				}else if(pa==9){
					p1.n9='X';
				}else{
					;
				}
			}else{
				if(p1.n1=='O'&&p1.n2=='O'&&p1.n3!='X'){
					p1.n3='X';
				}else if(p1.n1=='O'&&p1.n3=='O'&&p1.n2!='X'){
					p1.n2='X';
				}else if(p1.n1=='O'&&p1.n2=='O'&&p1.n1!='X'){
					p1.n1='X';
				}else if(p1.n7=='O'&&p1.n8=='O'&&p1.n9!='X'){
					p1.n9='X';
				}else if(p1.n9=='O'&&p1.n7=='O'&&p1.n8!='X'){
					p1.n8='X';
				}else if(p1.n8=='O'&&p1.n9=='O'&&p1.n7!='X'){
					p1.n7='X';
				}else if(p1.n1=='O'&&p1.n4=='O'&&p1.n7!='X'){
					p1.n7='X';
				}else if(p1.n1=='O'&&p1.n7=='O'&&p1.n4!='X'){
					p1.n4='X';
				}else if(p1.n4=='O'&&p1.n7=='O'&&p1.n1!='X'){
					p1.n1='X';
				}else if(p1.n6=='O'&&p1.n3=='O'&&p1.n9!='X'){
					p1.n9='X';
				}else if(p1.n9=='O'&&p1.n3=='O'&&p1.n6!='X'){
					p1.n6='X';
				}else if(p1.n6=='O'&&p1.n9=='O'&&p1.n3!='X'){
					p1.n3='X';
				}else{
					if(p1.n1!='O'&&p1.n1!='X'){
						p1.n1='X';
					}else if(p1.n2!='O'&&p1.n2!='X'){
						p1.n2='X';
					}else if(p1.n3!='O'&&p1.n3!='X'){
						p1.n3='X';
					}else if(p1.n4!='O'&&p1.n4!='X'){
						p1.n4='X';
					}else if(p1.n5!='O'&&p1.n5!='X'){
						p1.n5='X';
					}else if(p1.n6!='O'&&p1.n6!='X'){
						p1.n6='X';
					}else if(p1.n7!='O'&&p1.n7!='X'){
						p1.n7='X';
					}else if(p1.n8!='O'&&p1.n8!='X'){
						p1.n8='X';
					}else if(p1.n9!='O'&&p1.n9!='X'){
						p1.n9='X';
					}
				}
			}
		}
		system("cls");
		printf("數字格子輸入:\n\n%c|%c|%c\n-------\n%c|%c|%c\n-------\n%c|%c|%c\n\n",p1.n1,p1.n2,p1.n3,p1.n4,p1.n5,p1.n6,p1.n7,p1.n8,p1.n9);
		j++;
	}
	return j;
}
