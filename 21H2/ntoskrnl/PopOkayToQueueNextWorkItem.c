/*
 * XREFs of PopOkayToQueueNextWorkItem @ 0x1402503C4
 * Callers:
 *     PopBsdUpdateWorker @ 0x1405CF240 (PopBsdUpdateWorker.c)
 *     PpmPerfTelemetryWorker @ 0x14061FBD0 (PpmPerfTelemetryWorker.c)
 *     PopClearUserShutdownMarkerWorker @ 0x14077A6D0 (PopClearUserShutdownMarkerWorker.c)
 *     PopSetUserShutdownMarkerWorker @ 0x14077A720 (PopSetUserShutdownMarkerWorker.c)
 *     PopExternalMonitorUpdatedWorker @ 0x1407D5900 (PopExternalMonitorUpdatedWorker.c)
 *     PopRecordLidStateWorker @ 0x1408E1560 (PopRecordLidStateWorker.c)
 *     PopDripsWatchdogScheduleNextTimer @ 0x1408EF644 (PopDripsWatchdogScheduleNextTimer.c)
 *     PopNetRefreshTimerWorkerCallback @ 0x1408F20D0 (PopNetRefreshTimerWorkerCallback.c)
 *     PopPreSleepNotifyWorker @ 0x1408F5820 (PopPreSleepNotifyWorker.c)
 *     PopCheckPowerSourceAfterRtcWakeTimerWorker @ 0x1409B3440 (PopCheckPowerSourceAfterRtcWakeTimerWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopOkayToQueueNextWorkItem(__int64 a1)
{
  return (unsigned int)_InterlockedExchange((volatile __int32 *)(a1 + 32), 0);
}
