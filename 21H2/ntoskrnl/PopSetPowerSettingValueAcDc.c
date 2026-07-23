/*
 * XREFs of PopSetPowerSettingValueAcDc @ 0x14066D5A8
 * Callers:
 *     PopScanIdleList @ 0x14026EAB8 (PopScanIdleList.c)
 *     PdcPoLowPower @ 0x1403CC830 (PdcPoLowPower.c)
 *     PopErratumUpdateCallback @ 0x14056F030 (PopErratumUpdateCallback.c)
 *     PopSessionWinlogonNotification @ 0x1405D8DC4 (PopSessionWinlogonNotification.c)
 *     NtPowerInformation @ 0x14066AF10 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x14066C534 (PopPowerInformationInternal.c)
 *     PopEvaluateGlobalUserStatus @ 0x140671854 (PopEvaluateGlobalUserStatus.c)
 *     PopBatteryApplyCompositeState @ 0x14077FDDC (PopBatteryApplyCompositeState.c)
 *     PopUpdateConsoleDisplayState @ 0x1407816A4 (PopUpdateConsoleDisplayState.c)
 *     PopWnfSprActiveSessionChangeCallback @ 0x14078EA60 (PopWnfSprActiveSessionChangeCallback.c)
 *     PopWnfMixedRealityCallback @ 0x14078EC50 (PopWnfMixedRealityCallback.c)
 *     PopUpdateDiskIdleTimeoutSetting @ 0x14079105C (PopUpdateDiskIdleTimeoutSetting.c)
 *     PopMonitorProcessLoop @ 0x1407D07E4 (PopMonitorProcessLoop.c)
 *     PopEsPublishState @ 0x1407D3F00 (PopEsPublishState.c)
 *     PopSetAwayModeStatus @ 0x1408E78B4 (PopSetAwayModeStatus.c)
 *     PdcPoReportLidState @ 0x1408EFB50 (PdcPoReportLidState.c)
 *     PopPdcIdleResiliencyCallback @ 0x1408F01AC (PopPdcIdleResiliencyCallback.c)
 *     PopSetWin32kDisplayTimeout @ 0x1408F5404 (PopSetWin32kDisplayTimeout.c)
 * Callees:
 *     PopSetPowerSettingValue @ 0x14066E018 (PopSetPowerSettingValue.c)
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
