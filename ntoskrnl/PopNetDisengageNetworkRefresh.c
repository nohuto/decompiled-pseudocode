/*
 * XREFs of PopNetDisengageNetworkRefresh @ 0x140993720
 * Callers:
 *     PopNetRefreshTimerWorkerCallback @ 0x1409938F0 (PopNetRefreshTimerWorkerCallback.c)
 *     PopNetWnfLowPowerEpochCallback @ 0x140993A30 (PopNetWnfLowPowerEpochCallback.c)
 * Callees:
 *     ZwUpdateWnfStateData @ 0x140415ED0 (ZwUpdateWnfStateData.c)
 *     PopNetSetResiliencyPhaseBias @ 0x140993978 (PopNetSetResiliencyPhaseBias.c)
 */

__int64 PopNetDisengageNetworkRefresh()
{
  __int64 result; // rax
  char v1; // [rsp+50h] [rbp+8h] BYREF

  v1 = 0;
  ZwUpdateWnfStateData((__int64)&WNF_PO_OPPORTUNISTIC_CS, (__int64)&v1);
  result = PopNetSetResiliencyPhaseBias(0LL);
  PopNetRefreshIntervalActive = 0;
  return result;
}
