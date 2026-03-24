/*
 * XREFs of PopSetPowerSettingValueAcDc @ 0x1406F2C58
 * Callers:
 *     PopScanIdleList @ 0x140349888 (PopScanIdleList.c)
 *     PdcPoLowPower @ 0x1403CBFC0 (PdcPoLowPower.c)
 *     PopErratumUpdateCallback @ 0x14056ED30 (PopErratumUpdateCallback.c)
 *     PopSessionWinlogonNotification @ 0x1405D8DC4 (PopSessionWinlogonNotification.c)
 *     NtPowerInformation @ 0x1406F05C0 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x1406F1BE4 (PopPowerInformationInternal.c)
 *     PopEvaluateGlobalUserStatus @ 0x1407256C8 (PopEvaluateGlobalUserStatus.c)
 *     PopBatteryApplyCompositeState @ 0x14077FB1C (PopBatteryApplyCompositeState.c)
 *     PopUpdateConsoleDisplayState @ 0x1407813E4 (PopUpdateConsoleDisplayState.c)
 *     PopWnfSprActiveSessionChangeCallback @ 0x14078E7A0 (PopWnfSprActiveSessionChangeCallback.c)
 *     PopWnfMixedRealityCallback @ 0x14078E990 (PopWnfMixedRealityCallback.c)
 *     PopUpdateDiskIdleTimeoutSetting @ 0x14079968C (PopUpdateDiskIdleTimeoutSetting.c)
 *     PopMonitorProcessLoop @ 0x1407D0594 (PopMonitorProcessLoop.c)
 *     PopEsPublishState @ 0x1407D3CB0 (PopEsPublishState.c)
 *     PopSetAwayModeStatus @ 0x1408E77A4 (PopSetAwayModeStatus.c)
 *     PdcPoReportLidState @ 0x1408EFA40 (PdcPoReportLidState.c)
 *     PopPdcIdleResiliencyCallback @ 0x1408F009C (PopPdcIdleResiliencyCallback.c)
 *     PopSetWin32kDisplayTimeout @ 0x1408F52F4 (PopSetWin32kDisplayTimeout.c)
 * Callees:
 *     PopSetPowerSettingValue @ 0x1406F36C8 (PopSetPowerSettingValue.c)
 */

__int64 __fastcall PopSetPowerSettingValueAcDc(LPCGUID SettingGuid, __int64 a2, void *Src)
{
  int v5; // eax
  int v6; // ebp
  int v7; // eax

  v5 = PopSetPowerSettingValue(SettingGuid, Src);
  v6 = 0;
  if ( v5 < 0 )
    v6 = v5;
  v7 = PopSetPowerSettingValue(SettingGuid, Src);
  if ( v7 < 0 && v6 >= 0 )
    return (unsigned int)v7;
  return (unsigned int)v6;
}
