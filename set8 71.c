#include <string.h>
int main()

{
    char s[20];
    int i, length;
    int flag = 0;
    
    printf("Enter a string:");
    scanf("%s", s);
    length = strlen(s);
    for(i=0;i < length ;i++){
        if(s[i] != s[length-i-1]){
            flag = 1;
            break;
   }
} 
    if (flag)
    
    {
        printf("%s is not a palindrome",s);
    }    
    else
    {
        printf("%s is a palindrome",s);
 }
