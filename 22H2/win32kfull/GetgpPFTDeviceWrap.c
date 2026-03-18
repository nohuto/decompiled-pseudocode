/*
 * XREFs of GetgpPFTDeviceWrap @ 0x1C026B9B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GetgpPFTDeviceWrap(__int64 a1)
{
  return *(_QWORD *)(SGDGetSessionState(a1) + 32) + 20280LL;
}
