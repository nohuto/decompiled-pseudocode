/*
 * XREFs of SeAdjustAccessStateForTrustLabel @ 0x1409C6730
 * Callers:
 *     <none>
 * Callees:
 *     SepAdjustAccessStateForConstraints @ 0x1406B539C (SepAdjustAccessStateForConstraints.c)
 */

__int64 __fastcall SeAdjustAccessStateForTrustLabel(__int64 a1, __int64 a2, __int64 a3)
{
  return SepAdjustAccessStateForConstraints(a1, a2, 0, a3);
}
