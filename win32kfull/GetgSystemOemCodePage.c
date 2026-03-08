/*
 * XREFs of GetgSystemOemCodePage @ 0x1C00F63B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GetgSystemOemCodePage(__int64 a1)
{
  return *(_QWORD *)(SGDGetSessionState(a1) + 32) + 18746LL;
}
