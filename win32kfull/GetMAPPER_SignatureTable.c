/*
 * XREFs of GetMAPPER_SignatureTable @ 0x1C00F6680
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GetMAPPER_SignatureTable(__int64 a1)
{
  return *(_QWORD *)(SGDGetSessionState(a1) + 32) + 19512LL;
}
