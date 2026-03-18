/*
 * XREFs of PopBsdHandleRequest @ 0x14032D1F4
 * Callers:
 *     PopSetUserShutdownMarkerWorker @ 0x140683420 (PopSetUserShutdownMarkerWorker.c)
 *     PopClearUserShutdownMarkerWorker @ 0x140683470 (PopClearUserShutdownMarkerWorker.c)
 *     PopRecordSleepCheckpointSource @ 0x140801A44 (PopRecordSleepCheckpointSource.c)
 *     PdcPoLidReliabilityUpdateCallback @ 0x1408243C0 (PdcPoLidReliabilityUpdateCallback.c)
 *     PopBatteryApplyCompositeState @ 0x140870950 (PopBatteryApplyCompositeState.c)
 *     PopRecordDisplayState @ 0x140873E40 (PopRecordDisplayState.c)
 *     PopSetConnectedStandbyMarker @ 0x14087894C (PopSetConnectedStandbyMarker.c)
 *     PopClearConnectedStandbyMarker @ 0x140980758 (PopClearConnectedStandbyMarker.c)
 *     PopClearSleepMarker @ 0x1409807E4 (PopClearSleepMarker.c)
 *     PopClearSystemShutdownMarker @ 0x140980828 (PopClearSystemShutdownMarker.c)
 *     PopRecordAcDcState @ 0x14098127C (PopRecordAcDcState.c)
 *     PopRecordLidStateWorker @ 0x1409812D0 (PopRecordLidStateWorker.c)
 *     PopRecordPhysicalPowerButton @ 0x140981350 (PopRecordPhysicalPowerButton.c)
 *     PopRecordSleepCheckpoint @ 0x1409814C0 (PopRecordSleepCheckpoint.c)
 *     PopSetCleanShutdownMarker @ 0x140981500 (PopSetCleanShutdownMarker.c)
 *     PopSetSleepMarker @ 0x140981550 (PopSetSleepMarker.c)
 *     NtInitiatePowerAction @ 0x14098B410 (NtInitiatePowerAction.c)
 *     PdcPoRecordButton @ 0x140997AD0 (PdcPoRecordButton.c)
 *     PopEvaluatePowerButtonSuppressionState @ 0x14099CB0C (PopEvaluatePowerButtonSuppressionState.c)
 * Callees:
 *     PopQueueWorkItem @ 0x14032CB04 (PopQueueWorkItem.c)
 *     PopBsdFlush @ 0x1407A69D4 (PopBsdFlush.c)
 *     PopUpdateBsdPowerTransitionReferenceTime @ 0x1407A8B38 (PopUpdateBsdPowerTransitionReferenceTime.c)
 */

char __fastcall PopBsdHandleRequest(unsigned int a1)
{
  if ( (a1 & 1) != 0 )
    PopUpdateBsdPowerTransitionReferenceTime();
  if ( (a1 & 8) != 0 )
    return PopBsdFlush(a1);
  PopBsdUpdateRequests |= a1;
  return PopQueueWorkItem((__int64)&PopBsdUpdateWorkItem, DelayedWorkQueue);
}
