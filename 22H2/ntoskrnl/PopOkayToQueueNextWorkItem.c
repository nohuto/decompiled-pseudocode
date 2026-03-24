/*
 * XREFs of PopOkayToQueueNextWorkItem @ 0x14032B274
 * Callers:
 *     PopBsdUpdateWorker @ 0x1405CF240 (PopBsdUpdateWorker.c)
 *     PpmPerfTelemetryWorker @ 0x1406A36D0 (PpmPerfTelemetryWorker.c)
 *     PopClearUserShutdownMarkerWorker @ 0x14077A410 (PopClearUserShutdownMarkerWorker.c)
 *     PopSetUserShutdownMarkerWorker @ 0x14077A460 (PopSetUserShutdownMarkerWorker.c)
 *     PopExternalMonitorUpdatedWorker @ 0x1407D56B0 (PopExternalMonitorUpdatedWorker.c)
 *     PopRecordLidStateWorker @ 0x1408E1450 (PopRecordLidStateWorker.c)
 *     PopDripsWatchdogScheduleNextTimer @ 0x1408EF534 (PopDripsWatchdogScheduleNextTimer.c)
 *     PopNetRefreshTimerWorkerCallback @ 0x1408F1FC0 (PopNetRefreshTimerWorkerCallback.c)
 *     PopPreSleepNotifyWorker @ 0x1408F5710 (PopPreSleepNotifyWorker.c)
 *     PopCheckPowerSourceAfterRtcWakeTimerWorker @ 0x1409B2650 (PopCheckPowerSourceAfterRtcWakeTimerWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopOkayToQueueNextWorkItem(__int64 a1)
{
  return (unsigned int)_InterlockedExchange((volatile __int32 *)(a1 + 32), 0);
}
