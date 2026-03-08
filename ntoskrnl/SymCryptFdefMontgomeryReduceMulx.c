/*
 * XREFs of SymCryptFdefMontgomeryReduceMulx @ 0x1404051F0
 * Callers:
 *     SymCryptFdefModMulMontgomeryMulx @ 0x1403FF020 (SymCryptFdefModMulMontgomeryMulx.c)
 *     SymCryptFdefModSquareMontgomeryMulx @ 0x1403FF5A0 (SymCryptFdefModSquareMontgomeryMulx.c)
 *     SymCryptFdefMontgomeryReduce @ 0x1403FF8C4 (SymCryptFdefMontgomeryReduce.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptFdefMontgomeryReduceMulx(__int64 a1, __m128i *a2, __m128i *a3)
{
  __m128i *v3; // r10
  __int64 v12; // r8
  int v13; // r9d
  __int128 v14; // rdx
  __m128i *v287; // r8
  __int64 v288; // rcx
  int i; // r9d
  __int128 v321; // rdx
  __int128 v357; // rdx
  __int128 v393; // rdx
  __int128 v429; // rdx
  __int128 v465; // rdx
  __int128 v501; // rdx
  __int128 v537; // rdx
  __int128 v567; // rdx
  __int64 v571; // r11
  __int64 v572; // r11
  _BOOL8 v573; // rtt
  __int64 v574; // rax
  __int64 v575; // rax
  __int64 v576; // rtt
  __int64 v577; // r11
  __int64 v578; // r11
  __int64 v579; // rtt
  __int64 v580; // rax
  __int64 v581; // rax
  __int64 v582; // rtt
  __int64 v583; // r11
  __int64 v584; // r11
  __int64 v585; // rtt
  __int64 v586; // rax
  __int64 v587; // rax
  __int64 v588; // rtt
  __int64 v589; // r11
  __int64 v590; // r11
  __int64 v591; // rtt
  int v592; // r9d
  bool v593; // cf
  int v594; // esi
  _QWORD *v595; // rcx
  __int64 *v596; // r8
  int v597; // edi
  const __m128i *v598; // rbp
  __m128i *v599; // rbx
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
  __int64 result; // rax
  unsigned __int64 v613; // rtt
  unsigned __int64 v614; // r11
  unsigned __int64 v615; // rtt
  __m128i v616; // xmm0
  __m128i v617; // xmm1
  __int64 v618; // [rsp+48h] [rbp+8h]
  __m128i *v619; // [rsp+50h] [rbp+10h]
  int v621; // [rsp+60h] [rbp+20h]
  int v622; // [rsp+64h] [rbp+24h]

  v3 = a2;
  v618 = a1;
  v619 = a2;
  v621 = *(_DWORD *)(a1 + 4);
  v622 = 0;
  do
  {
    _RSI = v3->m128i_i64[0];
    _RDI = v3->m128i_i64[1];
    _RBP = v3[1].m128i_i64[0];
    _RBX = v3[1].m128i_i64[1];
    _R12 = v3[2].m128i_i64[0];
    _R13 = v3[2].m128i_i64[1];
    _R14 = v3[3].m128i_i64[0];
    _R15 = v3[3].m128i_i64[1];
    v12 = *(_QWORD *)(a1 + 32);
    v13 = *(_DWORD *)(a1 + 4);
    *(_QWORD *)&v14 = v12 * v3->m128i_i64[0];
    _RAX = -1LL;
    __asm { adcx    rsi, rax }
    _RSI = 0LL;
    v3->m128i_i64[0] = v14;
    _R11 = ((unsigned __int64)v14 * (unsigned __int128)*(unsigned __int64 *)(a1 + 128)) >> 64;
    __asm { adox    rdi, r11 }
    _R11 = ((unsigned __int64)v14 * (unsigned __int128)MEMORY[8]) >> 64;
    _RAX = v14 * MEMORY[8];
    __asm
    {
      adcx    rdi, rax
      adox    rbp, r11
    }
    _R11 = ((unsigned __int64)v14 * (unsigned __int128)MEMORY[0x10]) >> 64;
    _RAX = v14 * MEMORY[0x10];
    __asm
    {
      adcx    rbp, rax
      adox    rbx, r11
    }
    _R11 = ((unsigned __int64)v14 * (unsigned __int128)MEMORY[0x18]) >> 64;
    _RAX = v14 * MEMORY[0x18];
    __asm
    {
      adcx    rbx, rax
      adox    r12, r11
    }
    _R11 = ((unsigned __int64)v14 * (unsigned __int128)MEMORY[0x20]) >> 64;
    _RAX = v14 * MEMORY[0x20];
    __asm
    {
      adcx    r12, rax
      adox    r13, r11
    }
    _R11 = ((unsigned __int64)v14 * (unsigned __int128)MEMORY[0x28]) >> 64;
    _RAX = v14 * MEMORY[0x28];
    __asm
    {
      adcx    r13, rax
      adox    r14, r11
    }
    _R11 = ((unsigned __int64)v14 * (unsigned __int128)MEMORY[0x30]) >> 64;
    _RAX = v14 * MEMORY[0x30];
    __asm
    {
      adcx    r14, rax
      adox    r15, r11
    }
    v14 = (unsigned __int64)v14;
    _R11 = ((unsigned __int64)v14 * (unsigned __int128)MEMORY[0x38]) >> 64;
    _RAX = v14 * MEMORY[0x38];
    __asm
    {
      adcx    r15, rax
      adcx    rsi, rsi
      adox    rsi, r11
    }
    *(_QWORD *)&v14 = v12 * _RDI;
    _RAX = -1LL;
    __asm { adcx    rdi, rax }
    _RDI = 0LL;
    v3->m128i_i64[1] = v14;
    _R11 = ((unsigned __int64)v14 * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v14 + 1)) >> 64;
    __asm { adox    rbp, r11 }
    _R11 = ((unsigned __int64)v14 * (unsigned __int128)MEMORY[8]) >> 64;
    _RAX = v14 * MEMORY[8];
    __asm
    {
      adcx    rbp, rax
      adox    rbx, r11
    }
    _R11 = ((unsigned __int64)v14 * (unsigned __int128)MEMORY[0x10]) >> 64;
    _RAX = v14 * MEMORY[0x10];
    __asm
    {
      adcx    rbx, rax
      adox    r12, r11
    }
    _R11 = ((unsigned __int64)v14 * (unsigned __int128)MEMORY[0x18]) >> 64;
    _RAX = v14 * MEMORY[0x18];
    __asm
    {
      adcx    r12, rax
      adox    r13, r11
    }
    _R11 = ((unsigned __int64)v14 * (unsigned __int128)MEMORY[0x20]) >> 64;
    _RAX = v14 * MEMORY[0x20];
    __asm
    {
      adcx    r13, rax
      adox    r14, r11
    }
    _R11 = ((unsigned __int64)v14 * (unsigned __int128)MEMORY[0x28]) >> 64;
    _RAX = v14 * MEMORY[0x28];
    __asm
    {
      adcx    r14, rax
      adox    r15, r11
    }
    _R11 = ((unsigned __int64)v14 * (unsigned __int128)MEMORY[0x30]) >> 64;
    _RAX = v14 * MEMORY[0x30];
    __asm
    {
      adcx    r15, rax
      adox    rsi, r11
    }
    v14 = (unsigned __int64)v14;
    _R11 = ((unsigned __int64)v14 * (unsigned __int128)MEMORY[0x38]) >> 64;
    _RAX = v14 * MEMORY[0x38];
    __asm
    {
      adcx    rsi, rax
      adcx    rdi, rdi
      adox    rdi, r11
    }
    *(_QWORD *)&v14 = v12 * _RBP;
    _RAX = -1LL;
    __asm { adcx    rbp, rax }
    _RBP = 0LL;
    v3[1].m128i_i64[0] = v14;
    _R11 = ((unsigned __int64)v14 * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v14 + 1)) >> 64;
    __asm { adox    rbx, r11 }
    _R11 = ((unsigned __int64)v14 * (unsigned __int128)MEMORY[8]) >> 64;
    _RAX = v14 * MEMORY[8];
    __asm
    {
      adcx    rbx, rax
      adox    r12, r11
    }
    _R11 = ((unsigned __int64)v14 * (unsigned __int128)MEMORY[0x10]) >> 64;
    _RAX = v14 * MEMORY[0x10];
    __asm
    {
      adcx    r12, rax
      adox    r13, r11
    }
    _R11 = ((unsigned __int64)v14 * (unsigned __int128)MEMORY[0x18]) >> 64;
    _RAX = v14 * MEMORY[0x18];
    __asm
    {
      adcx    r13, rax
      adox    r14, r11
    }
    _R11 = ((unsigned __int64)v14 * (unsigned __int128)MEMORY[0x20]) >> 64;
    _RAX = v14 * MEMORY[0x20];
    __asm
    {
      adcx    r14, rax
      adox    r15, r11
    }
    _R11 = ((unsigned __int64)v14 * (unsigned __int128)MEMORY[0x28]) >> 64;
    _RAX = v14 * MEMORY[0x28];
    __asm
    {
      adcx    r15, rax
      adox    rsi, r11
    }
    _R11 = ((unsigned __int64)v14 * (unsigned __int128)MEMORY[0x30]) >> 64;
    _RAX = v14 * MEMORY[0x30];
    __asm
    {
      adcx    rsi, rax
      adox    rdi, r11
    }
    v14 = (unsigned __int64)v14;
    _R11 = ((unsigned __int64)v14 * (unsigned __int128)MEMORY[0x38]) >> 64;
    _RAX = v14 * MEMORY[0x38];
    __asm
    {
      adcx    rdi, rax
      adcx    rbp, rbp
      adox    rbp, r11
    }
    *(_QWORD *)&v14 = v12 * _RBX;
    _RAX = -1LL;
    __asm { adcx    rbx, rax }
    _RBX = 0LL;
    v3[1].m128i_i64[1] = v14;
    _R11 = ((unsigned __int64)v14 * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v14 + 1)) >> 64;
    __asm { adox    r12, r11 }
    _R11 = ((unsigned __int64)v14 * (unsigned __int128)MEMORY[8]) >> 64;
    _RAX = v14 * MEMORY[8];
    __asm
    {
      adcx    r12, rax
      adox    r13, r11
    }
    _R11 = ((unsigned __int64)v14 * (unsigned __int128)MEMORY[0x10]) >> 64;
    _RAX = v14 * MEMORY[0x10];
    __asm
    {
      adcx    r13, rax
      adox    r14, r11
    }
    _R11 = ((unsigned __int64)v14 * (unsigned __int128)MEMORY[0x18]) >> 64;
    _RAX = v14 * MEMORY[0x18];
    __asm
    {
      adcx    r14, rax
      adox    r15, r11
    }
    _R11 = ((unsigned __int64)v14 * (unsigned __int128)MEMORY[0x20]) >> 64;
    _RAX = v14 * MEMORY[0x20];
    __asm
    {
      adcx    r15, rax
      adox    rsi, r11
    }
    _R11 = ((unsigned __int64)v14 * (unsigned __int128)MEMORY[0x28]) >> 64;
    _RAX = v14 * MEMORY[0x28];
    __asm
    {
      adcx    rsi, rax
      adox    rdi, r11
    }
    _R11 = ((unsigned __int64)v14 * (unsigned __int128)MEMORY[0x30]) >> 64;
    _RAX = v14 * MEMORY[0x30];
    __asm
    {
      adcx    rdi, rax
      adox    rbp, r11
    }
    v14 = (unsigned __int64)v14;
    _R11 = ((unsigned __int64)v14 * (unsigned __int128)MEMORY[0x38]) >> 64;
    _RAX = v14 * MEMORY[0x38];
    __asm
    {
      adcx    rbp, rax
      adcx    rbx, rbx
      adox    rbx, r11
    }
    *(_QWORD *)&v14 = v12 * _R12;
    _RAX = -1LL;
    __asm { adcx    r12, rax }
    _R12 = 0LL;
    v3[2].m128i_i64[0] = v14;
    _R11 = ((unsigned __int64)v14 * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v14 + 1)) >> 64;
    __asm { adox    r13, r11 }
    _R11 = ((unsigned __int64)v14 * (unsigned __int128)MEMORY[8]) >> 64;
    _RAX = v14 * MEMORY[8];
    __asm
    {
      adcx    r13, rax
      adox    r14, r11
    }
    _R11 = ((unsigned __int64)v14 * (unsigned __int128)MEMORY[0x10]) >> 64;
    _RAX = v14 * MEMORY[0x10];
    __asm
    {
      adcx    r14, rax
      adox    r15, r11
    }
    _R11 = ((unsigned __int64)v14 * (unsigned __int128)MEMORY[0x18]) >> 64;
    _RAX = v14 * MEMORY[0x18];
    __asm
    {
      adcx    r15, rax
      adox    rsi, r11
    }
    _R11 = ((unsigned __int64)v14 * (unsigned __int128)MEMORY[0x20]) >> 64;
    _RAX = v14 * MEMORY[0x20];
    __asm
    {
      adcx    rsi, rax
      adox    rdi, r11
    }
    _R11 = ((unsigned __int64)v14 * (unsigned __int128)MEMORY[0x28]) >> 64;
    _RAX = v14 * MEMORY[0x28];
    __asm
    {
      adcx    rdi, rax
      adox    rbp, r11
    }
    _R11 = ((unsigned __int64)v14 * (unsigned __int128)MEMORY[0x30]) >> 64;
    _RAX = v14 * MEMORY[0x30];
    __asm
    {
      adcx    rbp, rax
      adox    rbx, r11
    }
    v14 = (unsigned __int64)v14;
    _R11 = ((unsigned __int64)v14 * (unsigned __int128)MEMORY[0x38]) >> 64;
    _RAX = v14 * MEMORY[0x38];
    __asm
    {
      adcx    rbx, rax
      adcx    r12, r12
      adox    r12, r11
    }
    *(_QWORD *)&v14 = v12 * _R13;
    _RAX = -1LL;
    __asm { adcx    r13, rax }
    _R13 = 0LL;
    v3[2].m128i_i64[1] = v14;
    _R11 = ((unsigned __int64)v14 * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v14 + 1)) >> 64;
    __asm { adox    r14, r11 }
    _R11 = ((unsigned __int64)v14 * (unsigned __int128)MEMORY[8]) >> 64;
    _RAX = v14 * MEMORY[8];
    __asm
    {
      adcx    r14, rax
      adox    r15, r11
    }
    _R11 = ((unsigned __int64)v14 * (unsigned __int128)MEMORY[0x10]) >> 64;
    _RAX = v14 * MEMORY[0x10];
    __asm
    {
      adcx    r15, rax
      adox    rsi, r11
    }
    _R11 = ((unsigned __int64)v14 * (unsigned __int128)MEMORY[0x18]) >> 64;
    _RAX = v14 * MEMORY[0x18];
    __asm
    {
      adcx    rsi, rax
      adox    rdi, r11
    }
    _R11 = ((unsigned __int64)v14 * (unsigned __int128)MEMORY[0x20]) >> 64;
    _RAX = v14 * MEMORY[0x20];
    __asm
    {
      adcx    rdi, rax
      adox    rbp, r11
    }
    _R11 = ((unsigned __int64)v14 * (unsigned __int128)MEMORY[0x28]) >> 64;
    _RAX = v14 * MEMORY[0x28];
    __asm
    {
      adcx    rbp, rax
      adox    rbx, r11
    }
    _R11 = ((unsigned __int64)v14 * (unsigned __int128)MEMORY[0x30]) >> 64;
    _RAX = v14 * MEMORY[0x30];
    __asm
    {
      adcx    rbx, rax
      adox    r12, r11
    }
    v14 = (unsigned __int64)v14;
    _R11 = ((unsigned __int64)v14 * (unsigned __int128)MEMORY[0x38]) >> 64;
    _RAX = v14 * MEMORY[0x38];
    __asm
    {
      adcx    r12, rax
      adcx    r13, r13
      adox    r13, r11
    }
    *(_QWORD *)&v14 = v12 * _R14;
    _RAX = -1LL;
    __asm { adcx    r14, rax }
    _R14 = 0LL;
    v3[3].m128i_i64[0] = v14;
    _R11 = ((unsigned __int64)v14 * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v14 + 1)) >> 64;
    __asm { adox    r15, r11 }
    _R11 = ((unsigned __int64)v14 * (unsigned __int128)MEMORY[8]) >> 64;
    _RAX = v14 * MEMORY[8];
    __asm
    {
      adcx    r15, rax
      adox    rsi, r11
    }
    _R11 = ((unsigned __int64)v14 * (unsigned __int128)MEMORY[0x10]) >> 64;
    _RAX = v14 * MEMORY[0x10];
    __asm
    {
      adcx    rsi, rax
      adox    rdi, r11
    }
    _R11 = ((unsigned __int64)v14 * (unsigned __int128)MEMORY[0x18]) >> 64;
    _RAX = v14 * MEMORY[0x18];
    __asm
    {
      adcx    rdi, rax
      adox    rbp, r11
    }
    _R11 = ((unsigned __int64)v14 * (unsigned __int128)MEMORY[0x20]) >> 64;
    _RAX = v14 * MEMORY[0x20];
    __asm
    {
      adcx    rbp, rax
      adox    rbx, r11
    }
    _R11 = ((unsigned __int64)v14 * (unsigned __int128)MEMORY[0x28]) >> 64;
    _RAX = v14 * MEMORY[0x28];
    __asm
    {
      adcx    rbx, rax
      adox    r12, r11
    }
    _R11 = ((unsigned __int64)v14 * (unsigned __int128)MEMORY[0x30]) >> 64;
    _RAX = v14 * MEMORY[0x30];
    __asm
    {
      adcx    r12, rax
      adox    r13, r11
    }
    v14 = (unsigned __int64)v14;
    _R11 = ((unsigned __int64)v14 * (unsigned __int128)MEMORY[0x38]) >> 64;
    _RAX = v14 * MEMORY[0x38];
    __asm
    {
      adcx    r13, rax
      adcx    r14, r14
      adox    r14, r11
    }
    *(_QWORD *)&v14 = v12 * _R15;
    _RAX = -1LL;
    __asm { adcx    r15, rax }
    _R15 = 0LL;
    v3[3].m128i_i64[1] = v14;
    _R11 = ((unsigned __int64)v14 * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v14 + 1)) >> 64;
    __asm { adox    rsi, r11 }
    _R11 = ((unsigned __int64)v14 * (unsigned __int128)MEMORY[8]) >> 64;
    _RAX = v14 * MEMORY[8];
    __asm
    {
      adcx    rsi, rax
      adox    rdi, r11
    }
    _R11 = ((unsigned __int64)v14 * (unsigned __int128)MEMORY[0x10]) >> 64;
    _RAX = v14 * MEMORY[0x10];
    __asm
    {
      adcx    rdi, rax
      adox    rbp, r11
    }
    _R11 = ((unsigned __int64)v14 * (unsigned __int128)MEMORY[0x18]) >> 64;
    _RAX = v14 * MEMORY[0x18];
    __asm
    {
      adcx    rbp, rax
      adox    rbx, r11
    }
    _R11 = ((unsigned __int64)v14 * (unsigned __int128)MEMORY[0x20]) >> 64;
    _RAX = v14 * MEMORY[0x20];
    __asm
    {
      adcx    rbx, rax
      adox    r12, r11
    }
    _R11 = ((unsigned __int64)v14 * (unsigned __int128)MEMORY[0x28]) >> 64;
    _RAX = v14 * MEMORY[0x28];
    __asm
    {
      adcx    r12, rax
      adox    r13, r11
    }
    _R11 = ((unsigned __int64)v14 * (unsigned __int128)MEMORY[0x30]) >> 64;
    _RAX = v14 * MEMORY[0x30];
    __asm
    {
      adcx    r13, rax
      adox    r14, r11
    }
    _R11 = ((unsigned __int64)v14 * (unsigned __int128)MEMORY[0x38]) >> 64;
    _RAX = v14 * MEMORY[0x38];
    __asm
    {
      adcx    r14, rax
      adcx    r15, r15
      adox    r15, r11
    }
    v287 = v3;
    v288 = 64LL;
    _R10 = v3 + 4;
    for ( i = v13 - 1; i; --i )
    {
      __asm { adox    rsi, [r10] }
      _R11 = (v287->m128i_u64[0] * (unsigned __int128)*(unsigned __int64 *)v288) >> 64;
      _RAX = v287->m128i_i64[0] * *(_QWORD *)v288;
      __asm
      {
        adcx    rsi, rax
        adox    rdi, r11
      }
      _R11 = (v287->m128i_u64[0] * (unsigned __int128)MEMORY[8]) >> 64;
      _RAX = v287->m128i_i64[0] * MEMORY[8];
      __asm
      {
        adcx    rdi, rax
        adox    rbp, r11
      }
      _R11 = (v287->m128i_u64[0] * (unsigned __int128)MEMORY[0x10]) >> 64;
      _RAX = v287->m128i_i64[0] * MEMORY[0x10];
      __asm
      {
        adcx    rbp, rax
        adox    rbx, r11
      }
      _R11 = (v287->m128i_u64[0] * (unsigned __int128)MEMORY[0x18]) >> 64;
      _RAX = v287->m128i_i64[0] * MEMORY[0x18];
      __asm
      {
        adcx    rbx, rax
        adox    r12, r11
      }
      _R11 = (v287->m128i_u64[0] * (unsigned __int128)MEMORY[0x20]) >> 64;
      _RAX = v287->m128i_i64[0] * MEMORY[0x20];
      __asm
      {
        adcx    r12, rax
        adox    r13, r11
      }
      _R11 = (v287->m128i_u64[0] * (unsigned __int128)MEMORY[0x28]) >> 64;
      _RAX = v287->m128i_i64[0] * MEMORY[0x28];
      __asm
      {
        adcx    r13, rax
        adox    r14, r11
      }
      _R11 = (v287->m128i_u64[0] * (unsigned __int128)MEMORY[0x30]) >> 64;
      _RAX = v287->m128i_i64[0] * MEMORY[0x30];
      __asm
      {
        adcx    r14, rax
        adox    r15, r11
      }
      v321 = v287->m128i_u64[0];
      _R11 = (v321 * (unsigned __int128)MEMORY[0x38]) >> 64;
      _RAX = v287->m128i_i64[0] * MEMORY[0x38];
      __asm { adcx    r15, rax }
      _R10->m128i_i64[0] = _RSI;
      _RSI = 0LL;
      __asm
      {
        adcx    rsi, rsi
        adox    rsi, r11
      }
      __asm { adox    rdi, [r10+8] }
      _R11 = (v287->m128i_u64[1] * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v321 + 1)) >> 64;
      _RAX = v287->m128i_i64[1] * **((_QWORD **)&v321 + 1);
      __asm
      {
        adcx    rdi, rax
        adox    rbp, r11
      }
      _R11 = (v287->m128i_u64[1] * (unsigned __int128)MEMORY[8]) >> 64;
      _RAX = v287->m128i_i64[1] * MEMORY[8];
      __asm
      {
        adcx    rbp, rax
        adox    rbx, r11
      }
      _R11 = (v287->m128i_u64[1] * (unsigned __int128)MEMORY[0x10]) >> 64;
      _RAX = v287->m128i_i64[1] * MEMORY[0x10];
      __asm
      {
        adcx    rbx, rax
        adox    r12, r11
      }
      _R11 = (v287->m128i_u64[1] * (unsigned __int128)MEMORY[0x18]) >> 64;
      _RAX = v287->m128i_i64[1] * MEMORY[0x18];
      __asm
      {
        adcx    r12, rax
        adox    r13, r11
      }
      _R11 = (v287->m128i_u64[1] * (unsigned __int128)MEMORY[0x20]) >> 64;
      _RAX = v287->m128i_i64[1] * MEMORY[0x20];
      __asm
      {
        adcx    r13, rax
        adox    r14, r11
      }
      _R11 = (v287->m128i_u64[1] * (unsigned __int128)MEMORY[0x28]) >> 64;
      _RAX = v287->m128i_i64[1] * MEMORY[0x28];
      __asm
      {
        adcx    r14, rax
        adox    r15, r11
      }
      _R11 = (v287->m128i_u64[1] * (unsigned __int128)MEMORY[0x30]) >> 64;
      _RAX = v287->m128i_i64[1] * MEMORY[0x30];
      __asm
      {
        adcx    r15, rax
        adox    rsi, r11
      }
      v357 = v287->m128i_u64[1];
      _R11 = (v357 * (unsigned __int128)MEMORY[0x38]) >> 64;
      _RAX = v287->m128i_i64[1] * MEMORY[0x38];
      __asm { adcx    rsi, rax }
      _R10->m128i_i64[1] = _RDI;
      _RDI = 0LL;
      __asm
      {
        adcx    rdi, rdi
        adox    rdi, r11
      }
      __asm { adox    rbp, [r10+10h] }
      _R11 = (v287[1].m128i_u64[0] * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v357 + 1)) >> 64;
      _RAX = v287[1].m128i_i64[0] * **((_QWORD **)&v357 + 1);
      __asm
      {
        adcx    rbp, rax
        adox    rbx, r11
      }
      _R11 = (v287[1].m128i_u64[0] * (unsigned __int128)MEMORY[8]) >> 64;
      _RAX = v287[1].m128i_i64[0] * MEMORY[8];
      __asm
      {
        adcx    rbx, rax
        adox    r12, r11
      }
      _R11 = (v287[1].m128i_u64[0] * (unsigned __int128)MEMORY[0x10]) >> 64;
      _RAX = v287[1].m128i_i64[0] * MEMORY[0x10];
      __asm
      {
        adcx    r12, rax
        adox    r13, r11
      }
      _R11 = (v287[1].m128i_u64[0] * (unsigned __int128)MEMORY[0x18]) >> 64;
      _RAX = v287[1].m128i_i64[0] * MEMORY[0x18];
      __asm
      {
        adcx    r13, rax
        adox    r14, r11
      }
      _R11 = (v287[1].m128i_u64[0] * (unsigned __int128)MEMORY[0x20]) >> 64;
      _RAX = v287[1].m128i_i64[0] * MEMORY[0x20];
      __asm
      {
        adcx    r14, rax
        adox    r15, r11
      }
      _R11 = (v287[1].m128i_u64[0] * (unsigned __int128)MEMORY[0x28]) >> 64;
      _RAX = v287[1].m128i_i64[0] * MEMORY[0x28];
      __asm
      {
        adcx    r15, rax
        adox    rsi, r11
      }
      _R11 = (v287[1].m128i_u64[0] * (unsigned __int128)MEMORY[0x30]) >> 64;
      _RAX = v287[1].m128i_i64[0] * MEMORY[0x30];
      __asm
      {
        adcx    rsi, rax
        adox    rdi, r11
      }
      v393 = v287[1].m128i_u64[0];
      _R11 = (v393 * (unsigned __int128)MEMORY[0x38]) >> 64;
      _RAX = v287[1].m128i_i64[0] * MEMORY[0x38];
      __asm { adcx    rdi, rax }
      _R10[1].m128i_i64[0] = _RBP;
      _RBP = 0LL;
      __asm
      {
        adcx    rbp, rbp
        adox    rbp, r11
      }
      __asm { adox    rbx, [r10+18h] }
      _R11 = (v287[1].m128i_u64[1] * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v393 + 1)) >> 64;
      _RAX = v287[1].m128i_i64[1] * **((_QWORD **)&v393 + 1);
      __asm
      {
        adcx    rbx, rax
        adox    r12, r11
      }
      _R11 = (v287[1].m128i_u64[1] * (unsigned __int128)MEMORY[8]) >> 64;
      _RAX = v287[1].m128i_i64[1] * MEMORY[8];
      __asm
      {
        adcx    r12, rax
        adox    r13, r11
      }
      _R11 = (v287[1].m128i_u64[1] * (unsigned __int128)MEMORY[0x10]) >> 64;
      _RAX = v287[1].m128i_i64[1] * MEMORY[0x10];
      __asm
      {
        adcx    r13, rax
        adox    r14, r11
      }
      _R11 = (v287[1].m128i_u64[1] * (unsigned __int128)MEMORY[0x18]) >> 64;
      _RAX = v287[1].m128i_i64[1] * MEMORY[0x18];
      __asm
      {
        adcx    r14, rax
        adox    r15, r11
      }
      _R11 = (v287[1].m128i_u64[1] * (unsigned __int128)MEMORY[0x20]) >> 64;
      _RAX = v287[1].m128i_i64[1] * MEMORY[0x20];
      __asm
      {
        adcx    r15, rax
        adox    rsi, r11
      }
      _R11 = (v287[1].m128i_u64[1] * (unsigned __int128)MEMORY[0x28]) >> 64;
      _RAX = v287[1].m128i_i64[1] * MEMORY[0x28];
      __asm
      {
        adcx    rsi, rax
        adox    rdi, r11
      }
      _R11 = (v287[1].m128i_u64[1] * (unsigned __int128)MEMORY[0x30]) >> 64;
      _RAX = v287[1].m128i_i64[1] * MEMORY[0x30];
      __asm
      {
        adcx    rdi, rax
        adox    rbp, r11
      }
      v429 = v287[1].m128i_u64[1];
      _R11 = (v429 * (unsigned __int128)MEMORY[0x38]) >> 64;
      _RAX = v287[1].m128i_i64[1] * MEMORY[0x38];
      __asm { adcx    rbp, rax }
      _R10[1].m128i_i64[1] = _RBX;
      _RBX = 0LL;
      __asm
      {
        adcx    rbx, rbx
        adox    rbx, r11
      }
      __asm { adox    r12, [r10+20h] }
      _R11 = (v287[2].m128i_u64[0] * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v429 + 1)) >> 64;
      _RAX = v287[2].m128i_i64[0] * **((_QWORD **)&v429 + 1);
      __asm
      {
        adcx    r12, rax
        adox    r13, r11
      }
      _R11 = (v287[2].m128i_u64[0] * (unsigned __int128)MEMORY[8]) >> 64;
      _RAX = v287[2].m128i_i64[0] * MEMORY[8];
      __asm
      {
        adcx    r13, rax
        adox    r14, r11
      }
      _R11 = (v287[2].m128i_u64[0] * (unsigned __int128)MEMORY[0x10]) >> 64;
      _RAX = v287[2].m128i_i64[0] * MEMORY[0x10];
      __asm
      {
        adcx    r14, rax
        adox    r15, r11
      }
      _R11 = (v287[2].m128i_u64[0] * (unsigned __int128)MEMORY[0x18]) >> 64;
      _RAX = v287[2].m128i_i64[0] * MEMORY[0x18];
      __asm
      {
        adcx    r15, rax
        adox    rsi, r11
      }
      _R11 = (v287[2].m128i_u64[0] * (unsigned __int128)MEMORY[0x20]) >> 64;
      _RAX = v287[2].m128i_i64[0] * MEMORY[0x20];
      __asm
      {
        adcx    rsi, rax
        adox    rdi, r11
      }
      _R11 = (v287[2].m128i_u64[0] * (unsigned __int128)MEMORY[0x28]) >> 64;
      _RAX = v287[2].m128i_i64[0] * MEMORY[0x28];
      __asm
      {
        adcx    rdi, rax
        adox    rbp, r11
      }
      _R11 = (v287[2].m128i_u64[0] * (unsigned __int128)MEMORY[0x30]) >> 64;
      _RAX = v287[2].m128i_i64[0] * MEMORY[0x30];
      __asm
      {
        adcx    rbp, rax
        adox    rbx, r11
      }
      v465 = v287[2].m128i_u64[0];
      _R11 = (v465 * (unsigned __int128)MEMORY[0x38]) >> 64;
      _RAX = v287[2].m128i_i64[0] * MEMORY[0x38];
      __asm { adcx    rbx, rax }
      _R10[2].m128i_i64[0] = _R12;
      _R12 = 0LL;
      __asm
      {
        adcx    r12, r12
        adox    r12, r11
      }
      __asm { adox    r13, [r10+28h] }
      _R11 = (v287[2].m128i_u64[1] * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v465 + 1)) >> 64;
      _RAX = v287[2].m128i_i64[1] * **((_QWORD **)&v465 + 1);
      __asm
      {
        adcx    r13, rax
        adox    r14, r11
      }
      _R11 = (v287[2].m128i_u64[1] * (unsigned __int128)MEMORY[8]) >> 64;
      _RAX = v287[2].m128i_i64[1] * MEMORY[8];
      __asm
      {
        adcx    r14, rax
        adox    r15, r11
      }
      _R11 = (v287[2].m128i_u64[1] * (unsigned __int128)MEMORY[0x10]) >> 64;
      _RAX = v287[2].m128i_i64[1] * MEMORY[0x10];
      __asm
      {
        adcx    r15, rax
        adox    rsi, r11
      }
      _R11 = (v287[2].m128i_u64[1] * (unsigned __int128)MEMORY[0x18]) >> 64;
      _RAX = v287[2].m128i_i64[1] * MEMORY[0x18];
      __asm
      {
        adcx    rsi, rax
        adox    rdi, r11
      }
      _R11 = (v287[2].m128i_u64[1] * (unsigned __int128)MEMORY[0x20]) >> 64;
      _RAX = v287[2].m128i_i64[1] * MEMORY[0x20];
      __asm
      {
        adcx    rdi, rax
        adox    rbp, r11
      }
      _R11 = (v287[2].m128i_u64[1] * (unsigned __int128)MEMORY[0x28]) >> 64;
      _RAX = v287[2].m128i_i64[1] * MEMORY[0x28];
      __asm
      {
        adcx    rbp, rax
        adox    rbx, r11
      }
      _R11 = (v287[2].m128i_u64[1] * (unsigned __int128)MEMORY[0x30]) >> 64;
      _RAX = v287[2].m128i_i64[1] * MEMORY[0x30];
      __asm
      {
        adcx    rbx, rax
        adox    r12, r11
      }
      v501 = v287[2].m128i_u64[1];
      _R11 = (v501 * (unsigned __int128)MEMORY[0x38]) >> 64;
      _RAX = v287[2].m128i_i64[1] * MEMORY[0x38];
      __asm { adcx    r12, rax }
      _R10[2].m128i_i64[1] = _R13;
      _R13 = 0LL;
      __asm
      {
        adcx    r13, r13
        adox    r13, r11
      }
      __asm { adox    r14, [r10+30h] }
      _R11 = (v287[3].m128i_u64[0] * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v501 + 1)) >> 64;
      _RAX = v287[3].m128i_i64[0] * **((_QWORD **)&v501 + 1);
      __asm
      {
        adcx    r14, rax
        adox    r15, r11
      }
      _R11 = (v287[3].m128i_u64[0] * (unsigned __int128)MEMORY[8]) >> 64;
      _RAX = v287[3].m128i_i64[0] * MEMORY[8];
      __asm
      {
        adcx    r15, rax
        adox    rsi, r11
      }
      _R11 = (v287[3].m128i_u64[0] * (unsigned __int128)MEMORY[0x10]) >> 64;
      _RAX = v287[3].m128i_i64[0] * MEMORY[0x10];
      __asm
      {
        adcx    rsi, rax
        adox    rdi, r11
      }
      _R11 = (v287[3].m128i_u64[0] * (unsigned __int128)MEMORY[0x18]) >> 64;
      _RAX = v287[3].m128i_i64[0] * MEMORY[0x18];
      __asm
      {
        adcx    rdi, rax
        adox    rbp, r11
      }
      _R11 = (v287[3].m128i_u64[0] * (unsigned __int128)MEMORY[0x20]) >> 64;
      _RAX = v287[3].m128i_i64[0] * MEMORY[0x20];
      __asm
      {
        adcx    rbp, rax
        adox    rbx, r11
      }
      _R11 = (v287[3].m128i_u64[0] * (unsigned __int128)MEMORY[0x28]) >> 64;
      _RAX = v287[3].m128i_i64[0] * MEMORY[0x28];
      __asm
      {
        adcx    rbx, rax
        adox    r12, r11
      }
      _R11 = (v287[3].m128i_u64[0] * (unsigned __int128)MEMORY[0x30]) >> 64;
      _RAX = v287[3].m128i_i64[0] * MEMORY[0x30];
      __asm
      {
        adcx    r12, rax
        adox    r13, r11
      }
      v537 = v287[3].m128i_u64[0];
      _R11 = (v537 * (unsigned __int128)MEMORY[0x38]) >> 64;
      _RAX = v287[3].m128i_i64[0] * MEMORY[0x38];
      __asm { adcx    r13, rax }
      _R10[3].m128i_i64[0] = _R14;
      _R14 = 0LL;
      __asm
      {
        adcx    r14, r14
        adox    r14, r11
      }
      __asm { adox    r15, [r10+38h] }
      _R11 = (v287[3].m128i_u64[1] * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v537 + 1)) >> 64;
      _RAX = v287[3].m128i_i64[1] * **((_QWORD **)&v537 + 1);
      __asm
      {
        adcx    r15, rax
        adox    rsi, r11
      }
      _R11 = (v287[3].m128i_u64[1] * (unsigned __int128)MEMORY[8]) >> 64;
      _RAX = v287[3].m128i_i64[1] * MEMORY[8];
      __asm
      {
        adcx    rsi, rax
        adox    rdi, r11
      }
      _R11 = (v287[3].m128i_u64[1] * (unsigned __int128)MEMORY[0x10]) >> 64;
      _RAX = v287[3].m128i_i64[1] * MEMORY[0x10];
      __asm
      {
        adcx    rdi, rax
        adox    rbp, r11
      }
      _R11 = (v287[3].m128i_u64[1] * (unsigned __int128)MEMORY[0x18]) >> 64;
      _RAX = v287[3].m128i_i64[1] * MEMORY[0x18];
      __asm
      {
        adcx    rbp, rax
        adox    rbx, r11
      }
      _R11 = (v287[3].m128i_u64[1] * (unsigned __int128)MEMORY[0x20]) >> 64;
      _RAX = v287[3].m128i_i64[1] * MEMORY[0x20];
      __asm
      {
        adcx    rbx, rax
        adox    r12, r11
      }
      _R11 = (v287[3].m128i_u64[1] * (unsigned __int128)MEMORY[0x28]) >> 64;
      _RAX = v287[3].m128i_i64[1] * MEMORY[0x28];
      __asm
      {
        adcx    r12, rax
        adox    r13, r11
      }
      _R11 = (v287[3].m128i_u64[1] * (unsigned __int128)MEMORY[0x30]) >> 64;
      _RAX = v287[3].m128i_i64[1] * MEMORY[0x30];
      __asm
      {
        adcx    r13, rax
        adox    r14, r11
      }
      v567 = v287[3].m128i_u64[1];
      _R11 = (v567 * (unsigned __int128)MEMORY[0x38]) >> 64;
      _RAX = v287[3].m128i_i64[1] * MEMORY[0x38];
      __asm { adcx    r14, rax }
      _R10[3].m128i_i64[1] = _R15;
      _R15 = 0LL;
      __asm
      {
        adcx    r15, r15
        adox    r15, r11
      }
      v288 = *((_QWORD *)&v567 + 1) + 64LL;
      _R10 += 4;
    }
    v593 = __CFADD__(v622 != 0, _R10->m128i_i64[0]) | __CFADD__(_RSI, (v622 != 0) + _R10->m128i_i64[0]);
    _R10->m128i_i64[0] += _RSI + (v622 != 0);
    v571 = _R10->m128i_i64[1];
    v573 = v593;
    v593 = __CFADD__(v593, v571);
    v572 = v573 + v571;
    _R10->m128i_i64[1] = _RDI + v572;
    v574 = _R10[1].m128i_i64[0];
    v576 = v593 | (unsigned __int8)__CFADD__(_RDI, v572);
    v593 = __CFADD__(v576, v574);
    v575 = v576 + v574;
    _R10[1].m128i_i64[0] = _RBP + v575;
    v577 = _R10[1].m128i_i64[1];
    v579 = v593 | (unsigned __int8)__CFADD__(_RBP, v575);
    v593 = __CFADD__(v579, v577);
    v578 = v579 + v577;
    _R10[1].m128i_i64[1] = _RBX + v578;
    v580 = _R10[2].m128i_i64[0];
    v582 = v593 | (unsigned __int8)__CFADD__(_RBX, v578);
    v593 = __CFADD__(v582, v580);
    v581 = v582 + v580;
    _R10[2].m128i_i64[0] = _R12 + v581;
    v583 = _R10[2].m128i_i64[1];
    v585 = v593 | (unsigned __int8)__CFADD__(_R12, v581);
    v593 = __CFADD__(v585, v583);
    v584 = v585 + v583;
    _R10[2].m128i_i64[1] = _R13 + v584;
    v586 = _R10[3].m128i_i64[0];
    v588 = v593 | (unsigned __int8)__CFADD__(_R13, v584);
    v593 = __CFADD__(v588, v586);
    v587 = v588 + v586;
    _R10[3].m128i_i64[0] = _R14 + v587;
    v589 = _R10[3].m128i_i64[1];
    v591 = v593 | (unsigned __int8)__CFADD__(_R14, v587);
    v593 = __CFADD__(v591, v589);
    v590 = v591 + v589;
    _R10[3].m128i_i64[1] = _R15 + v590;
    v592 = i + (v593 | __CFADD__(_R15, v590)) + i;
    v622 = v592;
    v593 = __CFADD__(v619, 64LL);
    v3 = v619 + 4;
    v619 += 4;
    a1 = v618;
    --v621;
  }
  while ( v621 );
  v594 = *(_DWORD *)(v618 + 4);
  v595 = (_QWORD *)(v618 + 128);
  v596 = (__int64 *)a3;
  v597 = v594;
  v598 = v3;
  v599 = a3;
  do
  {
    v600 = v593 + *v595;
    v593 = v3->m128i_i64[0] < v600;
    *v596 = v3->m128i_i64[0] - v600;
    v601 = v3->m128i_u64[1];
    v602 = v593 + v595[1];
    v596[1] = v601 - v602;
    v603 = v3[1].m128i_u64[0];
    v604 = (v601 < v602) + v595[2];
    v596[2] = v603 - v604;
    v605 = v3[1].m128i_u64[1];
    v606 = (v603 < v604) + v595[3];
    v596[3] = v605 - v606;
    v607 = v3[2].m128i_u64[0];
    v608 = (v605 < v606) + v595[4];
    v596[4] = v607 - v608;
    v609 = v3[2].m128i_u64[1];
    v610 = (v607 < v608) + v595[5];
    v596[5] = v609 - v610;
    v611 = v3[3].m128i_u64[0];
    v613 = (v609 < v610) + v595[6];
    v593 = v611 < v613;
    result = v611 - v613;
    v596[6] = result;
    v614 = v3[3].m128i_u64[1];
    v615 = v593 + v595[7];
    v593 = v614 < v615;
    v596[7] = v614 - v615;
    v3 += 4;
    v595 += 8;
    v596 += 8;
    --v594;
  }
  while ( v594 );
  v616 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v592 - (unsigned int)v593), 0);
  v617 = _mm_xor_si128((__m128i)-1LL, v616);
  do
  {
    *v599 = _mm_or_si128(_mm_and_si128(_mm_load_si128(v598), v616), _mm_and_si128(_mm_load_si128(v599), v617));
    v599[1] = _mm_or_si128(_mm_and_si128(_mm_load_si128(v598 + 1), v616), _mm_and_si128(_mm_load_si128(v599 + 1), v617));
    v599[2] = _mm_or_si128(_mm_and_si128(_mm_load_si128(v598 + 2), v616), _mm_and_si128(_mm_load_si128(v599 + 2), v617));
    v599[3] = _mm_or_si128(_mm_and_si128(_mm_load_si128(v598 + 3), v616), _mm_and_si128(_mm_load_si128(v599 + 3), v617));
    v598 += 4;
    v599 += 4;
    --v597;
  }
  while ( v597 );
  return result;
}
