#include<iostream>
#include<string>
using namespace std;
int main(int argc, char** argv)
{
    int n;
	scanf("%d",&n);
    for(int i=1; i<=n; i++){
        string s=to_string(i);
        int flag=0;
        for(int j=0; j<s.size(); j++){
            if(s[j]=='3'||s[j]=='6'||s[j]=='9')
            	flag++;          
        }
        if(flag!=0)
            for(int j=0; j<flag; j++)
                printf("-");
    
        else
        	printf("%d",i);
        printf(" ");
    }
	return 0;
}