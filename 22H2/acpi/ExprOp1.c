/*
 * XREFs of ExprOp1 @ 0x1C00566A0
 * Callers:
 *     <none>
 * Callees:
 *     IsCompatableDSDTRevision @ 0x1C004BE48 (IsCompatableDSDTRevision.c)
 *     ExprOp1_32 @ 0x1C00566E0 (ExprOp1_32.c)
 *     ExprOp1_64 @ 0x1C005683C (ExprOp1_64.c)
 */

__int64 __fastcall ExprOp1(__int64 a1, __int64 a2)
{
  if ( IsCompatableDSDTRevision() )
    return ExprOp1_64(a1, a2);
  else
    return ExprOp1_32(a1, a2);
}
