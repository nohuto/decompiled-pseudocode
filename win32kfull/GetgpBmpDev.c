/*
 * XREFs of GetgpBmpDev @ 0x1C00F6650
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GetgpBmpDev(__int64 a1)
{
  return *(_QWORD *)(SGDGetSessionState(a1) + 32) + 8608LL;
}
