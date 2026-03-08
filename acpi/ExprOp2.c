/*
 * XREFs of ExprOp2 @ 0x1C00569A0
 * Callers:
 *     <none>
 * Callees:
 *     ExprOp2_32 @ 0x1C0006642 (ExprOp2_32.c)
 *     IsCompatableDSDTRevision @ 0x1C004BE28 (IsCompatableDSDTRevision.c)
 *     ExprOp2_64 @ 0x1C00569E0 (ExprOp2_64.c)
 */

__int64 __fastcall ExprOp2(__int64 a1, _QWORD *a2)
{
  if ( IsCompatableDSDTRevision() )
    return ExprOp2_64(a1, a2);
  else
    return ExprOp2_32(a1, a2);
}
