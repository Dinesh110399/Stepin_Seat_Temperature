#include <avr/io.h>
#include"Activity1.h"
#include"Activity2.h"
#include"Activity3.h"
int main(void)
{
    while(1)
    {
        Activity1();
        Activity2();
        //Activity3();
    }
  return 0;
}
