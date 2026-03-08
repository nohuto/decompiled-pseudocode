/*
 * XREFs of PopBatteryQueueWork @ 0x1403C0538
 * Callers:
 *     PopBatteryWakeDpc @ 0x1403B0980 (PopBatteryWakeDpc.c)
 *     PopRefreshEstimateAfterSpoilingDpc @ 0x1403B1940 (PopRefreshEstimateAfterSpoilingDpc.c)
 *     PopBatteryIrpComplete @ 0x1405967A0 (PopBatteryIrpComplete.c)
 *     PopBatteryWorker @ 0x14086DD10 (PopBatteryWorker.c)
 *     PopBatteryUpdateCurrentState @ 0x140870E0C (PopBatteryUpdateCurrentState.c)
 *     PopSpoilBatteryEstimate @ 0x14087105C (PopSpoilBatteryEstimate.c)
 *     PopBatteryAdd @ 0x140991F80 (PopBatteryAdd.c)
 *     PopBatteryRemove @ 0x140992740 (PopBatteryRemove.c)
 *     PopUsbErrorWNFNotificationCallback @ 0x140993110 (PopUsbErrorWNFNotificationCallback.c)
 *     PoInitSystem @ 0x140B45CAC (PoInitSystem.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14033F3D0 (ExQueueWorkItem.c)
 */

void __fastcall PopBatteryQueueWork(unsigned int a1)
{
  _m_prefetchw(&PopBatteryWorkRequests);
  if ( !_InterlockedOr(&PopBatteryWorkRequests, a1) )
    ExQueueWorkItem(&PopBatteryWorkItem, DelayedWorkQueue);
}
