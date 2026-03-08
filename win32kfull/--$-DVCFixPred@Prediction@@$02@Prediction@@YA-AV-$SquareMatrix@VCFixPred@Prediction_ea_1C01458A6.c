/*
 * XREFs of ??$?DVCFixPred@Prediction@@$02@Prediction@@YA?AV?$SquareMatrix@VCFixPred@Prediction@@$02@0@AEBV10@AEBVCFixPred@0@@Z @ 0x1C01458A6
 * Callers:
 *     ?Filter@tagRlsFilter@Prediction@@QEAA?AVCFixPred@2@V32@0PEAH@Z @ 0x1C01C2508 (-Filter@tagRlsFilter@Prediction@@QEAA-AVCFixPred@2@V32@0PEAH@Z.c)
 * Callees:
 *     ??0?$SquareMatrix@VCFixPred@Prediction@@$02@Prediction@@QEAA@XZ @ 0x1C0145CCE (--0-$SquareMatrix@VCFixPred@Prediction@@$02@Prediction@@QEAA@XZ.c)
 */

char *__fastcall Prediction::operator*<Prediction::CFixPred,3>(char *a1, __int64 a2, __int64 *a3)
{
  __int64 v6; // r14
  char *v7; // rdi
  __int64 v8; // r12
  __int64 v9; // r15
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rbp
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rax
  char v20; // [rsp+50h] [rbp+8h] BYREF

  Prediction::SquareMatrix<Prediction::CFixPred,3>::SquareMatrix<Prediction::CFixPred,3>();
  v6 = a2 - (_QWORD)a1;
  v7 = a1;
  v8 = 3LL;
  do
  {
    v9 = 3LL;
    do
    {
      v10 = *(_QWORD *)&v7[v6];
      v11 = *a3;
      v12 = (*a3 ^ v10) >> 63;
      if ( v10 < 0 )
        v10 = -v10;
      v13 = -v11;
      if ( v11 >= 0 )
        v13 = *a3;
      v14 = (unsigned int)v13 * (unsigned __int64)(unsigned int)v10;
      v15 = HIDWORD(v13);
      v16 = HIDWORD(v14) + (unsigned int)v13 * HIDWORD(v10);
      v17 = v12 ^ ((unsigned int)(v16 + v10 * v15) | ((unsigned __int64)(unsigned int)((((unsigned int)v16
                                                                                       + (unsigned int)v10 * v15) >> 32)
                                                                                     + HIDWORD(v10) * v15
                                                                                     + HIDWORD(v16)) << 32));
      v18 = v17 - v12;
      if ( (_DWORD)v14 )
        v18 = v17;
      if ( v7 != &v20 )
        *(_QWORD *)v7 = v18;
      v7 += 8;
      --v9;
    }
    while ( v9 );
    --v8;
  }
  while ( v8 );
  return a1;
}
