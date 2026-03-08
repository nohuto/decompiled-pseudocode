/*
 * XREFs of SymCryptFdefMontgomeryReduceMulx1024 @ 0x140408380
 * Callers:
 *     SymCryptFdefModMulMontgomeryMulx1024 @ 0x1403FF080 (SymCryptFdefModMulMontgomeryMulx1024.c)
 *     SymCryptFdefModSquareMontgomeryMulx1024 @ 0x1403FF5F0 (SymCryptFdefModSquareMontgomeryMulx1024.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptFdefMontgomeryReduceMulx1024(__int64 a1, __m128i *a2, __m128i *a3)
{
  int v4; // r9d
  unsigned __int64 *v5; // rcx
  __int64 v14; // r8
  __int128 v15; // rdx
  __m128i *v288; // r8
  __int128 v320; // rdx
  __int128 v356; // rdx
  __int128 v392; // rdx
  __int128 v428; // rdx
  __int128 v464; // rdx
  __int128 v500; // rdx
  __int128 v536; // rdx
  __int128 v572; // rdx
  __int64 v578; // r11
  __int64 v579; // r11
  _BOOL8 v580; // rtt
  __int64 v581; // rax
  __int64 v582; // rax
  __int64 v583; // rtt
  __int64 v584; // r11
  __int64 v585; // r11
  __int64 v586; // rtt
  __int64 v587; // rax
  __int64 v588; // rax
  __int64 v589; // rtt
  __int64 v590; // r11
  __int64 v591; // r11
  __int64 v592; // rtt
  __int64 v593; // rax
  __int64 v594; // rax
  __int64 v595; // rtt
  __int64 v596; // r11
  __int64 v597; // r11
  __int64 v598; // rtt
  bool v599; // cf
  unsigned __int64 v600; // rtt
  unsigned __int64 v601; // r11
  unsigned __int64 v602; // rtt
  unsigned __int64 v603; // rax
  unsigned __int64 v604; // rtt
  unsigned __int64 v605; // r11
  unsigned __int64 v606; // rtt
  unsigned __int64 v607; // rax
  unsigned __int64 v608; // rtt
  unsigned __int64 v609; // r11
  unsigned __int64 v610; // rtt
  unsigned __int64 v611; // rax
  unsigned __int64 v612; // rtt
  unsigned __int64 v613; // r11
  unsigned __int64 v614; // rtt
  unsigned __int64 v615; // rax
  unsigned __int64 v616; // rtt
  unsigned __int64 v617; // r11
  unsigned __int64 v618; // rtt
  unsigned __int64 v619; // rax
  unsigned __int64 v620; // rtt
  unsigned __int64 v621; // r11
  unsigned __int64 v622; // rtt
  unsigned __int64 v623; // rax
  unsigned __int64 v624; // rtt
  unsigned __int64 v625; // r11
  unsigned __int64 v626; // rtt
  unsigned __int64 v627; // rax
  __int64 result; // rax
  unsigned __int64 v629; // rtt
  unsigned __int64 v630; // r11
  unsigned __int64 v631; // rtt
  __m128i v632; // xmm0
  __m128i v633; // xmm1
  int v635; // [rsp+50h] [rbp+10h]

  v635 = 2;
  v4 = 0;
  v5 = (unsigned __int64 *)(a1 + 128);
  do
  {
    _RSI = a2->m128i_i64[0];
    _RDI = a2->m128i_i64[1];
    _RBP = a2[1].m128i_i64[0];
    _RBX = a2[1].m128i_i64[1];
    _R12 = a2[2].m128i_i64[0];
    _R13 = a2[2].m128i_i64[1];
    _R14 = a2[3].m128i_i64[0];
    _R15 = a2[3].m128i_i64[1];
    v14 = *(v5 - 12);
    *(_QWORD *)&v15 = v14 * a2->m128i_i64[0];
    _RAX = -1LL;
    __asm { adcx    rsi, rax }
    _RSI = 0LL;
    a2->m128i_i64[0] = v15;
    _R11 = ((unsigned __int64)v15 * (unsigned __int128)*v5) >> 64;
    __asm { adox    rdi, r11 }
    _R11 = ((unsigned __int64)v15 * (unsigned __int128)MEMORY[8]) >> 64;
    _RAX = v15 * MEMORY[8];
    __asm
    {
      adcx    rdi, rax
      adox    rbp, r11
    }
    _R11 = ((unsigned __int64)v15 * (unsigned __int128)MEMORY[0x10]) >> 64;
    _RAX = v15 * MEMORY[0x10];
    __asm
    {
      adcx    rbp, rax
      adox    rbx, r11
    }
    _R11 = ((unsigned __int64)v15 * (unsigned __int128)MEMORY[0x18]) >> 64;
    _RAX = v15 * MEMORY[0x18];
    __asm
    {
      adcx    rbx, rax
      adox    r12, r11
    }
    _R11 = ((unsigned __int64)v15 * (unsigned __int128)MEMORY[0x20]) >> 64;
    _RAX = v15 * MEMORY[0x20];
    __asm
    {
      adcx    r12, rax
      adox    r13, r11
    }
    _R11 = ((unsigned __int64)v15 * (unsigned __int128)MEMORY[0x28]) >> 64;
    _RAX = v15 * MEMORY[0x28];
    __asm
    {
      adcx    r13, rax
      adox    r14, r11
    }
    _R11 = ((unsigned __int64)v15 * (unsigned __int128)MEMORY[0x30]) >> 64;
    _RAX = v15 * MEMORY[0x30];
    __asm
    {
      adcx    r14, rax
      adox    r15, r11
    }
    v15 = (unsigned __int64)v15;
    _R11 = ((unsigned __int64)v15 * (unsigned __int128)MEMORY[0x38]) >> 64;
    _RAX = v15 * MEMORY[0x38];
    __asm
    {
      adcx    r15, rax
      adcx    rsi, rsi
      adox    rsi, r11
    }
    *(_QWORD *)&v15 = v14 * _RDI;
    _RAX = -1LL;
    __asm { adcx    rdi, rax }
    _RDI = 0LL;
    a2->m128i_i64[1] = v15;
    _R11 = ((unsigned __int64)v15 * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v15 + 1)) >> 64;
    __asm { adox    rbp, r11 }
    _R11 = ((unsigned __int64)v15 * (unsigned __int128)MEMORY[8]) >> 64;
    _RAX = v15 * MEMORY[8];
    __asm
    {
      adcx    rbp, rax
      adox    rbx, r11
    }
    _R11 = ((unsigned __int64)v15 * (unsigned __int128)MEMORY[0x10]) >> 64;
    _RAX = v15 * MEMORY[0x10];
    __asm
    {
      adcx    rbx, rax
      adox    r12, r11
    }
    _R11 = ((unsigned __int64)v15 * (unsigned __int128)MEMORY[0x18]) >> 64;
    _RAX = v15 * MEMORY[0x18];
    __asm
    {
      adcx    r12, rax
      adox    r13, r11
    }
    _R11 = ((unsigned __int64)v15 * (unsigned __int128)MEMORY[0x20]) >> 64;
    _RAX = v15 * MEMORY[0x20];
    __asm
    {
      adcx    r13, rax
      adox    r14, r11
    }
    _R11 = ((unsigned __int64)v15 * (unsigned __int128)MEMORY[0x28]) >> 64;
    _RAX = v15 * MEMORY[0x28];
    __asm
    {
      adcx    r14, rax
      adox    r15, r11
    }
    _R11 = ((unsigned __int64)v15 * (unsigned __int128)MEMORY[0x30]) >> 64;
    _RAX = v15 * MEMORY[0x30];
    __asm
    {
      adcx    r15, rax
      adox    rsi, r11
    }
    v15 = (unsigned __int64)v15;
    _R11 = ((unsigned __int64)v15 * (unsigned __int128)MEMORY[0x38]) >> 64;
    _RAX = v15 * MEMORY[0x38];
    __asm
    {
      adcx    rsi, rax
      adcx    rdi, rdi
      adox    rdi, r11
    }
    *(_QWORD *)&v15 = v14 * _RBP;
    _RAX = -1LL;
    __asm { adcx    rbp, rax }
    _RBP = 0LL;
    a2[1].m128i_i64[0] = v15;
    _R11 = ((unsigned __int64)v15 * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v15 + 1)) >> 64;
    __asm { adox    rbx, r11 }
    _R11 = ((unsigned __int64)v15 * (unsigned __int128)MEMORY[8]) >> 64;
    _RAX = v15 * MEMORY[8];
    __asm
    {
      adcx    rbx, rax
      adox    r12, r11
    }
    _R11 = ((unsigned __int64)v15 * (unsigned __int128)MEMORY[0x10]) >> 64;
    _RAX = v15 * MEMORY[0x10];
    __asm
    {
      adcx    r12, rax
      adox    r13, r11
    }
    _R11 = ((unsigned __int64)v15 * (unsigned __int128)MEMORY[0x18]) >> 64;
    _RAX = v15 * MEMORY[0x18];
    __asm
    {
      adcx    r13, rax
      adox    r14, r11
    }
    _R11 = ((unsigned __int64)v15 * (unsigned __int128)MEMORY[0x20]) >> 64;
    _RAX = v15 * MEMORY[0x20];
    __asm
    {
      adcx    r14, rax
      adox    r15, r11
    }
    _R11 = ((unsigned __int64)v15 * (unsigned __int128)MEMORY[0x28]) >> 64;
    _RAX = v15 * MEMORY[0x28];
    __asm
    {
      adcx    r15, rax
      adox    rsi, r11
    }
    _R11 = ((unsigned __int64)v15 * (unsigned __int128)MEMORY[0x30]) >> 64;
    _RAX = v15 * MEMORY[0x30];
    __asm
    {
      adcx    rsi, rax
      adox    rdi, r11
    }
    v15 = (unsigned __int64)v15;
    _R11 = ((unsigned __int64)v15 * (unsigned __int128)MEMORY[0x38]) >> 64;
    _RAX = v15 * MEMORY[0x38];
    __asm
    {
      adcx    rdi, rax
      adcx    rbp, rbp
      adox    rbp, r11
    }
    *(_QWORD *)&v15 = v14 * _RBX;
    _RAX = -1LL;
    __asm { adcx    rbx, rax }
    _RBX = 0LL;
    a2[1].m128i_i64[1] = v15;
    _R11 = ((unsigned __int64)v15 * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v15 + 1)) >> 64;
    __asm { adox    r12, r11 }
    _R11 = ((unsigned __int64)v15 * (unsigned __int128)MEMORY[8]) >> 64;
    _RAX = v15 * MEMORY[8];
    __asm
    {
      adcx    r12, rax
      adox    r13, r11
    }
    _R11 = ((unsigned __int64)v15 * (unsigned __int128)MEMORY[0x10]) >> 64;
    _RAX = v15 * MEMORY[0x10];
    __asm
    {
      adcx    r13, rax
      adox    r14, r11
    }
    _R11 = ((unsigned __int64)v15 * (unsigned __int128)MEMORY[0x18]) >> 64;
    _RAX = v15 * MEMORY[0x18];
    __asm
    {
      adcx    r14, rax
      adox    r15, r11
    }
    _R11 = ((unsigned __int64)v15 * (unsigned __int128)MEMORY[0x20]) >> 64;
    _RAX = v15 * MEMORY[0x20];
    __asm
    {
      adcx    r15, rax
      adox    rsi, r11
    }
    _R11 = ((unsigned __int64)v15 * (unsigned __int128)MEMORY[0x28]) >> 64;
    _RAX = v15 * MEMORY[0x28];
    __asm
    {
      adcx    rsi, rax
      adox    rdi, r11
    }
    _R11 = ((unsigned __int64)v15 * (unsigned __int128)MEMORY[0x30]) >> 64;
    _RAX = v15 * MEMORY[0x30];
    __asm
    {
      adcx    rdi, rax
      adox    rbp, r11
    }
    v15 = (unsigned __int64)v15;
    _R11 = ((unsigned __int64)v15 * (unsigned __int128)MEMORY[0x38]) >> 64;
    _RAX = v15 * MEMORY[0x38];
    __asm
    {
      adcx    rbp, rax
      adcx    rbx, rbx
      adox    rbx, r11
    }
    *(_QWORD *)&v15 = v14 * _R12;
    _RAX = -1LL;
    __asm { adcx    r12, rax }
    _R12 = 0LL;
    a2[2].m128i_i64[0] = v15;
    _R11 = ((unsigned __int64)v15 * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v15 + 1)) >> 64;
    __asm { adox    r13, r11 }
    _R11 = ((unsigned __int64)v15 * (unsigned __int128)MEMORY[8]) >> 64;
    _RAX = v15 * MEMORY[8];
    __asm
    {
      adcx    r13, rax
      adox    r14, r11
    }
    _R11 = ((unsigned __int64)v15 * (unsigned __int128)MEMORY[0x10]) >> 64;
    _RAX = v15 * MEMORY[0x10];
    __asm
    {
      adcx    r14, rax
      adox    r15, r11
    }
    _R11 = ((unsigned __int64)v15 * (unsigned __int128)MEMORY[0x18]) >> 64;
    _RAX = v15 * MEMORY[0x18];
    __asm
    {
      adcx    r15, rax
      adox    rsi, r11
    }
    _R11 = ((unsigned __int64)v15 * (unsigned __int128)MEMORY[0x20]) >> 64;
    _RAX = v15 * MEMORY[0x20];
    __asm
    {
      adcx    rsi, rax
      adox    rdi, r11
    }
    _R11 = ((unsigned __int64)v15 * (unsigned __int128)MEMORY[0x28]) >> 64;
    _RAX = v15 * MEMORY[0x28];
    __asm
    {
      adcx    rdi, rax
      adox    rbp, r11
    }
    _R11 = ((unsigned __int64)v15 * (unsigned __int128)MEMORY[0x30]) >> 64;
    _RAX = v15 * MEMORY[0x30];
    __asm
    {
      adcx    rbp, rax
      adox    rbx, r11
    }
    v15 = (unsigned __int64)v15;
    _R11 = ((unsigned __int64)v15 * (unsigned __int128)MEMORY[0x38]) >> 64;
    _RAX = v15 * MEMORY[0x38];
    __asm
    {
      adcx    rbx, rax
      adcx    r12, r12
      adox    r12, r11
    }
    *(_QWORD *)&v15 = v14 * _R13;
    _RAX = -1LL;
    __asm { adcx    r13, rax }
    _R13 = 0LL;
    a2[2].m128i_i64[1] = v15;
    _R11 = ((unsigned __int64)v15 * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v15 + 1)) >> 64;
    __asm { adox    r14, r11 }
    _R11 = ((unsigned __int64)v15 * (unsigned __int128)MEMORY[8]) >> 64;
    _RAX = v15 * MEMORY[8];
    __asm
    {
      adcx    r14, rax
      adox    r15, r11
    }
    _R11 = ((unsigned __int64)v15 * (unsigned __int128)MEMORY[0x10]) >> 64;
    _RAX = v15 * MEMORY[0x10];
    __asm
    {
      adcx    r15, rax
      adox    rsi, r11
    }
    _R11 = ((unsigned __int64)v15 * (unsigned __int128)MEMORY[0x18]) >> 64;
    _RAX = v15 * MEMORY[0x18];
    __asm
    {
      adcx    rsi, rax
      adox    rdi, r11
    }
    _R11 = ((unsigned __int64)v15 * (unsigned __int128)MEMORY[0x20]) >> 64;
    _RAX = v15 * MEMORY[0x20];
    __asm
    {
      adcx    rdi, rax
      adox    rbp, r11
    }
    _R11 = ((unsigned __int64)v15 * (unsigned __int128)MEMORY[0x28]) >> 64;
    _RAX = v15 * MEMORY[0x28];
    __asm
    {
      adcx    rbp, rax
      adox    rbx, r11
    }
    _R11 = ((unsigned __int64)v15 * (unsigned __int128)MEMORY[0x30]) >> 64;
    _RAX = v15 * MEMORY[0x30];
    __asm
    {
      adcx    rbx, rax
      adox    r12, r11
    }
    v15 = (unsigned __int64)v15;
    _R11 = ((unsigned __int64)v15 * (unsigned __int128)MEMORY[0x38]) >> 64;
    _RAX = v15 * MEMORY[0x38];
    __asm
    {
      adcx    r12, rax
      adcx    r13, r13
      adox    r13, r11
    }
    *(_QWORD *)&v15 = v14 * _R14;
    _RAX = -1LL;
    __asm { adcx    r14, rax }
    _R14 = 0LL;
    a2[3].m128i_i64[0] = v15;
    _R11 = ((unsigned __int64)v15 * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v15 + 1)) >> 64;
    __asm { adox    r15, r11 }
    _R11 = ((unsigned __int64)v15 * (unsigned __int128)MEMORY[8]) >> 64;
    _RAX = v15 * MEMORY[8];
    __asm
    {
      adcx    r15, rax
      adox    rsi, r11
    }
    _R11 = ((unsigned __int64)v15 * (unsigned __int128)MEMORY[0x10]) >> 64;
    _RAX = v15 * MEMORY[0x10];
    __asm
    {
      adcx    rsi, rax
      adox    rdi, r11
    }
    _R11 = ((unsigned __int64)v15 * (unsigned __int128)MEMORY[0x18]) >> 64;
    _RAX = v15 * MEMORY[0x18];
    __asm
    {
      adcx    rdi, rax
      adox    rbp, r11
    }
    _R11 = ((unsigned __int64)v15 * (unsigned __int128)MEMORY[0x20]) >> 64;
    _RAX = v15 * MEMORY[0x20];
    __asm
    {
      adcx    rbp, rax
      adox    rbx, r11
    }
    _R11 = ((unsigned __int64)v15 * (unsigned __int128)MEMORY[0x28]) >> 64;
    _RAX = v15 * MEMORY[0x28];
    __asm
    {
      adcx    rbx, rax
      adox    r12, r11
    }
    _R11 = ((unsigned __int64)v15 * (unsigned __int128)MEMORY[0x30]) >> 64;
    _RAX = v15 * MEMORY[0x30];
    __asm
    {
      adcx    r12, rax
      adox    r13, r11
    }
    v15 = (unsigned __int64)v15;
    _R11 = ((unsigned __int64)v15 * (unsigned __int128)MEMORY[0x38]) >> 64;
    _RAX = v15 * MEMORY[0x38];
    __asm
    {
      adcx    r13, rax
      adcx    r14, r14
      adox    r14, r11
    }
    *(_QWORD *)&v15 = v14 * _R15;
    _RAX = -1LL;
    __asm { adcx    r15, rax }
    _R15 = 0LL;
    a2[3].m128i_i64[1] = v15;
    _R11 = ((unsigned __int64)v15 * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v15 + 1)) >> 64;
    __asm { adox    rsi, r11 }
    _R11 = ((unsigned __int64)v15 * (unsigned __int128)MEMORY[8]) >> 64;
    _RAX = v15 * MEMORY[8];
    __asm
    {
      adcx    rsi, rax
      adox    rdi, r11
    }
    _R11 = ((unsigned __int64)v15 * (unsigned __int128)MEMORY[0x10]) >> 64;
    _RAX = v15 * MEMORY[0x10];
    __asm
    {
      adcx    rdi, rax
      adox    rbp, r11
    }
    _R11 = ((unsigned __int64)v15 * (unsigned __int128)MEMORY[0x18]) >> 64;
    _RAX = v15 * MEMORY[0x18];
    __asm
    {
      adcx    rbp, rax
      adox    rbx, r11
    }
    _R11 = ((unsigned __int64)v15 * (unsigned __int128)MEMORY[0x20]) >> 64;
    _RAX = v15 * MEMORY[0x20];
    __asm
    {
      adcx    rbx, rax
      adox    r12, r11
    }
    _R11 = ((unsigned __int64)v15 * (unsigned __int128)MEMORY[0x28]) >> 64;
    _RAX = v15 * MEMORY[0x28];
    __asm
    {
      adcx    r12, rax
      adox    r13, r11
    }
    _R11 = ((unsigned __int64)v15 * (unsigned __int128)MEMORY[0x30]) >> 64;
    _RAX = v15 * MEMORY[0x30];
    __asm
    {
      adcx    r13, rax
      adox    r14, r11
    }
    _R11 = ((unsigned __int64)v15 * (unsigned __int128)MEMORY[0x38]) >> 64;
    _RAX = v15 * MEMORY[0x38];
    __asm
    {
      adcx    r14, rax
      adcx    r15, r15
      adox    r15, r11
    }
    v288 = a2;
    _R10 = a2 + 4;
    __asm { adox    rsi, [r10] }
    _R11 = (v288->m128i_u64[0] * (unsigned __int128)MEMORY[0x40]) >> 64;
    _RAX = v288->m128i_i64[0] * MEMORY[0x40];
    __asm
    {
      adcx    rsi, rax
      adox    rdi, r11
    }
    _R11 = (v288->m128i_u64[0] * (unsigned __int128)MEMORY[8]) >> 64;
    _RAX = v288->m128i_i64[0] * MEMORY[8];
    __asm
    {
      adcx    rdi, rax
      adox    rbp, r11
    }
    _R11 = (v288->m128i_u64[0] * (unsigned __int128)MEMORY[0x10]) >> 64;
    _RAX = v288->m128i_i64[0] * MEMORY[0x10];
    __asm
    {
      adcx    rbp, rax
      adox    rbx, r11
    }
    _R11 = (v288->m128i_u64[0] * (unsigned __int128)MEMORY[0x18]) >> 64;
    _RAX = v288->m128i_i64[0] * MEMORY[0x18];
    __asm
    {
      adcx    rbx, rax
      adox    r12, r11
    }
    _R11 = (v288->m128i_u64[0] * (unsigned __int128)MEMORY[0x20]) >> 64;
    _RAX = v288->m128i_i64[0] * MEMORY[0x20];
    __asm
    {
      adcx    r12, rax
      adox    r13, r11
    }
    _R11 = (v288->m128i_u64[0] * (unsigned __int128)MEMORY[0x28]) >> 64;
    _RAX = v288->m128i_i64[0] * MEMORY[0x28];
    __asm
    {
      adcx    r13, rax
      adox    r14, r11
    }
    _R11 = (v288->m128i_u64[0] * (unsigned __int128)MEMORY[0x30]) >> 64;
    _RAX = v288->m128i_i64[0] * MEMORY[0x30];
    __asm
    {
      adcx    r14, rax
      adox    r15, r11
    }
    v320 = v288->m128i_u64[0];
    _R11 = (v320 * (unsigned __int128)MEMORY[0x38]) >> 64;
    _RAX = v288->m128i_i64[0] * MEMORY[0x38];
    __asm { adcx    r15, rax }
    _R10->m128i_i64[0] = _RSI;
    _RSI = 0LL;
    __asm
    {
      adcx    rsi, rsi
      adox    rsi, r11
    }
    __asm { adox    rdi, [r10+8] }
    _R11 = (v288->m128i_u64[1] * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v320 + 1)) >> 64;
    _RAX = v288->m128i_i64[1] * **((_QWORD **)&v320 + 1);
    __asm
    {
      adcx    rdi, rax
      adox    rbp, r11
    }
    _R11 = (v288->m128i_u64[1] * (unsigned __int128)MEMORY[8]) >> 64;
    _RAX = v288->m128i_i64[1] * MEMORY[8];
    __asm
    {
      adcx    rbp, rax
      adox    rbx, r11
    }
    _R11 = (v288->m128i_u64[1] * (unsigned __int128)MEMORY[0x10]) >> 64;
    _RAX = v288->m128i_i64[1] * MEMORY[0x10];
    __asm
    {
      adcx    rbx, rax
      adox    r12, r11
    }
    _R11 = (v288->m128i_u64[1] * (unsigned __int128)MEMORY[0x18]) >> 64;
    _RAX = v288->m128i_i64[1] * MEMORY[0x18];
    __asm
    {
      adcx    r12, rax
      adox    r13, r11
    }
    _R11 = (v288->m128i_u64[1] * (unsigned __int128)MEMORY[0x20]) >> 64;
    _RAX = v288->m128i_i64[1] * MEMORY[0x20];
    __asm
    {
      adcx    r13, rax
      adox    r14, r11
    }
    _R11 = (v288->m128i_u64[1] * (unsigned __int128)MEMORY[0x28]) >> 64;
    _RAX = v288->m128i_i64[1] * MEMORY[0x28];
    __asm
    {
      adcx    r14, rax
      adox    r15, r11
    }
    _R11 = (v288->m128i_u64[1] * (unsigned __int128)MEMORY[0x30]) >> 64;
    _RAX = v288->m128i_i64[1] * MEMORY[0x30];
    __asm
    {
      adcx    r15, rax
      adox    rsi, r11
    }
    v356 = v288->m128i_u64[1];
    _R11 = (v356 * (unsigned __int128)MEMORY[0x38]) >> 64;
    _RAX = v288->m128i_i64[1] * MEMORY[0x38];
    __asm { adcx    rsi, rax }
    _R10->m128i_i64[1] = _RDI;
    _RDI = 0LL;
    __asm
    {
      adcx    rdi, rdi
      adox    rdi, r11
    }
    __asm { adox    rbp, [r10+10h] }
    _R11 = (v288[1].m128i_u64[0] * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v356 + 1)) >> 64;
    _RAX = v288[1].m128i_i64[0] * **((_QWORD **)&v356 + 1);
    __asm
    {
      adcx    rbp, rax
      adox    rbx, r11
    }
    _R11 = (v288[1].m128i_u64[0] * (unsigned __int128)MEMORY[8]) >> 64;
    _RAX = v288[1].m128i_i64[0] * MEMORY[8];
    __asm
    {
      adcx    rbx, rax
      adox    r12, r11
    }
    _R11 = (v288[1].m128i_u64[0] * (unsigned __int128)MEMORY[0x10]) >> 64;
    _RAX = v288[1].m128i_i64[0] * MEMORY[0x10];
    __asm
    {
      adcx    r12, rax
      adox    r13, r11
    }
    _R11 = (v288[1].m128i_u64[0] * (unsigned __int128)MEMORY[0x18]) >> 64;
    _RAX = v288[1].m128i_i64[0] * MEMORY[0x18];
    __asm
    {
      adcx    r13, rax
      adox    r14, r11
    }
    _R11 = (v288[1].m128i_u64[0] * (unsigned __int128)MEMORY[0x20]) >> 64;
    _RAX = v288[1].m128i_i64[0] * MEMORY[0x20];
    __asm
    {
      adcx    r14, rax
      adox    r15, r11
    }
    _R11 = (v288[1].m128i_u64[0] * (unsigned __int128)MEMORY[0x28]) >> 64;
    _RAX = v288[1].m128i_i64[0] * MEMORY[0x28];
    __asm
    {
      adcx    r15, rax
      adox    rsi, r11
    }
    _R11 = (v288[1].m128i_u64[0] * (unsigned __int128)MEMORY[0x30]) >> 64;
    _RAX = v288[1].m128i_i64[0] * MEMORY[0x30];
    __asm
    {
      adcx    rsi, rax
      adox    rdi, r11
    }
    v392 = v288[1].m128i_u64[0];
    _R11 = (v392 * (unsigned __int128)MEMORY[0x38]) >> 64;
    _RAX = v288[1].m128i_i64[0] * MEMORY[0x38];
    __asm { adcx    rdi, rax }
    _R10[1].m128i_i64[0] = _RBP;
    _RBP = 0LL;
    __asm
    {
      adcx    rbp, rbp
      adox    rbp, r11
    }
    __asm { adox    rbx, [r10+18h] }
    _R11 = (v288[1].m128i_u64[1] * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v392 + 1)) >> 64;
    _RAX = v288[1].m128i_i64[1] * **((_QWORD **)&v392 + 1);
    __asm
    {
      adcx    rbx, rax
      adox    r12, r11
    }
    _R11 = (v288[1].m128i_u64[1] * (unsigned __int128)MEMORY[8]) >> 64;
    _RAX = v288[1].m128i_i64[1] * MEMORY[8];
    __asm
    {
      adcx    r12, rax
      adox    r13, r11
    }
    _R11 = (v288[1].m128i_u64[1] * (unsigned __int128)MEMORY[0x10]) >> 64;
    _RAX = v288[1].m128i_i64[1] * MEMORY[0x10];
    __asm
    {
      adcx    r13, rax
      adox    r14, r11
    }
    _R11 = (v288[1].m128i_u64[1] * (unsigned __int128)MEMORY[0x18]) >> 64;
    _RAX = v288[1].m128i_i64[1] * MEMORY[0x18];
    __asm
    {
      adcx    r14, rax
      adox    r15, r11
    }
    _R11 = (v288[1].m128i_u64[1] * (unsigned __int128)MEMORY[0x20]) >> 64;
    _RAX = v288[1].m128i_i64[1] * MEMORY[0x20];
    __asm
    {
      adcx    r15, rax
      adox    rsi, r11
    }
    _R11 = (v288[1].m128i_u64[1] * (unsigned __int128)MEMORY[0x28]) >> 64;
    _RAX = v288[1].m128i_i64[1] * MEMORY[0x28];
    __asm
    {
      adcx    rsi, rax
      adox    rdi, r11
    }
    _R11 = (v288[1].m128i_u64[1] * (unsigned __int128)MEMORY[0x30]) >> 64;
    _RAX = v288[1].m128i_i64[1] * MEMORY[0x30];
    __asm
    {
      adcx    rdi, rax
      adox    rbp, r11
    }
    v428 = v288[1].m128i_u64[1];
    _R11 = (v428 * (unsigned __int128)MEMORY[0x38]) >> 64;
    _RAX = v288[1].m128i_i64[1] * MEMORY[0x38];
    __asm { adcx    rbp, rax }
    _R10[1].m128i_i64[1] = _RBX;
    _RBX = 0LL;
    __asm
    {
      adcx    rbx, rbx
      adox    rbx, r11
    }
    __asm { adox    r12, [r10+20h] }
    _R11 = (v288[2].m128i_u64[0] * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v428 + 1)) >> 64;
    _RAX = v288[2].m128i_i64[0] * **((_QWORD **)&v428 + 1);
    __asm
    {
      adcx    r12, rax
      adox    r13, r11
    }
    _R11 = (v288[2].m128i_u64[0] * (unsigned __int128)MEMORY[8]) >> 64;
    _RAX = v288[2].m128i_i64[0] * MEMORY[8];
    __asm
    {
      adcx    r13, rax
      adox    r14, r11
    }
    _R11 = (v288[2].m128i_u64[0] * (unsigned __int128)MEMORY[0x10]) >> 64;
    _RAX = v288[2].m128i_i64[0] * MEMORY[0x10];
    __asm
    {
      adcx    r14, rax
      adox    r15, r11
    }
    _R11 = (v288[2].m128i_u64[0] * (unsigned __int128)MEMORY[0x18]) >> 64;
    _RAX = v288[2].m128i_i64[0] * MEMORY[0x18];
    __asm
    {
      adcx    r15, rax
      adox    rsi, r11
    }
    _R11 = (v288[2].m128i_u64[0] * (unsigned __int128)MEMORY[0x20]) >> 64;
    _RAX = v288[2].m128i_i64[0] * MEMORY[0x20];
    __asm
    {
      adcx    rsi, rax
      adox    rdi, r11
    }
    _R11 = (v288[2].m128i_u64[0] * (unsigned __int128)MEMORY[0x28]) >> 64;
    _RAX = v288[2].m128i_i64[0] * MEMORY[0x28];
    __asm
    {
      adcx    rdi, rax
      adox    rbp, r11
    }
    _R11 = (v288[2].m128i_u64[0] * (unsigned __int128)MEMORY[0x30]) >> 64;
    _RAX = v288[2].m128i_i64[0] * MEMORY[0x30];
    __asm
    {
      adcx    rbp, rax
      adox    rbx, r11
    }
    v464 = v288[2].m128i_u64[0];
    _R11 = (v464 * (unsigned __int128)MEMORY[0x38]) >> 64;
    _RAX = v288[2].m128i_i64[0] * MEMORY[0x38];
    __asm { adcx    rbx, rax }
    _R10[2].m128i_i64[0] = _R12;
    _R12 = 0LL;
    __asm
    {
      adcx    r12, r12
      adox    r12, r11
    }
    __asm { adox    r13, [r10+28h] }
    _R11 = (v288[2].m128i_u64[1] * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v464 + 1)) >> 64;
    _RAX = v288[2].m128i_i64[1] * **((_QWORD **)&v464 + 1);
    __asm
    {
      adcx    r13, rax
      adox    r14, r11
    }
    _R11 = (v288[2].m128i_u64[1] * (unsigned __int128)MEMORY[8]) >> 64;
    _RAX = v288[2].m128i_i64[1] * MEMORY[8];
    __asm
    {
      adcx    r14, rax
      adox    r15, r11
    }
    _R11 = (v288[2].m128i_u64[1] * (unsigned __int128)MEMORY[0x10]) >> 64;
    _RAX = v288[2].m128i_i64[1] * MEMORY[0x10];
    __asm
    {
      adcx    r15, rax
      adox    rsi, r11
    }
    _R11 = (v288[2].m128i_u64[1] * (unsigned __int128)MEMORY[0x18]) >> 64;
    _RAX = v288[2].m128i_i64[1] * MEMORY[0x18];
    __asm
    {
      adcx    rsi, rax
      adox    rdi, r11
    }
    _R11 = (v288[2].m128i_u64[1] * (unsigned __int128)MEMORY[0x20]) >> 64;
    _RAX = v288[2].m128i_i64[1] * MEMORY[0x20];
    __asm
    {
      adcx    rdi, rax
      adox    rbp, r11
    }
    _R11 = (v288[2].m128i_u64[1] * (unsigned __int128)MEMORY[0x28]) >> 64;
    _RAX = v288[2].m128i_i64[1] * MEMORY[0x28];
    __asm
    {
      adcx    rbp, rax
      adox    rbx, r11
    }
    _R11 = (v288[2].m128i_u64[1] * (unsigned __int128)MEMORY[0x30]) >> 64;
    _RAX = v288[2].m128i_i64[1] * MEMORY[0x30];
    __asm
    {
      adcx    rbx, rax
      adox    r12, r11
    }
    v500 = v288[2].m128i_u64[1];
    _R11 = (v500 * (unsigned __int128)MEMORY[0x38]) >> 64;
    _RAX = v288[2].m128i_i64[1] * MEMORY[0x38];
    __asm { adcx    r12, rax }
    _R10[2].m128i_i64[1] = _R13;
    _R13 = 0LL;
    __asm
    {
      adcx    r13, r13
      adox    r13, r11
    }
    __asm { adox    r14, [r10+30h] }
    _R11 = (v288[3].m128i_u64[0] * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v500 + 1)) >> 64;
    _RAX = v288[3].m128i_i64[0] * **((_QWORD **)&v500 + 1);
    __asm
    {
      adcx    r14, rax
      adox    r15, r11
    }
    _R11 = (v288[3].m128i_u64[0] * (unsigned __int128)MEMORY[8]) >> 64;
    _RAX = v288[3].m128i_i64[0] * MEMORY[8];
    __asm
    {
      adcx    r15, rax
      adox    rsi, r11
    }
    _R11 = (v288[3].m128i_u64[0] * (unsigned __int128)MEMORY[0x10]) >> 64;
    _RAX = v288[3].m128i_i64[0] * MEMORY[0x10];
    __asm
    {
      adcx    rsi, rax
      adox    rdi, r11
    }
    _R11 = (v288[3].m128i_u64[0] * (unsigned __int128)MEMORY[0x18]) >> 64;
    _RAX = v288[3].m128i_i64[0] * MEMORY[0x18];
    __asm
    {
      adcx    rdi, rax
      adox    rbp, r11
    }
    _R11 = (v288[3].m128i_u64[0] * (unsigned __int128)MEMORY[0x20]) >> 64;
    _RAX = v288[3].m128i_i64[0] * MEMORY[0x20];
    __asm
    {
      adcx    rbp, rax
      adox    rbx, r11
    }
    _R11 = (v288[3].m128i_u64[0] * (unsigned __int128)MEMORY[0x28]) >> 64;
    _RAX = v288[3].m128i_i64[0] * MEMORY[0x28];
    __asm
    {
      adcx    rbx, rax
      adox    r12, r11
    }
    _R11 = (v288[3].m128i_u64[0] * (unsigned __int128)MEMORY[0x30]) >> 64;
    _RAX = v288[3].m128i_i64[0] * MEMORY[0x30];
    __asm
    {
      adcx    r12, rax
      adox    r13, r11
    }
    v536 = v288[3].m128i_u64[0];
    _R11 = (v536 * (unsigned __int128)MEMORY[0x38]) >> 64;
    _RAX = v288[3].m128i_i64[0] * MEMORY[0x38];
    __asm { adcx    r13, rax }
    _R10[3].m128i_i64[0] = _R14;
    _R14 = 0LL;
    __asm
    {
      adcx    r14, r14
      adox    r14, r11
    }
    __asm { adox    r15, [r10+38h] }
    _R11 = (v288[3].m128i_u64[1] * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v536 + 1)) >> 64;
    _RAX = v288[3].m128i_i64[1] * **((_QWORD **)&v536 + 1);
    __asm
    {
      adcx    r15, rax
      adox    rsi, r11
    }
    _R11 = (v288[3].m128i_u64[1] * (unsigned __int128)MEMORY[8]) >> 64;
    _RAX = v288[3].m128i_i64[1] * MEMORY[8];
    __asm
    {
      adcx    rsi, rax
      adox    rdi, r11
    }
    _R11 = (v288[3].m128i_u64[1] * (unsigned __int128)MEMORY[0x10]) >> 64;
    _RAX = v288[3].m128i_i64[1] * MEMORY[0x10];
    __asm
    {
      adcx    rdi, rax
      adox    rbp, r11
    }
    _R11 = (v288[3].m128i_u64[1] * (unsigned __int128)MEMORY[0x18]) >> 64;
    _RAX = v288[3].m128i_i64[1] * MEMORY[0x18];
    __asm
    {
      adcx    rbp, rax
      adox    rbx, r11
    }
    _R11 = (v288[3].m128i_u64[1] * (unsigned __int128)MEMORY[0x20]) >> 64;
    _RAX = v288[3].m128i_i64[1] * MEMORY[0x20];
    __asm
    {
      adcx    rbx, rax
      adox    r12, r11
    }
    _R11 = (v288[3].m128i_u64[1] * (unsigned __int128)MEMORY[0x28]) >> 64;
    _RAX = v288[3].m128i_i64[1] * MEMORY[0x28];
    __asm
    {
      adcx    r12, rax
      adox    r13, r11
    }
    _R11 = (v288[3].m128i_u64[1] * (unsigned __int128)MEMORY[0x30]) >> 64;
    _RAX = v288[3].m128i_i64[1] * MEMORY[0x30];
    __asm
    {
      adcx    r13, rax
      adox    r14, r11
    }
    v572 = v288[3].m128i_u64[1];
    _R11 = (v572 * (unsigned __int128)MEMORY[0x38]) >> 64;
    _RAX = v288[3].m128i_i64[1] * MEMORY[0x38];
    __asm { adcx    r14, rax }
    _R10[3].m128i_i64[1] = _R15;
    _R15 = 0LL;
    __asm
    {
      adcx    r15, r15
      adox    r15, r11
    }
    _R10 += 4;
    v599 = __CFADD__(v4 != 0, _R10->m128i_i64[0]) | __CFADD__(_RSI, (v4 != 0) + _R10->m128i_i64[0]);
    _R10->m128i_i64[0] += _RSI + (v4 != 0);
    v578 = _R10->m128i_i64[1];
    v580 = v599;
    v599 = __CFADD__(v599, v578);
    v579 = v580 + v578;
    _R10->m128i_i64[1] = _RDI + v579;
    v581 = _R10[1].m128i_i64[0];
    v583 = v599 | (unsigned __int8)__CFADD__(_RDI, v579);
    v599 = __CFADD__(v583, v581);
    v582 = v583 + v581;
    _R10[1].m128i_i64[0] = _RBP + v582;
    v584 = _R10[1].m128i_i64[1];
    v586 = v599 | (unsigned __int8)__CFADD__(_RBP, v582);
    v599 = __CFADD__(v586, v584);
    v585 = v586 + v584;
    _R10[1].m128i_i64[1] = _RBX + v585;
    v587 = _R10[2].m128i_i64[0];
    v589 = v599 | (unsigned __int8)__CFADD__(_RBX, v585);
    v599 = __CFADD__(v589, v587);
    v588 = v589 + v587;
    _R10[2].m128i_i64[0] = _R12 + v588;
    v590 = _R10[2].m128i_i64[1];
    v592 = v599 | (unsigned __int8)__CFADD__(_R12, v588);
    v599 = __CFADD__(v592, v590);
    v591 = v592 + v590;
    _R10[2].m128i_i64[1] = _R13 + v591;
    v593 = _R10[3].m128i_i64[0];
    v595 = v599 | (unsigned __int8)__CFADD__(_R13, v591);
    v599 = __CFADD__(v595, v593);
    v594 = v595 + v593;
    _R10[3].m128i_i64[0] = _R14 + v594;
    v596 = _R10[3].m128i_i64[1];
    v598 = v599 | (unsigned __int8)__CFADD__(_R14, v594);
    v599 = __CFADD__(v598, v596);
    v597 = v598 + v596;
    _R10[3].m128i_i64[1] = _R15 + v597;
    v4 = v599 | __CFADD__(_R15, v597);
    a2 = _R10 - 4;
    v5 = (unsigned __int64 *)(*((_QWORD *)&v572 + 1) - 64LL);
    v599 = v635-- == 0;
  }
  while ( v635 );
  v600 = v599 + *v5;
  v599 = a2->m128i_i64[0] < v600;
  a3->m128i_i64[0] = a2->m128i_i64[0] - v600;
  v601 = a2->m128i_u64[1];
  v602 = v599 + v5[1];
  a3->m128i_i64[1] = v601 - v602;
  v603 = a2[1].m128i_u64[0];
  v604 = (v601 < v602) + v5[2];
  a3[1].m128i_i64[0] = v603 - v604;
  v605 = a2[1].m128i_u64[1];
  v606 = (v603 < v604) + v5[3];
  a3[1].m128i_i64[1] = v605 - v606;
  v607 = a2[2].m128i_u64[0];
  v608 = (v605 < v606) + v5[4];
  a3[2].m128i_i64[0] = v607 - v608;
  v609 = a2[2].m128i_u64[1];
  v610 = (v607 < v608) + v5[5];
  a3[2].m128i_i64[1] = v609 - v610;
  v611 = a2[3].m128i_u64[0];
  v612 = (v609 < v610) + v5[6];
  a3[3].m128i_i64[0] = v611 - v612;
  v613 = a2[3].m128i_u64[1];
  v614 = (v611 < v612) + v5[7];
  a3[3].m128i_i64[1] = v613 - v614;
  v615 = a2[4].m128i_u64[0];
  v616 = (v613 < v614) + v5[8];
  a3[4].m128i_i64[0] = v615 - v616;
  v617 = a2[4].m128i_u64[1];
  v618 = (v615 < v616) + v5[9];
  a3[4].m128i_i64[1] = v617 - v618;
  v619 = a2[5].m128i_u64[0];
  v620 = (v617 < v618) + v5[10];
  a3[5].m128i_i64[0] = v619 - v620;
  v621 = a2[5].m128i_u64[1];
  v622 = (v619 < v620) + v5[11];
  a3[5].m128i_i64[1] = v621 - v622;
  v623 = a2[6].m128i_u64[0];
  v624 = (v621 < v622) + v5[12];
  a3[6].m128i_i64[0] = v623 - v624;
  v625 = a2[6].m128i_u64[1];
  v626 = (v623 < v624) + v5[13];
  a3[6].m128i_i64[1] = v625 - v626;
  v627 = a2[7].m128i_u64[0];
  v629 = (v625 < v626) + v5[14];
  v599 = v627 < v629;
  result = v627 - v629;
  a3[7].m128i_i64[0] = result;
  v630 = a2[7].m128i_u64[1];
  v631 = v599 + v5[15];
  a3[7].m128i_i64[1] = v630 - v631;
  v632 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v4 - (unsigned int)(v630 < v631)), 0);
  v633 = _mm_xor_si128((__m128i)-1LL, v632);
  *a3 = _mm_or_si128(_mm_and_si128(_mm_load_si128(a2), v632), _mm_and_si128(_mm_load_si128(a3), v633));
  a3[1] = _mm_or_si128(_mm_and_si128(_mm_load_si128(a2 + 1), v632), _mm_and_si128(_mm_load_si128(a3 + 1), v633));
  a3[2] = _mm_or_si128(_mm_and_si128(_mm_load_si128(a2 + 2), v632), _mm_and_si128(_mm_load_si128(a3 + 2), v633));
  a3[3] = _mm_or_si128(_mm_and_si128(_mm_load_si128(a2 + 3), v632), _mm_and_si128(_mm_load_si128(a3 + 3), v633));
  a3[4] = _mm_or_si128(_mm_and_si128(_mm_load_si128(a2 + 4), v632), _mm_and_si128(_mm_load_si128(a3 + 4), v633));
  a3[5] = _mm_or_si128(_mm_and_si128(_mm_load_si128(a2 + 5), v632), _mm_and_si128(_mm_load_si128(a3 + 5), v633));
  a3[6] = _mm_or_si128(_mm_and_si128(_mm_load_si128(a2 + 6), v632), _mm_and_si128(_mm_load_si128(a3 + 6), v633));
  a3[7] = _mm_or_si128(_mm_and_si128(_mm_load_si128(a2 + 7), v632), _mm_and_si128(_mm_load_si128(a3 + 7), v633));
  return result;
}
