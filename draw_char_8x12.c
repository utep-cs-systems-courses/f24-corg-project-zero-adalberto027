#include "draw.h"        /* para acceder a las fuentes */
#include "stdio.h"        /* para putchar */

void print_char_8x12(char c)
{
    c -= 0x20;  // Ajustar el valor del carácter
    for (char col = 0; col < 12; col++) {  // Recorrer las columnas de 8x12
        for (char row = 0; row < 8; row++) {  // Recorrer las filas
            unsigned char rowBits = font_8x12[c][col];
            unsigned char colMask = 1 << (7-row);  // Máscara para seleccionar el bit correspondiente
            putchar((rowBits & colMask) ? '*' : ' ');
        }
        putchar('\n');  // Nueva línea al final de cada columna
    }
    putchar('\n');
}
