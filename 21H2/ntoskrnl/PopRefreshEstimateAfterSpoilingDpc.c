/*
 * XREFs of PopRefreshEstimateAfterSpoilingDpc @ 0x1403A7DC0
 * Callers:
 *     <none>
 * Callees:
 *     PopBatteryQueueWork @ 0x14039AC0C (PopBatteryQueueWork.c)
 */

void PopRefreshEstimateAfterSpoilingDpc()
{
  PopBatteryQueueWork(1u);
}
