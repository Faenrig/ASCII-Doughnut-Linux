#include <iostream>
#include <string.h>
#include <math.h>
#include <chrono>
#include <thread>

void set_asleep(long milliseconds)
{
    std::this_thread::sleep_for(std::chrono::milliseconds(milliseconds));
}

int main()
{
    float a = 0, b = 0;
    float i, j;
    float z[1760];
    char c[1760];
    int k;
    std::cout << "\x1b[2J";

    while (true)
    {
        memset(c, 32, 1760);
        memset(z, 0, 7040);

        for (j = 0; j < 6.28; j += 0.07)
        {
            for (i = 0; i < 6.28; i += 0.02)
            {
                float d = sin(i);
                float e = cos(j);
                float f = sin(a);
                float g = sin(j);
                float h = cos(a);
                float s = e + 2;
                float l = 1 / (d * s * f + g * h + 5);
                float m = cos(i);
                float n = cos(b);
                float o = sin(b);
                float p = d * s * h - g * f;
                int x = 40 + 30 * l * (m * s * n - p * o);
                int y = 12 + 15 * l * (m * s * o + p * n);
                int q = x + 80 * y;
                int r = 8 * ((g * f - d * e * h) * n - d * e * f - g * h - m * e * o);

                if (22 > y && y > 0 && x > 0 && 80 > x && l > z[q])
                {
                    z[q] = l;
                    c[q] = ".,-~:;=!*#$@"[r > 0 ? r : 0];
                }
            }
        }
        std::cout << "\x1b[H";

        for (k = 0; k < 1761; k++)
        {
            putchar(k % 80 ? c[k] : 10);
            a += 0.00004;
            b += 0.00002;
        }
        set_asleep(80);
    }
    return 0;
}