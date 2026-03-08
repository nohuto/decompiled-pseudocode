/*
 * XREFs of PopOkayToQueueNextWorkItem @ 0x140302D08
 * Callers:
 *     PopSetUserShutdownMarkerWorker @ 0x140680040 (PopSetUserShutdownMarkerWorker.c)
 *     PopClearUserShutdownMarkerWorker @ 0x140680090 (PopClearUserShutdownMarkerWorker.c)
 *     PopExternalMonitorUpdatedWorker @ 0x14079C0F0 (PopExternalMonitorUpdatedWorker.c)
 *     PopThermalStateTransitionWorker @ 0x140860FF0 (PopThermalStateTransitionWorker.c)
 *     PopBsdUpdateWorker @ 0x140872C90 (PopBsdUpdateWorker.c)
 *     PpmPerfTelemetryWorker @ 0x140880450 (PpmPerfTelemetryWorker.c)
 *     PopBsdFlushWorker @ 0x14097D620 (PopBsdFlushWorker.c)
 *     PopRecordLidStateWorker @ 0x14097E220 (PopRecordLidStateWorker.c)
 *     PopPowerRequestExecutionRequiredTimeoutWorker @ 0x14097E610 (PopPowerRequestExecutionRequiredTimeoutWorker.c)
 *     PopNetRefreshTimerWorkerCallback @ 0x1409938F0 (PopNetRefreshTimerWorkerCallback.c)
 *     PopPreSleepNotifyWorker @ 0x140998F40 (PopPreSleepNotifyWorker.c)
 *     PopDripsWatchdogScheduleNextTimer @ 0x1409996C8 (PopDripsWatchdogScheduleNextTimer.c)
 *     PopCheckPowerSourceAfterRtcWakeTimerWorker @ 0x140AA3750 (PopCheckPowerSourceAfterRtcWakeTimerWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopOkayToQueueNextWorkItem(__int64 a1)
{
  return (unsigned int)_InterlockedExchange((volatile __int32 *)(a1 + 32), 0);
}
