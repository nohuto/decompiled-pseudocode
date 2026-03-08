/*
 * XREFs of GetgvsStateWrap @ 0x1C00F6350
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GetgvsStateWrap(__int64 a1)
{
  return *(_QWORD *)(SGDGetSessionState(a1) + 32) + 23592LL;
}
