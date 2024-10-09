#include &lt;stdio.h&gt;
#include &lt;stdlib.h&gt;
void uppercase (char*s){
while(*s!=&#39;\0&#39;) {
*s = (isalpha(*s) &amp;&amp; islower(*s)) ? toupper(*s) : *s;
s++;
}
}
int main() {
char str1[] = "python dan c";
char str2[] = "Python 2.7, c#. c++, dan C11";
char str3[] = "Ubuntu Linux";
printf("Sebelum konversi:\n");
printf("%s\n", str1);
printf("%s\n", str2);
printf("%s\n\n", str3);
uppercase(str1);
uppercase(str2);
uppercase(str3);
printf("Sebelum konversi:\n");
printf("%s\n", str1);
printf("%s\n", str2);
printf("%s\n", str3);
return 0;
}