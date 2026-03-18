/*
 * XREFs of PopBatteryQueueWork @ 0x1403C5DF8
 * Callers:
 *     PopBatteryWakeDpc @ 0x1403B5610 (PopBatteryWakeDpc.c)
 *     PopRefreshEstimateAfterSpoilingDpc @ 0x1403B6600 (PopRefreshEstimateAfterSpoilingDpc.c)
 *     PopBatteryIrpComplete @ 0x140598CC0 (PopBatteryIrpComplete.c)
 *     PopBatteryWorker @ 0x140870230 (PopBatteryWorker.c)
 *     PopBatteryUpdateCurrentState @ 0x140873CCC (PopBatteryUpdateCurrentState.c)
 *     PopSpoilBatteryEstimate @ 0x140873F1C (PopSpoilBatteryEstimate.c)
 *     PopBatteryAdd @ 0x140995030 (PopBatteryAdd.c)
 *     PopBatteryRemove @ 0x1409957F0 (PopBatteryRemove.c)
 *     PopUsbErrorWNFNotificationCallback @ 0x1409961C0 (PopUsbErrorWNFNotificationCallback.c)
 *     PoInitSystem @ 0x140B50B30 (PoInitSystem.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402B7C00 (ExQueueWorkItem.c)
 */

void __fastcall PopBatteryQueueWork(unsigned int a1)
{
  _m_prefetchw(&PopBatteryWorkRequests);
  if ( !_InterlockedOr(&PopBatteryWorkRequests, a1) )
    ExQueueWorkItem(&PopBatteryWorkItem, DelayedWorkQueue);
}
