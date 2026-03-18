/*
 * XREFs of PopRefreshEstimateAfterSpoilingDpc @ 0x1403B6600
 * Callers:
 *     <none>
 * Callees:
 *     PopBatteryQueueWork @ 0x1403C5DF8 (PopBatteryQueueWork.c)
 */

__int64 PopRefreshEstimateAfterSpoilingDpc()
{
  return PopBatteryQueueWork(1LL);
}
