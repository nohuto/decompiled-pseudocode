/*
 * XREFs of PopQueueWorkItem @ 0x14032CC74
 * Callers:
 *     PpmPerfTelemetryCallback @ 0x14032CC50 (PpmPerfTelemetryCallback.c)
 *     PopCheckForIdleness @ 0x140349EF0 (PopCheckForIdleness.c)
 *     PopBsdHandleRequest @ 0x1403F76F4 (PopBsdHandleRequest.c)
 *     PopThermalCsEntry @ 0x14056F6B0 (PopThermalCsEntry.c)
 *     PopThermalCsExit @ 0x14056F730 (PopThermalCsExit.c)
 *     PopThermalTelemetryCallback @ 0x14056F810 (PopThermalTelemetryCallback.c)
 *     PopDripsWatchdogTimerCallback @ 0x1405762C0 (PopDripsWatchdogTimerCallback.c)
 *     PopCheckPowerSourceAfterRtcWakeTimerCallback @ 0x140576940 (PopCheckPowerSourceAfterRtcWakeTimerCallback.c)
 *     PopNetEvaluationTimerCallback @ 0x1405785C0 (PopNetEvaluationTimerCallback.c)
 *     PopNetRefreshTimerCallback @ 0x1405785F0 (PopNetRefreshTimerCallback.c)
 *     PopPowerButtonTimerCallback @ 0x140578720 (PopPowerButtonTimerCallback.c)
 *     PopUpdatePowerButtonHoldState @ 0x140578A94 (PopUpdatePowerButtonHoldState.c)
 *     PoUserShutdownInitiated @ 0x140776090 (PoUserShutdownInitiated.c)
 *     PoUserShutdownCancelled @ 0x140779D50 (PoUserShutdownCancelled.c)
 *     PopNetSetConnectivityConstraint @ 0x140791690 (PopNetSetConnectivityConstraint.c)
 *     PopUpdateExternalDisplayState @ 0x1407D2D38 (PopUpdateExternalDisplayState.c)
 *     PopDirectedDripsHandleResiliencyNotification @ 0x1408E31E4 (PopDirectedDripsHandleResiliencyNotification.c)
 *     PopLidSwitchChangeCallback @ 0x1408E4030 (PopLidSwitchChangeCallback.c)
 *     PdcPoNetworkResiliency @ 0x1408EF8E0 (PdcPoNetworkResiliency.c)
 *     PopNetClearConnectivityConstraint @ 0x1408F1CC4 (PopNetClearConnectivityConstraint.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14023E0C0 (ExQueueWorkItem.c)
 */

char __fastcall PopQueueWorkItem(__int64 a1, WORK_QUEUE_TYPE a2)
{
  char v2; // r8

  v2 = 0;
  if ( _InterlockedIncrement((volatile signed __int32 *)(a1 + 32)) == 1 )
  {
    ExQueueWorkItem((PWORK_QUEUE_ITEM)a1, a2);
    return 1;
  }
  return v2;
}
