/*
 * XREFs of GetgpDefITable @ 0x1C00F6620
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GetgpDefITable(__int64 a1)
{
  return *(_QWORD *)(SGDGetSessionState(a1) + 32) + 19928LL;
}
