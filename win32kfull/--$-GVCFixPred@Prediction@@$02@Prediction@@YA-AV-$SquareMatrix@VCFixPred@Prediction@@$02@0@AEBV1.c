/*
 * XREFs of ??$?GVCFixPred@Prediction@@$02@Prediction@@YA?AV?$SquareMatrix@VCFixPred@Prediction@@$02@0@AEBV10@0@Z @ 0x1C01C2454
 * Callers:
 *     ?Filter@tagRlsFilter@Prediction@@QEAA?AVCFixPred@2@V32@0PEAH@Z @ 0x1C01C2508 (-Filter@tagRlsFilter@Prediction@@QEAA-AVCFixPred@2@V32@0PEAH@Z.c)
 * Callees:
 *     ??0?$SquareMatrix@VCFixPred@Prediction@@$02@Prediction@@QEAA@XZ @ 0x1C0145CCE (--0-$SquareMatrix@VCFixPred@Prediction@@$02@Prediction@@QEAA@XZ.c)
 */

char *__fastcall Prediction::operator-<Prediction::CFixPred,3>(char *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rsi
  __int64 v7; // r10
  __int64 v8; // rdi
  char *v9; // r9
  __int64 v10; // rdx
  char v12; // [rsp+30h] [rbp+8h] BYREF

  Prediction::SquareMatrix<Prediction::CFixPred,3>::SquareMatrix<Prediction::CFixPred,3>(a1);
  v6 = a2 - a3;
  v7 = 3LL;
  v8 = a3 - (_QWORD)a1;
  v9 = a1;
  do
  {
    v10 = 3LL;
    do
    {
      if ( v9 != &v12 )
        *(_QWORD *)v9 = *(_QWORD *)&v9[v8 + v6] - *(_QWORD *)&v9[v8];
      v9 += 8;
      --v10;
    }
    while ( v10 );
    --v7;
  }
  while ( v7 );
  return a1;
}
