#include <stdio.h>

int main()
{
    int hours = 0, minutes = 0, seconds = 0;

    while (1)
    {
        // Increment seconds and handle rollover
        seconds++;
        if (seconds == 60)
        {
            seconds = 0;
            minutes++;
            if (minutes == 60)
            {
                minutes = 0;
                hours++;
                if (hours == 24)
                {
                    hours = 0;
                }
            }
        }

        // Print the time in HH:MM:SS format
        printf("%02d:%02d:%02d\r", hours, minutes, seconds);
        fflush(stdout);

        // Simulate a one-second delay
        for (int i = 0; i < 10000000; i++)
        {
            // Delay loop to approximate 1 second
        }
    }

    return 0;
}
