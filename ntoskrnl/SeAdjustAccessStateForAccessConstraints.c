/*
 * XREFs of SeAdjustAccessStateForAccessConstraints @ 0x1407582B0
 * Callers:
 *     <none>
 * Callees:
 *     SepAdjustAccessStateForConstraints @ 0x1407582D0 (SepAdjustAccessStateForConstraints.c)
 */

__int64 __fastcall SeAdjustAccessStateForAccessConstraints(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r9

  v3 = a3;
  LOBYTE(a3) = 1;
  return SepAdjustAccessStateForConstraints(a1, a2, a3, v3);
}
