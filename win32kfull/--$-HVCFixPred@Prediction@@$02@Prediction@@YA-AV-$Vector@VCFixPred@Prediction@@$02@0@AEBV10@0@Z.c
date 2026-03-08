/*
 * XREFs of ??$?HVCFixPred@Prediction@@$02@Prediction@@YA?AV?$Vector@VCFixPred@Prediction@@$02@0@AEBV10@0@Z @ 0x1C0145ABE
 * Callers:
 *     ?Filter@tagRlsFilter@Prediction@@QEAA?AVCFixPred@2@V32@0PEAH@Z @ 0x1C01C2508 (-Filter@tagRlsFilter@Prediction@@QEAA-AVCFixPred@2@V32@0PEAH@Z.c)
 * Callees:
 *     ??0?$Vector@VCFixPred@Prediction@@$02@Prediction@@QEAA@XZ @ 0x1C0145D2A (--0-$Vector@VCFixPred@Prediction@@$02@Prediction@@QEAA@XZ.c)
 */

char *__fastcall Prediction::operator+<Prediction::CFixPred,3>(char *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rsi
  char *v7; // r9
  __int64 v8; // rdi
  __int64 v9; // r10
  char v11; // [rsp+30h] [rbp+8h] BYREF

  Prediction::Vector<Prediction::CFixPred,3>::Vector<Prediction::CFixPred,3>();
  v6 = a2 - a3;
  v7 = a1;
  v8 = a3 - (_QWORD)a1;
  v9 = 3LL;
  do
  {
    if ( v7 != &v11 )
      *(_QWORD *)v7 = *(_QWORD *)&v7[v8] + *(_QWORD *)&v7[v8 + v6];
    v7 += 8;
    --v9;
  }
  while ( v9 );
  return a1;
}
