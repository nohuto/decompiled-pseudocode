/*
 * XREFs of TtmIsEnabled @ 0x14073C8BC
 * Callers:
 *     PopPowerRequestCreateUserModeRequest @ 0x1402B8EEC (PopPowerRequestCreateUserModeRequest.c)
 *     PopPowerSourceChangeCallback @ 0x140380CA0 (PopPowerSourceChangeCallback.c)
 *     NtPowerInformation @ 0x14068AB90 (NtPowerInformation.c)
 *     PopNotifyConsoleUserPresent @ 0x14073A3BC (PopNotifyConsoleUserPresent.c)
 *     PopPowerRequestCallbackDisplayRequired @ 0x14073A470 (PopPowerRequestCallbackDisplayRequired.c)
 *     PopPowerRequestDelete @ 0x14073B0E0 (PopPowerRequestDelete.c)
 *     PopAdaptiveGetConsoleSessionState @ 0x14073C624 (PopAdaptiveGetConsoleSessionState.c)
 *     PopProcessSessionDisplayStateChange @ 0x140757094 (PopProcessSessionDisplayStateChange.c)
 *     TtmInit @ 0x14080E764 (TtmInit.c)
 *     PopPowerRequestNotifyUserSessionAttributed @ 0x14097E814 (PopPowerRequestNotifyUserSessionAttributed.c)
 *     PopExecutePowerAction @ 0x1409867F4 (PopExecutePowerAction.c)
 *     PopIssueActionRequest @ 0x140986CA4 (PopIssueActionRequest.c)
 *     PopPowerAggregatorHandleSystemTransitionEndIntent @ 0x1409909E0 (PopPowerAggregatorHandleSystemTransitionEndIntent.c)
 *     PopPowerAggregatorNotifyCsStateExited @ 0x140990B24 (PopPowerAggregatorNotifyCsStateExited.c)
 *     PopControlMonitor @ 0x140994D70 (PopControlMonitor.c)
 *     TtmpAcquireSessionById @ 0x1409A1F50 (TtmpAcquireSessionById.c)
 *     TtmDispatchApi @ 0x1409A2FAC (TtmDispatchApi.c)
 *     PopPowerRequestInitialize @ 0x140B62754 (PopPowerRequestInitialize.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x1402459D0 (PsIsCurrentThreadInServerSilo.c)
 */

char __fastcall TtmIsEnabled(__int64 a1, __int64 a2)
{
  char v2; // bl

  v2 = 1;
  if ( TtmpEnabled != 1 || PsIsCurrentThreadInServerSilo(a1, a2) )
    return 0;
  return v2;
}
