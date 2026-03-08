/*
 * XREFs of ?diag@?$SquareMatrix@VCFixPred@Prediction@@$02@Prediction@@QEAAXAEBVCFixPred@2@@Z @ 0x1C01C3EF8
 * Callers:
 *     ?Filter@tagRlsFilter@Prediction@@QEAA?AVCFixPred@2@V32@0PEAH@Z @ 0x1C01C2508 (-Filter@tagRlsFilter@Prediction@@QEAA-AVCFixPred@2@V32@0PEAH@Z.c)
 *     ?vInit@tagRlsFilter@Prediction@@QEAAXVCFixPred@2@000@Z @ 0x1C01C40C0 (-vInit@tagRlsFilter@Prediction@@QEAAXVCFixPred@2@000@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Prediction::SquareMatrix<Prediction::CFixPred,3>::diag(__int64 a1, __int64 *a2)
{
  __int64 v2; // r10
  __int64 i; // r9
  __int64 j; // r8
  __int64 result; // rax
  __int64 *v7; // rcx

  v2 = 0LL;
  for ( i = 0LL; i < 9; i += 3LL )
  {
    for ( j = 0LL; j < 3; ++j )
    {
      if ( v2 == j )
      {
        result = i + j;
        v7 = (__int64 *)(a1 + 8 * (i + j));
        if ( v7 != a2 )
        {
          result = *a2;
          *v7 = *a2;
        }
      }
    }
    ++v2;
  }
  return result;
}
