/*
 * XREFs of SymCryptFdefRawSquareMulx @ 0x140404760
 * Callers:
 *     SymCryptFdefRawSquare @ 0x1403FE168 (SymCryptFdefRawSquare.c)
 *     SymCryptFdefModSquareMontgomeryMulx @ 0x1403FF5A0 (SymCryptFdefModSquareMontgomeryMulx.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
int __fastcall SymCryptFdefRawSquareMulx(unsigned __int64 *a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // r10
  __int64 *v4; // r11
  __int64 v5; // r9
  __int128 v15; // rdx
  unsigned __int64 v17; // rt2
  __int128 v62; // rdx
  __int128 v99; // rdx
  unsigned __int64 v105; // rt2
  _QWORD *v135; // rcx OVERLAPPED
  __int64 v140; // r10
  __int64 v141; // r11
  __int128 v173; // rdx
  __int128 v209; // rdx
  __int128 v245; // rdx
  __int128 v281; // rdx
  __int128 v317; // rdx
  __int128 v353; // rdx
  __int128 v389; // rdx
  unsigned __int64 *v422; // rcx
  __int64 v423; // r10
  __int64 *v424; // r8
  __int128 v429; // rdx
  __int128 v440; // rdx
  __int128 v449; // rdx
  __int128 v458; // rdx
  __int128 v467; // rdx
  __int128 v476; // rdx
  __int128 v485; // rdx
  __int128 v494; // rdx
  unsigned __int64 *v502; // [rsp+48h] [rbp+8h]
  __int64 *v504; // [rsp+58h] [rbp+18h]
  __int64 v505; // [rsp+60h] [rbp+20h]

  v502 = a1;
  v504 = a3;
  v3 = a2 << 6;
  v505 = a2 << 6;
  v4 = a3;
  v5 = a2 << 6;
  do
  {
    *v4 = 0LL;
    v4[1] = 0LL;
    v4[2] = 0LL;
    v4[3] = 0LL;
    v4[4] = 0LL;
    v4[5] = 0LL;
    v4[6] = 0LL;
    v4[7] = 0LL;
    v4 += 8;
    v5 -= 64LL;
  }
  while ( v5 );
  while ( 1 )
  {
    _RDI = a3[1];
    _RBP = a3[2];
    _RBX = a3[3];
    _R12 = a3[4];
    _R13 = a3[5];
    _R14 = a3[6];
    _R15 = a3[7];
    _RSI = 0LL;
    v17 = a1[1];
    v15 = *a1;
    _R9 = (v15 * (unsigned __int128)v17) >> 64;
    _RAX = v15 * v17;
    __asm
    {
      adcx    rdi, rax
      adox    rbp, r9
    }
    _R9 = ((unsigned __int64)v15 * (unsigned __int128)*(unsigned __int64 *)(*((_QWORD *)&v15 + 1) + 16LL)) >> 64;
    _RAX = v15 * *(_QWORD *)(*((_QWORD *)&v15 + 1) + 16LL);
    __asm
    {
      adcx    rbp, rax
      adox    rbx, r9
    }
    _R9 = ((unsigned __int64)v15 * (unsigned __int128)MEMORY[0x18]) >> 64;
    _RAX = v15 * MEMORY[0x18];
    __asm
    {
      adcx    rbx, rax
      adox    r12, r9
    }
    _R9 = ((unsigned __int64)v15 * (unsigned __int128)MEMORY[0x20]) >> 64;
    _RAX = v15 * MEMORY[0x20];
    __asm
    {
      adcx    r12, rax
      adox    r13, r9
    }
    _R9 = ((unsigned __int64)v15 * (unsigned __int128)MEMORY[0x28]) >> 64;
    _RAX = v15 * MEMORY[0x28];
    __asm
    {
      adcx    r13, rax
      adox    r14, r9
    }
    _R9 = ((unsigned __int64)v15 * (unsigned __int128)MEMORY[0x30]) >> 64;
    _RAX = v15 * MEMORY[0x30];
    __asm
    {
      adcx    r14, rax
      adox    r15, r9
    }
    _R9 = ((unsigned __int64)v15 * (unsigned __int128)MEMORY[0x38]) >> 64;
    _RAX = v15 * MEMORY[0x38];
    __asm { adcx    r15, rax }
    a3[1] = _RDI;
    __asm
    {
      adcx    rsi, rsi
      adox    rsi, r9
    }
    a3[2] = _RBP;
    _R9 = (MEMORY[8] * (unsigned __int128)MEMORY[0x10]) >> 64;
    _RAX = MEMORY[8] * MEMORY[0x10];
    __asm
    {
      adcx    rbx, rax
      adox    r12, r9
    }
    _R9 = (MEMORY[8] * (unsigned __int128)MEMORY[0x18]) >> 64;
    _RAX = MEMORY[8] * MEMORY[0x18];
    __asm
    {
      adcx    r12, rax
      adox    r13, r9
    }
    _R9 = (MEMORY[8] * (unsigned __int128)MEMORY[0x20]) >> 64;
    _RAX = MEMORY[8] * MEMORY[0x20];
    __asm
    {
      adcx    r13, rax
      adox    r14, r9
    }
    _R9 = (MEMORY[8] * (unsigned __int128)MEMORY[0x28]) >> 64;
    _RAX = MEMORY[8] * MEMORY[0x28];
    __asm
    {
      adcx    r14, rax
      adox    r15, r9
    }
    v62 = MEMORY[8];
    _R9 = (MEMORY[8] * (unsigned __int128)MEMORY[0x30]) >> 64;
    _RAX = MEMORY[8] * MEMORY[0x30];
    __asm
    {
      adcx    r15, rax
      adox    rsi, r9
    }
    *(_QWORD *)&v62 = MEMORY[0x38];
    _RDI = 0LL;
    _RBP = 0LL;
    a3[3] = _RBX;
    _R9 = ((unsigned __int64)v62 * (unsigned __int128)*(unsigned __int64 *)(*((_QWORD *)&v62 + 1) + 8LL)) >> 64;
    _RAX = v62 * *(_QWORD *)(*((_QWORD *)&v62 + 1) + 8LL);
    __asm
    {
      adcx    rsi, rax
      adox    rdi, r9
    }
    _R9 = ((unsigned __int64)v62 * (unsigned __int128)MEMORY[0x10]) >> 64;
    _RAX = v62 * MEMORY[0x10];
    __asm { adcx    rdi, rax }
    a3[4] = _R12;
    __asm { adcx    rbp, r9 }
    _R9 = (MEMORY[0x10] * (unsigned __int128)MEMORY[0x18]) >> 64;
    _RAX = MEMORY[0x10] * MEMORY[0x18];
    __asm
    {
      adcx    r13, rax
      adox    r14, r9
    }
    _R9 = (MEMORY[0x10] * (unsigned __int128)MEMORY[0x20]) >> 64;
    _RAX = MEMORY[0x10] * MEMORY[0x20];
    __asm
    {
      adcx    r14, rax
      adox    r15, r9
    }
    _R9 = (MEMORY[0x10] * (unsigned __int128)MEMORY[0x28]) >> 64;
    _RAX = MEMORY[0x10] * MEMORY[0x28];
    __asm
    {
      adcx    r15, rax
      adox    rsi, r9
    }
    _R9 = (MEMORY[0x10] * (unsigned __int128)MEMORY[0x30]) >> 64;
    _RAX = MEMORY[0x10] * MEMORY[0x30];
    __asm
    {
      adcx    rsi, rax
      adox    rdi, r9
    }
    _RBX = 0LL;
    _R12 = 0LL;
    _R9 = (MEMORY[0x20] * (unsigned __int128)MEMORY[0x28]) >> 64;
    _RAX = MEMORY[0x20] * MEMORY[0x28];
    __asm
    {
      adcx    rdi, rax
      adox    rbp, r9
    }
    v99 = MEMORY[0x20];
    _R9 = (MEMORY[0x20] * (unsigned __int128)MEMORY[0x30]) >> 64;
    _RAX = MEMORY[0x20] * MEMORY[0x30];
    __asm
    {
      adcx    rbp, rax
      adox    rbx, r9
    }
    *(_QWORD *)&v99 = MEMORY[0x28];
    a3[5] = _R13;
    v105 = *(_QWORD *)(*((_QWORD *)&v99 + 1) + 48LL);
    v99 = (unsigned __int64)v99;
    _R9 = ((unsigned __int64)v99 * (unsigned __int128)v105) >> 64;
    _RAX = v99 * v105;
    __asm
    {
      adcx    rbx, rax
      adcx    r12, r9
    }
    *(_QWORD *)&v99 = MEMORY[0x18];
    a3[6] = _R14;
    _R9 = ((unsigned __int64)v99 * (unsigned __int128)*(unsigned __int64 *)(*((_QWORD *)&v99 + 1) + 32LL)) >> 64;
    _RAX = v99 * *(_QWORD *)(*((_QWORD *)&v99 + 1) + 32LL);
    __asm
    {
      adcx    r15, rax
      adox    rsi, r9
    }
    _R9 = ((unsigned __int64)v99 * (unsigned __int128)MEMORY[0x28]) >> 64;
    _RAX = v99 * MEMORY[0x28];
    __asm
    {
      adcx    rsi, rax
      adox    rdi, r9
    }
    _R9 = ((unsigned __int64)v99 * (unsigned __int128)MEMORY[0x30]) >> 64;
    _RAX = v99 * MEMORY[0x30];
    __asm
    {
      adcx    rdi, rax
      adox    rbp, r9
    }
    v99 = (unsigned __int64)v99;
    _R9 = ((unsigned __int64)v99 * (unsigned __int128)MEMORY[0x38]) >> 64;
    _RAX = v99 * MEMORY[0x38];
    __asm
    {
      adcx    rbp, rax
      adox    rbx, r9
    }
    *(_QWORD *)&v99 = MEMORY[0x38];
    _R13 = 0LL;
    _R14 = 0LL;
    a3[7] = _R15;
    _R9 = ((unsigned __int64)v99 * (unsigned __int128)*(unsigned __int64 *)(*((_QWORD *)&v99 + 1) + 32LL)) >> 64;
    _RAX = v99 * *(_QWORD *)(*((_QWORD *)&v99 + 1) + 32LL);
    __asm
    {
      adcx    rbx, rax
      adox    r12, r9
    }
    _R9 = ((unsigned __int64)v99 * (unsigned __int128)MEMORY[0x28]) >> 64;
    _RAX = v99 * MEMORY[0x28];
    __asm
    {
      adcx    r12, rax
      adox    r13, r9
    }
    *(_OWORD *)(&v135 - 1) = (unsigned __int64)v99;
    _R9 = ((unsigned __int64)v99 * (unsigned __int128)MEMORY[0x30]) >> 64;
    _RAX = v99 * MEMORY[0x30];
    __asm
    {
      adcx    r13, rax
      adcx    r14, r9
    }
    _R15 = 0LL;
    v140 = v3 - 64;
    if ( !v140 )
      break;
    v141 = 64LL;
    _R8 = a3 + 8;
    do
    {
      __asm { adox    rsi, [r8] }
      _R9 = (*(unsigned __int64 *)v141 * (unsigned __int128)(unsigned __int64)*v135) >> 64;
      _RAX = *(_QWORD *)v141 * *v135;
      __asm
      {
        adcx    rsi, rax
        adox    rdi, r9
      }
      _R9 = (*(unsigned __int64 *)v141 * (unsigned __int128)MEMORY[8]) >> 64;
      _RAX = *(_QWORD *)v141 * MEMORY[8];
      __asm
      {
        adcx    rdi, rax
        adox    rbp, r9
      }
      _R9 = (*(unsigned __int64 *)v141 * (unsigned __int128)MEMORY[0x10]) >> 64;
      _RAX = *(_QWORD *)v141 * MEMORY[0x10];
      __asm
      {
        adcx    rbp, rax
        adox    rbx, r9
      }
      _R9 = (*(unsigned __int64 *)v141 * (unsigned __int128)MEMORY[0x18]) >> 64;
      _RAX = *(_QWORD *)v141 * MEMORY[0x18];
      __asm
      {
        adcx    rbx, rax
        adox    r12, r9
      }
      _R9 = (*(unsigned __int64 *)v141 * (unsigned __int128)MEMORY[0x20]) >> 64;
      _RAX = *(_QWORD *)v141 * MEMORY[0x20];
      __asm
      {
        adcx    r12, rax
        adox    r13, r9
      }
      _R9 = (*(unsigned __int64 *)v141 * (unsigned __int128)MEMORY[0x28]) >> 64;
      _RAX = *(_QWORD *)v141 * MEMORY[0x28];
      __asm
      {
        adcx    r13, rax
        adox    r14, r9
      }
      _R9 = (*(unsigned __int64 *)v141 * (unsigned __int128)MEMORY[0x30]) >> 64;
      _RAX = *(_QWORD *)v141 * MEMORY[0x30];
      __asm
      {
        adcx    r14, rax
        adox    r15, r9
      }
      v173 = *(unsigned __int64 *)v141;
      _R9 = (v173 * (unsigned __int128)MEMORY[0x38]) >> 64;
      _RAX = *(_QWORD *)v141 * MEMORY[0x38];
      __asm { adcx    r15, rax }
      *_R8 = _RSI;
      _RSI = 0LL;
      __asm
      {
        adcx    rsi, rsi
        adox    rsi, r9
      }
      __asm { adox    rdi, [r8+8] }
      _R9 = (*(unsigned __int64 *)(v141 + 8) * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v173 + 1)) >> 64;
      _RAX = *(_QWORD *)(v141 + 8) * **((_QWORD **)&v173 + 1);
      __asm
      {
        adcx    rdi, rax
        adox    rbp, r9
      }
      _R9 = (*(unsigned __int64 *)(v141 + 8) * (unsigned __int128)MEMORY[8]) >> 64;
      _RAX = *(_QWORD *)(v141 + 8) * MEMORY[8];
      __asm
      {
        adcx    rbp, rax
        adox    rbx, r9
      }
      _R9 = (*(unsigned __int64 *)(v141 + 8) * (unsigned __int128)MEMORY[0x10]) >> 64;
      _RAX = *(_QWORD *)(v141 + 8) * MEMORY[0x10];
      __asm
      {
        adcx    rbx, rax
        adox    r12, r9
      }
      _R9 = (*(unsigned __int64 *)(v141 + 8) * (unsigned __int128)MEMORY[0x18]) >> 64;
      _RAX = *(_QWORD *)(v141 + 8) * MEMORY[0x18];
      __asm
      {
        adcx    r12, rax
        adox    r13, r9
      }
      _R9 = (*(unsigned __int64 *)(v141 + 8) * (unsigned __int128)MEMORY[0x20]) >> 64;
      _RAX = *(_QWORD *)(v141 + 8) * MEMORY[0x20];
      __asm
      {
        adcx    r13, rax
        adox    r14, r9
      }
      _R9 = (*(unsigned __int64 *)(v141 + 8) * (unsigned __int128)MEMORY[0x28]) >> 64;
      _RAX = *(_QWORD *)(v141 + 8) * MEMORY[0x28];
      __asm
      {
        adcx    r14, rax
        adox    r15, r9
      }
      _R9 = (*(unsigned __int64 *)(v141 + 8) * (unsigned __int128)MEMORY[0x30]) >> 64;
      _RAX = *(_QWORD *)(v141 + 8) * MEMORY[0x30];
      __asm
      {
        adcx    r15, rax
        adox    rsi, r9
      }
      v209 = *(unsigned __int64 *)(v141 + 8);
      _R9 = (v209 * (unsigned __int128)MEMORY[0x38]) >> 64;
      _RAX = *(_QWORD *)(v141 + 8) * MEMORY[0x38];
      __asm { adcx    rsi, rax }
      _R8[1] = _RDI;
      _RDI = 0LL;
      __asm
      {
        adcx    rdi, rdi
        adox    rdi, r9
      }
      __asm { adox    rbp, [r8+10h] }
      _R9 = (*(unsigned __int64 *)(v141 + 16) * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v209 + 1)) >> 64;
      _RAX = *(_QWORD *)(v141 + 16) * **((_QWORD **)&v209 + 1);
      __asm
      {
        adcx    rbp, rax
        adox    rbx, r9
      }
      _R9 = (*(unsigned __int64 *)(v141 + 16) * (unsigned __int128)MEMORY[8]) >> 64;
      _RAX = *(_QWORD *)(v141 + 16) * MEMORY[8];
      __asm
      {
        adcx    rbx, rax
        adox    r12, r9
      }
      _R9 = (*(unsigned __int64 *)(v141 + 16) * (unsigned __int128)MEMORY[0x10]) >> 64;
      _RAX = *(_QWORD *)(v141 + 16) * MEMORY[0x10];
      __asm
      {
        adcx    r12, rax
        adox    r13, r9
      }
      _R9 = (*(unsigned __int64 *)(v141 + 16) * (unsigned __int128)MEMORY[0x18]) >> 64;
      _RAX = *(_QWORD *)(v141 + 16) * MEMORY[0x18];
      __asm
      {
        adcx    r13, rax
        adox    r14, r9
      }
      _R9 = (*(unsigned __int64 *)(v141 + 16) * (unsigned __int128)MEMORY[0x20]) >> 64;
      _RAX = *(_QWORD *)(v141 + 16) * MEMORY[0x20];
      __asm
      {
        adcx    r14, rax
        adox    r15, r9
      }
      _R9 = (*(unsigned __int64 *)(v141 + 16) * (unsigned __int128)MEMORY[0x28]) >> 64;
      _RAX = *(_QWORD *)(v141 + 16) * MEMORY[0x28];
      __asm
      {
        adcx    r15, rax
        adox    rsi, r9
      }
      _R9 = (*(unsigned __int64 *)(v141 + 16) * (unsigned __int128)MEMORY[0x30]) >> 64;
      _RAX = *(_QWORD *)(v141 + 16) * MEMORY[0x30];
      __asm
      {
        adcx    rsi, rax
        adox    rdi, r9
      }
      v245 = *(unsigned __int64 *)(v141 + 16);
      _R9 = (v245 * (unsigned __int128)MEMORY[0x38]) >> 64;
      _RAX = *(_QWORD *)(v141 + 16) * MEMORY[0x38];
      __asm { adcx    rdi, rax }
      _R8[2] = _RBP;
      _RBP = 0LL;
      __asm
      {
        adcx    rbp, rbp
        adox    rbp, r9
      }
      __asm { adox    rbx, [r8+18h] }
      _R9 = (*(unsigned __int64 *)(v141 + 24) * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v245 + 1)) >> 64;
      _RAX = *(_QWORD *)(v141 + 24) * **((_QWORD **)&v245 + 1);
      __asm
      {
        adcx    rbx, rax
        adox    r12, r9
      }
      _R9 = (*(unsigned __int64 *)(v141 + 24) * (unsigned __int128)MEMORY[8]) >> 64;
      _RAX = *(_QWORD *)(v141 + 24) * MEMORY[8];
      __asm
      {
        adcx    r12, rax
        adox    r13, r9
      }
      _R9 = (*(unsigned __int64 *)(v141 + 24) * (unsigned __int128)MEMORY[0x10]) >> 64;
      _RAX = *(_QWORD *)(v141 + 24) * MEMORY[0x10];
      __asm
      {
        adcx    r13, rax
        adox    r14, r9
      }
      _R9 = (*(unsigned __int64 *)(v141 + 24) * (unsigned __int128)MEMORY[0x18]) >> 64;
      _RAX = *(_QWORD *)(v141 + 24) * MEMORY[0x18];
      __asm
      {
        adcx    r14, rax
        adox    r15, r9
      }
      _R9 = (*(unsigned __int64 *)(v141 + 24) * (unsigned __int128)MEMORY[0x20]) >> 64;
      _RAX = *(_QWORD *)(v141 + 24) * MEMORY[0x20];
      __asm
      {
        adcx    r15, rax
        adox    rsi, r9
      }
      _R9 = (*(unsigned __int64 *)(v141 + 24) * (unsigned __int128)MEMORY[0x28]) >> 64;
      _RAX = *(_QWORD *)(v141 + 24) * MEMORY[0x28];
      __asm
      {
        adcx    rsi, rax
        adox    rdi, r9
      }
      _R9 = (*(unsigned __int64 *)(v141 + 24) * (unsigned __int128)MEMORY[0x30]) >> 64;
      _RAX = *(_QWORD *)(v141 + 24) * MEMORY[0x30];
      __asm
      {
        adcx    rdi, rax
        adox    rbp, r9
      }
      v281 = *(unsigned __int64 *)(v141 + 24);
      _R9 = (v281 * (unsigned __int128)MEMORY[0x38]) >> 64;
      _RAX = *(_QWORD *)(v141 + 24) * MEMORY[0x38];
      __asm { adcx    rbp, rax }
      _R8[3] = _RBX;
      _RBX = 0LL;
      __asm
      {
        adcx    rbx, rbx
        adox    rbx, r9
      }
      __asm { adox    r12, [r8+20h] }
      _R9 = (*(unsigned __int64 *)(v141 + 32) * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v281 + 1)) >> 64;
      _RAX = *(_QWORD *)(v141 + 32) * **((_QWORD **)&v281 + 1);
      __asm
      {
        adcx    r12, rax
        adox    r13, r9
      }
      _R9 = (*(unsigned __int64 *)(v141 + 32) * (unsigned __int128)MEMORY[8]) >> 64;
      _RAX = *(_QWORD *)(v141 + 32) * MEMORY[8];
      __asm
      {
        adcx    r13, rax
        adox    r14, r9
      }
      _R9 = (*(unsigned __int64 *)(v141 + 32) * (unsigned __int128)MEMORY[0x10]) >> 64;
      _RAX = *(_QWORD *)(v141 + 32) * MEMORY[0x10];
      __asm
      {
        adcx    r14, rax
        adox    r15, r9
      }
      _R9 = (*(unsigned __int64 *)(v141 + 32) * (unsigned __int128)MEMORY[0x18]) >> 64;
      _RAX = *(_QWORD *)(v141 + 32) * MEMORY[0x18];
      __asm
      {
        adcx    r15, rax
        adox    rsi, r9
      }
      _R9 = (*(unsigned __int64 *)(v141 + 32) * (unsigned __int128)MEMORY[0x20]) >> 64;
      _RAX = *(_QWORD *)(v141 + 32) * MEMORY[0x20];
      __asm
      {
        adcx    rsi, rax
        adox    rdi, r9
      }
      _R9 = (*(unsigned __int64 *)(v141 + 32) * (unsigned __int128)MEMORY[0x28]) >> 64;
      _RAX = *(_QWORD *)(v141 + 32) * MEMORY[0x28];
      __asm
      {
        adcx    rdi, rax
        adox    rbp, r9
      }
      _R9 = (*(unsigned __int64 *)(v141 + 32) * (unsigned __int128)MEMORY[0x30]) >> 64;
      _RAX = *(_QWORD *)(v141 + 32) * MEMORY[0x30];
      __asm
      {
        adcx    rbp, rax
        adox    rbx, r9
      }
      v317 = *(unsigned __int64 *)(v141 + 32);
      _R9 = (v317 * (unsigned __int128)MEMORY[0x38]) >> 64;
      _RAX = *(_QWORD *)(v141 + 32) * MEMORY[0x38];
      __asm { adcx    rbx, rax }
      _R8[4] = _R12;
      _R12 = 0LL;
      __asm
      {
        adcx    r12, r12
        adox    r12, r9
      }
      __asm { adox    r13, [r8+28h] }
      _R9 = (*(unsigned __int64 *)(v141 + 40) * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v317 + 1)) >> 64;
      _RAX = *(_QWORD *)(v141 + 40) * **((_QWORD **)&v317 + 1);
      __asm
      {
        adcx    r13, rax
        adox    r14, r9
      }
      _R9 = (*(unsigned __int64 *)(v141 + 40) * (unsigned __int128)MEMORY[8]) >> 64;
      _RAX = *(_QWORD *)(v141 + 40) * MEMORY[8];
      __asm
      {
        adcx    r14, rax
        adox    r15, r9
      }
      _R9 = (*(unsigned __int64 *)(v141 + 40) * (unsigned __int128)MEMORY[0x10]) >> 64;
      _RAX = *(_QWORD *)(v141 + 40) * MEMORY[0x10];
      __asm
      {
        adcx    r15, rax
        adox    rsi, r9
      }
      _R9 = (*(unsigned __int64 *)(v141 + 40) * (unsigned __int128)MEMORY[0x18]) >> 64;
      _RAX = *(_QWORD *)(v141 + 40) * MEMORY[0x18];
      __asm
      {
        adcx    rsi, rax
        adox    rdi, r9
      }
      _R9 = (*(unsigned __int64 *)(v141 + 40) * (unsigned __int128)MEMORY[0x20]) >> 64;
      _RAX = *(_QWORD *)(v141 + 40) * MEMORY[0x20];
      __asm
      {
        adcx    rdi, rax
        adox    rbp, r9
      }
      _R9 = (*(unsigned __int64 *)(v141 + 40) * (unsigned __int128)MEMORY[0x28]) >> 64;
      _RAX = *(_QWORD *)(v141 + 40) * MEMORY[0x28];
      __asm
      {
        adcx    rbp, rax
        adox    rbx, r9
      }
      _R9 = (*(unsigned __int64 *)(v141 + 40) * (unsigned __int128)MEMORY[0x30]) >> 64;
      _RAX = *(_QWORD *)(v141 + 40) * MEMORY[0x30];
      __asm
      {
        adcx    rbx, rax
        adox    r12, r9
      }
      v353 = *(unsigned __int64 *)(v141 + 40);
      _R9 = (v353 * (unsigned __int128)MEMORY[0x38]) >> 64;
      _RAX = *(_QWORD *)(v141 + 40) * MEMORY[0x38];
      __asm { adcx    r12, rax }
      _R8[5] = _R13;
      _R13 = 0LL;
      __asm
      {
        adcx    r13, r13
        adox    r13, r9
      }
      __asm { adox    r14, [r8+30h] }
      _R9 = (*(unsigned __int64 *)(v141 + 48) * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v353 + 1)) >> 64;
      _RAX = *(_QWORD *)(v141 + 48) * **((_QWORD **)&v353 + 1);
      __asm
      {
        adcx    r14, rax
        adox    r15, r9
      }
      _R9 = (*(unsigned __int64 *)(v141 + 48) * (unsigned __int128)MEMORY[8]) >> 64;
      _RAX = *(_QWORD *)(v141 + 48) * MEMORY[8];
      __asm
      {
        adcx    r15, rax
        adox    rsi, r9
      }
      _R9 = (*(unsigned __int64 *)(v141 + 48) * (unsigned __int128)MEMORY[0x10]) >> 64;
      _RAX = *(_QWORD *)(v141 + 48) * MEMORY[0x10];
      __asm
      {
        adcx    rsi, rax
        adox    rdi, r9
      }
      _R9 = (*(unsigned __int64 *)(v141 + 48) * (unsigned __int128)MEMORY[0x18]) >> 64;
      _RAX = *(_QWORD *)(v141 + 48) * MEMORY[0x18];
      __asm
      {
        adcx    rdi, rax
        adox    rbp, r9
      }
      _R9 = (*(unsigned __int64 *)(v141 + 48) * (unsigned __int128)MEMORY[0x20]) >> 64;
      _RAX = *(_QWORD *)(v141 + 48) * MEMORY[0x20];
      __asm
      {
        adcx    rbp, rax
        adox    rbx, r9
      }
      _R9 = (*(unsigned __int64 *)(v141 + 48) * (unsigned __int128)MEMORY[0x28]) >> 64;
      _RAX = *(_QWORD *)(v141 + 48) * MEMORY[0x28];
      __asm
      {
        adcx    rbx, rax
        adox    r12, r9
      }
      _R9 = (*(unsigned __int64 *)(v141 + 48) * (unsigned __int128)MEMORY[0x30]) >> 64;
      _RAX = *(_QWORD *)(v141 + 48) * MEMORY[0x30];
      __asm
      {
        adcx    r12, rax
        adox    r13, r9
      }
      v389 = *(unsigned __int64 *)(v141 + 48);
      _R9 = (v389 * (unsigned __int128)MEMORY[0x38]) >> 64;
      _RAX = *(_QWORD *)(v141 + 48) * MEMORY[0x38];
      __asm { adcx    r13, rax }
      _R8[6] = _R14;
      _R14 = 0LL;
      __asm
      {
        adcx    r14, r14
        adox    r14, r9
      }
      __asm { adox    r15, [r8+38h] }
      _R9 = (*(unsigned __int64 *)(v141 + 56) * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v389 + 1)) >> 64;
      _RAX = *(_QWORD *)(v141 + 56) * **((_QWORD **)&v389 + 1);
      __asm
      {
        adcx    r15, rax
        adox    rsi, r9
      }
      _R9 = (*(unsigned __int64 *)(v141 + 56) * (unsigned __int128)MEMORY[8]) >> 64;
      _RAX = *(_QWORD *)(v141 + 56) * MEMORY[8];
      __asm
      {
        adcx    rsi, rax
        adox    rdi, r9
      }
      _R9 = (*(unsigned __int64 *)(v141 + 56) * (unsigned __int128)MEMORY[0x10]) >> 64;
      _RAX = *(_QWORD *)(v141 + 56) * MEMORY[0x10];
      __asm
      {
        adcx    rdi, rax
        adox    rbp, r9
      }
      _R9 = (*(unsigned __int64 *)(v141 + 56) * (unsigned __int128)MEMORY[0x18]) >> 64;
      _RAX = *(_QWORD *)(v141 + 56) * MEMORY[0x18];
      __asm
      {
        adcx    rbp, rax
        adox    rbx, r9
      }
      _R9 = (*(unsigned __int64 *)(v141 + 56) * (unsigned __int128)MEMORY[0x20]) >> 64;
      _RAX = *(_QWORD *)(v141 + 56) * MEMORY[0x20];
      __asm
      {
        adcx    rbx, rax
        adox    r12, r9
      }
      _R9 = (*(unsigned __int64 *)(v141 + 56) * (unsigned __int128)MEMORY[0x28]) >> 64;
      _RAX = *(_QWORD *)(v141 + 56) * MEMORY[0x28];
      __asm
      {
        adcx    r12, rax
        adox    r13, r9
      }
      _R9 = (*(unsigned __int64 *)(v141 + 56) * (unsigned __int128)MEMORY[0x30]) >> 64;
      _RAX = *(_QWORD *)(v141 + 56) * MEMORY[0x30];
      __asm
      {
        adcx    r13, rax
        adox    r14, r9
      }
      *(_OWORD *)(&v135 - 1) = *(unsigned __int64 *)(v141 + 56);
      _R9 = (*(_OWORD *)(&v135 - 1) * MEMORY[0x38]) >> 64;
      _RAX = *(_QWORD *)(v141 + 56) * MEMORY[0x38];
      __asm { adcx    r14, rax }
      _R8[7] = _R15;
      _R15 = 0LL;
      __asm
      {
        adcx    r15, r15
        adox    r15, r9
      }
      _R8 += 8;
      v141 += 64LL;
      v140 -= 64LL;
    }
    while ( v140 );
    *_R8 = _RSI;
    _R8[1] = _RDI;
    _R8[2] = _RBP;
    _R8[3] = _RBX;
    _R8[4] = _R12;
    _R8[5] = _R13;
    _R8[6] = _R14;
    _R8[7] = _R15;
    a1 = v135 + 8;
    a3 = (_QWORD *)((char *)_R8 - v505 + 128);
    v3 = v505 - 64;
    v505 -= 64LL;
  }
  a3[8] = _RSI;
  a3[9] = _RDI;
  a3[10] = _RBP;
  a3[11] = _RBX;
  a3[12] = _R12;
  a3[13] = _R13;
  a3[14] = _R14;
  a3[15] = 0LL;
  v422 = v502;
  v423 = a2;
  v424 = v504;
  _RAX = 0LL;
  _R9 = 0LL;
  do
  {
    _R11 = *v424;
    _RSI = v424[1];
    v429 = *v422;
    _RBP = (unsigned __int128)(v429 * v429) >> 64;
    _RDI = v429 * v429;
    __asm
    {
      adcx    rdi, rax
      adcx    rbp, r9
      adcx    rdi, r11
      adox    rdi, r11
      adcx    rbp, rsi
      adox    rbp, rsi
    }
    *v424 = _RDI;
    v424[1] = _RBP;
    _R11 = v424[2];
    _RSI = v424[3];
    v440 = *(unsigned __int64 *)(*((_QWORD *)&v429 + 1) + 8LL);
    _RBP = (unsigned __int128)(v440 * v440) >> 64;
    _RDI = v440 * v440;
    __asm
    {
      adcx    rdi, r11
      adox    rdi, r11
      adcx    rbp, rsi
      adox    rbp, rsi
    }
    v424[2] = _RDI;
    v424[3] = _RBP;
    _R11 = v424[4];
    _RSI = v424[5];
    v449 = *(unsigned __int64 *)(*((_QWORD *)&v440 + 1) + 16LL);
    _RBP = (unsigned __int128)(v449 * v449) >> 64;
    _RDI = v449 * v449;
    __asm
    {
      adcx    rdi, r11
      adox    rdi, r11
      adcx    rbp, rsi
      adox    rbp, rsi
    }
    v424[4] = _RDI;
    v424[5] = _RBP;
    _R11 = v424[6];
    _RSI = v424[7];
    v458 = *(unsigned __int64 *)(*((_QWORD *)&v449 + 1) + 24LL);
    _RBP = (unsigned __int128)(v458 * v458) >> 64;
    _RDI = v458 * v458;
    __asm
    {
      adcx    rdi, r11
      adox    rdi, r11
      adcx    rbp, rsi
      adox    rbp, rsi
    }
    v424[6] = _RDI;
    v424[7] = _RBP;
    _R11 = v424[8];
    _RSI = v424[9];
    v467 = *(unsigned __int64 *)(*((_QWORD *)&v458 + 1) + 32LL);
    _RBP = (unsigned __int128)(v467 * v467) >> 64;
    _RDI = v467 * v467;
    __asm
    {
      adcx    rdi, r11
      adox    rdi, r11
      adcx    rbp, rsi
      adox    rbp, rsi
    }
    v424[8] = _RDI;
    v424[9] = _RBP;
    _R11 = v424[10];
    _RSI = v424[11];
    v476 = *(unsigned __int64 *)(*((_QWORD *)&v467 + 1) + 40LL);
    _RBP = (unsigned __int128)(v476 * v476) >> 64;
    _RDI = v476 * v476;
    __asm
    {
      adcx    rdi, r11
      adox    rdi, r11
      adcx    rbp, rsi
      adox    rbp, rsi
    }
    v424[10] = _RDI;
    v424[11] = _RBP;
    _R11 = v424[12];
    _RSI = v424[13];
    v485 = *(unsigned __int64 *)(*((_QWORD *)&v476 + 1) + 48LL);
    _RBP = (unsigned __int128)(v485 * v485) >> 64;
    _RDI = v485 * v485;
    __asm
    {
      adcx    rdi, r11
      adox    rdi, r11
      adcx    rbp, rsi
      adox    rbp, rsi
    }
    v424[12] = _RDI;
    v424[13] = _RBP;
    _R11 = v424[14];
    _RSI = v424[15];
    v494 = *(unsigned __int64 *)(*((_QWORD *)&v485 + 1) + 56LL);
    _RBP = (unsigned __int128)(v494 * v494) >> 64;
    _RDI = v494 * v494;
    __asm
    {
      adcx    rdi, r11
      adox    rdi, r11
      adcx    rbp, rsi
      adox    rbp, rsi
    }
    v424[14] = _RDI;
    v424[15] = _RBP;
    _RAX = 0LL;
    __asm { adox    eax, r9d }
    v422 = (unsigned __int64 *)(*((_QWORD *)&v494 + 1) + 64LL);
    v424 += 16;
    --v423;
  }
  while ( v423 );
  return _RAX;
}
