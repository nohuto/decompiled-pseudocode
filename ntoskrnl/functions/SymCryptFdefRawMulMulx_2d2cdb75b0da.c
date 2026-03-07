// local variable allocation has failed, the output may be wrong!
unsigned __int64 __fastcall SymCryptFdefRawMulMulx(_QWORD *a1, int a2, unsigned __int64 *a3, __int64 a4, _QWORD *a5)
{
  __int64 v6; // r9
  _OWORD *v7; // rsi
  __int64 v8; // rax
  __int128 v47; // rdx
  __int128 v83; // rdx
  __int128 v119; // rdx
  __int128 v155; // rdx
  __int128 v191; // rdx
  __int128 v227; // rdx
  __int128 v263; // rdx
  unsigned __int64 result; // rax
  __int64 v296; // [rsp+48h] [rbp+8h]

  _R11 = a5;
  v6 = a4 << 6;
  v296 = v6;
  v7 = a5;
  v8 = v6;
  do
  {
    *v7 = 0LL;
    v7[1] = 0LL;
    v7[2] = 0LL;
    v7[3] = 0LL;
    v7 += 4;
    v8 -= 64LL;
  }
  while ( v8 );
  do
  {
    _RSI = 0LL;
    _RDI = 0LL;
    _RBP = 0LL;
    _RBX = 0LL;
    _R12 = 0LL;
    _R13 = 0LL;
    _R14 = 0LL;
    _R15 = 0LL;
    do
    {
      __asm { adox    rsi, [r11] }
      _R10 = (*a3 * (unsigned __int128)(unsigned __int64)*a1) >> 64;
      _RAX = *a3 * *a1;
      __asm
      {
        adcx    rsi, rax
        adox    rdi, r10
      }
      _R10 = (*a3 * (unsigned __int128)MEMORY[8]) >> 64;
      _RAX = *a3 * MEMORY[8];
      __asm
      {
        adcx    rdi, rax
        adox    rbp, r10
      }
      _R10 = (*a3 * (unsigned __int128)MEMORY[0x10]) >> 64;
      _RAX = *a3 * MEMORY[0x10];
      __asm
      {
        adcx    rbp, rax
        adox    rbx, r10
      }
      _R10 = (*a3 * (unsigned __int128)MEMORY[0x18]) >> 64;
      _RAX = *a3 * MEMORY[0x18];
      __asm
      {
        adcx    rbx, rax
        adox    r12, r10
      }
      _R10 = (*a3 * (unsigned __int128)MEMORY[0x20]) >> 64;
      _RAX = *a3 * MEMORY[0x20];
      __asm
      {
        adcx    r12, rax
        adox    r13, r10
      }
      _R10 = (*a3 * (unsigned __int128)MEMORY[0x28]) >> 64;
      _RAX = *a3 * MEMORY[0x28];
      __asm
      {
        adcx    r13, rax
        adox    r14, r10
      }
      _R10 = (*a3 * (unsigned __int128)MEMORY[0x30]) >> 64;
      _RAX = *a3 * MEMORY[0x30];
      __asm
      {
        adcx    r14, rax
        adox    r15, r10
      }
      v47 = *a3;
      _R10 = (v47 * (unsigned __int128)MEMORY[0x38]) >> 64;
      _RAX = *a3 * MEMORY[0x38];
      __asm { adcx    r15, rax }
      *_R11 = _RSI;
      _RSI = 0LL;
      __asm
      {
        adcx    rsi, rsi
        adox    rsi, r10
      }
      __asm { adox    rdi, [r11+8] }
      _R10 = (a3[1] * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v47 + 1)) >> 64;
      _RAX = a3[1] * **((_QWORD **)&v47 + 1);
      __asm
      {
        adcx    rdi, rax
        adox    rbp, r10
      }
      _R10 = (a3[1] * (unsigned __int128)MEMORY[8]) >> 64;
      _RAX = a3[1] * MEMORY[8];
      __asm
      {
        adcx    rbp, rax
        adox    rbx, r10
      }
      _R10 = (a3[1] * (unsigned __int128)MEMORY[0x10]) >> 64;
      _RAX = a3[1] * MEMORY[0x10];
      __asm
      {
        adcx    rbx, rax
        adox    r12, r10
      }
      _R10 = (a3[1] * (unsigned __int128)MEMORY[0x18]) >> 64;
      _RAX = a3[1] * MEMORY[0x18];
      __asm
      {
        adcx    r12, rax
        adox    r13, r10
      }
      _R10 = (a3[1] * (unsigned __int128)MEMORY[0x20]) >> 64;
      _RAX = a3[1] * MEMORY[0x20];
      __asm
      {
        adcx    r13, rax
        adox    r14, r10
      }
      _R10 = (a3[1] * (unsigned __int128)MEMORY[0x28]) >> 64;
      _RAX = a3[1] * MEMORY[0x28];
      __asm
      {
        adcx    r14, rax
        adox    r15, r10
      }
      _R10 = (a3[1] * (unsigned __int128)MEMORY[0x30]) >> 64;
      _RAX = a3[1] * MEMORY[0x30];
      __asm
      {
        adcx    r15, rax
        adox    rsi, r10
      }
      v83 = a3[1];
      _R10 = (v83 * (unsigned __int128)MEMORY[0x38]) >> 64;
      _RAX = a3[1] * MEMORY[0x38];
      __asm { adcx    rsi, rax }
      _R11[1] = _RDI;
      _RDI = 0LL;
      __asm
      {
        adcx    rdi, rdi
        adox    rdi, r10
      }
      __asm { adox    rbp, [r11+10h] }
      _R10 = (a3[2] * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v83 + 1)) >> 64;
      _RAX = a3[2] * **((_QWORD **)&v83 + 1);
      __asm
      {
        adcx    rbp, rax
        adox    rbx, r10
      }
      _R10 = (a3[2] * (unsigned __int128)MEMORY[8]) >> 64;
      _RAX = a3[2] * MEMORY[8];
      __asm
      {
        adcx    rbx, rax
        adox    r12, r10
      }
      _R10 = (a3[2] * (unsigned __int128)MEMORY[0x10]) >> 64;
      _RAX = a3[2] * MEMORY[0x10];
      __asm
      {
        adcx    r12, rax
        adox    r13, r10
      }
      _R10 = (a3[2] * (unsigned __int128)MEMORY[0x18]) >> 64;
      _RAX = a3[2] * MEMORY[0x18];
      __asm
      {
        adcx    r13, rax
        adox    r14, r10
      }
      _R10 = (a3[2] * (unsigned __int128)MEMORY[0x20]) >> 64;
      _RAX = a3[2] * MEMORY[0x20];
      __asm
      {
        adcx    r14, rax
        adox    r15, r10
      }
      _R10 = (a3[2] * (unsigned __int128)MEMORY[0x28]) >> 64;
      _RAX = a3[2] * MEMORY[0x28];
      __asm
      {
        adcx    r15, rax
        adox    rsi, r10
      }
      _R10 = (a3[2] * (unsigned __int128)MEMORY[0x30]) >> 64;
      _RAX = a3[2] * MEMORY[0x30];
      __asm
      {
        adcx    rsi, rax
        adox    rdi, r10
      }
      v119 = a3[2];
      _R10 = (v119 * (unsigned __int128)MEMORY[0x38]) >> 64;
      _RAX = a3[2] * MEMORY[0x38];
      __asm { adcx    rdi, rax }
      _R11[2] = _RBP;
      _RBP = 0LL;
      __asm
      {
        adcx    rbp, rbp
        adox    rbp, r10
      }
      __asm { adox    rbx, [r11+18h] }
      _R10 = (a3[3] * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v119 + 1)) >> 64;
      _RAX = a3[3] * **((_QWORD **)&v119 + 1);
      __asm
      {
        adcx    rbx, rax
        adox    r12, r10
      }
      _R10 = (a3[3] * (unsigned __int128)MEMORY[8]) >> 64;
      _RAX = a3[3] * MEMORY[8];
      __asm
      {
        adcx    r12, rax
        adox    r13, r10
      }
      _R10 = (a3[3] * (unsigned __int128)MEMORY[0x10]) >> 64;
      _RAX = a3[3] * MEMORY[0x10];
      __asm
      {
        adcx    r13, rax
        adox    r14, r10
      }
      _R10 = (a3[3] * (unsigned __int128)MEMORY[0x18]) >> 64;
      _RAX = a3[3] * MEMORY[0x18];
      __asm
      {
        adcx    r14, rax
        adox    r15, r10
      }
      _R10 = (a3[3] * (unsigned __int128)MEMORY[0x20]) >> 64;
      _RAX = a3[3] * MEMORY[0x20];
      __asm
      {
        adcx    r15, rax
        adox    rsi, r10
      }
      _R10 = (a3[3] * (unsigned __int128)MEMORY[0x28]) >> 64;
      _RAX = a3[3] * MEMORY[0x28];
      __asm
      {
        adcx    rsi, rax
        adox    rdi, r10
      }
      _R10 = (a3[3] * (unsigned __int128)MEMORY[0x30]) >> 64;
      _RAX = a3[3] * MEMORY[0x30];
      __asm
      {
        adcx    rdi, rax
        adox    rbp, r10
      }
      v155 = a3[3];
      _R10 = (v155 * (unsigned __int128)MEMORY[0x38]) >> 64;
      _RAX = a3[3] * MEMORY[0x38];
      __asm { adcx    rbp, rax }
      _R11[3] = _RBX;
      _RBX = 0LL;
      __asm
      {
        adcx    rbx, rbx
        adox    rbx, r10
      }
      __asm { adox    r12, [r11+20h] }
      _R10 = (a3[4] * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v155 + 1)) >> 64;
      _RAX = a3[4] * **((_QWORD **)&v155 + 1);
      __asm
      {
        adcx    r12, rax
        adox    r13, r10
      }
      _R10 = (a3[4] * (unsigned __int128)MEMORY[8]) >> 64;
      _RAX = a3[4] * MEMORY[8];
      __asm
      {
        adcx    r13, rax
        adox    r14, r10
      }
      _R10 = (a3[4] * (unsigned __int128)MEMORY[0x10]) >> 64;
      _RAX = a3[4] * MEMORY[0x10];
      __asm
      {
        adcx    r14, rax
        adox    r15, r10
      }
      _R10 = (a3[4] * (unsigned __int128)MEMORY[0x18]) >> 64;
      _RAX = a3[4] * MEMORY[0x18];
      __asm
      {
        adcx    r15, rax
        adox    rsi, r10
      }
      _R10 = (a3[4] * (unsigned __int128)MEMORY[0x20]) >> 64;
      _RAX = a3[4] * MEMORY[0x20];
      __asm
      {
        adcx    rsi, rax
        adox    rdi, r10
      }
      _R10 = (a3[4] * (unsigned __int128)MEMORY[0x28]) >> 64;
      _RAX = a3[4] * MEMORY[0x28];
      __asm
      {
        adcx    rdi, rax
        adox    rbp, r10
      }
      _R10 = (a3[4] * (unsigned __int128)MEMORY[0x30]) >> 64;
      _RAX = a3[4] * MEMORY[0x30];
      __asm
      {
        adcx    rbp, rax
        adox    rbx, r10
      }
      v191 = a3[4];
      _R10 = (v191 * (unsigned __int128)MEMORY[0x38]) >> 64;
      _RAX = a3[4] * MEMORY[0x38];
      __asm { adcx    rbx, rax }
      _R11[4] = _R12;
      _R12 = 0LL;
      __asm
      {
        adcx    r12, r12
        adox    r12, r10
      }
      __asm { adox    r13, [r11+28h] }
      _R10 = (a3[5] * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v191 + 1)) >> 64;
      _RAX = a3[5] * **((_QWORD **)&v191 + 1);
      __asm
      {
        adcx    r13, rax
        adox    r14, r10
      }
      _R10 = (a3[5] * (unsigned __int128)MEMORY[8]) >> 64;
      _RAX = a3[5] * MEMORY[8];
      __asm
      {
        adcx    r14, rax
        adox    r15, r10
      }
      _R10 = (a3[5] * (unsigned __int128)MEMORY[0x10]) >> 64;
      _RAX = a3[5] * MEMORY[0x10];
      __asm
      {
        adcx    r15, rax
        adox    rsi, r10
      }
      _R10 = (a3[5] * (unsigned __int128)MEMORY[0x18]) >> 64;
      _RAX = a3[5] * MEMORY[0x18];
      __asm
      {
        adcx    rsi, rax
        adox    rdi, r10
      }
      _R10 = (a3[5] * (unsigned __int128)MEMORY[0x20]) >> 64;
      _RAX = a3[5] * MEMORY[0x20];
      __asm
      {
        adcx    rdi, rax
        adox    rbp, r10
      }
      _R10 = (a3[5] * (unsigned __int128)MEMORY[0x28]) >> 64;
      _RAX = a3[5] * MEMORY[0x28];
      __asm
      {
        adcx    rbp, rax
        adox    rbx, r10
      }
      _R10 = (a3[5] * (unsigned __int128)MEMORY[0x30]) >> 64;
      _RAX = a3[5] * MEMORY[0x30];
      __asm
      {
        adcx    rbx, rax
        adox    r12, r10
      }
      v227 = a3[5];
      _R10 = (v227 * (unsigned __int128)MEMORY[0x38]) >> 64;
      _RAX = a3[5] * MEMORY[0x38];
      __asm { adcx    r12, rax }
      _R11[5] = _R13;
      _R13 = 0LL;
      __asm
      {
        adcx    r13, r13
        adox    r13, r10
      }
      __asm { adox    r14, [r11+30h] }
      _R10 = (a3[6] * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v227 + 1)) >> 64;
      _RAX = a3[6] * **((_QWORD **)&v227 + 1);
      __asm
      {
        adcx    r14, rax
        adox    r15, r10
      }
      _R10 = (a3[6] * (unsigned __int128)MEMORY[8]) >> 64;
      _RAX = a3[6] * MEMORY[8];
      __asm
      {
        adcx    r15, rax
        adox    rsi, r10
      }
      _R10 = (a3[6] * (unsigned __int128)MEMORY[0x10]) >> 64;
      _RAX = a3[6] * MEMORY[0x10];
      __asm
      {
        adcx    rsi, rax
        adox    rdi, r10
      }
      _R10 = (a3[6] * (unsigned __int128)MEMORY[0x18]) >> 64;
      _RAX = a3[6] * MEMORY[0x18];
      __asm
      {
        adcx    rdi, rax
        adox    rbp, r10
      }
      _R10 = (a3[6] * (unsigned __int128)MEMORY[0x20]) >> 64;
      _RAX = a3[6] * MEMORY[0x20];
      __asm
      {
        adcx    rbp, rax
        adox    rbx, r10
      }
      _R10 = (a3[6] * (unsigned __int128)MEMORY[0x28]) >> 64;
      _RAX = a3[6] * MEMORY[0x28];
      __asm
      {
        adcx    rbx, rax
        adox    r12, r10
      }
      _R10 = (a3[6] * (unsigned __int128)MEMORY[0x30]) >> 64;
      _RAX = a3[6] * MEMORY[0x30];
      __asm
      {
        adcx    r12, rax
        adox    r13, r10
      }
      v263 = a3[6];
      _R10 = (v263 * (unsigned __int128)MEMORY[0x38]) >> 64;
      _RAX = a3[6] * MEMORY[0x38];
      __asm { adcx    r13, rax }
      _R11[6] = _R14;
      _R14 = 0LL;
      __asm
      {
        adcx    r14, r14
        adox    r14, r10
      }
      __asm { adox    r15, [r11+38h] }
      _R10 = (a3[7] * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v263 + 1)) >> 64;
      _RAX = a3[7] * **((_QWORD **)&v263 + 1);
      __asm
      {
        adcx    r15, rax
        adox    rsi, r10
      }
      _R10 = (a3[7] * (unsigned __int128)MEMORY[8]) >> 64;
      _RAX = a3[7] * MEMORY[8];
      __asm
      {
        adcx    rsi, rax
        adox    rdi, r10
      }
      _R10 = (a3[7] * (unsigned __int128)MEMORY[0x10]) >> 64;
      _RAX = a3[7] * MEMORY[0x10];
      __asm
      {
        adcx    rdi, rax
        adox    rbp, r10
      }
      _R10 = (a3[7] * (unsigned __int128)MEMORY[0x18]) >> 64;
      _RAX = a3[7] * MEMORY[0x18];
      __asm
      {
        adcx    rbp, rax
        adox    rbx, r10
      }
      _R10 = (a3[7] * (unsigned __int128)MEMORY[0x20]) >> 64;
      _RAX = a3[7] * MEMORY[0x20];
      __asm
      {
        adcx    rbx, rax
        adox    r12, r10
      }
      _R10 = (a3[7] * (unsigned __int128)MEMORY[0x28]) >> 64;
      _RAX = a3[7] * MEMORY[0x28];
      __asm
      {
        adcx    r12, rax
        adox    r13, r10
      }
      _R10 = (a3[7] * (unsigned __int128)MEMORY[0x30]) >> 64;
      _RAX = a3[7] * MEMORY[0x30];
      __asm
      {
        adcx    r13, rax
        adox    r14, r10
      }
      *(_OWORD *)(&a1 - 1) = a3[7];
      _R10 = (*(_OWORD *)(&a1 - 1) * MEMORY[0x38]) >> 64;
      result = a3[7] * MEMORY[0x38];
      __asm { adcx    r14, rax }
      _R11[7] = _R15;
      _R15 = 0LL;
      __asm
      {
        adcx    r15, r15
        adox    r15, r10
      }
      a3 += 8;
      _R11 += 8;
      LODWORD(v6) = v6 - 64;
    }
    while ( (_DWORD)v6 );
    *_R11 = _RSI;
    _R11[1] = _RDI;
    _R11[2] = _RBP;
    _R11[3] = _RBX;
    _R11[4] = _R12;
    _R11[5] = _R13;
    _R11[6] = _R14;
    _R11[7] = _R15;
    LODWORD(v6) = v296;
    _R11 = (_QWORD *)((char *)_R11 - v296 + 64);
    a3 = (unsigned __int64 *)((char *)a3 - v296);
    a1 += 8;
    --a2;
  }
  while ( a2 );
  return result;
}
