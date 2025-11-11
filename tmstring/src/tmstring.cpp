#include<tmstring>
void TMString::operator+=(const TMString &other)
{
char *tempStr=new char[this->size+other.size];
strcpy(tempStr,this->str);
strcat(tempStr,other.str);
TMString k;
*this=tempStr;
delete []tempStr;
return;
}

TMString TMString::operator*(int multiply)
{
char *tempStr=new char[this->size*multiply];
for(int k=0;k<multiply;k++) strcat(tempStr,this->str);
TMString other;
other=tempStr;
delete []tempStr;
return other;
}

TMString TMString::operator+(char const *str)
{
if(str==NULL || this->str==NULL) return *this;
char *tempStr=new char[this->size+strlen(str)];
strcpy(tempStr,this->str);
strcat(tempStr,str);
TMString k;
k=tempStr;
delete []tempStr;
return k;
}

int TMString::getSize()
{
return this->size;
}
TMString::TMString()
{
this->str=NULL;
this->size=0;
}
void TMString::operator=(char const *str)
{ 
if(str==NULL) return;
this->str==NULL;
this->size=0;
this->size=strlen(str);
this->str=new char[this->size];
strcpy(this->str,str);
}
void TMString::getStr(char *temp)
{
strcpy(temp,this->str);
}
ostream &operator<<(ostream &c,TMString &s)
{
char *temp=new char[s.getSize()];
s.getStr(temp);
c<<temp;
delete []temp;
return c;
}

/*ostream &operator<<(ostream &oo,TMString &st)            //Sir ka banvaya hua 
{
oo<<st.str;
return oo;
}
*/
void TMString::operator=(const TMString &other)
{
if(other.str==NULL) return;
this->str==NULL;
this->size=0;
this->size=other.size;
this->str=new char[this->size];
strcpy(this->str,other.str);
}
TMString::~TMString()
{
if(!this->str) delete []this->str;
}
int TMString::operator>(TMString &other)
{
if(other.str==NULL && this->str==NULL) return 0;
if(other.str==NULL) return 1;
if(this->str==NULL) return 0;
int k=strcmp(this->str,other.str);
if(k<0) return 0;
return 1; 
}
int TMString::operator<(TMString &other)
{
if(other.str==NULL && this->str==NULL) return 0;
if(other.str==NULL) return 0;
if(this->str==NULL) return 1;
int k=strcmp(this->str,other.str);
if(k<0) return 1;
return 0; 
}

int TMString::operator>=(TMString &other)
{
if(other.str==NULL && this->str==NULL) return 0;
if(other.str==NULL) return 1;
if(this->str==NULL) return 0;
int k=strcmp(this->str,other.str);
if(k<=0) return 0;
return 1; 
}
int TMString::operator<=(TMString &other)
{
if(other.str==NULL && this->str==NULL) return 0;
if(other.str==NULL) return 0;
if(this->str==NULL) return 1;
int k=strcmp(this->str,other.str);
if(k<=0) return 1;
return 0; 
}
int TMString::operator==(TMString &other)
{
if(other.str==NULL && this->str==NULL) return 1;
if(other.str==NULL) return 0;
if(this->str==NULL) return 0;
int k=strcmp(this->str,other.str);
if(k==0) return 1;
return 0; 
}
int TMString::operator!=(TMString &other)
{
if(other.str==NULL && this->str==NULL) return 0;
if(other.str==NULL) return 0;
if(this->str==NULL) return 0;
int k=strcmp(this->str,other.str);
if(k==0) return 0;
return 1; 
}
TMString TMString::operator+(TMString &other) const
{
char *str=new char[this->size+other.size];
strcpy(str,this->str);
int j=this->size;
int i=0;
while(i<other.size) 
{
str[j]=other.str[i]; 
i++;
j++;
}
str[j]='\0';
TMString temp;
temp=str;
delete []str;
return temp;
}

void TMString::insert(int i,TMString &other)
{

}
void TMString::insert(int i,TMString &other,int j,int k)
{
char *str=new char[this->size+k];
int e=0;
while(e<i) 
{
str[e]=this->str[e];
e++;
}
int s=0;
while(s<k) 
{
str[e]=other.str[j];
j++;
e++;
s++;
}
while(this->str[i]!='\0') str[e++]=this->str[i++];
this->str=str;
delete []str;
return;
}
void TMString::insert(int i,char const *string,int j,int k)
{
char *str=new char[this->size+k];
int e=0;
while(e<i) 
{
str[e]=this->str[e];
e++;
}
int s=0;
while(s<k) 
{
str[e]=string[j];
j++;
e++;
s++;
}
while(this->str[i]!='\0') str[e++]=this->str[i++];
this->str=str;
delete []str;
return;
}
void TMString::insert(int i,char const *string)
{
char *str=new char[this->size+strlen(string)];
int e=0;
while(e<i) 
{
str[e]=this->str[e];
e++;
}
int s=0;
while(s<strlen(str)) 
{
str[e]=string[s];
e++;
s++;
}
while(this->str[i]!='\0') str[e++]=this->str[i++];
this->str=str;
delete []str;
return;
}
void TMString::insert(int i,int times,char c)
{
char *str=new char[this->size+times];
int e=0;
while(e<i) 
{
str[e]=this->str[e];
e++;
}
int s=0;
while(s<times) 
{
str[e]=c;
e++;
s++;
}
while(this->str[i]!='\0') str[e++]=this->str[i++];
this->str=str;
delete []str;
return;
}

