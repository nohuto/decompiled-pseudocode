/*
 * XREFs of PopNetEngageNetworkRefresh @ 0x14099376C
 * Callers:
 *     PopNetRefreshTimerWorkerCallback @ 0x1409938F0 (PopNetRefreshTimerWorkerCallback.c)
 * Callees:
 *     ZwUpdateWnfStateData @ 0x140415ED0 (ZwUpdateWnfStateData.c)
 *     PopNetSetResiliencyPhaseBias @ 0x140993978 (PopNetSetResiliencyPhaseBias.c)
 */

__int64 __fastcall PopNetEngageNetworkRefresh(__int64 a1)
{
  __int64 result; // rax
  char v2; // [rsp+50h] [rbp+8h] BYREF

  LOBYTE(a1) = 1;
  PopNetSetResiliencyPhaseBias(a1);
  v2 = 1;
  result = ZwUpdateWnfStateData((__int64)&WNF_PO_OPPORTUNISTIC_CS, (__int64)&v2);
  PopNetRefreshIntervalActive = 1;
  return result;
}
