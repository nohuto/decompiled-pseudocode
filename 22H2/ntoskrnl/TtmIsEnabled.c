/*
 * XREFs of TtmIsEnabled @ 0x1407A65A0
 * Callers:
 *     PopPowerRequestCreateUserModeRequest @ 0x14036D81C (PopPowerRequestCreateUserModeRequest.c)
 *     PopPowerSourceChangeCallback @ 0x1403838F0 (PopPowerSourceChangeCallback.c)
 *     NtPowerInformation @ 0x140784430 (NtPowerInformation.c)
 *     PopAdaptiveGetConsoleSessionState @ 0x1407A65C8 (PopAdaptiveGetConsoleSessionState.c)
 *     PopPowerRequestDelete @ 0x1407A6CA0 (PopPowerRequestDelete.c)
 *     PopProcessSessionDisplayStateChange @ 0x1407A9788 (PopProcessSessionDisplayStateChange.c)
 *     PopNotifyConsoleUserPresent @ 0x1407D3CC4 (PopNotifyConsoleUserPresent.c)
 *     PopPowerRequestCallbackDisplayRequired @ 0x1407D3D80 (PopPowerRequestCallbackDisplayRequired.c)
 *     TtmInit @ 0x140802F88 (TtmInit.c)
 *     PopPowerRequestNotifyUserSessionAttributed @ 0x1409818C4 (PopPowerRequestNotifyUserSessionAttributed.c)
 *     PopExecutePowerAction @ 0x1409898A4 (PopExecutePowerAction.c)
 *     PopIssueActionRequest @ 0x140989D54 (PopIssueActionRequest.c)
 *     PopPowerAggregatorHandleSystemTransitionEndIntent @ 0x140993A90 (PopPowerAggregatorHandleSystemTransitionEndIntent.c)
 *     PopPowerAggregatorNotifyCsStateExited @ 0x140993BD4 (PopPowerAggregatorNotifyCsStateExited.c)
 *     PopControlMonitor @ 0x140997E20 (PopControlMonitor.c)
 *     TtmpAcquireSessionById @ 0x1409A4FE0 (TtmpAcquireSessionById.c)
 *     TtmDispatchApi @ 0x1409A603C (TtmDispatchApi.c)
 *     PopPowerRequestInitialize @ 0x140B66098 (PopPowerRequestInitialize.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140287350 (PsIsCurrentThreadInServerSilo.c)
 */

char TtmIsEnabled()
{
  char v0; // bl

  v0 = 1;
  if ( TtmpEnabled != 1 || PsIsCurrentThreadInServerSilo() )
    return 0;
  return v0;
}
