/*
 * XREFs of SymCryptFdefRawSquareMulx1024 @ 0x140407510
 * Callers:
 *     SymCryptFdefModSquareMontgomeryMulx1024 @ 0x1403FF5F0 (SymCryptFdefModSquareMontgomeryMulx1024.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptFdefRawSquareMulx1024(unsigned __int64 *a1, __int64 a2, __int64 a3)
{
  __int128 v12; // rdx
  unsigned __int64 v14; // rt2
  __int128 v59; // rdx
  __int128 v96; // rdx
  unsigned __int64 v102; // rt2
  __int128 v167; // rdx
  __int128 v203; // rdx
  __int128 v239; // rdx
  __int128 v275; // rdx
  __int128 v311; // rdx
  __int128 v347; // rdx
  __int128 v383; // rdx
  __int128 v553; // rdx
  __int128 v562; // rdx
  __int128 v571; // rdx
  __int128 v580; // rdx
  __int128 v589; // rdx
  __int128 v598; // rdx
  __int128 v607; // rdx
  __int128 v616; // rdx
  __int128 v625; // rdx
  __int128 v634; // rdx
  __int128 v643; // rdx
  __int128 v652; // rdx
  __int128 v661; // rdx
  __int128 v670; // rdx
  __int128 v679; // rdx
  __int64 result; // rax
  __int128 v688; // rdx

  *(_OWORD *)a3 = 0LL;
  *(_OWORD *)(a3 + 16) = 0LL;
  *(_OWORD *)(a3 + 32) = 0LL;
  *(_OWORD *)(a3 + 48) = 0LL;
  *(_OWORD *)(a3 + 64) = 0LL;
  *(_OWORD *)(a3 + 80) = 0LL;
  *(_OWORD *)(a3 + 96) = 0LL;
  *(_OWORD *)(a3 + 112) = 0LL;
  _RSI = *(_QWORD *)(a3 + 8);
  _RDI = *(_QWORD *)(a3 + 16);
  _RBP = *(_QWORD *)(a3 + 24);
  _RBX = *(_QWORD *)(a3 + 32);
  _R12 = *(_QWORD *)(a3 + 40);
  _R13 = *(_QWORD *)(a3 + 48);
  _R14 = *(_QWORD *)(a3 + 56);
  _R11 = 0LL;
  v14 = a1[1];
  v12 = *a1;
  _R10 = (v12 * (unsigned __int128)v14) >> 64;
  _RAX = v12 * v14;
  __asm
  {
    adcx    rsi, rax
    adox    rdi, r10
  }
  _R10 = ((unsigned __int64)v12 * (unsigned __int128)*(unsigned __int64 *)(*((_QWORD *)&v12 + 1) + 16LL)) >> 64;
  _RAX = v12 * *(_QWORD *)(*((_QWORD *)&v12 + 1) + 16LL);
  __asm
  {
    adcx    rdi, rax
    adox    rbp, r10
  }
  _R10 = ((unsigned __int64)v12 * (unsigned __int128)MEMORY[0x18]) >> 64;
  _RAX = v12 * MEMORY[0x18];
  __asm
  {
    adcx    rbp, rax
    adox    rbx, r10
  }
  _R10 = ((unsigned __int64)v12 * (unsigned __int128)MEMORY[0x20]) >> 64;
  _RAX = v12 * MEMORY[0x20];
  __asm
  {
    adcx    rbx, rax
    adox    r12, r10
  }
  _R10 = ((unsigned __int64)v12 * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = v12 * MEMORY[0x28];
  __asm
  {
    adcx    r12, rax
    adox    r13, r10
  }
  _R10 = ((unsigned __int64)v12 * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = v12 * MEMORY[0x30];
  __asm
  {
    adcx    r13, rax
    adox    r14, r10
  }
  _R10 = ((unsigned __int64)v12 * (unsigned __int128)MEMORY[0x38]) >> 64;
  _RAX = v12 * MEMORY[0x38];
  __asm { adcx    r14, rax }
  *(_QWORD *)(a3 + 8) = _RSI;
  __asm
  {
    adcx    r11, r11
    adox    r11, r10
  }
  *(_QWORD *)(a3 + 16) = _RDI;
  _R10 = (MEMORY[8] * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = MEMORY[8] * MEMORY[0x10];
  __asm
  {
    adcx    rbp, rax
    adox    rbx, r10
  }
  _R10 = (MEMORY[8] * (unsigned __int128)MEMORY[0x18]) >> 64;
  _RAX = MEMORY[8] * MEMORY[0x18];
  __asm
  {
    adcx    rbx, rax
    adox    r12, r10
  }
  _R10 = (MEMORY[8] * (unsigned __int128)MEMORY[0x20]) >> 64;
  _RAX = MEMORY[8] * MEMORY[0x20];
  __asm
  {
    adcx    r12, rax
    adox    r13, r10
  }
  _R10 = (MEMORY[8] * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = MEMORY[8] * MEMORY[0x28];
  __asm
  {
    adcx    r13, rax
    adox    r14, r10
  }
  v59 = MEMORY[8];
  _R10 = (MEMORY[8] * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = MEMORY[8] * MEMORY[0x30];
  __asm
  {
    adcx    r14, rax
    adox    r11, r10
  }
  *(_QWORD *)&v59 = MEMORY[0x38];
  _RSI = 0LL;
  _RDI = 0LL;
  *(_QWORD *)(a3 + 24) = _RBP;
  _R10 = ((unsigned __int64)v59 * (unsigned __int128)*(unsigned __int64 *)(*((_QWORD *)&v59 + 1) + 8LL)) >> 64;
  _RAX = v59 * *(_QWORD *)(*((_QWORD *)&v59 + 1) + 8LL);
  __asm
  {
    adcx    r11, rax
    adox    rsi, r10
  }
  _R10 = ((unsigned __int64)v59 * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = v59 * MEMORY[0x10];
  __asm { adcx    rsi, rax }
  *(_QWORD *)(a3 + 32) = _RBX;
  __asm { adcx    rdi, r10 }
  _R10 = (MEMORY[0x10] * (unsigned __int128)MEMORY[0x18]) >> 64;
  _RAX = MEMORY[0x10] * MEMORY[0x18];
  __asm
  {
    adcx    r12, rax
    adox    r13, r10
  }
  _R10 = (MEMORY[0x10] * (unsigned __int128)MEMORY[0x20]) >> 64;
  _RAX = MEMORY[0x10] * MEMORY[0x20];
  __asm
  {
    adcx    r13, rax
    adox    r14, r10
  }
  _R10 = (MEMORY[0x10] * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = MEMORY[0x10] * MEMORY[0x28];
  __asm
  {
    adcx    r14, rax
    adox    r11, r10
  }
  _R10 = (MEMORY[0x10] * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = MEMORY[0x10] * MEMORY[0x30];
  __asm
  {
    adcx    r11, rax
    adox    rsi, r10
  }
  _RBP = 0LL;
  _RBX = 0LL;
  _R10 = (MEMORY[0x20] * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = MEMORY[0x20] * MEMORY[0x28];
  __asm
  {
    adcx    rsi, rax
    adox    rdi, r10
  }
  v96 = MEMORY[0x20];
  _R10 = (MEMORY[0x20] * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = MEMORY[0x20] * MEMORY[0x30];
  __asm
  {
    adcx    rdi, rax
    adox    rbp, r10
  }
  *(_QWORD *)&v96 = MEMORY[0x28];
  *(_QWORD *)(a3 + 40) = _R12;
  v102 = *(_QWORD *)(*((_QWORD *)&v96 + 1) + 48LL);
  v96 = (unsigned __int64)v96;
  _R10 = ((unsigned __int64)v96 * (unsigned __int128)v102) >> 64;
  _RAX = v96 * v102;
  __asm
  {
    adcx    rbp, rax
    adcx    rbx, r10
  }
  *(_QWORD *)&v96 = MEMORY[0x18];
  *(_QWORD *)(a3 + 48) = _R13;
  _R10 = ((unsigned __int64)v96 * (unsigned __int128)*(unsigned __int64 *)(*((_QWORD *)&v96 + 1) + 32LL)) >> 64;
  _RAX = v96 * *(_QWORD *)(*((_QWORD *)&v96 + 1) + 32LL);
  __asm
  {
    adcx    r14, rax
    adox    r11, r10
  }
  _R10 = ((unsigned __int64)v96 * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = v96 * MEMORY[0x28];
  __asm
  {
    adcx    r11, rax
    adox    rsi, r10
  }
  _R10 = ((unsigned __int64)v96 * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = v96 * MEMORY[0x30];
  __asm
  {
    adcx    rsi, rax
    adox    rdi, r10
  }
  v96 = (unsigned __int64)v96;
  _R10 = ((unsigned __int64)v96 * (unsigned __int128)MEMORY[0x38]) >> 64;
  _RAX = v96 * MEMORY[0x38];
  __asm
  {
    adcx    rdi, rax
    adox    rbp, r10
  }
  *(_QWORD *)&v96 = MEMORY[0x38];
  _R12 = 0LL;
  _R13 = 0LL;
  *(_QWORD *)(a3 + 56) = _R14;
  _R10 = ((unsigned __int64)v96 * (unsigned __int128)*(unsigned __int64 *)(*((_QWORD *)&v96 + 1) + 32LL)) >> 64;
  _RAX = v96 * *(_QWORD *)(*((_QWORD *)&v96 + 1) + 32LL);
  __asm
  {
    adcx    rbp, rax
    adox    rbx, r10
  }
  _R10 = ((unsigned __int64)v96 * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = v96 * MEMORY[0x28];
  __asm
  {
    adcx    rbx, rax
    adox    r12, r10
  }
  _R10 = ((unsigned __int64)v96 * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = v96 * MEMORY[0x30];
  __asm
  {
    adcx    r12, rax
    adcx    r13, r10
  }
  _R14 = 0LL;
  _R8 = (__int64 *)(a3 + 64);
  __asm { adox    r11, [r8] }
  _R10 = (MEMORY[0x40] * (unsigned __int128)MEMORY[0]) >> 64;
  _RAX = MEMORY[0x40] * MEMORY[0];
  __asm
  {
    adcx    r11, rax
    adox    rsi, r10
  }
  _R10 = (MEMORY[0x40] * (unsigned __int128)MEMORY[8]) >> 64;
  _RAX = MEMORY[0x40] * MEMORY[8];
  __asm
  {
    adcx    rsi, rax
    adox    rdi, r10
  }
  _R10 = (MEMORY[0x40] * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = MEMORY[0x40] * MEMORY[0x10];
  __asm
  {
    adcx    rdi, rax
    adox    rbp, r10
  }
  _R10 = (MEMORY[0x40] * (unsigned __int128)MEMORY[0x18]) >> 64;
  _RAX = MEMORY[0x40] * MEMORY[0x18];
  __asm
  {
    adcx    rbp, rax
    adox    rbx, r10
  }
  _R10 = (MEMORY[0x40] * (unsigned __int128)MEMORY[0x20]) >> 64;
  _RAX = MEMORY[0x40] * MEMORY[0x20];
  __asm
  {
    adcx    rbx, rax
    adox    r12, r10
  }
  _R10 = (MEMORY[0x40] * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = MEMORY[0x40] * MEMORY[0x28];
  __asm
  {
    adcx    r12, rax
    adox    r13, r10
  }
  _R10 = (MEMORY[0x40] * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = MEMORY[0x40] * MEMORY[0x30];
  __asm
  {
    adcx    r13, rax
    adox    r14, r10
  }
  v167 = MEMORY[0x40];
  _R10 = (MEMORY[0x40] * (unsigned __int128)MEMORY[0x38]) >> 64;
  _RAX = MEMORY[0x40] * MEMORY[0x38];
  __asm { adcx    r14, rax }
  *_R8 = _R11;
  _R11 = 0LL;
  __asm
  {
    adcx    r11, r11
    adox    r11, r10
  }
  __asm { adox    rsi, [r8+8] }
  _R10 = (MEMORY[0x48] * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v167 + 1)) >> 64;
  _RAX = MEMORY[0x48] * **((_QWORD **)&v167 + 1);
  __asm
  {
    adcx    rsi, rax
    adox    rdi, r10
  }
  _R10 = (MEMORY[0x48] * (unsigned __int128)MEMORY[8]) >> 64;
  _RAX = MEMORY[0x48] * MEMORY[8];
  __asm
  {
    adcx    rdi, rax
    adox    rbp, r10
  }
  _R10 = (MEMORY[0x48] * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = MEMORY[0x48] * MEMORY[0x10];
  __asm
  {
    adcx    rbp, rax
    adox    rbx, r10
  }
  _R10 = (MEMORY[0x48] * (unsigned __int128)MEMORY[0x18]) >> 64;
  _RAX = MEMORY[0x48] * MEMORY[0x18];
  __asm
  {
    adcx    rbx, rax
    adox    r12, r10
  }
  _R10 = (MEMORY[0x48] * (unsigned __int128)MEMORY[0x20]) >> 64;
  _RAX = MEMORY[0x48] * MEMORY[0x20];
  __asm
  {
    adcx    r12, rax
    adox    r13, r10
  }
  _R10 = (MEMORY[0x48] * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = MEMORY[0x48] * MEMORY[0x28];
  __asm
  {
    adcx    r13, rax
    adox    r14, r10
  }
  _R10 = (MEMORY[0x48] * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = MEMORY[0x48] * MEMORY[0x30];
  __asm
  {
    adcx    r14, rax
    adox    r11, r10
  }
  v203 = MEMORY[0x48];
  _R10 = (MEMORY[0x48] * (unsigned __int128)MEMORY[0x38]) >> 64;
  _RAX = MEMORY[0x48] * MEMORY[0x38];
  __asm { adcx    r11, rax }
  _R8[1] = _RSI;
  _RSI = 0LL;
  __asm
  {
    adcx    rsi, rsi
    adox    rsi, r10
  }
  __asm { adox    rdi, [r8+10h] }
  _R10 = (MEMORY[0x50] * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v203 + 1)) >> 64;
  _RAX = MEMORY[0x50] * **((_QWORD **)&v203 + 1);
  __asm
  {
    adcx    rdi, rax
    adox    rbp, r10
  }
  _R10 = (MEMORY[0x50] * (unsigned __int128)MEMORY[8]) >> 64;
  _RAX = MEMORY[0x50] * MEMORY[8];
  __asm
  {
    adcx    rbp, rax
    adox    rbx, r10
  }
  _R10 = (MEMORY[0x50] * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = MEMORY[0x50] * MEMORY[0x10];
  __asm
  {
    adcx    rbx, rax
    adox    r12, r10
  }
  _R10 = (MEMORY[0x50] * (unsigned __int128)MEMORY[0x18]) >> 64;
  _RAX = MEMORY[0x50] * MEMORY[0x18];
  __asm
  {
    adcx    r12, rax
    adox    r13, r10
  }
  _R10 = (MEMORY[0x50] * (unsigned __int128)MEMORY[0x20]) >> 64;
  _RAX = MEMORY[0x50] * MEMORY[0x20];
  __asm
  {
    adcx    r13, rax
    adox    r14, r10
  }
  _R10 = (MEMORY[0x50] * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = MEMORY[0x50] * MEMORY[0x28];
  __asm
  {
    adcx    r14, rax
    adox    r11, r10
  }
  _R10 = (MEMORY[0x50] * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = MEMORY[0x50] * MEMORY[0x30];
  __asm
  {
    adcx    r11, rax
    adox    rsi, r10
  }
  v239 = MEMORY[0x50];
  _R10 = (MEMORY[0x50] * (unsigned __int128)MEMORY[0x38]) >> 64;
  _RAX = MEMORY[0x50] * MEMORY[0x38];
  __asm { adcx    rsi, rax }
  _R8[2] = _RDI;
  _RDI = 0LL;
  __asm
  {
    adcx    rdi, rdi
    adox    rdi, r10
  }
  __asm { adox    rbp, [r8+18h] }
  _R10 = (MEMORY[0x58] * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v239 + 1)) >> 64;
  _RAX = MEMORY[0x58] * **((_QWORD **)&v239 + 1);
  __asm
  {
    adcx    rbp, rax
    adox    rbx, r10
  }
  _R10 = (MEMORY[0x58] * (unsigned __int128)MEMORY[8]) >> 64;
  _RAX = MEMORY[0x58] * MEMORY[8];
  __asm
  {
    adcx    rbx, rax
    adox    r12, r10
  }
  _R10 = (MEMORY[0x58] * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = MEMORY[0x58] * MEMORY[0x10];
  __asm
  {
    adcx    r12, rax
    adox    r13, r10
  }
  _R10 = (MEMORY[0x58] * (unsigned __int128)MEMORY[0x18]) >> 64;
  _RAX = MEMORY[0x58] * MEMORY[0x18];
  __asm
  {
    adcx    r13, rax
    adox    r14, r10
  }
  _R10 = (MEMORY[0x58] * (unsigned __int128)MEMORY[0x20]) >> 64;
  _RAX = MEMORY[0x58] * MEMORY[0x20];
  __asm
  {
    adcx    r14, rax
    adox    r11, r10
  }
  _R10 = (MEMORY[0x58] * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = MEMORY[0x58] * MEMORY[0x28];
  __asm
  {
    adcx    r11, rax
    adox    rsi, r10
  }
  _R10 = (MEMORY[0x58] * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = MEMORY[0x58] * MEMORY[0x30];
  __asm
  {
    adcx    rsi, rax
    adox    rdi, r10
  }
  v275 = MEMORY[0x58];
  _R10 = (MEMORY[0x58] * (unsigned __int128)MEMORY[0x38]) >> 64;
  _RAX = MEMORY[0x58] * MEMORY[0x38];
  __asm { adcx    rdi, rax }
  _R8[3] = _RBP;
  _RBP = 0LL;
  __asm
  {
    adcx    rbp, rbp
    adox    rbp, r10
  }
  __asm { adox    rbx, [r8+20h] }
  _R10 = (MEMORY[0x60] * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v275 + 1)) >> 64;
  _RAX = MEMORY[0x60] * **((_QWORD **)&v275 + 1);
  __asm
  {
    adcx    rbx, rax
    adox    r12, r10
  }
  _R10 = (MEMORY[0x60] * (unsigned __int128)MEMORY[8]) >> 64;
  _RAX = MEMORY[0x60] * MEMORY[8];
  __asm
  {
    adcx    r12, rax
    adox    r13, r10
  }
  _R10 = (MEMORY[0x60] * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = MEMORY[0x60] * MEMORY[0x10];
  __asm
  {
    adcx    r13, rax
    adox    r14, r10
  }
  _R10 = (MEMORY[0x60] * (unsigned __int128)MEMORY[0x18]) >> 64;
  _RAX = MEMORY[0x60] * MEMORY[0x18];
  __asm
  {
    adcx    r14, rax
    adox    r11, r10
  }
  _R10 = (MEMORY[0x60] * (unsigned __int128)MEMORY[0x20]) >> 64;
  _RAX = MEMORY[0x60] * MEMORY[0x20];
  __asm
  {
    adcx    r11, rax
    adox    rsi, r10
  }
  _R10 = (MEMORY[0x60] * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = MEMORY[0x60] * MEMORY[0x28];
  __asm
  {
    adcx    rsi, rax
    adox    rdi, r10
  }
  _R10 = (MEMORY[0x60] * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = MEMORY[0x60] * MEMORY[0x30];
  __asm
  {
    adcx    rdi, rax
    adox    rbp, r10
  }
  v311 = MEMORY[0x60];
  _R10 = (MEMORY[0x60] * (unsigned __int128)MEMORY[0x38]) >> 64;
  _RAX = MEMORY[0x60] * MEMORY[0x38];
  __asm { adcx    rbp, rax }
  _R8[4] = _RBX;
  _RBX = 0LL;
  __asm
  {
    adcx    rbx, rbx
    adox    rbx, r10
  }
  __asm { adox    r12, [r8+28h] }
  _R10 = (MEMORY[0x68] * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v311 + 1)) >> 64;
  _RAX = MEMORY[0x68] * **((_QWORD **)&v311 + 1);
  __asm
  {
    adcx    r12, rax
    adox    r13, r10
  }
  _R10 = (MEMORY[0x68] * (unsigned __int128)MEMORY[8]) >> 64;
  _RAX = MEMORY[0x68] * MEMORY[8];
  __asm
  {
    adcx    r13, rax
    adox    r14, r10
  }
  _R10 = (MEMORY[0x68] * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = MEMORY[0x68] * MEMORY[0x10];
  __asm
  {
    adcx    r14, rax
    adox    r11, r10
  }
  _R10 = (MEMORY[0x68] * (unsigned __int128)MEMORY[0x18]) >> 64;
  _RAX = MEMORY[0x68] * MEMORY[0x18];
  __asm
  {
    adcx    r11, rax
    adox    rsi, r10
  }
  _R10 = (MEMORY[0x68] * (unsigned __int128)MEMORY[0x20]) >> 64;
  _RAX = MEMORY[0x68] * MEMORY[0x20];
  __asm
  {
    adcx    rsi, rax
    adox    rdi, r10
  }
  _R10 = (MEMORY[0x68] * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = MEMORY[0x68] * MEMORY[0x28];
  __asm
  {
    adcx    rdi, rax
    adox    rbp, r10
  }
  _R10 = (MEMORY[0x68] * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = MEMORY[0x68] * MEMORY[0x30];
  __asm
  {
    adcx    rbp, rax
    adox    rbx, r10
  }
  v347 = MEMORY[0x68];
  _R10 = (MEMORY[0x68] * (unsigned __int128)MEMORY[0x38]) >> 64;
  _RAX = MEMORY[0x68] * MEMORY[0x38];
  __asm { adcx    rbx, rax }
  _R8[5] = _R12;
  _R12 = 0LL;
  __asm
  {
    adcx    r12, r12
    adox    r12, r10
  }
  __asm { adox    r13, [r8+30h] }
  _R10 = (MEMORY[0x70] * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v347 + 1)) >> 64;
  _RAX = MEMORY[0x70] * **((_QWORD **)&v347 + 1);
  __asm
  {
    adcx    r13, rax
    adox    r14, r10
  }
  _R10 = (MEMORY[0x70] * (unsigned __int128)MEMORY[8]) >> 64;
  _RAX = MEMORY[0x70] * MEMORY[8];
  __asm
  {
    adcx    r14, rax
    adox    r11, r10
  }
  _R10 = (MEMORY[0x70] * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = MEMORY[0x70] * MEMORY[0x10];
  __asm
  {
    adcx    r11, rax
    adox    rsi, r10
  }
  _R10 = (MEMORY[0x70] * (unsigned __int128)MEMORY[0x18]) >> 64;
  _RAX = MEMORY[0x70] * MEMORY[0x18];
  __asm
  {
    adcx    rsi, rax
    adox    rdi, r10
  }
  _R10 = (MEMORY[0x70] * (unsigned __int128)MEMORY[0x20]) >> 64;
  _RAX = MEMORY[0x70] * MEMORY[0x20];
  __asm
  {
    adcx    rdi, rax
    adox    rbp, r10
  }
  _R10 = (MEMORY[0x70] * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = MEMORY[0x70] * MEMORY[0x28];
  __asm
  {
    adcx    rbp, rax
    adox    rbx, r10
  }
  _R10 = (MEMORY[0x70] * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = MEMORY[0x70] * MEMORY[0x30];
  __asm
  {
    adcx    rbx, rax
    adox    r12, r10
  }
  v383 = MEMORY[0x70];
  _R10 = (MEMORY[0x70] * (unsigned __int128)MEMORY[0x38]) >> 64;
  _RAX = MEMORY[0x70] * MEMORY[0x38];
  __asm { adcx    r12, rax }
  _R8[6] = _R13;
  _R13 = 0LL;
  __asm
  {
    adcx    r13, r13
    adox    r13, r10
  }
  __asm { adox    r14, [r8+38h] }
  _R10 = (MEMORY[0x78] * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v383 + 1)) >> 64;
  _RAX = MEMORY[0x78] * **((_QWORD **)&v383 + 1);
  __asm
  {
    adcx    r14, rax
    adox    r11, r10
  }
  _R10 = (MEMORY[0x78] * (unsigned __int128)MEMORY[8]) >> 64;
  _RAX = MEMORY[0x78] * MEMORY[8];
  __asm
  {
    adcx    r11, rax
    adox    rsi, r10
  }
  _R10 = (MEMORY[0x78] * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = MEMORY[0x78] * MEMORY[0x10];
  __asm
  {
    adcx    rsi, rax
    adox    rdi, r10
  }
  _R10 = (MEMORY[0x78] * (unsigned __int128)MEMORY[0x18]) >> 64;
  _RAX = MEMORY[0x78] * MEMORY[0x18];
  __asm
  {
    adcx    rdi, rax
    adox    rbp, r10
  }
  _R10 = (MEMORY[0x78] * (unsigned __int128)MEMORY[0x20]) >> 64;
  _RAX = MEMORY[0x78] * MEMORY[0x20];
  __asm
  {
    adcx    rbp, rax
    adox    rbx, r10
  }
  _R10 = (MEMORY[0x78] * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = MEMORY[0x78] * MEMORY[0x28];
  __asm
  {
    adcx    rbx, rax
    adox    r12, r10
  }
  _R10 = (MEMORY[0x78] * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = MEMORY[0x78] * MEMORY[0x30];
  __asm
  {
    adcx    r12, rax
    adox    r13, r10
  }
  _R10 = (MEMORY[0x78] * (unsigned __int128)MEMORY[0x38]) >> 64;
  _RAX = MEMORY[0x78] * MEMORY[0x38];
  __asm { adcx    r13, rax }
  _R8[7] = _R14;
  _R14 = 0LL;
  __asm
  {
    adcx    r14, r14
    adox    r14, r10
  }
  _R8 += 8;
  *_R8 = _R11;
  _R8[1] = _RSI;
  _R8[2] = _RDI;
  _R8[3] = _RBP;
  _R8[4] = _RBX;
  _R8[5] = _R12;
  _R8[6] = _R13;
  _R8[7] = _R14;
  _RSI = _R8[1];
  _RDI = _R8[2];
  _RBP = _R8[3];
  _RBX = _R8[4];
  _R12 = _R8[5];
  _R13 = _R8[6];
  _R14 = _R8[7];
  _R11 = 0LL;
  _R10 = (MEMORY[0x40] * (unsigned __int128)MEMORY[0x48]) >> 64;
  _RAX = MEMORY[0x40] * MEMORY[0x48];
  __asm
  {
    adcx    rsi, rax
    adox    rdi, r10
  }
  _R10 = (MEMORY[0x40] * (unsigned __int128)MEMORY[0x50]) >> 64;
  _RAX = MEMORY[0x40] * MEMORY[0x50];
  __asm
  {
    adcx    rdi, rax
    adox    rbp, r10
  }
  _R10 = (MEMORY[0x40] * (unsigned __int128)MEMORY[0x58]) >> 64;
  _RAX = MEMORY[0x40] * MEMORY[0x58];
  __asm
  {
    adcx    rbp, rax
    adox    rbx, r10
  }
  _R10 = (MEMORY[0x40] * (unsigned __int128)MEMORY[0x60]) >> 64;
  _RAX = MEMORY[0x40] * MEMORY[0x60];
  __asm
  {
    adcx    rbx, rax
    adox    r12, r10
  }
  _R10 = (MEMORY[0x40] * (unsigned __int128)MEMORY[0x68]) >> 64;
  _RAX = MEMORY[0x40] * MEMORY[0x68];
  __asm
  {
    adcx    r12, rax
    adox    r13, r10
  }
  _R10 = (MEMORY[0x40] * (unsigned __int128)MEMORY[0x70]) >> 64;
  _RAX = MEMORY[0x40] * MEMORY[0x70];
  __asm
  {
    adcx    r13, rax
    adox    r14, r10
  }
  _R10 = (MEMORY[0x40] * (unsigned __int128)MEMORY[0x78]) >> 64;
  _RAX = MEMORY[0x40] * MEMORY[0x78];
  __asm { adcx    r14, rax }
  _R8[1] = _RSI;
  __asm
  {
    adcx    r11, r11
    adox    r11, r10
  }
  _R8[2] = _RDI;
  _R10 = (MEMORY[0x48] * (unsigned __int128)MEMORY[0x50]) >> 64;
  _RAX = MEMORY[0x48] * MEMORY[0x50];
  __asm
  {
    adcx    rbp, rax
    adox    rbx, r10
  }
  _R10 = (MEMORY[0x48] * (unsigned __int128)MEMORY[0x58]) >> 64;
  _RAX = MEMORY[0x48] * MEMORY[0x58];
  __asm
  {
    adcx    rbx, rax
    adox    r12, r10
  }
  _R10 = (MEMORY[0x48] * (unsigned __int128)MEMORY[0x60]) >> 64;
  _RAX = MEMORY[0x48] * MEMORY[0x60];
  __asm
  {
    adcx    r12, rax
    adox    r13, r10
  }
  _R10 = (MEMORY[0x48] * (unsigned __int128)MEMORY[0x68]) >> 64;
  _RAX = MEMORY[0x48] * MEMORY[0x68];
  __asm
  {
    adcx    r13, rax
    adox    r14, r10
  }
  _R10 = (MEMORY[0x48] * (unsigned __int128)MEMORY[0x70]) >> 64;
  _RAX = MEMORY[0x48] * MEMORY[0x70];
  __asm
  {
    adcx    r14, rax
    adox    r11, r10
  }
  *(_QWORD *)&v383 = MEMORY[0x78];
  _RSI = 0LL;
  _RDI = 0LL;
  _R8[3] = _RBP;
  _R10 = ((unsigned __int64)v383 * (unsigned __int128)MEMORY[0x48]) >> 64;
  _RAX = v383 * MEMORY[0x48];
  __asm
  {
    adcx    r11, rax
    adox    rsi, r10
  }
  _R10 = ((unsigned __int64)v383 * (unsigned __int128)MEMORY[0x50]) >> 64;
  _RAX = v383 * MEMORY[0x50];
  __asm { adcx    rsi, rax }
  _R8[4] = _RBX;
  __asm { adcx    rdi, r10 }
  _R10 = (MEMORY[0x50] * (unsigned __int128)MEMORY[0x58]) >> 64;
  _RAX = MEMORY[0x50] * MEMORY[0x58];
  __asm
  {
    adcx    r12, rax
    adox    r13, r10
  }
  _R10 = (MEMORY[0x50] * (unsigned __int128)MEMORY[0x60]) >> 64;
  _RAX = MEMORY[0x50] * MEMORY[0x60];
  __asm
  {
    adcx    r13, rax
    adox    r14, r10
  }
  _R10 = (MEMORY[0x50] * (unsigned __int128)MEMORY[0x68]) >> 64;
  _RAX = MEMORY[0x50] * MEMORY[0x68];
  __asm
  {
    adcx    r14, rax
    adox    r11, r10
  }
  _R10 = (MEMORY[0x50] * (unsigned __int128)MEMORY[0x70]) >> 64;
  _RAX = MEMORY[0x50] * MEMORY[0x70];
  __asm
  {
    adcx    r11, rax
    adox    rsi, r10
  }
  _RBP = 0LL;
  _RBX = 0LL;
  _R10 = (MEMORY[0x60] * (unsigned __int128)MEMORY[0x68]) >> 64;
  _RAX = MEMORY[0x60] * MEMORY[0x68];
  __asm
  {
    adcx    rsi, rax
    adox    rdi, r10
  }
  _R10 = (MEMORY[0x60] * (unsigned __int128)MEMORY[0x70]) >> 64;
  _RAX = MEMORY[0x60] * MEMORY[0x70];
  __asm
  {
    adcx    rdi, rax
    adox    rbp, r10
  }
  *(_QWORD *)&v383 = MEMORY[0x68];
  _R8[5] = _R12;
  _R10 = ((unsigned __int64)v383 * (unsigned __int128)MEMORY[0x70]) >> 64;
  _RAX = v383 * MEMORY[0x70];
  __asm
  {
    adcx    rbp, rax
    adcx    rbx, r10
  }
  *(_QWORD *)&v383 = MEMORY[0x58];
  _R8[6] = _R13;
  _R10 = ((unsigned __int64)v383 * (unsigned __int128)MEMORY[0x60]) >> 64;
  _RAX = v383 * MEMORY[0x60];
  __asm
  {
    adcx    r14, rax
    adox    r11, r10
  }
  _R10 = ((unsigned __int64)v383 * (unsigned __int128)MEMORY[0x68]) >> 64;
  _RAX = v383 * MEMORY[0x68];
  __asm
  {
    adcx    r11, rax
    adox    rsi, r10
  }
  _R10 = ((unsigned __int64)v383 * (unsigned __int128)MEMORY[0x70]) >> 64;
  _RAX = v383 * MEMORY[0x70];
  __asm
  {
    adcx    rsi, rax
    adox    rdi, r10
  }
  _R10 = ((unsigned __int64)v383 * (unsigned __int128)MEMORY[0x78]) >> 64;
  _RAX = v383 * MEMORY[0x78];
  __asm
  {
    adcx    rdi, rax
    adox    rbp, r10
  }
  *(_QWORD *)&v383 = MEMORY[0x78];
  _R12 = 0LL;
  _R13 = 0LL;
  _R8[7] = _R14;
  _R10 = ((unsigned __int64)v383 * (unsigned __int128)MEMORY[0x60]) >> 64;
  _RAX = v383 * MEMORY[0x60];
  __asm
  {
    adcx    rbp, rax
    adox    rbx, r10
  }
  _R10 = ((unsigned __int64)v383 * (unsigned __int128)MEMORY[0x68]) >> 64;
  _RAX = v383 * MEMORY[0x68];
  __asm
  {
    adcx    rbx, rax
    adox    r12, r10
  }
  _R10 = ((unsigned __int64)v383 * (unsigned __int128)MEMORY[0x70]) >> 64;
  _RAX = v383 * MEMORY[0x70];
  __asm
  {
    adcx    r12, rax
    adcx    r13, r10
  }
  _R8[8] = _R11;
  _R8[9] = _RSI;
  _R8[10] = _RDI;
  _R8[11] = _RBP;
  _R8[12] = _RBX;
  _R8[13] = _R12;
  _R8[14] = _R13;
  _R8[15] = 0LL;
  _R8 -= 16;
  _RAX = *_R8;
  _R10 = _R8[1];
  v553 = MEMORY[0];
  _R11 = (MEMORY[0] * (unsigned __int128)MEMORY[0]) >> 64;
  _R9 = MEMORY[0] * MEMORY[0];
  __asm
  {
    adcx    r9, rax
    adox    r9, rax
    adcx    r11, r10
    adox    r11, r10
  }
  *_R8 = _R9;
  _R8[1] = _R11;
  _RAX = _R8[2];
  _R10 = _R8[3];
  v562 = *(unsigned __int64 *)(*((_QWORD *)&v553 + 1) + 8LL);
  _R11 = (unsigned __int128)(v562 * v562) >> 64;
  _R9 = v562 * v562;
  __asm
  {
    adcx    r9, rax
    adox    r9, rax
    adcx    r11, r10
    adox    r11, r10
  }
  _R8[2] = _R9;
  _R8[3] = _R11;
  _RAX = _R8[4];
  _R10 = _R8[5];
  v571 = *(unsigned __int64 *)(*((_QWORD *)&v562 + 1) + 16LL);
  _R11 = (unsigned __int128)(v571 * v571) >> 64;
  _R9 = v571 * v571;
  __asm
  {
    adcx    r9, rax
    adox    r9, rax
    adcx    r11, r10
    adox    r11, r10
  }
  _R8[4] = _R9;
  _R8[5] = _R11;
  _RAX = _R8[6];
  _R10 = _R8[7];
  v580 = *(unsigned __int64 *)(*((_QWORD *)&v571 + 1) + 24LL);
  _R11 = (unsigned __int128)(v580 * v580) >> 64;
  _R9 = v580 * v580;
  __asm
  {
    adcx    r9, rax
    adox    r9, rax
    adcx    r11, r10
    adox    r11, r10
  }
  _R8[6] = _R9;
  _R8[7] = _R11;
  _RAX = _R8[8];
  _R10 = _R8[9];
  v589 = *(unsigned __int64 *)(*((_QWORD *)&v580 + 1) + 32LL);
  _R11 = (unsigned __int128)(v589 * v589) >> 64;
  _R9 = v589 * v589;
  __asm
  {
    adcx    r9, rax
    adox    r9, rax
    adcx    r11, r10
    adox    r11, r10
  }
  _R8[8] = _R9;
  _R8[9] = _R11;
  _RAX = _R8[10];
  _R10 = _R8[11];
  v598 = *(unsigned __int64 *)(*((_QWORD *)&v589 + 1) + 40LL);
  _R11 = (unsigned __int128)(v598 * v598) >> 64;
  _R9 = v598 * v598;
  __asm
  {
    adcx    r9, rax
    adox    r9, rax
    adcx    r11, r10
    adox    r11, r10
  }
  _R8[10] = _R9;
  _R8[11] = _R11;
  _RAX = _R8[12];
  _R10 = _R8[13];
  v607 = *(unsigned __int64 *)(*((_QWORD *)&v598 + 1) + 48LL);
  _R11 = (unsigned __int128)(v607 * v607) >> 64;
  _R9 = v607 * v607;
  __asm
  {
    adcx    r9, rax
    adox    r9, rax
    adcx    r11, r10
    adox    r11, r10
  }
  _R8[12] = _R9;
  _R8[13] = _R11;
  _RAX = _R8[14];
  _R10 = _R8[15];
  v616 = *(unsigned __int64 *)(*((_QWORD *)&v607 + 1) + 56LL);
  _R11 = (unsigned __int128)(v616 * v616) >> 64;
  _R9 = v616 * v616;
  __asm
  {
    adcx    r9, rax
    adox    r9, rax
    adcx    r11, r10
    adox    r11, r10
  }
  _R8[14] = _R9;
  _R8[15] = _R11;
  _RAX = _R8[16];
  _R10 = _R8[17];
  v625 = *(unsigned __int64 *)(*((_QWORD *)&v616 + 1) + 64LL);
  _R11 = (unsigned __int128)(v625 * v625) >> 64;
  _R9 = v625 * v625;
  __asm
  {
    adcx    r9, rax
    adox    r9, rax
    adcx    r11, r10
    adox    r11, r10
  }
  _R8[16] = _R9;
  _R8[17] = _R11;
  _RAX = _R8[18];
  _R10 = _R8[19];
  v634 = *(unsigned __int64 *)(*((_QWORD *)&v625 + 1) + 72LL);
  _R11 = (unsigned __int128)(v634 * v634) >> 64;
  _R9 = v634 * v634;
  __asm
  {
    adcx    r9, rax
    adox    r9, rax
    adcx    r11, r10
    adox    r11, r10
  }
  _R8[18] = _R9;
  _R8[19] = _R11;
  _RAX = _R8[20];
  _R10 = _R8[21];
  v643 = *(unsigned __int64 *)(*((_QWORD *)&v634 + 1) + 80LL);
  _R11 = (unsigned __int128)(v643 * v643) >> 64;
  _R9 = v643 * v643;
  __asm
  {
    adcx    r9, rax
    adox    r9, rax
    adcx    r11, r10
    adox    r11, r10
  }
  _R8[20] = _R9;
  _R8[21] = _R11;
  _RAX = _R8[22];
  _R10 = _R8[23];
  v652 = *(unsigned __int64 *)(*((_QWORD *)&v643 + 1) + 88LL);
  _R11 = (unsigned __int128)(v652 * v652) >> 64;
  _R9 = v652 * v652;
  __asm
  {
    adcx    r9, rax
    adox    r9, rax
    adcx    r11, r10
    adox    r11, r10
  }
  _R8[22] = _R9;
  _R8[23] = _R11;
  _RAX = _R8[24];
  _R10 = _R8[25];
  v661 = *(unsigned __int64 *)(*((_QWORD *)&v652 + 1) + 96LL);
  _R11 = (unsigned __int128)(v661 * v661) >> 64;
  _R9 = v661 * v661;
  __asm
  {
    adcx    r9, rax
    adox    r9, rax
    adcx    r11, r10
    adox    r11, r10
  }
  _R8[24] = _R9;
  _R8[25] = _R11;
  _RAX = _R8[26];
  _R10 = _R8[27];
  v670 = *(unsigned __int64 *)(*((_QWORD *)&v661 + 1) + 104LL);
  _R11 = (unsigned __int128)(v670 * v670) >> 64;
  _R9 = v670 * v670;
  __asm
  {
    adcx    r9, rax
    adox    r9, rax
    adcx    r11, r10
    adox    r11, r10
  }
  _R8[26] = _R9;
  _R8[27] = _R11;
  _RAX = _R8[28];
  _R10 = _R8[29];
  v679 = *(unsigned __int64 *)(*((_QWORD *)&v670 + 1) + 112LL);
  _R11 = (unsigned __int128)(v679 * v679) >> 64;
  _R9 = v679 * v679;
  __asm
  {
    adcx    r9, rax
    adox    r9, rax
    adcx    r11, r10
    adox    r11, r10
  }
  _R8[28] = _R9;
  _R8[29] = _R11;
  result = _R8[30];
  _R10 = _R8[31];
  v688 = *(unsigned __int64 *)(*((_QWORD *)&v679 + 1) + 120LL);
  _R11 = (unsigned __int128)(v688 * v688) >> 64;
  _R9 = v688 * v688;
  __asm
  {
    adcx    r9, rax
    adox    r9, rax
    adcx    r11, r10
    adox    r11, r10
  }
  _R8[30] = _R9;
  _R8[31] = _R11;
  return result;
}
