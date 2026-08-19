#include <p18f4580.h>

#define Switch1 PORTCbits.RC0
#define Switch2 PORTCbits.RC2

#define Led1 PORTCbits.RC4
#define Led2 PORTCbits.RC6

#define Dir_SW1 TRISCbits.RC0
#define Dir_SW2 TRISCbits.RC2

#define Dir_Led1 TRISCbits.RC4
#define Dir_Led2 TRISCbits.RC6

void main()
{
    

    Dir_SW1 = 1;        // RC0 Input
    Dir_SW2 = 1;        // RC2 Input

    Dir_Led1 = 0;       // RC4 Output
    Dir_Led2 = 0;       // RC6 Output

    while(1)
    {
        // Pull-up switch
        if(Switch1 == 0)
            Led1 = 1;
        else
            Led1 = 0;

        // Pull-down switch
        if(Switch2 == 1)
            Led2 = 1;
        else
            Led2 = 0;
    }
}