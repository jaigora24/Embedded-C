#include <reg.h>
xdata unsigned char a _at_ 0x3000;
xdata unsigned char b _at_ 0x3001;
xdata unsigned char c _at_ 0x3002;

void main(){
  c=a+b;
  here: goto here;
}
