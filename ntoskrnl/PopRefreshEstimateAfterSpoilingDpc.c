/*
 * XREFs of PopRefreshEstimateAfterSpoilingDpc @ 0x1403B1940
 * Callers:
 *     <none>
 * Callees:
 *     PopBatteryQueueWork @ 0x1403C0538 (PopBatteryQueueWork.c)
 */

__int64 PopRefreshEstimateAfterSpoilingDpc()
{
  return PopBatteryQueueWork(1LL);
}
