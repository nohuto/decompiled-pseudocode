/*
 * XREFs of PopBatteryQueueWork @ 0x14039A3BC
 * Callers:
 *     PopBatteryWakeDpc @ 0x1403A73C0 (PopBatteryWakeDpc.c)
 *     PopRefreshEstimateAfterSpoilingDpc @ 0x1403A7570 (PopRefreshEstimateAfterSpoilingDpc.c)
 *     PopBatteryIrpComplete @ 0x140573D50 (PopBatteryIrpComplete.c)
 *     PopBatteryWorker @ 0x14077F710 (PopBatteryWorker.c)
 *     PopSpoilBatteryEstimate @ 0x140781508 (PopSpoilBatteryEstimate.c)
 *     PopBatteryUpdateCurrentState @ 0x14078E378 (PopBatteryUpdateCurrentState.c)
 *     PopBatteryAdd @ 0x1408ECE40 (PopBatteryAdd.c)
 *     PopBatteryRemove @ 0x1408ED670 (PopBatteryRemove.c)
 *     PopUsbErrorWNFNotificationCallback @ 0x1408EDEA0 (PopUsbErrorWNFNotificationCallback.c)
 *     PoInitSystem @ 0x140A3ED78 (PoInitSystem.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14023E0C0 (ExQueueWorkItem.c)
 */

void __fastcall PopBatteryQueueWork(unsigned int a1)
{
  _m_prefetchw(&PopBatteryWorkRequests);
  if ( !_InterlockedOr(&PopBatteryWorkRequests, a1) )
    ExQueueWorkItem(&PopBatteryWorkItem, DelayedWorkQueue);
}
