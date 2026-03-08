/*
 * XREFs of PopSetPowerSettingValueAcDc @ 0x14073BE70
 * Callers:
 *     PopScanIdleList @ 0x1402BC8E0 (PopScanIdleList.c)
 *     PdcPoLowPower @ 0x1403AADA0 (PdcPoLowPower.c)
 *     PopErratumUpdateCallback @ 0x14058B660 (PopErratumUpdateCallback.c)
 *     PopSessionWinlogonNotification @ 0x14067F97C (PopSessionWinlogonNotification.c)
 *     NtPowerInformation @ 0x14068AB90 (NtPowerInformation.c)
 *     PopAdaptiveGetConsoleSessionState @ 0x14073C624 (PopAdaptiveGetConsoleSessionState.c)
 *     PopEvaluateGlobalUserStatus @ 0x14073CA7C (PopEvaluateGlobalUserStatus.c)
 *     PopPowerInformationInternal @ 0x14073E108 (PopPowerInformationInternal.c)
 *     PopWnfMixedRealityCallback @ 0x140792FD0 (PopWnfMixedRealityCallback.c)
 *     PopUpdateDiskIdleTimeoutSetting @ 0x1408197EC (PopUpdateDiskIdleTimeoutSetting.c)
 *     PdcPoLidReliabilityUpdateCallback @ 0x140828FA0 (PdcPoLidReliabilityUpdateCallback.c)
 *     PopMonitorProcessLoop @ 0x14085C548 (PopMonitorProcessLoop.c)
 *     PopWnfSprActiveSessionChangeCallback @ 0x14085F020 (PopWnfSprActiveSessionChangeCallback.c)
 *     PopEsPublishState @ 0x1408600C0 (PopEsPublishState.c)
 *     PopBatteryWorker @ 0x14086DD10 (PopBatteryWorker.c)
 *     PopBatteryApplyCompositeState @ 0x14086E430 (PopBatteryApplyCompositeState.c)
 *     PopUpdateConsoleDisplayState @ 0x140870EA4 (PopUpdateConsoleDisplayState.c)
 *     PopSetAwayModeStatus @ 0x14098780C (PopSetAwayModeStatus.c)
 *     PdcPoReportLidState @ 0x140994A70 (PdcPoReportLidState.c)
 *     PopPdcIdleResiliencyCallback @ 0x14099507C (PopPdcIdleResiliencyCallback.c)
 * Callees:
 *     PopSetPowerSettingValue @ 0x14068CFA0 (PopSetPowerSettingValue.c)
 */

__int64 __fastcall PopSetPowerSettingValueAcDc(const GUID *a1, unsigned int a2, void *a3)
{
  int v6; // eax
  int v7; // ebp
  int v8; // eax

  v6 = PopSetPowerSettingValue(a1, 0xFFFFFFFF, 0, a2, a3);
  v7 = 0;
  if ( v6 < 0 )
    v7 = v6;
  v8 = PopSetPowerSettingValue(a1, 0xFFFFFFFF, 1, a2, a3);
  if ( v8 < 0 && v7 >= 0 )
    return (unsigned int)v8;
  return (unsigned int)v7;
}
