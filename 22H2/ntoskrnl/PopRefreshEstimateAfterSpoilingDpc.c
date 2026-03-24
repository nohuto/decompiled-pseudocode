/*
 * XREFs of PopRefreshEstimateAfterSpoilingDpc @ 0x1403A7570
 * Callers:
 *     <none>
 * Callees:
 *     PopBatteryQueueWork @ 0x14039A3BC (PopBatteryQueueWork.c)
 */

void PopRefreshEstimateAfterSpoilingDpc()
{
  PopBatteryQueueWork(1u);
}
