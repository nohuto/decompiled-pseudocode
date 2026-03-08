/*
 * XREFs of PopBsdHandleRequest @ 0x1402B8B24
 * Callers:
 *     PopSetUserShutdownMarkerWorker @ 0x140680040 (PopSetUserShutdownMarkerWorker.c)
 *     PopClearUserShutdownMarkerWorker @ 0x140680090 (PopClearUserShutdownMarkerWorker.c)
 *     PopRecordSleepCheckpointSource @ 0x1407FCD94 (PopRecordSleepCheckpointSource.c)
 *     PdcPoLidReliabilityUpdateCallback @ 0x140828FA0 (PdcPoLidReliabilityUpdateCallback.c)
 *     PopBatteryApplyCompositeState @ 0x14086E430 (PopBatteryApplyCompositeState.c)
 *     PopRecordDisplayState @ 0x140870F80 (PopRecordDisplayState.c)
 *     PopSetConnectedStandbyMarker @ 0x140879CCC (PopSetConnectedStandbyMarker.c)
 *     PopClearConnectedStandbyMarker @ 0x14097D6A8 (PopClearConnectedStandbyMarker.c)
 *     PopClearSleepMarker @ 0x14097D734 (PopClearSleepMarker.c)
 *     PopClearSystemShutdownMarker @ 0x14097D778 (PopClearSystemShutdownMarker.c)
 *     PopRecordAcDcState @ 0x14097E1CC (PopRecordAcDcState.c)
 *     PopRecordLidStateWorker @ 0x14097E220 (PopRecordLidStateWorker.c)
 *     PopRecordPhysicalPowerButton @ 0x14097E2A0 (PopRecordPhysicalPowerButton.c)
 *     PopRecordSleepCheckpoint @ 0x14097E410 (PopRecordSleepCheckpoint.c)
 *     PopSetCleanShutdownMarker @ 0x14097E450 (PopSetCleanShutdownMarker.c)
 *     PopSetSleepMarker @ 0x14097E4A0 (PopSetSleepMarker.c)
 *     NtInitiatePowerAction @ 0x140988360 (NtInitiatePowerAction.c)
 *     PdcPoRecordButton @ 0x140994A20 (PdcPoRecordButton.c)
 *     PopEvaluatePowerButtonSuppressionState @ 0x140999A7C (PopEvaluatePowerButtonSuppressionState.c)
 * Callees:
 *     PopQueueWorkItem @ 0x1402BCCB4 (PopQueueWorkItem.c)
 *     PopUpdateBsdPowerTransitionReferenceTime @ 0x14073A984 (PopUpdateBsdPowerTransitionReferenceTime.c)
 *     PopBsdFlush @ 0x14073AE24 (PopBsdFlush.c)
 */

__int64 __fastcall PopBsdHandleRequest(unsigned int a1)
{
  if ( (a1 & 1) != 0 )
    PopUpdateBsdPowerTransitionReferenceTime();
  if ( (a1 & 8) != 0 )
    return PopBsdFlush(a1);
  PopBsdUpdateRequests |= a1;
  return PopQueueWorkItem(&PopBsdUpdateWorkItem, 1LL);
}
