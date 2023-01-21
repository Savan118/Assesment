#include<stdio.h>
void reverseString(); //reverse a string
void frequencyStr(char str2[]);
void stringPalindrome();
void strVowelConso(char str2[]);
void countDigits_blankspace();
main()
{
	
	char str1,str2[20];
	char s1[10],s2[10],s[20],ch1;
	int ch,i,length,FLAG = 0, COUNT=0;
	printf("1. Reverse String\n2. Concatenation\n3. Palindrome\n4. Copy String\n5. Length of the String\n6. Frequency of Character in string\n7. Find number of vowels and consonants\n8. Find number of blank spaces and digits\n ");
	printf("\n\nEnter the Choice: ");
	scanf("%d",&ch);
	
	
	switch(ch)
	{
		//Reverse of string
		case 1:
			{
				printf("Enter the String: ");
				scanf("%c",&str1);
				reverseString();
				break;		
			}
			
		//Concatenation of string
		case 2:
			{
				printf("\nEnter the String1: ");
				scanf("%s",&s1);
				printf("\nEnter the String2: ");
				scanf("%s",&s2);
				
				printf("\nAfter Concatenation:: %s ",strcat(s1,s2));
				break;
			}
			
		//String palindrome
		case 3:
			{	
				stringPalindrome();
				break;
	
			}
		//Copy the string	
		case 4:
			{
				char s2[10]="";
				printf("Enter the String: ");
				scanf("%s",&s1);
				
				printf("\n-----BEFORE COPY-----");
				printf("\nActual String = %s",s1);
				printf("\nCoping String = %s",s2);
				
				strcpy(s2,s1);
				
				printf("\n-----AFTER COPY-----");
				printf("\nActual String = %s",s1);
				printf("\nCoping String = %s",s2);
				break;
								
			}
			
		//Length of String
		case 5:
			{
				printf("Enter the String: ");
				scanf("%s",&s1);
				
				printf("Length of the string is %zu",strlen(s1));
				break;
			}
			
		//Frequency of String
		case 6:
			{
				printf("Enter the String: ");
				scanf("%s",&str2);
				frequencyStr(str2);
				break;
			}	
		
		//
		case 7:
			{
				printf("Enter thr String: ");
				scanf("%s",&str2);
				strVowelConso(str2);
				break;
			}
		
		//
		case 8:
			{
				countDigits_blankspace();
				break;			
			}
			
		default:
		printf("\nPlease enter valid choice!");		
	}
}

//Function of reverse a string
reverseString()
{
	char str2;
	scanf("%c",&str2);
	if(str2!='\n')
	{
		reverseString();
		printf("%c",str2);
	}
}

//Function of String frequnecy
frequencyStr(char str2[])
{
			char ch;
			int i,COUNT = 0;
			sizeof(str2);
			printf("\nenter the character to find its frequency: ");
			scanf("%c",&ch);
			
			for(i=0;str2[i]!='\0';++i)
			{
				if(ch==str2[i])
				++COUNT;
			}
			printf("\nFREQUENCY of %c = %d",ch,COUNT);
}


//Function of String Palindrome
stringPalindrome()
{
			int i, length, FLAG=0;
			char str2[30];
			printf("Enter the String: ");
				//gets(str2);
				scanf("%s",&str2);
	
				length = strlen(str2);
	
				for(i=0;i<length;i++)
				{
					if(str2[i] != str2[length-i-1])
					{
						FLAG = 1;
						break;
					}
				}

				if(FLAG)
				{
					printf("%s is not a palindrome",str2);
				}
				else
				{
					printf("%s is as palindrome",str2);		
				}

}

//Function for vowels and consonants
strVowelConso(char str2[])
{
	
    int vowels = 0, consonants = 0;
 
    int i;
    char ch;
 
    // Take each character from this string to check
    for (i = 0; str2[i] != '\0'; i++) {
 
        ch = str2[i];
 
        // If this character is a vowel,
        // increment the count of vowels
        if (ch == 'a' || ch == 'e'
            || ch == 'i' || ch == 'o'
            || ch == 'u' || ch == 'A'
            || ch == 'E' || ch == 'I'
            || ch == 'O' || ch == 'U')
            vowels++;
 
        // If this character is a space
        // skip it
        else if (ch == ' ')
            continue;
 
        else
            // Else increment the count of consonants
            consonants++;
    }
 
    // Print the total count of vowels and consonants
    printf("\nVowels: %d", vowels);
    printf("\nConsonants: %d", consonants);

}

//Function for count blankspace and digits
countDigits_blankspace()
{
	char str2[20];
	int nDIGIT=0, nWHITE=0,nLETTER=0, nother=0;
	int i=0;
	
	printf("Enter the String: ");
	scanf("%s",&str2);
				
	
	while(str2[i] != '\0')
	{
		char ch = str2[i];
		
		if(ch>='0' && ch<='9')
		nDIGIT++;
		
		else if(ch==' '|| ch=='\n' || ch=='\t')
		nWHITE++;
		
		else if(ch>='A' && ch<='Z'|| ch>='a' && ch<='z')
		nLETTER++;
		
		else nother++;
		i++;
		
	}
	
	printf("\n\nTotal letters = %d ",nLETTER);
	printf("\n\nTotal Digits = %d ",nDIGIT);
	printf("\n\nTotal Whitespaces = %d ",nWHITE);
	printf("\n\nTotal Other letters = %d ",nother);

}
