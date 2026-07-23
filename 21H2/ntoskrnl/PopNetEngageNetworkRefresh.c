/*
 * XREFs of PopNetEngageNetworkRefresh @ 0x1408F1EC8
 * Callers:
 *     PopNetRefreshTimerWorkerCallback @ 0x1408F20D0 (PopNetRefreshTimerWorkerCallback.c)
 * Callees:
 *     ZwUpdateWnfStateData @ 0x1403FDF80 (ZwUpdateWnfStateData.c)
 *     PopNetSetResiliencyPhaseBias @ 0x1408F2158 (PopNetSetResiliencyPhaseBias.c)
 */

NTSTATUS __fastcall PopNetEngageNetworkRefresh(__int64 a1)
{
  NTSTATUS result; // eax
  char Buffer; // [rsp+50h] [rbp+8h] BYREF

  LOBYTE(a1) = 1;
  PopNetSetResiliencyPhaseBias(a1);
  Buffer = 1;
  result = ZwUpdateWnfStateData(&WNF_PO_OPPORTUNISTIC_CS, &Buffer, 1u, 0LL, 0LL, 0, 0);
  PopNetRefreshIntervalActive = 1;
  return result;
}
