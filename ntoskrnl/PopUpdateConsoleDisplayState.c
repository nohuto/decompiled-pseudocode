/*
 * XREFs of PopUpdateConsoleDisplayState @ 0x140870EA4
 * Callers:
 *     NtPowerInformation @ 0x14068AB90 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x14073E108 (PopPowerInformationInternal.c)
 *     PoInitSystem @ 0x140B45CAC (PoInitSystem.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140236C40 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402BC5B0 (PopAcquireRwLockExclusive.c)
 *     ZwUpdateWnfStateData @ 0x140415ED0 (ZwUpdateWnfStateData.c)
 *     PopCheckResiliencyScenarios @ 0x14073AF4C (PopCheckResiliencyScenarios.c)
 *     PopUpdateLastUserInputTime @ 0x14073BC30 (PopUpdateLastUserInputTime.c)
 *     PopSetPowerSettingValueAcDc @ 0x14073BE70 (PopSetPowerSettingValueAcDc.c)
 *     PopRecordDisplayState @ 0x140870F80 (PopRecordDisplayState.c)
 *     PopDiagTraceConsoleDisplayState @ 0x140870FCC (PopDiagTraceConsoleDisplayState.c)
 *     PopSpoilBatteryEstimate @ 0x14087105C (PopSpoilBatteryEstimate.c)
 */

void __fastcall PopUpdateConsoleDisplayState(unsigned int a1)
{
  __int64 v2; // rdx
  int v3; // [rsp+50h] [rbp+8h] BYREF

  if ( PopConsoleDisplayState != a1 )
  {
    PopConsoleDisplayState = a1;
    PopDiagTraceConsoleDisplayState();
    PopCheckResiliencyScenarios();
    v3 = PopConsoleDisplayState;
    PopSetPowerSettingValueAcDc(&GUID_CONSOLE_DISPLAY_STATE, 4u, &v3);
    PopRecordDisplayState(a1);
    v3 = PopConsoleDisplayState != 0;
    PopSetPowerSettingValueAcDc(&GUID_MONITOR_POWER_ON, 4u, &v3);
    ZwUpdateWnfStateData((__int64)&WNF_UBPM_CONSOLE_MONITOR, (__int64)&v3);
    LOBYTE(v2) = PopConsoleDisplayState == 0;
    PopSpoilBatteryEstimate(0LL, v2);
    PopAcquireRwLockExclusive((ULONG_PTR)&PopSystemIdleLock);
    PopUpdateLastUserInputTime();
    dword_140C09810 = a1;
    PopReleaseRwLock((ULONG_PTR)&PopSystemIdleLock);
  }
}
