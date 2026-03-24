/*
 * XREFs of PopUpdateConsoleDisplayState @ 0x1407814E4
 * Callers:
 *     NtPowerInformation @ 0x1406777D0 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x140678DF4 (PopPowerInformationInternal.c)
 *     PoInitSystem @ 0x140A3F948 (PoInitSystem.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14027C284 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140281AD4 (PopAcquireRwLockExclusive.c)
 *     ZwUpdateWnfStateData @ 0x1403FDDA0 (ZwUpdateWnfStateData.c)
 *     PopCheckResiliencyScenarios @ 0x140679DA0 (PopCheckResiliencyScenarios.c)
 *     PopSetPowerSettingValueAcDc @ 0x140679E68 (PopSetPowerSettingValueAcDc.c)
 *     PopUpdateLastUserInputTime @ 0x1407815C0 (PopUpdateLastUserInputTime.c)
 *     PopSpoilBatteryEstimate @ 0x140781608 (PopSpoilBatteryEstimate.c)
 *     PopRecordDisplayState @ 0x140781738 (PopRecordDisplayState.c)
 *     PopDiagTraceConsoleDisplayState @ 0x140781784 (PopDiagTraceConsoleDisplayState.c)
 */

void __fastcall PopUpdateConsoleDisplayState(unsigned int a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  int v5; // [rsp+50h] [rbp+8h] BYREF

  if ( PopConsoleDisplayState != a1 )
  {
    PopConsoleDisplayState = a1;
    PopDiagTraceConsoleDisplayState();
    PopCheckResiliencyScenarios();
    v5 = PopConsoleDisplayState;
    PopSetPowerSettingValueAcDc(&GUID_CONSOLE_DISPLAY_STATE, 4LL, &v5);
    PopRecordDisplayState(a1);
    v5 = PopConsoleDisplayState != 0;
    PopSetPowerSettingValueAcDc(&GUID_MONITOR_POWER_ON, 4LL, &v5);
    ZwUpdateWnfStateData((__int64)&WNF_UBPM_CONSOLE_MONITOR, (__int64)&v5);
    PopSpoilBatteryEstimate(0LL);
    PopAcquireRwLockExclusive((ULONG_PTR)&PopSystemIdleLock);
    PopUpdateLastUserInputTime(v3, v2, v4);
    dword_140C0F220 = a1;
    PopReleaseRwLock((ULONG_PTR)&PopSystemIdleLock);
  }
}
