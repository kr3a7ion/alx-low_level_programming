#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s) {
    int result = 0;
    int sign = 1;
    bool number_found = false;
    
    // Skip leading whitespaces
    while (*s == ' ')
        s++;
    
    // Check for sign
    if (*s == '-') {
        sign = -1;
        s++;
    } else if (*s == '+') {
        s++;
    }
    
    // Convert string to integer
    while (*s != '\0') {
        if (*s >= '0' && *s <= '9') {
            number_found = true;
            int digit = *s - '0';
            
            // Check for overflow
            if (result > (INT_MAX - digit) / 10) {
                if (sign == -1)
                    return INT_MIN;
                else
                    return INT_MAX;
            }
            
            result = result * 10 + digit;
        } else {
            // Stop if non-numeric character is encountered after number
            if (number_found)
                break;
        }
        
        s++;
    }
    
    return (0);
}
