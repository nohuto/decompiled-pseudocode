/*
 * XREFs of GetgSystemAnsiCodePage @ 0x1C00F63E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GetgSystemAnsiCodePage(__int64 a1)
{
  return *(_QWORD *)(SGDGetSessionState(a1) + 32) + 18744LL;
}
