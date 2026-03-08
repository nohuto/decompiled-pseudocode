/*
 * XREFs of PopQueueWorkItem @ 0x1402BCCB4
 * Callers:
 *     PopBsdHandleRequest @ 0x1402B8B24 (PopBsdHandleRequest.c)
 *     PopApplyLegacyPowerRequestFlags @ 0x1402B8C40 (PopApplyLegacyPowerRequestFlags.c)
 *     PopPowerRequestReferenceRelease @ 0x1402BA084 (PopPowerRequestReferenceRelease.c)
 *     PopPowerRequestReferenceAcquire @ 0x1402BBDF0 (PopPowerRequestReferenceAcquire.c)
 *     PopPowerRequestHandleRequestOverrideQueryResponse @ 0x1402BC0D8 (PopPowerRequestHandleRequestOverrideQueryResponse.c)
 *     PopCheckForIdleness @ 0x1402BC5F0 (PopCheckForIdleness.c)
 *     PopCheckAndHandleThermalConditions @ 0x14039CAB4 (PopCheckAndHandleThermalConditions.c)
 *     PopPowerRequestUnrevokeRequests @ 0x1403A5A90 (PopPowerRequestUnrevokeRequests.c)
 *     PpmPerfTelemetryCallback @ 0x1403D15E0 (PpmPerfTelemetryCallback.c)
 *     PopPowerRequestDebounceTimerCallback @ 0x1405816D0 (PopPowerRequestDebounceTimerCallback.c)
 *     PopPowerRequestExecutionRequiredTimeoutCallback @ 0x140581700 (PopPowerRequestExecutionRequiredTimeoutCallback.c)
 *     PopPowerRequestRevokeRequests @ 0x140581724 (PopPowerRequestRevokeRequests.c)
 *     PopThermalCsEntry @ 0x14058D3AC (PopThermalCsEntry.c)
 *     PopThermalCsExit @ 0x14058D42C (PopThermalCsExit.c)
 *     PopThermalSxExit @ 0x14058D8D4 (PopThermalSxExit.c)
 *     PopThermalTelemetryCallback @ 0x14058DAC0 (PopThermalTelemetryCallback.c)
 *     PopCheckPowerSourceAfterRtcWakeTimerCallback @ 0x14058DF50 (PopCheckPowerSourceAfterRtcWakeTimerCallback.c)
 *     PopKsrCallback @ 0x14058E3A0 (PopKsrCallback.c)
 *     PopNetEvaluationTimerCallback @ 0x140596A90 (PopNetEvaluationTimerCallback.c)
 *     PopNetRefreshTimerCallback @ 0x140596AC0 (PopNetRefreshTimerCallback.c)
 *     PopPowerButtonTimerCallback @ 0x140596BF0 (PopPowerButtonTimerCallback.c)
 *     PopUpdatePowerButtonHoldState @ 0x140597038 (PopUpdatePowerButtonHoldState.c)
 *     PopDripsWatchdogTimerCallback @ 0x14059C010 (PopDripsWatchdogTimerCallback.c)
 *     PopSwitchUpdateUserShutdownScenarioState @ 0x14067EF08 (PopSwitchUpdateUserShutdownScenarioState.c)
 *     PopUpdateExternalDisplayState @ 0x14079BF44 (PopUpdateExternalDisplayState.c)
 *     PoEnableCriticalShutdown @ 0x140818B24 (PoEnableCriticalShutdown.c)
 *     PopNetSetConnectivityConstraint @ 0x140860708 (PopNetSetConnectivityConstraint.c)
 *     PopDirectedDripsHandleResiliencyNotification @ 0x140980530 (PopDirectedDripsHandleResiliencyNotification.c)
 *     PopLidSwitchChangeCallback @ 0x140981400 (PopLidSwitchChangeCallback.c)
 *     PopIssueActionRequest @ 0x140986CA4 (PopIssueActionRequest.c)
 *     PopNetClearConnectivityConstraint @ 0x140993680 (PopNetClearConnectivityConstraint.c)
 *     PdcPoNetworkResiliency @ 0x140994930 (PdcPoNetworkResiliency.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14033F3D0 (ExQueueWorkItem.c)
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
