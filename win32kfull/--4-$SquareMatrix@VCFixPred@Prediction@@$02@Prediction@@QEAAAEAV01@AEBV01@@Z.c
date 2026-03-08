/*
 * XREFs of ??4?$SquareMatrix@VCFixPred@Prediction@@$02@Prediction@@QEAAAEAV01@AEBV01@@Z @ 0x1C01C24CC
 * Callers:
 *     ?Filter@tagRlsFilter@Prediction@@QEAA?AVCFixPred@2@V32@0PEAH@Z @ 0x1C01C2508 (-Filter@tagRlsFilter@Prediction@@QEAA-AVCFixPred@2@V32@0PEAH@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall Prediction::SquareMatrix<Prediction::CFixPred,3>::operator=(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // r10
  _QWORD *v4; // r8
  __int64 v5; // r9

  v2 = a2 - (_QWORD)a1;
  v3 = 3LL;
  v4 = a1;
  do
  {
    v5 = 3LL;
    do
    {
      if ( v4 != (_QWORD *)((char *)v4 + v2) )
        *v4 = *(_QWORD *)((char *)v4 + v2);
      ++v4;
      --v5;
    }
    while ( v5 );
    --v3;
  }
  while ( v3 );
  return a1;
}
