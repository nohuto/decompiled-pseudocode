/*
 * XREFs of PopUpdateConsoleDisplayState @ 0x1407813E4
 * Callers:
 *     NtPowerInformation @ 0x1406F05C0 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x1406F1BE4 (PopPowerInformationInternal.c)
 *     PoInitSystem @ 0x140A3ED78 (PoInitSystem.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140345294 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14034AAE4 (PopAcquireRwLockExclusive.c)
 *     ZwUpdateWnfStateData @ 0x1403FD420 (ZwUpdateWnfStateData.c)
 *     PopCheckResiliencyScenarios @ 0x1406F2B90 (PopCheckResiliencyScenarios.c)
 *     PopSetPowerSettingValueAcDc @ 0x1406F2C58 (PopSetPowerSettingValueAcDc.c)
 *     PopUpdateLastUserInputTime @ 0x1407814C0 (PopUpdateLastUserInputTime.c)
 *     PopSpoilBatteryEstimate @ 0x140781508 (PopSpoilBatteryEstimate.c)
 *     PopRecordDisplayState @ 0x140781638 (PopRecordDisplayState.c)
 *     PopDiagTraceConsoleDisplayState @ 0x140781684 (PopDiagTraceConsoleDisplayState.c)
 */

void __fastcall PopUpdateConsoleDisplayState(unsigned int a1)
{
  int Buffer; // [rsp+50h] [rbp+8h] BYREF

  if ( PopConsoleDisplayState != a1 )
  {
    PopConsoleDisplayState = a1;
    PopDiagTraceConsoleDisplayState();
    PopCheckResiliencyScenarios();
    Buffer = PopConsoleDisplayState;
    PopSetPowerSettingValueAcDc(&GUID_CONSOLE_DISPLAY_STATE, 4LL, &Buffer);
    PopRecordDisplayState(a1);
    Buffer = PopConsoleDisplayState != 0;
    PopSetPowerSettingValueAcDc(&GUID_MONITOR_POWER_ON, 4LL, &Buffer);
    ZwUpdateWnfStateData(&WNF_UBPM_CONSOLE_MONITOR, &Buffer, 4u, 0LL, 0LL, 0, 0);
    PopSpoilBatteryEstimate(0LL);
    PopAcquireRwLockExclusive((ULONG_PTR)&PopSystemIdleLock);
    PopUpdateLastUserInputTime();
    dword_140C0F220 = a1;
    PopReleaseRwLock((ULONG_PTR)&PopSystemIdleLock);
  }
}
