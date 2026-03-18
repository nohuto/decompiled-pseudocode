/*
 * XREFs of PopNetIsNetworkRefreshEnabled @ 0x14099691C
 * Callers:
 *     PopNetRefreshTimerWorkerCallback @ 0x1409969A0 (PopNetRefreshTimerWorkerCallback.c)
 *     PopNetWnfLowPowerEpochCallback @ 0x140996AE0 (PopNetWnfLowPowerEpochCallback.c)
 * Callees:
 *     <none>
 */

_BOOL8 PopNetIsNetworkRefreshEnabled()
{
  return (PopNetStandbyStateMask & 0x4E) == 0 && (PopNetStandbyStateMask & 0x80u) != 0 && PopEnableDsNetRefresh != 0;
}
