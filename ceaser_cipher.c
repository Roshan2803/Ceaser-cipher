#include<stdio.h>
#include<string.h>
#include<math.h>
void encrypt(int);
void decrypt(int);

char text[50];

void encrypt(int key)
{
	int i,j;
	char result[50];

	j=strlen(text);

	for(i=0;i<=j;i++)
        {
		if(text[i]>=65&&text[i]<=90)
		{
    			result[i]=65+(text[i]+key)%65;
			if(result[i]>90)
			{
				result[i]=(result[i]-90)+65-1;
			}
		}
		else
		{
		  	result[i]=97+(text[i]+key)%97;
			if(result[i]>122)
			{
				result[i]=(result[i]-122)+97-1;
			}
		}
	}

  	printf("%s is the cipher\n",result);
}

void decrypt(int key)
{
   	int i,j;
   	char result[50];

	j=strlen(text);

   	for(i=0;i<=j;i++)
   	{
        	 if(text[i]>=65&&text[i]<=90)
		{
			result[i]=65+(text[i]-key)%65;
			if(result[i]>90)
			{
				result[i]=(result[i]-90)+65;
			}
		}
		else
		{
			result[i]=97+(text[i]-key)%97;
			if(result[i]>122)
			{
				result[i]=(result[i]-122)+97;
			}
		}
   	}
   	printf("%s is the text\n",result);
}

int main()
{
   	int n,key;
	
    	printf("\nEnter the choice\n1 Encrypt \n2 Decrypt\t");
   	scanf("%d", &n);

   	printf("\nEnter the key\t");
   	scanf("%d",&key);
   	printf("\nEnter the text\t");
   	scanf("%s",text);

   	if(n==1)
   	{
      		encrypt(key);
   	}
   	else
   	{
     		decrypt(key);
   	}
   	return 0;
}
