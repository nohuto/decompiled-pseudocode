/*
 * XREFs of PopRefreshEstimateAfterSpoilingDpc @ 0x1403A7C70
 * Callers:
 *     <none>
 * Callees:
 *     PopBatteryQueueWork @ 0x14039AABC (PopBatteryQueueWork.c)
 */

void PopRefreshEstimateAfterSpoilingDpc()
{
  PopBatteryQueueWork(1u);
}
