/*
 * XREFs of PopQueueWorkItem @ 0x14032CB04
 * Callers:
 *     PopPowerRequestReferenceRelease @ 0x14032B248 (PopPowerRequestReferenceRelease.c)
 *     PopPowerRequestReferenceAcquire @ 0x14032B648 (PopPowerRequestReferenceAcquire.c)
 *     PopPowerRequestHandleRequestOverrideQueryResponse @ 0x14032B928 (PopPowerRequestHandleRequestOverrideQueryResponse.c)
 *     PopCheckForIdleness @ 0x14032C440 (PopCheckForIdleness.c)
 *     PopBsdHandleRequest @ 0x14032D1F4 (PopBsdHandleRequest.c)
 *     PopApplyLegacyPowerRequestFlags @ 0x14032ECAC (PopApplyLegacyPowerRequestFlags.c)
 *     PopCheckAndHandleThermalConditions @ 0x140373610 (PopCheckAndHandleThermalConditions.c)
 *     PopPowerRequestUnrevokeRequests @ 0x1403AA5F0 (PopPowerRequestUnrevokeRequests.c)
 *     PpmPerfTelemetryCallback @ 0x1403D6B00 (PpmPerfTelemetryCallback.c)
 *     PopPowerRequestDebounceTimerCallback @ 0x140583C00 (PopPowerRequestDebounceTimerCallback.c)
 *     PopPowerRequestExecutionRequiredTimeoutCallback @ 0x140583C30 (PopPowerRequestExecutionRequiredTimeoutCallback.c)
 *     PopPowerRequestRevokeRequests @ 0x140583C54 (PopPowerRequestRevokeRequests.c)
 *     PopThermalCsEntry @ 0x14058F8DC (PopThermalCsEntry.c)
 *     PopThermalCsExit @ 0x14058F95C (PopThermalCsExit.c)
 *     PopThermalSxExit @ 0x14058FE04 (PopThermalSxExit.c)
 *     PopThermalTelemetryCallback @ 0x14058FFF0 (PopThermalTelemetryCallback.c)
 *     PopCheckPowerSourceAfterRtcWakeTimerCallback @ 0x140590480 (PopCheckPowerSourceAfterRtcWakeTimerCallback.c)
 *     PopKsrCallback @ 0x1405908D0 (PopKsrCallback.c)
 *     PopNetEvaluationTimerCallback @ 0x140598FB0 (PopNetEvaluationTimerCallback.c)
 *     PopNetRefreshTimerCallback @ 0x140598FE0 (PopNetRefreshTimerCallback.c)
 *     PopPowerButtonTimerCallback @ 0x140599110 (PopPowerButtonTimerCallback.c)
 *     PopUpdatePowerButtonHoldState @ 0x140599558 (PopUpdatePowerButtonHoldState.c)
 *     PopDripsWatchdogTimerCallback @ 0x14059E530 (PopDripsWatchdogTimerCallback.c)
 *     PopSwitchUpdateUserShutdownScenarioState @ 0x1406822E8 (PopSwitchUpdateUserShutdownScenarioState.c)
 *     PopUpdateExternalDisplayState @ 0x1407EAD2C (PopUpdateExternalDisplayState.c)
 *     PoEnableCriticalShutdown @ 0x140864794 (PoEnableCriticalShutdown.c)
 *     PopNetSetConnectivityConstraint @ 0x140864D18 (PopNetSetConnectivityConstraint.c)
 *     PopDirectedDripsHandleResiliencyNotification @ 0x1409835E0 (PopDirectedDripsHandleResiliencyNotification.c)
 *     PopLidSwitchChangeCallback @ 0x1409844B0 (PopLidSwitchChangeCallback.c)
 *     PopIssueActionRequest @ 0x140989D54 (PopIssueActionRequest.c)
 *     PopNetClearConnectivityConstraint @ 0x140996730 (PopNetClearConnectivityConstraint.c)
 *     PdcPoNetworkResiliency @ 0x1409979E0 (PdcPoNetworkResiliency.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402B7C00 (ExQueueWorkItem.c)
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
