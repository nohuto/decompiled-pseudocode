/*
 * XREFs of ??$?DVCFixPred@Prediction@@$02@Prediction@@YA?AV?$Vector@VCFixPred@Prediction@@$02@0@AEBV?$SquareMatrix@VCFixPred@Prediction@@$02@0@AEBV10@@Z @ 0x1C01E64B8
 * Callers:
 *     ?Filter@tagRlsFilter@Prediction@@QEAA?AVCFixPred@2@V32@0PEAH@Z @ 0x1C01E6A88 (-Filter@tagRlsFilter@Prediction@@QEAA-AVCFixPred@2@V32@0PEAH@Z.c)
 * Callees:
 *     ??0?$Vector@VCFixPred@Prediction@@$02@Prediction@@QEAA@XZ @ 0x1C01E66B0 (--0-$Vector@VCFixPred@Prediction@@$02@Prediction@@QEAA@XZ.c)
 */

char *__fastcall Prediction::operator*<Prediction::CFixPred,3>(char *a1, __int64 a2, unsigned __int64 *a3)
{
  char *v4; // r14
  __int64 v5; // r13
  __int64 v6; // rsi
  unsigned __int64 *v7; // r15
  __int64 v8; // r12
  __int64 v9; // rax
  unsigned __int64 v10; // rdx
  __int64 v11; // rdi
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rax
  char v22; // [rsp+78h] [rbp+20h] BYREF

  v4 = a1;
  Prediction::Vector<Prediction::CFixPred,3>::Vector<Prediction::CFixPred,3>();
  v5 = 3LL;
  v6 = a2 - (_QWORD)a3;
  do
  {
    v7 = a3;
    v8 = 3LL;
    do
    {
      v9 = *(unsigned __int64 *)((char *)v7 + v6);
      v10 = -v9;
      v11 = (__int64)(*v7 ^ v9) >> 63;
      if ( v9 >= 0 )
        v10 = *(unsigned __int64 *)((char *)v7 + v6);
      v12 = -(__int64)*v7;
      if ( (*v7 & 0x8000000000000000uLL) == 0LL )
        v12 = *v7;
      v13 = (unsigned int)v12 * (unsigned __int64)(unsigned int)v10;
      v14 = HIDWORD(v12);
      v15 = HIDWORD(v13) + (unsigned int)v12 * HIDWORD(v10);
      v16 = v11 ^ ((unsigned int)(v15 + v10 * v14) | ((unsigned __int64)(unsigned int)((((unsigned int)v15
                                                                                       + (unsigned int)v10 * v14) >> 32)
                                                                                     + HIDWORD(v10) * v14
                                                                                     + HIDWORD(v15)) << 32));
      v17 = v16 - v11;
      if ( (_DWORD)v13 )
        v17 = v16;
      v18 = *(_QWORD *)v4 + v17;
      if ( v4 != &v22 )
        *(_QWORD *)v4 = v18;
      ++v7;
      --v8;
    }
    while ( v8 );
    v4 += 8;
    v6 += 24LL;
    --v5;
  }
  while ( v5 );
  return a1;
}
