"movl $1, %ebx\n"
"movl %ebx, %ecx\n"
"check_loop:\n"
"cmpl %eax, %ecx\n"
"je check_done\n"
"incl %ebx\n"
"imull %ebx, %ecx\n"
"jmp check_loop\n"
"check_done:\n"