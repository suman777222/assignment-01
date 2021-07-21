#include<stdio.h>

int main()
{
	string s;
	string snew="";
      char(cin,s);
	for(int i=0;i<s.length();i++)
	{ 
		if((s[i]>='a' && s[i]<='z')||(s[i]>='A' && s[i]<='Z' )||s[i]==' ')
		{
			snew=snew+s[i];
		}
	}
	for(int i=0;i<snew.length();i++)
	{
		if(i==0||i==snew.length()-1)
		{
	snew[i]=toupper(snew[i]);
	}
	else if(snew[i]==' ')
	{
	snew[i-1]=toupper(snew[i-1]);
	snew[i+1]=toupper(snew[i+1]);
}
}
cout<<snew;
}
