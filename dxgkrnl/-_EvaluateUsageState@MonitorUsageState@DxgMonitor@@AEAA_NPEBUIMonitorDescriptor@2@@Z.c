/*
 * XREFs of ?_EvaluateUsageState@MonitorUsageState@DxgMonitor@@AEAA_NPEBUIMonitorDescriptor@2@@Z @ 0x1C0214408
 * Callers:
 *     ?_InitializeMonitorWithDriver@DXGMONITOR@@QEAAJPEAV1@AEAVIMonitorDeferredEventSource@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01FBF54 (-_InitializeMonitorWithDriver@DXGMONITOR@@QEAAJPEAV1@AEAVIMonitorDeferredEventSource@DxgMonitor@.c)
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@AEAVIMonitorDeferredEventSource@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01FC328 (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@AEAVIMonitorDeferredEvent.c)
 *     ?OnDescriptorUpdated@DXGMONITOR@@QEAAJAEAVIMonitorDeferredEventSource@DxgMonitor@@_N@Z @ 0x1C01FC7C4 (-OnDescriptorUpdated@DXGMONITOR@@QEAAJAEAVIMonitorDeferredEventSource@DxgMonitor@@_N@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?_ReadUsageOverridesFromRegistry@MonitorUsageState@DxgMonitor@@AEAA?AW4_D3DKMT_DISPLAY_TARGET_USAGE@@XZ @ 0x1C02144A4 (-_ReadUsageOverridesFromRegistry@MonitorUsageState@DxgMonitor@@AEAA-AW4_D3DKMT_DISPLAY_TARGET_US.c)
 *     ?_GetIntendedUsageFromDescriptor@MonitorUsageState@DxgMonitor@@AEAAJPEBUIMonitorDescriptor@2@PEAW4_DXGK_DISPLAY_USAGE@@PEA_N2@Z @ 0x1C021450C (-_GetIntendedUsageFromDescriptor@MonitorUsageState@DxgMonitor@@AEAAJPEBUIMonitorDescriptor@2@PEA.c)
 *     ?_ReadAppOverridesFromMonitorDataStore@MonitorUsageState@DxgMonitor@@AEAAXPEAW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C02145C0 (-_ReadAppOverridesFromMonitorDataStore@MonitorUsageState@DxgMonitor@@AEAAXPEAW4_D3DKMT_DISPLAY_T.c)
 *     ?_SaveUsageOverridesToMonitorStore@MonitorUsageState@DxgMonitor@@AEAAXW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C03CA27C (-_SaveUsageOverridesToMonitorStore@MonitorUsageState@DxgMonitor@@AEAAXW4_D3DKMT_DISPLAY_TARGET_U.c)
 */

char __fastcall DxgMonitor::MonitorUsageState::_EvaluateUsageState(
        DxgMonitor::MonitorUsageState *this,
        const struct DxgMonitor::IMonitorDescriptor *a2)
{
  char v4; // bl
  int v5; // edx
  bool v7; // [rsp+30h] [rbp-10h] BYREF
  int v8[3]; // [rsp+34h] [rbp-Ch] BYREF
  char v9; // [rsp+70h] [rbp+30h] BYREF
  bool v10; // [rsp+78h] [rbp+38h] BYREF

  v4 = 0;
  if ( !*((_BYTE *)DXGGLOBAL::GetGlobal() + 304481) && !*((_DWORD *)this + 4) )
  {
    v8[0] = 0;
    v9 = 1;
    v7 = 0;
    v10 = 1;
    if ( (int)DxgMonitor::MonitorUsageState::_GetIntendedUsageFromDescriptor(
                this,
                a2,
                (enum _DXGK_DISPLAY_USAGE *)&v9,
                &v7,
                &v10) >= 0 )
    {
      if ( (unsigned __int8)(v9 - 2) <= 1u )
      {
        v8[0] = 1;
      }
      else if ( !v10 )
      {
        v8[0] = 2;
      }
    }
    else if ( g_OSTestSigningEnabled )
    {
      v8[0] = DxgMonitor::MonitorUsageState::_ReadUsageOverridesFromRegistry(this);
    }
    DxgMonitor::MonitorUsageState::_ReadAppOverridesFromMonitorDataStore(this, (enum _D3DKMT_DISPLAY_TARGET_USAGE *)v8);
    v5 = v8[0];
    if ( v8[0] != *((_DWORD *)this + 4) )
    {
      v4 = 1;
      *((_BYTE *)this + 20) = v7;
      *((_DWORD *)this + 4) = v5;
      DxgMonitor::MonitorUsageState::_SaveUsageOverridesToMonitorStore(this);
    }
  }
  return v4;
}
