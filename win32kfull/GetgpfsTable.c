/*
 * XREFs of GetgpfsTable @ 0x1C00F6590
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GetgpfsTable(__int64 a1)
{
  return *(_QWORD *)(SGDGetSessionState(a1) + 32) + 19472LL;
}
