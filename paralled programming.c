#include<stdio.h>
#include<conio.h>

int main(){
	char user_name[15];
	char password[10];
	
	printf("\n Registerition form: \n");
	printf("\n Create your username: ");
	scanf("%s", &user_name);
	printf("\n Create your Pin password: ");
	scanf("%s", &password);
	
	printf("\n\n ........Registered Successfully........\n");

	char a[15];
	char b[10];
	
	printf("\n Login form: \n");
	printf("\n Enter your username: ");
	scanf("%s", &a);
	printf("\n Enter your Pin password: ");
	scanf("%s", &b);

	if(strcmp(user_name,a)==0){
		if(strcmp(password,b)==0){
			printf("\n\n .....Login Successfully...");
		}
		else{
			printf("\n\n .......Wrong Password........");
		}
	}
	else{
		printf("\n\n ........Account Not Found........");
	}
	
}
