/*
 * XREFs of PopRefreshEstimateAfterSpoilingDpc @ 0x1403B6E30
 * Callers:
 *     <none>
 * Callees:
 *     PopBatteryQueueWork @ 0x14036972C (PopBatteryQueueWork.c)
 */

void PopRefreshEstimateAfterSpoilingDpc()
{
  PopBatteryQueueWork(1u);
}
