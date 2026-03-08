/*
 * XREFs of ?_ReadAppOverridesFromMonitorDataStore@MonitorUsageState@DxgMonitor@@AEAAXPEAW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C02145C0
 * Callers:
 *     ?_EvaluateUsageState@MonitorUsageState@DxgMonitor@@AEAA_NPEBUIMonitorDescriptor@2@@Z @ 0x1C0214408 (-_EvaluateUsageState@MonitorUsageState@DxgMonitor@@AEAA_NPEBUIMonitorDescriptor@2@@Z.c)
 * Callees:
 *     ?GetPseudoSpecializedState@MonitorUsageState@DxgMonitor@@QEBAXPEA_N00@Z @ 0x1C01D5430 (-GetPseudoSpecializedState@MonitorUsageState@DxgMonitor@@QEBAXPEA_N00@Z.c)
 *     ?GetAppOverride@MonitorUsageState@DxgMonitor@@QEBA_NU_GUID@@@Z @ 0x1C0214634 (-GetAppOverride@MonitorUsageState@DxgMonitor@@QEBA_NU_GUID@@@Z.c)
 */

void __fastcall DxgMonitor::MonitorUsageState::_ReadAppOverridesFromMonitorDataStore(
        DxgMonitor::MonitorUsageState *this,
        enum _D3DKMT_DISPLAY_TARGET_USAGE *a2)
{
  bool v4; // [rsp+20h] [rbp-28h] BYREF
  GUID Guid; // [rsp+30h] [rbp-18h] BYREF
  bool v6; // [rsp+60h] [rbp+18h] BYREF
  bool v7; // [rsp+68h] [rbp+20h] BYREF

  v4 = 0;
  v7 = 0;
  v6 = 0;
  DxgMonitor::MonitorUsageState::GetPseudoSpecializedState(this, &v6, &v7, &v4);
  if ( v6 || v7 )
  {
    Guid = GUID_MONITOR_OVERRIDE_PSEUDO_SPECIALIZED;
    if ( DxgMonitor::MonitorUsageState::GetAppOverride(this, &Guid) )
    {
      *(_DWORD *)a2 = 2;
      *((_BYTE *)this + 21) = 1;
    }
  }
}
