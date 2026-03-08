/*
 * XREFs of GetgForceFontAssocCodePage @ 0x1C00F6410
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GetgForceFontAssocCodePage(__int64 a1)
{
  return *(_QWORD *)(SGDGetSessionState(a1) + 32) + 18740LL;
}
