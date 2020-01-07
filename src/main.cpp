#include <external/joystick.hh>

int main()
{
    Joystick joystick;
    if (!joystick.isFound())
    {
        printf("open failed.\n");
        // hmm
    }
}