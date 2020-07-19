#include<stdio.h>
#include<Windows.h>

#define N 7

void test(int monney){

	int tmp=monney;

	int value[N]={1,2,5,10,20,50,100};
	int count=0;

	for(int i=N-1;i>=0;i--){
	
		count =tmp/value[i];
		
		tmp = tmp -count*value[i];
		

		if(count){

		printf("需要面值%d元%d张",value[i],count);

		if(tmp==0){

		printf("\n");
		return ;
		
			}
	
		}
	

	}


}



int main(void){
	int money;
	printf("please input how much money: ");
	scanf("%d",&money);

	test(money);



	system("pause");
	return 0;
}