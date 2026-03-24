/*
 * XREFs of PopSetPowerSettingValueAcDc @ 0x140679E68
 * Callers:
 *     PopScanIdleList @ 0x140280878 (PopScanIdleList.c)
 *     PdcPoLowPower @ 0x1403CC6C0 (PdcPoLowPower.c)
 *     PopErratumUpdateCallback @ 0x14056EDF0 (PopErratumUpdateCallback.c)
 *     PopSessionWinlogonNotification @ 0x1405D8DC4 (PopSessionWinlogonNotification.c)
 *     NtPowerInformation @ 0x1406777D0 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x140678DF4 (PopPowerInformationInternal.c)
 *     PopEvaluateGlobalUserStatus @ 0x14067DA64 (PopEvaluateGlobalUserStatus.c)
 *     PopBatteryApplyCompositeState @ 0x14077FC1C (PopBatteryApplyCompositeState.c)
 *     PopUpdateConsoleDisplayState @ 0x1407814E4 (PopUpdateConsoleDisplayState.c)
 *     PopWnfSprActiveSessionChangeCallback @ 0x14078E8A0 (PopWnfSprActiveSessionChangeCallback.c)
 *     PopWnfMixedRealityCallback @ 0x14078EA90 (PopWnfMixedRealityCallback.c)
 *     PopUpdateDiskIdleTimeoutSetting @ 0x14078FAAC (PopUpdateDiskIdleTimeoutSetting.c)
 *     PopMonitorProcessLoop @ 0x1407D0674 (PopMonitorProcessLoop.c)
 *     PopEsPublishState @ 0x1407D3D90 (PopEsPublishState.c)
 *     PopSetAwayModeStatus @ 0x1408E7754 (PopSetAwayModeStatus.c)
 *     PdcPoReportLidState @ 0x1408EF9F0 (PdcPoReportLidState.c)
 *     PopPdcIdleResiliencyCallback @ 0x1408F004C (PopPdcIdleResiliencyCallback.c)
 *     PopSetWin32kDisplayTimeout @ 0x1408F52A4 (PopSetWin32kDisplayTimeout.c)
 * Callees:
 *     PopSetPowerSettingValue @ 0x14067A8D8 (PopSetPowerSettingValue.c)
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
