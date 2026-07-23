/*
 * XREFs of PopBsdHandleRequest @ 0x1403F76F4
 * Callers:
 *     PopClearSystemShutdownMarker @ 0x1407742B0 (PopClearSystemShutdownMarker.c)
 *     PopClearSleepMarker @ 0x140774334 (PopClearSleepMarker.c)
 *     PopSetSleepMarker @ 0x140774988 (PopSetSleepMarker.c)
 *     NtInitiatePowerAction @ 0x140775A10 (NtInitiatePowerAction.c)
 *     PopRecordSleepCheckpoint @ 0x1407773E8 (PopRecordSleepCheckpoint.c)
 *     PopClearUserShutdownMarkerWorker @ 0x14077A410 (PopClearUserShutdownMarkerWorker.c)
 *     PopSetUserShutdownMarkerWorker @ 0x14077A460 (PopSetUserShutdownMarkerWorker.c)
 *     PopBatteryApplyCompositeState @ 0x14077FB1C (PopBatteryApplyCompositeState.c)
 *     PopRecordDisplayState @ 0x140781638 (PopRecordDisplayState.c)
 *     PopClearConnectedStandbyMarker @ 0x1408E1134 (PopClearConnectedStandbyMarker.c)
 *     PopRecordAcDcState @ 0x1408E13F8 (PopRecordAcDcState.c)
 *     PopRecordLidStateWorker @ 0x1408E1450 (PopRecordLidStateWorker.c)
 *     PopRecordPhysicalPowerButton @ 0x1408E14D0 (PopRecordPhysicalPowerButton.c)
 *     PopRecordSleepCheckpointSource @ 0x1408E1624 (PopRecordSleepCheckpointSource.c)
 *     PopSetCleanShutdownMarker @ 0x1408E170C (PopSetCleanShutdownMarker.c)
 *     PopSetConnectedStandbyMarker @ 0x1408E1748 (PopSetConnectedStandbyMarker.c)
 *     PdcPoRecordButton @ 0x1408EF9F0 (PdcPoRecordButton.c)
 * Callees:
 *     PopQueueWorkItem @ 0x14032CC74 (PopQueueWorkItem.c)
 *     RtlSetSystemBootStatus @ 0x14079A8F0 (RtlSetSystemBootStatus.c)
 *     PopUpdateBsdPowerTransitionReferenceTime @ 0x1408E17D4 (PopUpdateBsdPowerTransitionReferenceTime.c)
 */

char __fastcall PopBsdHandleRequest(int a1)
{
  if ( (a1 & 8) != 0 )
  {
    PopUpdateBsdPowerTransitionReferenceTime();
    return RtlSetSystemBootStatus(RtlBsdPowerTransition, &PopBsdPowerTransition, 0x20u, 0LL);
  }
  else
  {
    PopBsdUpdateRequests |= a1;
    return PopQueueWorkItem((__int64)&PopBsdUpdateWorkItem, DelayedWorkQueue);
  }
}
