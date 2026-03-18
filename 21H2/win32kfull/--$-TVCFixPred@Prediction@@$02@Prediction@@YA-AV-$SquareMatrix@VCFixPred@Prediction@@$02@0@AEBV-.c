/*
 * XREFs of ??$?TVCFixPred@Prediction@@$02@Prediction@@YA?AV?$SquareMatrix@VCFixPred@Prediction@@$02@0@AEBV?$Vector@VCFixPred@Prediction@@$02@0@0@Z @ 0x1C016BF32
 * Callers:
 *     ?Filter@tagRlsFilter@Prediction@@QEAA?AVCFixPred@2@V32@0PEAH@Z @ 0x1C01E6A88 (-Filter@tagRlsFilter@Prediction@@QEAA-AVCFixPred@2@V32@0PEAH@Z.c)
 * Callees:
 *     ??0?$SquareMatrix@VCFixPred@Prediction@@$02@Prediction@@QEAA@XZ @ 0x1C01E6654 (--0-$SquareMatrix@VCFixPred@Prediction@@$02@Prediction@@QEAA@XZ.c)
 */

char *__fastcall Prediction::operator^<Prediction::CFixPred,3>(char *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // r15
  char *v7; // rsi
  __int64 v8; // r14
  __int64 v9; // r12
  __int64 v10; // rax
  __int64 v11; // r8
  unsigned __int64 v12; // rdx
  __int64 v13; // rdi
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rax
  char v21; // [rsp+50h] [rbp+8h] BYREF

  Prediction::SquareMatrix<Prediction::CFixPred,3>::SquareMatrix<Prediction::CFixPred,3>();
  v6 = 0LL;
  v7 = a1;
  v8 = a3 - (_QWORD)a1;
  do
  {
    v9 = 3LL;
    do
    {
      v10 = *(_QWORD *)(a2 + 8 * v6);
      v11 = *(_QWORD *)&v7[v8];
      v12 = -v10;
      v13 = (v11 ^ v10) >> 63;
      if ( v10 >= 0 )
        v12 = *(_QWORD *)(a2 + 8 * v6);
      v14 = -*(_QWORD *)&v7[v8];
      if ( v11 >= 0 )
        v14 = *(_QWORD *)&v7[v8];
      v15 = (unsigned int)v14 * (unsigned __int64)(unsigned int)v12;
      v16 = HIDWORD(v14);
      v17 = HIDWORD(v15) + (unsigned int)v14 * HIDWORD(v12);
      v18 = v13 ^ ((unsigned int)(v17 + v12 * v16) | ((unsigned __int64)(unsigned int)((((unsigned int)v17
                                                                                       + (unsigned int)v12 * v16) >> 32)
                                                                                     + HIDWORD(v12) * v16
                                                                                     + HIDWORD(v17)) << 32));
      v19 = v18 - v13;
      if ( (_DWORD)v15 )
        v19 = v18;
      if ( v7 != &v21 )
        *(_QWORD *)v7 = v19;
      v7 += 8;
      --v9;
    }
    while ( v9 );
    ++v6;
    v8 -= 24LL;
  }
  while ( v6 < 3 );
  return a1;
}
