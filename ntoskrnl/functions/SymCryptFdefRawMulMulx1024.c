unsigned __int64 __fastcall SymCryptFdefRawMulMulx1024(
        unsigned __int64 *a1,
        unsigned __int64 *a2,
        __int64 a3,
        __int64 _R9)
{
  unsigned __int64 *v4; // r10
  __int128 v15; // rdx
  unsigned __int64 v17; // rt2
  __int128 v80; // rdx
  __int128 v116; // rdx
  __int128 v152; // rdx
  __int128 v188; // rdx
  __int128 v224; // rdx
  __int128 v260; // rdx
  __int128 v296; // rdx
  __int128 v333; // rdx
  __int128 v369; // rdx
  __int128 v405; // rdx
  __int128 v441; // rdx
  __int128 v477; // rdx
  __int128 v513; // rdx
  __int128 v549; // rdx
  __int128 v585; // rdx
  __int128 v629; // rdx
  __int128 v665; // rdx
  __int128 v701; // rdx
  __int128 v737; // rdx
  __int128 v773; // rdx
  __int128 v809; // rdx
  __int128 v845; // rdx
  __int128 v881; // rdx
  __int128 v917; // rdx
  __int128 v953; // rdx
  __int128 v989; // rdx
  __int128 v1025; // rdx
  __int128 v1061; // rdx
  __int128 v1097; // rdx
  __int128 v1133; // rdx
  unsigned __int64 result; // rax

  v4 = a2;
  *(_OWORD *)_R9 = 0LL;
  *(_OWORD *)(_R9 + 16) = 0LL;
  *(_OWORD *)(_R9 + 32) = 0LL;
  *(_OWORD *)(_R9 + 48) = 0LL;
  *(_OWORD *)(_R9 + 64) = 0LL;
  *(_OWORD *)(_R9 + 80) = 0LL;
  *(_OWORD *)(_R9 + 96) = 0LL;
  *(_OWORD *)(_R9 + 112) = 0LL;
  _R11 = 0LL;
  _RSI = 0LL;
  _RDI = 0LL;
  _RBP = 0LL;
  _RBX = 0LL;
  _R12 = 0LL;
  _R13 = 0LL;
  _R14 = 0LL;
  __asm { adox    r11, [r9] }
  v17 = *a1;
  v15 = *a2;
  _R8 = (v15 * (unsigned __int128)v17) >> 64;
  _RAX = v15 * v17;
  __asm
  {
    adcx    r11, rax
    adox    rsi, r8
  }
  _R8 = ((unsigned __int64)v15 * (unsigned __int128)*(unsigned __int64 *)(*((_QWORD *)&v15 + 1) + 8LL)) >> 64;
  _RAX = v15 * *(_QWORD *)(*((_QWORD *)&v15 + 1) + 8LL);
  __asm
  {
    adcx    rsi, rax
    adox    rdi, r8
  }
  _R8 = ((unsigned __int64)v15 * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = v15 * MEMORY[0x10];
  __asm
  {
    adcx    rdi, rax
    adox    rbp, r8
  }
  _R8 = ((unsigned __int64)v15 * (unsigned __int128)MEMORY[0x18]) >> 64;
  _RAX = v15 * MEMORY[0x18];
  __asm
  {
    adcx    rbp, rax
    adox    rbx, r8
  }
  _R8 = ((unsigned __int64)v15 * (unsigned __int128)MEMORY[0x20]) >> 64;
  _RAX = v15 * MEMORY[0x20];
  __asm
  {
    adcx    rbx, rax
    adox    r12, r8
  }
  _R8 = ((unsigned __int64)v15 * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = v15 * MEMORY[0x28];
  __asm
  {
    adcx    r12, rax
    adox    r13, r8
  }
  _R8 = ((unsigned __int64)v15 * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = v15 * MEMORY[0x30];
  __asm
  {
    adcx    r13, rax
    adox    r14, r8
  }
  _R8 = ((unsigned __int64)v15 * (unsigned __int128)MEMORY[0x38]) >> 64;
  _RAX = v15 * MEMORY[0x38];
  __asm { adcx    r14, rax }
  *(_QWORD *)_R9 = _R11;
  _R11 = 0LL;
  __asm
  {
    adcx    r11, r11
    adox    r11, r8
  }
  __asm { adox    rsi, [r9+8] }
  _R8 = (v4[1] * (unsigned __int128)MEMORY[0]) >> 64;
  _RAX = v4[1] * MEMORY[0];
  __asm
  {
    adcx    rsi, rax
    adox    rdi, r8
  }
  _R8 = (v4[1] * (unsigned __int128)MEMORY[8]) >> 64;
  _RAX = v4[1] * MEMORY[8];
  __asm
  {
    adcx    rdi, rax
    adox    rbp, r8
  }
  _R8 = (v4[1] * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = v4[1] * MEMORY[0x10];
  __asm
  {
    adcx    rbp, rax
    adox    rbx, r8
  }
  _R8 = (v4[1] * (unsigned __int128)MEMORY[0x18]) >> 64;
  _RAX = v4[1] * MEMORY[0x18];
  __asm
  {
    adcx    rbx, rax
    adox    r12, r8
  }
  _R8 = (v4[1] * (unsigned __int128)MEMORY[0x20]) >> 64;
  _RAX = v4[1] * MEMORY[0x20];
  __asm
  {
    adcx    r12, rax
    adox    r13, r8
  }
  _R8 = (v4[1] * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = v4[1] * MEMORY[0x28];
  __asm
  {
    adcx    r13, rax
    adox    r14, r8
  }
  _R8 = (v4[1] * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = v4[1] * MEMORY[0x30];
  __asm
  {
    adcx    r14, rax
    adox    r11, r8
  }
  v80 = v4[1];
  _R8 = (v80 * (unsigned __int128)MEMORY[0x38]) >> 64;
  _RAX = v4[1] * MEMORY[0x38];
  __asm { adcx    r11, rax }
  *(_QWORD *)(_R9 + 8) = _RSI;
  _RSI = 0LL;
  __asm
  {
    adcx    rsi, rsi
    adox    rsi, r8
  }
  __asm { adox    rdi, [r9+10h] }
  _R8 = (v4[2] * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v80 + 1)) >> 64;
  _RAX = v4[2] * **((_QWORD **)&v80 + 1);
  __asm
  {
    adcx    rdi, rax
    adox    rbp, r8
  }
  _R8 = (v4[2] * (unsigned __int128)MEMORY[8]) >> 64;
  _RAX = v4[2] * MEMORY[8];
  __asm
  {
    adcx    rbp, rax
    adox    rbx, r8
  }
  _R8 = (v4[2] * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = v4[2] * MEMORY[0x10];
  __asm
  {
    adcx    rbx, rax
    adox    r12, r8
  }
  _R8 = (v4[2] * (unsigned __int128)MEMORY[0x18]) >> 64;
  _RAX = v4[2] * MEMORY[0x18];
  __asm
  {
    adcx    r12, rax
    adox    r13, r8
  }
  _R8 = (v4[2] * (unsigned __int128)MEMORY[0x20]) >> 64;
  _RAX = v4[2] * MEMORY[0x20];
  __asm
  {
    adcx    r13, rax
    adox    r14, r8
  }
  _R8 = (v4[2] * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = v4[2] * MEMORY[0x28];
  __asm
  {
    adcx    r14, rax
    adox    r11, r8
  }
  _R8 = (v4[2] * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = v4[2] * MEMORY[0x30];
  __asm
  {
    adcx    r11, rax
    adox    rsi, r8
  }
  v116 = v4[2];
  _R8 = (v116 * (unsigned __int128)MEMORY[0x38]) >> 64;
  _RAX = v4[2] * MEMORY[0x38];
  __asm { adcx    rsi, rax }
  *(_QWORD *)(_R9 + 16) = _RDI;
  _RDI = 0LL;
  __asm
  {
    adcx    rdi, rdi
    adox    rdi, r8
  }
  __asm { adox    rbp, [r9+18h] }
  _R8 = (v4[3] * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v116 + 1)) >> 64;
  _RAX = v4[3] * **((_QWORD **)&v116 + 1);
  __asm
  {
    adcx    rbp, rax
    adox    rbx, r8
  }
  _R8 = (v4[3] * (unsigned __int128)MEMORY[8]) >> 64;
  _RAX = v4[3] * MEMORY[8];
  __asm
  {
    adcx    rbx, rax
    adox    r12, r8
  }
  _R8 = (v4[3] * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = v4[3] * MEMORY[0x10];
  __asm
  {
    adcx    r12, rax
    adox    r13, r8
  }
  _R8 = (v4[3] * (unsigned __int128)MEMORY[0x18]) >> 64;
  _RAX = v4[3] * MEMORY[0x18];
  __asm
  {
    adcx    r13, rax
    adox    r14, r8
  }
  _R8 = (v4[3] * (unsigned __int128)MEMORY[0x20]) >> 64;
  _RAX = v4[3] * MEMORY[0x20];
  __asm
  {
    adcx    r14, rax
    adox    r11, r8
  }
  _R8 = (v4[3] * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = v4[3] * MEMORY[0x28];
  __asm
  {
    adcx    r11, rax
    adox    rsi, r8
  }
  _R8 = (v4[3] * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = v4[3] * MEMORY[0x30];
  __asm
  {
    adcx    rsi, rax
    adox    rdi, r8
  }
  v152 = v4[3];
  _R8 = (v152 * (unsigned __int128)MEMORY[0x38]) >> 64;
  _RAX = v4[3] * MEMORY[0x38];
  __asm { adcx    rdi, rax }
  *(_QWORD *)(_R9 + 24) = _RBP;
  _RBP = 0LL;
  __asm
  {
    adcx    rbp, rbp
    adox    rbp, r8
  }
  __asm { adox    rbx, [r9+20h] }
  _R8 = (v4[4] * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v152 + 1)) >> 64;
  _RAX = v4[4] * **((_QWORD **)&v152 + 1);
  __asm
  {
    adcx    rbx, rax
    adox    r12, r8
  }
  _R8 = (v4[4] * (unsigned __int128)MEMORY[8]) >> 64;
  _RAX = v4[4] * MEMORY[8];
  __asm
  {
    adcx    r12, rax
    adox    r13, r8
  }
  _R8 = (v4[4] * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = v4[4] * MEMORY[0x10];
  __asm
  {
    adcx    r13, rax
    adox    r14, r8
  }
  _R8 = (v4[4] * (unsigned __int128)MEMORY[0x18]) >> 64;
  _RAX = v4[4] * MEMORY[0x18];
  __asm
  {
    adcx    r14, rax
    adox    r11, r8
  }
  _R8 = (v4[4] * (unsigned __int128)MEMORY[0x20]) >> 64;
  _RAX = v4[4] * MEMORY[0x20];
  __asm
  {
    adcx    r11, rax
    adox    rsi, r8
  }
  _R8 = (v4[4] * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = v4[4] * MEMORY[0x28];
  __asm
  {
    adcx    rsi, rax
    adox    rdi, r8
  }
  _R8 = (v4[4] * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = v4[4] * MEMORY[0x30];
  __asm
  {
    adcx    rdi, rax
    adox    rbp, r8
  }
  v188 = v4[4];
  _R8 = (v188 * (unsigned __int128)MEMORY[0x38]) >> 64;
  _RAX = v4[4] * MEMORY[0x38];
  __asm { adcx    rbp, rax }
  *(_QWORD *)(_R9 + 32) = _RBX;
  _RBX = 0LL;
  __asm
  {
    adcx    rbx, rbx
    adox    rbx, r8
  }
  __asm { adox    r12, [r9+28h] }
  _R8 = (v4[5] * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v188 + 1)) >> 64;
  _RAX = v4[5] * **((_QWORD **)&v188 + 1);
  __asm
  {
    adcx    r12, rax
    adox    r13, r8
  }
  _R8 = (v4[5] * (unsigned __int128)MEMORY[8]) >> 64;
  _RAX = v4[5] * MEMORY[8];
  __asm
  {
    adcx    r13, rax
    adox    r14, r8
  }
  _R8 = (v4[5] * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = v4[5] * MEMORY[0x10];
  __asm
  {
    adcx    r14, rax
    adox    r11, r8
  }
  _R8 = (v4[5] * (unsigned __int128)MEMORY[0x18]) >> 64;
  _RAX = v4[5] * MEMORY[0x18];
  __asm
  {
    adcx    r11, rax
    adox    rsi, r8
  }
  _R8 = (v4[5] * (unsigned __int128)MEMORY[0x20]) >> 64;
  _RAX = v4[5] * MEMORY[0x20];
  __asm
  {
    adcx    rsi, rax
    adox    rdi, r8
  }
  _R8 = (v4[5] * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = v4[5] * MEMORY[0x28];
  __asm
  {
    adcx    rdi, rax
    adox    rbp, r8
  }
  _R8 = (v4[5] * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = v4[5] * MEMORY[0x30];
  __asm
  {
    adcx    rbp, rax
    adox    rbx, r8
  }
  v224 = v4[5];
  _R8 = (v224 * (unsigned __int128)MEMORY[0x38]) >> 64;
  _RAX = v4[5] * MEMORY[0x38];
  __asm { adcx    rbx, rax }
  *(_QWORD *)(_R9 + 40) = _R12;
  _R12 = 0LL;
  __asm
  {
    adcx    r12, r12
    adox    r12, r8
  }
  __asm { adox    r13, [r9+30h] }
  _R8 = (v4[6] * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v224 + 1)) >> 64;
  _RAX = v4[6] * **((_QWORD **)&v224 + 1);
  __asm
  {
    adcx    r13, rax
    adox    r14, r8
  }
  _R8 = (v4[6] * (unsigned __int128)MEMORY[8]) >> 64;
  _RAX = v4[6] * MEMORY[8];
  __asm
  {
    adcx    r14, rax
    adox    r11, r8
  }
  _R8 = (v4[6] * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = v4[6] * MEMORY[0x10];
  __asm
  {
    adcx    r11, rax
    adox    rsi, r8
  }
  _R8 = (v4[6] * (unsigned __int128)MEMORY[0x18]) >> 64;
  _RAX = v4[6] * MEMORY[0x18];
  __asm
  {
    adcx    rsi, rax
    adox    rdi, r8
  }
  _R8 = (v4[6] * (unsigned __int128)MEMORY[0x20]) >> 64;
  _RAX = v4[6] * MEMORY[0x20];
  __asm
  {
    adcx    rdi, rax
    adox    rbp, r8
  }
  _R8 = (v4[6] * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = v4[6] * MEMORY[0x28];
  __asm
  {
    adcx    rbp, rax
    adox    rbx, r8
  }
  _R8 = (v4[6] * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = v4[6] * MEMORY[0x30];
  __asm
  {
    adcx    rbx, rax
    adox    r12, r8
  }
  v260 = v4[6];
  _R8 = (v260 * (unsigned __int128)MEMORY[0x38]) >> 64;
  _RAX = v4[6] * MEMORY[0x38];
  __asm { adcx    r12, rax }
  *(_QWORD *)(_R9 + 48) = _R13;
  _R13 = 0LL;
  __asm
  {
    adcx    r13, r13
    adox    r13, r8
  }
  __asm { adox    r14, [r9+38h] }
  _R8 = (v4[7] * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v260 + 1)) >> 64;
  _RAX = v4[7] * **((_QWORD **)&v260 + 1);
  __asm
  {
    adcx    r14, rax
    adox    r11, r8
  }
  _R8 = (v4[7] * (unsigned __int128)MEMORY[8]) >> 64;
  _RAX = v4[7] * MEMORY[8];
  __asm
  {
    adcx    r11, rax
    adox    rsi, r8
  }
  _R8 = (v4[7] * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = v4[7] * MEMORY[0x10];
  __asm
  {
    adcx    rsi, rax
    adox    rdi, r8
  }
  _R8 = (v4[7] * (unsigned __int128)MEMORY[0x18]) >> 64;
  _RAX = v4[7] * MEMORY[0x18];
  __asm
  {
    adcx    rdi, rax
    adox    rbp, r8
  }
  _R8 = (v4[7] * (unsigned __int128)MEMORY[0x20]) >> 64;
  _RAX = v4[7] * MEMORY[0x20];
  __asm
  {
    adcx    rbp, rax
    adox    rbx, r8
  }
  _R8 = (v4[7] * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = v4[7] * MEMORY[0x28];
  __asm
  {
    adcx    rbx, rax
    adox    r12, r8
  }
  _R8 = (v4[7] * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = v4[7] * MEMORY[0x30];
  __asm
  {
    adcx    r12, rax
    adox    r13, r8
  }
  v296 = v4[7];
  _R8 = (v296 * (unsigned __int128)MEMORY[0x38]) >> 64;
  _RAX = v4[7] * MEMORY[0x38];
  __asm { adcx    r13, rax }
  *(_QWORD *)(_R9 + 56) = _R14;
  _R14 = 0LL;
  __asm
  {
    adcx    r14, r14
    adox    r14, r8
  }
  v4 += 8;
  _R9 = (_QWORD *)(_R9 + 64);
  __asm { adox    r11, [r9] }
  _R8 = (*v4 * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v296 + 1)) >> 64;
  _RAX = *v4 * **((_QWORD **)&v296 + 1);
  __asm
  {
    adcx    r11, rax
    adox    rsi, r8
  }
  _R8 = (*v4 * (unsigned __int128)MEMORY[8]) >> 64;
  _RAX = *v4 * MEMORY[8];
  __asm
  {
    adcx    rsi, rax
    adox    rdi, r8
  }
  _R8 = (*v4 * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = *v4 * MEMORY[0x10];
  __asm
  {
    adcx    rdi, rax
    adox    rbp, r8
  }
  _R8 = (*v4 * (unsigned __int128)MEMORY[0x18]) >> 64;
  _RAX = *v4 * MEMORY[0x18];
  __asm
  {
    adcx    rbp, rax
    adox    rbx, r8
  }
  _R8 = (*v4 * (unsigned __int128)MEMORY[0x20]) >> 64;
  _RAX = *v4 * MEMORY[0x20];
  __asm
  {
    adcx    rbx, rax
    adox    r12, r8
  }
  _R8 = (*v4 * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = *v4 * MEMORY[0x28];
  __asm
  {
    adcx    r12, rax
    adox    r13, r8
  }
  _R8 = (*v4 * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = *v4 * MEMORY[0x30];
  __asm
  {
    adcx    r13, rax
    adox    r14, r8
  }
  v333 = *v4;
  _R8 = (v333 * (unsigned __int128)MEMORY[0x38]) >> 64;
  _RAX = *v4 * MEMORY[0x38];
  __asm { adcx    r14, rax }
  *_R9 = _R11;
  _R11 = 0LL;
  __asm
  {
    adcx    r11, r11
    adox    r11, r8
  }
  __asm { adox    rsi, [r9+8] }
  _R8 = (v4[1] * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v333 + 1)) >> 64;
  _RAX = v4[1] * **((_QWORD **)&v333 + 1);
  __asm
  {
    adcx    rsi, rax
    adox    rdi, r8
  }
  _R8 = (v4[1] * (unsigned __int128)MEMORY[8]) >> 64;
  _RAX = v4[1] * MEMORY[8];
  __asm
  {
    adcx    rdi, rax
    adox    rbp, r8
  }
  _R8 = (v4[1] * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = v4[1] * MEMORY[0x10];
  __asm
  {
    adcx    rbp, rax
    adox    rbx, r8
  }
  _R8 = (v4[1] * (unsigned __int128)MEMORY[0x18]) >> 64;
  _RAX = v4[1] * MEMORY[0x18];
  __asm
  {
    adcx    rbx, rax
    adox    r12, r8
  }
  _R8 = (v4[1] * (unsigned __int128)MEMORY[0x20]) >> 64;
  _RAX = v4[1] * MEMORY[0x20];
  __asm
  {
    adcx    r12, rax
    adox    r13, r8
  }
  _R8 = (v4[1] * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = v4[1] * MEMORY[0x28];
  __asm
  {
    adcx    r13, rax
    adox    r14, r8
  }
  _R8 = (v4[1] * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = v4[1] * MEMORY[0x30];
  __asm
  {
    adcx    r14, rax
    adox    r11, r8
  }
  v369 = v4[1];
  _R8 = (v369 * (unsigned __int128)MEMORY[0x38]) >> 64;
  _RAX = v4[1] * MEMORY[0x38];
  __asm { adcx    r11, rax }
  _R9[1] = _RSI;
  _RSI = 0LL;
  __asm
  {
    adcx    rsi, rsi
    adox    rsi, r8
  }
  __asm { adox    rdi, [r9+10h] }
  _R8 = (v4[2] * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v369 + 1)) >> 64;
  _RAX = v4[2] * **((_QWORD **)&v369 + 1);
  __asm
  {
    adcx    rdi, rax
    adox    rbp, r8
  }
  _R8 = (v4[2] * (unsigned __int128)MEMORY[8]) >> 64;
  _RAX = v4[2] * MEMORY[8];
  __asm
  {
    adcx    rbp, rax
    adox    rbx, r8
  }
  _R8 = (v4[2] * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = v4[2] * MEMORY[0x10];
  __asm
  {
    adcx    rbx, rax
    adox    r12, r8
  }
  _R8 = (v4[2] * (unsigned __int128)MEMORY[0x18]) >> 64;
  _RAX = v4[2] * MEMORY[0x18];
  __asm
  {
    adcx    r12, rax
    adox    r13, r8
  }
  _R8 = (v4[2] * (unsigned __int128)MEMORY[0x20]) >> 64;
  _RAX = v4[2] * MEMORY[0x20];
  __asm
  {
    adcx    r13, rax
    adox    r14, r8
  }
  _R8 = (v4[2] * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = v4[2] * MEMORY[0x28];
  __asm
  {
    adcx    r14, rax
    adox    r11, r8
  }
  _R8 = (v4[2] * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = v4[2] * MEMORY[0x30];
  __asm
  {
    adcx    r11, rax
    adox    rsi, r8
  }
  v405 = v4[2];
  _R8 = (v405 * (unsigned __int128)MEMORY[0x38]) >> 64;
  _RAX = v4[2] * MEMORY[0x38];
  __asm { adcx    rsi, rax }
  _R9[2] = _RDI;
  _RDI = 0LL;
  __asm
  {
    adcx    rdi, rdi
    adox    rdi, r8
  }
  __asm { adox    rbp, [r9+18h] }
  _R8 = (v4[3] * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v405 + 1)) >> 64;
  _RAX = v4[3] * **((_QWORD **)&v405 + 1);
  __asm
  {
    adcx    rbp, rax
    adox    rbx, r8
  }
  _R8 = (v4[3] * (unsigned __int128)MEMORY[8]) >> 64;
  _RAX = v4[3] * MEMORY[8];
  __asm
  {
    adcx    rbx, rax
    adox    r12, r8
  }
  _R8 = (v4[3] * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = v4[3] * MEMORY[0x10];
  __asm
  {
    adcx    r12, rax
    adox    r13, r8
  }
  _R8 = (v4[3] * (unsigned __int128)MEMORY[0x18]) >> 64;
  _RAX = v4[3] * MEMORY[0x18];
  __asm
  {
    adcx    r13, rax
    adox    r14, r8
  }
  _R8 = (v4[3] * (unsigned __int128)MEMORY[0x20]) >> 64;
  _RAX = v4[3] * MEMORY[0x20];
  __asm
  {
    adcx    r14, rax
    adox    r11, r8
  }
  _R8 = (v4[3] * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = v4[3] * MEMORY[0x28];
  __asm
  {
    adcx    r11, rax
    adox    rsi, r8
  }
  _R8 = (v4[3] * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = v4[3] * MEMORY[0x30];
  __asm
  {
    adcx    rsi, rax
    adox    rdi, r8
  }
  v441 = v4[3];
  _R8 = (v441 * (unsigned __int128)MEMORY[0x38]) >> 64;
  _RAX = v4[3] * MEMORY[0x38];
  __asm { adcx    rdi, rax }
  _R9[3] = _RBP;
  _RBP = 0LL;
  __asm
  {
    adcx    rbp, rbp
    adox    rbp, r8
  }
  __asm { adox    rbx, [r9+20h] }
  _R8 = (v4[4] * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v441 + 1)) >> 64;
  _RAX = v4[4] * **((_QWORD **)&v441 + 1);
  __asm
  {
    adcx    rbx, rax
    adox    r12, r8
  }
  _R8 = (v4[4] * (unsigned __int128)MEMORY[8]) >> 64;
  _RAX = v4[4] * MEMORY[8];
  __asm
  {
    adcx    r12, rax
    adox    r13, r8
  }
  _R8 = (v4[4] * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = v4[4] * MEMORY[0x10];
  __asm
  {
    adcx    r13, rax
    adox    r14, r8
  }
  _R8 = (v4[4] * (unsigned __int128)MEMORY[0x18]) >> 64;
  _RAX = v4[4] * MEMORY[0x18];
  __asm
  {
    adcx    r14, rax
    adox    r11, r8
  }
  _R8 = (v4[4] * (unsigned __int128)MEMORY[0x20]) >> 64;
  _RAX = v4[4] * MEMORY[0x20];
  __asm
  {
    adcx    r11, rax
    adox    rsi, r8
  }
  _R8 = (v4[4] * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = v4[4] * MEMORY[0x28];
  __asm
  {
    adcx    rsi, rax
    adox    rdi, r8
  }
  _R8 = (v4[4] * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = v4[4] * MEMORY[0x30];
  __asm
  {
    adcx    rdi, rax
    adox    rbp, r8
  }
  v477 = v4[4];
  _R8 = (v477 * (unsigned __int128)MEMORY[0x38]) >> 64;
  _RAX = v4[4] * MEMORY[0x38];
  __asm { adcx    rbp, rax }
  _R9[4] = _RBX;
  _RBX = 0LL;
  __asm
  {
    adcx    rbx, rbx
    adox    rbx, r8
  }
  __asm { adox    r12, [r9+28h] }
  _R8 = (v4[5] * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v477 + 1)) >> 64;
  _RAX = v4[5] * **((_QWORD **)&v477 + 1);
  __asm
  {
    adcx    r12, rax
    adox    r13, r8
  }
  _R8 = (v4[5] * (unsigned __int128)MEMORY[8]) >> 64;
  _RAX = v4[5] * MEMORY[8];
  __asm
  {
    adcx    r13, rax
    adox    r14, r8
  }
  _R8 = (v4[5] * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = v4[5] * MEMORY[0x10];
  __asm
  {
    adcx    r14, rax
    adox    r11, r8
  }
  _R8 = (v4[5] * (unsigned __int128)MEMORY[0x18]) >> 64;
  _RAX = v4[5] * MEMORY[0x18];
  __asm
  {
    adcx    r11, rax
    adox    rsi, r8
  }
  _R8 = (v4[5] * (unsigned __int128)MEMORY[0x20]) >> 64;
  _RAX = v4[5] * MEMORY[0x20];
  __asm
  {
    adcx    rsi, rax
    adox    rdi, r8
  }
  _R8 = (v4[5] * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = v4[5] * MEMORY[0x28];
  __asm
  {
    adcx    rdi, rax
    adox    rbp, r8
  }
  _R8 = (v4[5] * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = v4[5] * MEMORY[0x30];
  __asm
  {
    adcx    rbp, rax
    adox    rbx, r8
  }
  v513 = v4[5];
  _R8 = (v513 * (unsigned __int128)MEMORY[0x38]) >> 64;
  _RAX = v4[5] * MEMORY[0x38];
  __asm { adcx    rbx, rax }
  _R9[5] = _R12;
  _R12 = 0LL;
  __asm
  {
    adcx    r12, r12
    adox    r12, r8
  }
  __asm { adox    r13, [r9+30h] }
  _R8 = (v4[6] * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v513 + 1)) >> 64;
  _RAX = v4[6] * **((_QWORD **)&v513 + 1);
  __asm
  {
    adcx    r13, rax
    adox    r14, r8
  }
  _R8 = (v4[6] * (unsigned __int128)MEMORY[8]) >> 64;
  _RAX = v4[6] * MEMORY[8];
  __asm
  {
    adcx    r14, rax
    adox    r11, r8
  }
  _R8 = (v4[6] * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = v4[6] * MEMORY[0x10];
  __asm
  {
    adcx    r11, rax
    adox    rsi, r8
  }
  _R8 = (v4[6] * (unsigned __int128)MEMORY[0x18]) >> 64;
  _RAX = v4[6] * MEMORY[0x18];
  __asm
  {
    adcx    rsi, rax
    adox    rdi, r8
  }
  _R8 = (v4[6] * (unsigned __int128)MEMORY[0x20]) >> 64;
  _RAX = v4[6] * MEMORY[0x20];
  __asm
  {
    adcx    rdi, rax
    adox    rbp, r8
  }
  _R8 = (v4[6] * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = v4[6] * MEMORY[0x28];
  __asm
  {
    adcx    rbp, rax
    adox    rbx, r8
  }
  _R8 = (v4[6] * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = v4[6] * MEMORY[0x30];
  __asm
  {
    adcx    rbx, rax
    adox    r12, r8
  }
  v549 = v4[6];
  _R8 = (v549 * (unsigned __int128)MEMORY[0x38]) >> 64;
  _RAX = v4[6] * MEMORY[0x38];
  __asm { adcx    r12, rax }
  _R9[6] = _R13;
  _R13 = 0LL;
  __asm
  {
    adcx    r13, r13
    adox    r13, r8
  }
  __asm { adox    r14, [r9+38h] }
  _R8 = (v4[7] * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v549 + 1)) >> 64;
  _RAX = v4[7] * **((_QWORD **)&v549 + 1);
  __asm
  {
    adcx    r14, rax
    adox    r11, r8
  }
  _R8 = (v4[7] * (unsigned __int128)MEMORY[8]) >> 64;
  _RAX = v4[7] * MEMORY[8];
  __asm
  {
    adcx    r11, rax
    adox    rsi, r8
  }
  _R8 = (v4[7] * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = v4[7] * MEMORY[0x10];
  __asm
  {
    adcx    rsi, rax
    adox    rdi, r8
  }
  _R8 = (v4[7] * (unsigned __int128)MEMORY[0x18]) >> 64;
  _RAX = v4[7] * MEMORY[0x18];
  __asm
  {
    adcx    rdi, rax
    adox    rbp, r8
  }
  _R8 = (v4[7] * (unsigned __int128)MEMORY[0x20]) >> 64;
  _RAX = v4[7] * MEMORY[0x20];
  __asm
  {
    adcx    rbp, rax
    adox    rbx, r8
  }
  _R8 = (v4[7] * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = v4[7] * MEMORY[0x28];
  __asm
  {
    adcx    rbx, rax
    adox    r12, r8
  }
  _R8 = (v4[7] * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = v4[7] * MEMORY[0x30];
  __asm
  {
    adcx    r12, rax
    adox    r13, r8
  }
  v585 = v4[7];
  _R8 = (v585 * (unsigned __int128)MEMORY[0x38]) >> 64;
  _RAX = v4[7] * MEMORY[0x38];
  __asm { adcx    r13, rax }
  _R9[7] = _R14;
  _R14 = 0LL;
  __asm
  {
    adcx    r14, r14
    adox    r14, r8
  }
  _R9 += 8;
  *_R9 = _R11;
  _R9[1] = _RSI;
  _R9[2] = _RDI;
  _R9[3] = _RBP;
  _R9[4] = _RBX;
  _R9[5] = _R12;
  _R9[6] = _R13;
  _R9[7] = _R14;
  _R9 -= 8;
  v4 -= 8;
  _R11 = 0LL;
  _RSI = 0LL;
  _RDI = 0LL;
  _RBP = 0LL;
  _RBX = 0LL;
  _R12 = 0LL;
  _R13 = 0LL;
  _R14 = 0LL;
  __asm { adox    r11, [r9] }
  _R8 = (*v4 * (unsigned __int128)*(unsigned __int64 *)(*((_QWORD *)&v585 + 1) + 64LL)) >> 64;
  _RAX = *v4 * *(_QWORD *)(*((_QWORD *)&v585 + 1) + 64LL);
  __asm
  {
    adcx    r11, rax
    adox    rsi, r8
  }
  _R8 = (*v4 * (unsigned __int128)MEMORY[8]) >> 64;
  _RAX = *v4 * MEMORY[8];
  __asm
  {
    adcx    rsi, rax
    adox    rdi, r8
  }
  _R8 = (*v4 * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = *v4 * MEMORY[0x10];
  __asm
  {
    adcx    rdi, rax
    adox    rbp, r8
  }
  _R8 = (*v4 * (unsigned __int128)MEMORY[0x18]) >> 64;
  _RAX = *v4 * MEMORY[0x18];
  __asm
  {
    adcx    rbp, rax
    adox    rbx, r8
  }
  _R8 = (*v4 * (unsigned __int128)MEMORY[0x20]) >> 64;
  _RAX = *v4 * MEMORY[0x20];
  __asm
  {
    adcx    rbx, rax
    adox    r12, r8
  }
  _R8 = (*v4 * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = *v4 * MEMORY[0x28];
  __asm
  {
    adcx    r12, rax
    adox    r13, r8
  }
  _R8 = (*v4 * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = *v4 * MEMORY[0x30];
  __asm
  {
    adcx    r13, rax
    adox    r14, r8
  }
  v629 = *v4;
  _R8 = (v629 * (unsigned __int128)MEMORY[0x38]) >> 64;
  _RAX = *v4 * MEMORY[0x38];
  __asm { adcx    r14, rax }
  *_R9 = _R11;
  _R11 = 0LL;
  __asm
  {
    adcx    r11, r11
    adox    r11, r8
  }
  __asm { adox    rsi, [r9+8] }
  _R8 = (v4[1] * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v629 + 1)) >> 64;
  _RAX = v4[1] * **((_QWORD **)&v629 + 1);
  __asm
  {
    adcx    rsi, rax
    adox    rdi, r8
  }
  _R8 = (v4[1] * (unsigned __int128)MEMORY[8]) >> 64;
  _RAX = v4[1] * MEMORY[8];
  __asm
  {
    adcx    rdi, rax
    adox    rbp, r8
  }
  _R8 = (v4[1] * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = v4[1] * MEMORY[0x10];
  __asm
  {
    adcx    rbp, rax
    adox    rbx, r8
  }
  _R8 = (v4[1] * (unsigned __int128)MEMORY[0x18]) >> 64;
  _RAX = v4[1] * MEMORY[0x18];
  __asm
  {
    adcx    rbx, rax
    adox    r12, r8
  }
  _R8 = (v4[1] * (unsigned __int128)MEMORY[0x20]) >> 64;
  _RAX = v4[1] * MEMORY[0x20];
  __asm
  {
    adcx    r12, rax
    adox    r13, r8
  }
  _R8 = (v4[1] * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = v4[1] * MEMORY[0x28];
  __asm
  {
    adcx    r13, rax
    adox    r14, r8
  }
  _R8 = (v4[1] * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = v4[1] * MEMORY[0x30];
  __asm
  {
    adcx    r14, rax
    adox    r11, r8
  }
  v665 = v4[1];
  _R8 = (v665 * (unsigned __int128)MEMORY[0x38]) >> 64;
  _RAX = v4[1] * MEMORY[0x38];
  __asm { adcx    r11, rax }
  _R9[1] = _RSI;
  _RSI = 0LL;
  __asm
  {
    adcx    rsi, rsi
    adox    rsi, r8
  }
  __asm { adox    rdi, [r9+10h] }
  _R8 = (v4[2] * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v665 + 1)) >> 64;
  _RAX = v4[2] * **((_QWORD **)&v665 + 1);
  __asm
  {
    adcx    rdi, rax
    adox    rbp, r8
  }
  _R8 = (v4[2] * (unsigned __int128)MEMORY[8]) >> 64;
  _RAX = v4[2] * MEMORY[8];
  __asm
  {
    adcx    rbp, rax
    adox    rbx, r8
  }
  _R8 = (v4[2] * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = v4[2] * MEMORY[0x10];
  __asm
  {
    adcx    rbx, rax
    adox    r12, r8
  }
  _R8 = (v4[2] * (unsigned __int128)MEMORY[0x18]) >> 64;
  _RAX = v4[2] * MEMORY[0x18];
  __asm
  {
    adcx    r12, rax
    adox    r13, r8
  }
  _R8 = (v4[2] * (unsigned __int128)MEMORY[0x20]) >> 64;
  _RAX = v4[2] * MEMORY[0x20];
  __asm
  {
    adcx    r13, rax
    adox    r14, r8
  }
  _R8 = (v4[2] * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = v4[2] * MEMORY[0x28];
  __asm
  {
    adcx    r14, rax
    adox    r11, r8
  }
  _R8 = (v4[2] * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = v4[2] * MEMORY[0x30];
  __asm
  {
    adcx    r11, rax
    adox    rsi, r8
  }
  v701 = v4[2];
  _R8 = (v701 * (unsigned __int128)MEMORY[0x38]) >> 64;
  _RAX = v4[2] * MEMORY[0x38];
  __asm { adcx    rsi, rax }
  _R9[2] = _RDI;
  _RDI = 0LL;
  __asm
  {
    adcx    rdi, rdi
    adox    rdi, r8
  }
  __asm { adox    rbp, [r9+18h] }
  _R8 = (v4[3] * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v701 + 1)) >> 64;
  _RAX = v4[3] * **((_QWORD **)&v701 + 1);
  __asm
  {
    adcx    rbp, rax
    adox    rbx, r8
  }
  _R8 = (v4[3] * (unsigned __int128)MEMORY[8]) >> 64;
  _RAX = v4[3] * MEMORY[8];
  __asm
  {
    adcx    rbx, rax
    adox    r12, r8
  }
  _R8 = (v4[3] * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = v4[3] * MEMORY[0x10];
  __asm
  {
    adcx    r12, rax
    adox    r13, r8
  }
  _R8 = (v4[3] * (unsigned __int128)MEMORY[0x18]) >> 64;
  _RAX = v4[3] * MEMORY[0x18];
  __asm
  {
    adcx    r13, rax
    adox    r14, r8
  }
  _R8 = (v4[3] * (unsigned __int128)MEMORY[0x20]) >> 64;
  _RAX = v4[3] * MEMORY[0x20];
  __asm
  {
    adcx    r14, rax
    adox    r11, r8
  }
  _R8 = (v4[3] * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = v4[3] * MEMORY[0x28];
  __asm
  {
    adcx    r11, rax
    adox    rsi, r8
  }
  _R8 = (v4[3] * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = v4[3] * MEMORY[0x30];
  __asm
  {
    adcx    rsi, rax
    adox    rdi, r8
  }
  v737 = v4[3];
  _R8 = (v737 * (unsigned __int128)MEMORY[0x38]) >> 64;
  _RAX = v4[3] * MEMORY[0x38];
  __asm { adcx    rdi, rax }
  _R9[3] = _RBP;
  _RBP = 0LL;
  __asm
  {
    adcx    rbp, rbp
    adox    rbp, r8
  }
  __asm { adox    rbx, [r9+20h] }
  _R8 = (v4[4] * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v737 + 1)) >> 64;
  _RAX = v4[4] * **((_QWORD **)&v737 + 1);
  __asm
  {
    adcx    rbx, rax
    adox    r12, r8
  }
  _R8 = (v4[4] * (unsigned __int128)MEMORY[8]) >> 64;
  _RAX = v4[4] * MEMORY[8];
  __asm
  {
    adcx    r12, rax
    adox    r13, r8
  }
  _R8 = (v4[4] * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = v4[4] * MEMORY[0x10];
  __asm
  {
    adcx    r13, rax
    adox    r14, r8
  }
  _R8 = (v4[4] * (unsigned __int128)MEMORY[0x18]) >> 64;
  _RAX = v4[4] * MEMORY[0x18];
  __asm
  {
    adcx    r14, rax
    adox    r11, r8
  }
  _R8 = (v4[4] * (unsigned __int128)MEMORY[0x20]) >> 64;
  _RAX = v4[4] * MEMORY[0x20];
  __asm
  {
    adcx    r11, rax
    adox    rsi, r8
  }
  _R8 = (v4[4] * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = v4[4] * MEMORY[0x28];
  __asm
  {
    adcx    rsi, rax
    adox    rdi, r8
  }
  _R8 = (v4[4] * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = v4[4] * MEMORY[0x30];
  __asm
  {
    adcx    rdi, rax
    adox    rbp, r8
  }
  v773 = v4[4];
  _R8 = (v773 * (unsigned __int128)MEMORY[0x38]) >> 64;
  _RAX = v4[4] * MEMORY[0x38];
  __asm { adcx    rbp, rax }
  _R9[4] = _RBX;
  _RBX = 0LL;
  __asm
  {
    adcx    rbx, rbx
    adox    rbx, r8
  }
  __asm { adox    r12, [r9+28h] }
  _R8 = (v4[5] * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v773 + 1)) >> 64;
  _RAX = v4[5] * **((_QWORD **)&v773 + 1);
  __asm
  {
    adcx    r12, rax
    adox    r13, r8
  }
  _R8 = (v4[5] * (unsigned __int128)MEMORY[8]) >> 64;
  _RAX = v4[5] * MEMORY[8];
  __asm
  {
    adcx    r13, rax
    adox    r14, r8
  }
  _R8 = (v4[5] * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = v4[5] * MEMORY[0x10];
  __asm
  {
    adcx    r14, rax
    adox    r11, r8
  }
  _R8 = (v4[5] * (unsigned __int128)MEMORY[0x18]) >> 64;
  _RAX = v4[5] * MEMORY[0x18];
  __asm
  {
    adcx    r11, rax
    adox    rsi, r8
  }
  _R8 = (v4[5] * (unsigned __int128)MEMORY[0x20]) >> 64;
  _RAX = v4[5] * MEMORY[0x20];
  __asm
  {
    adcx    rsi, rax
    adox    rdi, r8
  }
  _R8 = (v4[5] * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = v4[5] * MEMORY[0x28];
  __asm
  {
    adcx    rdi, rax
    adox    rbp, r8
  }
  _R8 = (v4[5] * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = v4[5] * MEMORY[0x30];
  __asm
  {
    adcx    rbp, rax
    adox    rbx, r8
  }
  v809 = v4[5];
  _R8 = (v809 * (unsigned __int128)MEMORY[0x38]) >> 64;
  _RAX = v4[5] * MEMORY[0x38];
  __asm { adcx    rbx, rax }
  _R9[5] = _R12;
  _R12 = 0LL;
  __asm
  {
    adcx    r12, r12
    adox    r12, r8
  }
  __asm { adox    r13, [r9+30h] }
  _R8 = (v4[6] * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v809 + 1)) >> 64;
  _RAX = v4[6] * **((_QWORD **)&v809 + 1);
  __asm
  {
    adcx    r13, rax
    adox    r14, r8
  }
  _R8 = (v4[6] * (unsigned __int128)MEMORY[8]) >> 64;
  _RAX = v4[6] * MEMORY[8];
  __asm
  {
    adcx    r14, rax
    adox    r11, r8
  }
  _R8 = (v4[6] * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = v4[6] * MEMORY[0x10];
  __asm
  {
    adcx    r11, rax
    adox    rsi, r8
  }
  _R8 = (v4[6] * (unsigned __int128)MEMORY[0x18]) >> 64;
  _RAX = v4[6] * MEMORY[0x18];
  __asm
  {
    adcx    rsi, rax
    adox    rdi, r8
  }
  _R8 = (v4[6] * (unsigned __int128)MEMORY[0x20]) >> 64;
  _RAX = v4[6] * MEMORY[0x20];
  __asm
  {
    adcx    rdi, rax
    adox    rbp, r8
  }
  _R8 = (v4[6] * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = v4[6] * MEMORY[0x28];
  __asm
  {
    adcx    rbp, rax
    adox    rbx, r8
  }
  _R8 = (v4[6] * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = v4[6] * MEMORY[0x30];
  __asm
  {
    adcx    rbx, rax
    adox    r12, r8
  }
  v845 = v4[6];
  _R8 = (v845 * (unsigned __int128)MEMORY[0x38]) >> 64;
  _RAX = v4[6] * MEMORY[0x38];
  __asm { adcx    r12, rax }
  _R9[6] = _R13;
  _R13 = 0LL;
  __asm
  {
    adcx    r13, r13
    adox    r13, r8
  }
  __asm { adox    r14, [r9+38h] }
  _R8 = (v4[7] * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v845 + 1)) >> 64;
  _RAX = v4[7] * **((_QWORD **)&v845 + 1);
  __asm
  {
    adcx    r14, rax
    adox    r11, r8
  }
  _R8 = (v4[7] * (unsigned __int128)MEMORY[8]) >> 64;
  _RAX = v4[7] * MEMORY[8];
  __asm
  {
    adcx    r11, rax
    adox    rsi, r8
  }
  _R8 = (v4[7] * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = v4[7] * MEMORY[0x10];
  __asm
  {
    adcx    rsi, rax
    adox    rdi, r8
  }
  _R8 = (v4[7] * (unsigned __int128)MEMORY[0x18]) >> 64;
  _RAX = v4[7] * MEMORY[0x18];
  __asm
  {
    adcx    rdi, rax
    adox    rbp, r8
  }
  _R8 = (v4[7] * (unsigned __int128)MEMORY[0x20]) >> 64;
  _RAX = v4[7] * MEMORY[0x20];
  __asm
  {
    adcx    rbp, rax
    adox    rbx, r8
  }
  _R8 = (v4[7] * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = v4[7] * MEMORY[0x28];
  __asm
  {
    adcx    rbx, rax
    adox    r12, r8
  }
  _R8 = (v4[7] * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = v4[7] * MEMORY[0x30];
  __asm
  {
    adcx    r12, rax
    adox    r13, r8
  }
  v881 = v4[7];
  _R8 = (v881 * (unsigned __int128)MEMORY[0x38]) >> 64;
  _RAX = v4[7] * MEMORY[0x38];
  __asm { adcx    r13, rax }
  _R9[7] = _R14;
  _R14 = 0LL;
  __asm
  {
    adcx    r14, r14
    adox    r14, r8
  }
  v4 += 8;
  _R9 += 8;
  __asm { adox    r11, [r9] }
  _R8 = (*v4 * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v881 + 1)) >> 64;
  _RAX = *v4 * **((_QWORD **)&v881 + 1);
  __asm
  {
    adcx    r11, rax
    adox    rsi, r8
  }
  _R8 = (*v4 * (unsigned __int128)MEMORY[8]) >> 64;
  _RAX = *v4 * MEMORY[8];
  __asm
  {
    adcx    rsi, rax
    adox    rdi, r8
  }
  _R8 = (*v4 * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = *v4 * MEMORY[0x10];
  __asm
  {
    adcx    rdi, rax
    adox    rbp, r8
  }
  _R8 = (*v4 * (unsigned __int128)MEMORY[0x18]) >> 64;
  _RAX = *v4 * MEMORY[0x18];
  __asm
  {
    adcx    rbp, rax
    adox    rbx, r8
  }
  _R8 = (*v4 * (unsigned __int128)MEMORY[0x20]) >> 64;
  _RAX = *v4 * MEMORY[0x20];
  __asm
  {
    adcx    rbx, rax
    adox    r12, r8
  }
  _R8 = (*v4 * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = *v4 * MEMORY[0x28];
  __asm
  {
    adcx    r12, rax
    adox    r13, r8
  }
  _R8 = (*v4 * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = *v4 * MEMORY[0x30];
  __asm
  {
    adcx    r13, rax
    adox    r14, r8
  }
  v917 = *v4;
  _R8 = (v917 * (unsigned __int128)MEMORY[0x38]) >> 64;
  _RAX = *v4 * MEMORY[0x38];
  __asm { adcx    r14, rax }
  *_R9 = _R11;
  _R11 = 0LL;
  __asm
  {
    adcx    r11, r11
    adox    r11, r8
  }
  __asm { adox    rsi, [r9+8] }
  _R8 = (v4[1] * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v917 + 1)) >> 64;
  _RAX = v4[1] * **((_QWORD **)&v917 + 1);
  __asm
  {
    adcx    rsi, rax
    adox    rdi, r8
  }
  _R8 = (v4[1] * (unsigned __int128)MEMORY[8]) >> 64;
  _RAX = v4[1] * MEMORY[8];
  __asm
  {
    adcx    rdi, rax
    adox    rbp, r8
  }
  _R8 = (v4[1] * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = v4[1] * MEMORY[0x10];
  __asm
  {
    adcx    rbp, rax
    adox    rbx, r8
  }
  _R8 = (v4[1] * (unsigned __int128)MEMORY[0x18]) >> 64;
  _RAX = v4[1] * MEMORY[0x18];
  __asm
  {
    adcx    rbx, rax
    adox    r12, r8
  }
  _R8 = (v4[1] * (unsigned __int128)MEMORY[0x20]) >> 64;
  _RAX = v4[1] * MEMORY[0x20];
  __asm
  {
    adcx    r12, rax
    adox    r13, r8
  }
  _R8 = (v4[1] * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = v4[1] * MEMORY[0x28];
  __asm
  {
    adcx    r13, rax
    adox    r14, r8
  }
  _R8 = (v4[1] * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = v4[1] * MEMORY[0x30];
  __asm
  {
    adcx    r14, rax
    adox    r11, r8
  }
  v953 = v4[1];
  _R8 = (v953 * (unsigned __int128)MEMORY[0x38]) >> 64;
  _RAX = v4[1] * MEMORY[0x38];
  __asm { adcx    r11, rax }
  _R9[1] = _RSI;
  _RSI = 0LL;
  __asm
  {
    adcx    rsi, rsi
    adox    rsi, r8
  }
  __asm { adox    rdi, [r9+10h] }
  _R8 = (v4[2] * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v953 + 1)) >> 64;
  _RAX = v4[2] * **((_QWORD **)&v953 + 1);
  __asm
  {
    adcx    rdi, rax
    adox    rbp, r8
  }
  _R8 = (v4[2] * (unsigned __int128)MEMORY[8]) >> 64;
  _RAX = v4[2] * MEMORY[8];
  __asm
  {
    adcx    rbp, rax
    adox    rbx, r8
  }
  _R8 = (v4[2] * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = v4[2] * MEMORY[0x10];
  __asm
  {
    adcx    rbx, rax
    adox    r12, r8
  }
  _R8 = (v4[2] * (unsigned __int128)MEMORY[0x18]) >> 64;
  _RAX = v4[2] * MEMORY[0x18];
  __asm
  {
    adcx    r12, rax
    adox    r13, r8
  }
  _R8 = (v4[2] * (unsigned __int128)MEMORY[0x20]) >> 64;
  _RAX = v4[2] * MEMORY[0x20];
  __asm
  {
    adcx    r13, rax
    adox    r14, r8
  }
  _R8 = (v4[2] * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = v4[2] * MEMORY[0x28];
  __asm
  {
    adcx    r14, rax
    adox    r11, r8
  }
  _R8 = (v4[2] * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = v4[2] * MEMORY[0x30];
  __asm
  {
    adcx    r11, rax
    adox    rsi, r8
  }
  v989 = v4[2];
  _R8 = (v989 * (unsigned __int128)MEMORY[0x38]) >> 64;
  _RAX = v4[2] * MEMORY[0x38];
  __asm { adcx    rsi, rax }
  _R9[2] = _RDI;
  _RDI = 0LL;
  __asm
  {
    adcx    rdi, rdi
    adox    rdi, r8
  }
  __asm { adox    rbp, [r9+18h] }
  _R8 = (v4[3] * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v989 + 1)) >> 64;
  _RAX = v4[3] * **((_QWORD **)&v989 + 1);
  __asm
  {
    adcx    rbp, rax
    adox    rbx, r8
  }
  _R8 = (v4[3] * (unsigned __int128)MEMORY[8]) >> 64;
  _RAX = v4[3] * MEMORY[8];
  __asm
  {
    adcx    rbx, rax
    adox    r12, r8
  }
  _R8 = (v4[3] * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = v4[3] * MEMORY[0x10];
  __asm
  {
    adcx    r12, rax
    adox    r13, r8
  }
  _R8 = (v4[3] * (unsigned __int128)MEMORY[0x18]) >> 64;
  _RAX = v4[3] * MEMORY[0x18];
  __asm
  {
    adcx    r13, rax
    adox    r14, r8
  }
  _R8 = (v4[3] * (unsigned __int128)MEMORY[0x20]) >> 64;
  _RAX = v4[3] * MEMORY[0x20];
  __asm
  {
    adcx    r14, rax
    adox    r11, r8
  }
  _R8 = (v4[3] * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = v4[3] * MEMORY[0x28];
  __asm
  {
    adcx    r11, rax
    adox    rsi, r8
  }
  _R8 = (v4[3] * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = v4[3] * MEMORY[0x30];
  __asm
  {
    adcx    rsi, rax
    adox    rdi, r8
  }
  v1025 = v4[3];
  _R8 = (v1025 * (unsigned __int128)MEMORY[0x38]) >> 64;
  _RAX = v4[3] * MEMORY[0x38];
  __asm { adcx    rdi, rax }
  _R9[3] = _RBP;
  _RBP = 0LL;
  __asm
  {
    adcx    rbp, rbp
    adox    rbp, r8
  }
  __asm { adox    rbx, [r9+20h] }
  _R8 = (v4[4] * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v1025 + 1)) >> 64;
  _RAX = v4[4] * **((_QWORD **)&v1025 + 1);
  __asm
  {
    adcx    rbx, rax
    adox    r12, r8
  }
  _R8 = (v4[4] * (unsigned __int128)MEMORY[8]) >> 64;
  _RAX = v4[4] * MEMORY[8];
  __asm
  {
    adcx    r12, rax
    adox    r13, r8
  }
  _R8 = (v4[4] * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = v4[4] * MEMORY[0x10];
  __asm
  {
    adcx    r13, rax
    adox    r14, r8
  }
  _R8 = (v4[4] * (unsigned __int128)MEMORY[0x18]) >> 64;
  _RAX = v4[4] * MEMORY[0x18];
  __asm
  {
    adcx    r14, rax
    adox    r11, r8
  }
  _R8 = (v4[4] * (unsigned __int128)MEMORY[0x20]) >> 64;
  _RAX = v4[4] * MEMORY[0x20];
  __asm
  {
    adcx    r11, rax
    adox    rsi, r8
  }
  _R8 = (v4[4] * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = v4[4] * MEMORY[0x28];
  __asm
  {
    adcx    rsi, rax
    adox    rdi, r8
  }
  _R8 = (v4[4] * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = v4[4] * MEMORY[0x30];
  __asm
  {
    adcx    rdi, rax
    adox    rbp, r8
  }
  v1061 = v4[4];
  _R8 = (v1061 * (unsigned __int128)MEMORY[0x38]) >> 64;
  _RAX = v4[4] * MEMORY[0x38];
  __asm { adcx    rbp, rax }
  _R9[4] = _RBX;
  _RBX = 0LL;
  __asm
  {
    adcx    rbx, rbx
    adox    rbx, r8
  }
  __asm { adox    r12, [r9+28h] }
  _R8 = (v4[5] * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v1061 + 1)) >> 64;
  _RAX = v4[5] * **((_QWORD **)&v1061 + 1);
  __asm
  {
    adcx    r12, rax
    adox    r13, r8
  }
  _R8 = (v4[5] * (unsigned __int128)MEMORY[8]) >> 64;
  _RAX = v4[5] * MEMORY[8];
  __asm
  {
    adcx    r13, rax
    adox    r14, r8
  }
  _R8 = (v4[5] * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = v4[5] * MEMORY[0x10];
  __asm
  {
    adcx    r14, rax
    adox    r11, r8
  }
  _R8 = (v4[5] * (unsigned __int128)MEMORY[0x18]) >> 64;
  _RAX = v4[5] * MEMORY[0x18];
  __asm
  {
    adcx    r11, rax
    adox    rsi, r8
  }
  _R8 = (v4[5] * (unsigned __int128)MEMORY[0x20]) >> 64;
  _RAX = v4[5] * MEMORY[0x20];
  __asm
  {
    adcx    rsi, rax
    adox    rdi, r8
  }
  _R8 = (v4[5] * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = v4[5] * MEMORY[0x28];
  __asm
  {
    adcx    rdi, rax
    adox    rbp, r8
  }
  _R8 = (v4[5] * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = v4[5] * MEMORY[0x30];
  __asm
  {
    adcx    rbp, rax
    adox    rbx, r8
  }
  v1097 = v4[5];
  _R8 = (v1097 * (unsigned __int128)MEMORY[0x38]) >> 64;
  _RAX = v4[5] * MEMORY[0x38];
  __asm { adcx    rbx, rax }
  _R9[5] = _R12;
  _R12 = 0LL;
  __asm
  {
    adcx    r12, r12
    adox    r12, r8
  }
  __asm { adox    r13, [r9+30h] }
  _R8 = (v4[6] * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v1097 + 1)) >> 64;
  _RAX = v4[6] * **((_QWORD **)&v1097 + 1);
  __asm
  {
    adcx    r13, rax
    adox    r14, r8
  }
  _R8 = (v4[6] * (unsigned __int128)MEMORY[8]) >> 64;
  _RAX = v4[6] * MEMORY[8];
  __asm
  {
    adcx    r14, rax
    adox    r11, r8
  }
  _R8 = (v4[6] * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = v4[6] * MEMORY[0x10];
  __asm
  {
    adcx    r11, rax
    adox    rsi, r8
  }
  _R8 = (v4[6] * (unsigned __int128)MEMORY[0x18]) >> 64;
  _RAX = v4[6] * MEMORY[0x18];
  __asm
  {
    adcx    rsi, rax
    adox    rdi, r8
  }
  _R8 = (v4[6] * (unsigned __int128)MEMORY[0x20]) >> 64;
  _RAX = v4[6] * MEMORY[0x20];
  __asm
  {
    adcx    rdi, rax
    adox    rbp, r8
  }
  _R8 = (v4[6] * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = v4[6] * MEMORY[0x28];
  __asm
  {
    adcx    rbp, rax
    adox    rbx, r8
  }
  _R8 = (v4[6] * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = v4[6] * MEMORY[0x30];
  __asm
  {
    adcx    rbx, rax
    adox    r12, r8
  }
  v1133 = v4[6];
  _R8 = (v1133 * (unsigned __int128)MEMORY[0x38]) >> 64;
  _RAX = v4[6] * MEMORY[0x38];
  __asm { adcx    r12, rax }
  _R9[6] = _R13;
  _R13 = 0LL;
  __asm
  {
    adcx    r13, r13
    adox    r13, r8
  }
  __asm { adox    r14, [r9+38h] }
  _R8 = (v4[7] * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v1133 + 1)) >> 64;
  _RAX = v4[7] * **((_QWORD **)&v1133 + 1);
  __asm
  {
    adcx    r14, rax
    adox    r11, r8
  }
  _R8 = (v4[7] * (unsigned __int128)MEMORY[8]) >> 64;
  _RAX = v4[7] * MEMORY[8];
  __asm
  {
    adcx    r11, rax
    adox    rsi, r8
  }
  _R8 = (v4[7] * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = v4[7] * MEMORY[0x10];
  __asm
  {
    adcx    rsi, rax
    adox    rdi, r8
  }
  _R8 = (v4[7] * (unsigned __int128)MEMORY[0x18]) >> 64;
  _RAX = v4[7] * MEMORY[0x18];
  __asm
  {
    adcx    rdi, rax
    adox    rbp, r8
  }
  _R8 = (v4[7] * (unsigned __int128)MEMORY[0x20]) >> 64;
  _RAX = v4[7] * MEMORY[0x20];
  __asm
  {
    adcx    rbp, rax
    adox    rbx, r8
  }
  _R8 = (v4[7] * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = v4[7] * MEMORY[0x28];
  __asm
  {
    adcx    rbx, rax
    adox    r12, r8
  }
  _R8 = (v4[7] * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = v4[7] * MEMORY[0x30];
  __asm
  {
    adcx    r12, rax
    adox    r13, r8
  }
  _R8 = (v4[7] * (unsigned __int128)MEMORY[0x38]) >> 64;
  result = v4[7] * MEMORY[0x38];
  __asm { adcx    r13, rax }
  _R9[7] = _R14;
  _R14 = 0LL;
  __asm
  {
    adcx    r14, r14
    adox    r14, r8
  }
  _R9 += 8;
  *_R9 = _R11;
  _R9[1] = _RSI;
  _R9[2] = _RDI;
  _R9[3] = _RBP;
  _R9[4] = _RBX;
  _R9[5] = _R12;
  _R9[6] = _R13;
  _R9[7] = _R14;
  return result;
}
