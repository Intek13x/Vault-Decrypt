/* 
Vault.c version 0.01
 
-- This program has been created, tested and executed inside C4droid app on my android phone because i don't have a computer.
-- To run this program you have to edit some code according to your preference. Read the instructions.
-- This program works best with image files(.jpg, jpeg, etc.)
-- If you have any problem then contact me on twitter @Intek13x_

*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *file_input, *file_output;
    
    int read_char, i = 0;
    int xor_byte = 0x42; // Put your xor key byte here.

    file_input = fopen("Sample.bin", "rb+"); // Enter the name of your encrypted file in place of "Sample.bin". Rename it if it's too long.
    
    file_output = fopen("Sample_decrypted.jpg","wb"); // Enter the name for output file with appropriate extension(like .jpg, .png, etc..).
    
    while((read_char = getc(file_input)) != EOF)
    {
    	if(i < 128)
        {
        	 fputc(read_char^xor_byte, file_output);
        	 i++;
        }
        else 
        {
        	fputc(read_char, file_output);
        }
    }
    
    printf("Nice weather!, right.?");

    fclose(file_input);
    fclose(file_output);

    return 0;
}