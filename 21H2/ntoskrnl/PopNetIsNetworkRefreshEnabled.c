/*
 * XREFs of PopNetIsNetworkRefreshEnabled @ 0x1408F1EE4
 * Callers:
 *     PopNetRefreshTimerWorkerCallback @ 0x1408F1F70 (PopNetRefreshTimerWorkerCallback.c)
 *     PopNetWnfLowPowerEpochCallback @ 0x1408F20B0 (PopNetWnfLowPowerEpochCallback.c)
 * Callees:
 *     <none>
 */

_BOOL8 PopNetIsNetworkRefreshEnabled()
{
  return (PopNetStandbyStateMask & 0x4E) == 0 && (PopNetStandbyStateMask & 0x80u) != 0 && PopEnableDsNetRefresh != 0;
}
