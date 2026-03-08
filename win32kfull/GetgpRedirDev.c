/*
 * XREFs of GetgpRedirDev @ 0x1C00F65F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GetgpRedirDev(__int64 a1)
{
  return *(_QWORD *)(SGDGetSessionState(a1) + 32) + 23376LL;
}
