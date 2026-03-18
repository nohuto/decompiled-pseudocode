/*
 * XREFs of PopUpdateConsoleDisplayState @ 0x14080D028
 * Callers:
 *     NtPowerInformation @ 0x14074F950 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x140751B78 (PopPowerInformationInternal.c)
 *     PoInitSystem @ 0x140B026CC (PoInitSystem.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402935D0 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402D66A8 (PopAcquireRwLockExclusive.c)
 *     ZwUpdateWnfStateData @ 0x14041F2A0 (ZwUpdateWnfStateData.c)
 *     PopSetPowerSettingValueAcDc @ 0x1407525EC (PopSetPowerSettingValueAcDc.c)
 *     PopUpdateLastUserInputTime @ 0x140752B6C (PopUpdateLastUserInputTime.c)
 *     PopCheckResiliencyScenarios @ 0x1407EED48 (PopCheckResiliencyScenarios.c)
 *     PopSpoilBatteryEstimate @ 0x14080D164 (PopSpoilBatteryEstimate.c)
 *     PopRecordDisplayState @ 0x14080D294 (PopRecordDisplayState.c)
 *     PopDiagTraceConsoleDisplayState @ 0x14080D2E0 (PopDiagTraceConsoleDisplayState.c)
 */

void __fastcall PopUpdateConsoleDisplayState(unsigned int a1)
{
  int v2; // [rsp+50h] [rbp+8h] BYREF

  if ( PopConsoleDisplayState != a1 )
  {
    PopConsoleDisplayState = a1;
    PopDiagTraceConsoleDisplayState();
    PopCheckResiliencyScenarios();
    v2 = PopConsoleDisplayState;
    PopSetPowerSettingValueAcDc(&GUID_CONSOLE_DISPLAY_STATE, 4u, &v2);
    PopRecordDisplayState(a1);
    v2 = PopConsoleDisplayState != 0;
    PopSetPowerSettingValueAcDc(&GUID_MONITOR_POWER_ON, 4u, &v2);
    ZwUpdateWnfStateData((__int64)&WNF_UBPM_CONSOLE_MONITOR, (__int64)&v2);
    PopSpoilBatteryEstimate(0LL);
    PopAcquireRwLockExclusive((ULONG_PTR)&PopSystemIdleLock);
    PopUpdateLastUserInputTime();
    dword_140C09600 = a1;
    PopReleaseRwLock((ULONG_PTR)&PopSystemIdleLock);
  }
}
