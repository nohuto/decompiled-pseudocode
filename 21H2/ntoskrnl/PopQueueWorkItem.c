/*
 * XREFs of PopQueueWorkItem @ 0x140251CA4
 * Callers:
 *     PpmPerfTelemetryCallback @ 0x140251C80 (PpmPerfTelemetryCallback.c)
 *     PopCheckForIdleness @ 0x14026F120 (PopCheckForIdleness.c)
 *     PopBsdHandleRequest @ 0x1403F8020 (PopBsdHandleRequest.c)
 *     PopThermalCsEntry @ 0x14056F9B0 (PopThermalCsEntry.c)
 *     PopThermalCsExit @ 0x14056FA30 (PopThermalCsExit.c)
 *     PopThermalTelemetryCallback @ 0x14056FB10 (PopThermalTelemetryCallback.c)
 *     PopDripsWatchdogTimerCallback @ 0x1405765C0 (PopDripsWatchdogTimerCallback.c)
 *     PopCheckPowerSourceAfterRtcWakeTimerCallback @ 0x140576C40 (PopCheckPowerSourceAfterRtcWakeTimerCallback.c)
 *     PopNetEvaluationTimerCallback @ 0x1405788C0 (PopNetEvaluationTimerCallback.c)
 *     PopNetRefreshTimerCallback @ 0x1405788F0 (PopNetRefreshTimerCallback.c)
 *     PopPowerButtonTimerCallback @ 0x140578A20 (PopPowerButtonTimerCallback.c)
 *     PopUpdatePowerButtonHoldState @ 0x140578D94 (PopUpdatePowerButtonHoldState.c)
 *     PoUserShutdownInitiated @ 0x1407757F0 (PoUserShutdownInitiated.c)
 *     PoUserShutdownCancelled @ 0x14077A010 (PoUserShutdownCancelled.c)
 *     PopNetSetConnectivityConstraint @ 0x140796A00 (PopNetSetConnectivityConstraint.c)
 *     PopUpdateExternalDisplayState @ 0x1407D2F88 (PopUpdateExternalDisplayState.c)
 *     PopDirectedDripsHandleResiliencyNotification @ 0x1408E32F4 (PopDirectedDripsHandleResiliencyNotification.c)
 *     PopLidSwitchChangeCallback @ 0x1408E4140 (PopLidSwitchChangeCallback.c)
 *     PdcPoNetworkResiliency @ 0x1408EF9F0 (PdcPoNetworkResiliency.c)
 *     PopNetClearConnectivityConstraint @ 0x1408F1DD4 (PopNetClearConnectivityConstraint.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402E2FA0 (ExQueueWorkItem.c)
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
