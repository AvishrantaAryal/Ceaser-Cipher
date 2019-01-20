#include<stdio.h>
int main()
{
	char x[26]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25};
	char y[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	char plaintext[20]={'C','R','Y','P','T','O','G','R','A','P','H','Y'};
	int key=3;
	char ct[12];
	int temp,i,j;
	
	for(i=0;i<12;i++)
	{
		for(j=0;j<26;j++){
			if(plaintext[i]==y[j]){
				temp = j;
				break;
			}
		}
		ct[i]=y[(x[j]+key)%26];
	}
	printf("\n Plain Text  : ");
	for(i=0;i<12;i++){
		printf(" %c",plaintext[i]);
	}
	
	printf("\n Cipher text : ");
	
	for(i=0;i<12;i++){
		printf(" %c",ct[i]);
	}
	
printf("\n\n------------------------Decryption---------------------------------------");
for(i=0;i<12;i++)
	{
		for(j=0;j<26;j++){
			if(ct[i]==y[j]){
				temp = j;
				break;
			}
		}
	//plaintext[i]=y[(x[j]-key)%26];
	int temp2=(x[j]-key)%26;
	if(temp2<0){
		temp2=temp2+26;
	}
	plaintext[i]=y[temp2];
	}
	printf("\n Cipher text : ");
	for(i=0;i<12;i++){
		printf(" %c",ct[i]);
	}
	
	printf("\n Plain text  : ");
	
	for(i=0;i<12;i++){
		printf(" %c",plaintext[i]);
	}
}
