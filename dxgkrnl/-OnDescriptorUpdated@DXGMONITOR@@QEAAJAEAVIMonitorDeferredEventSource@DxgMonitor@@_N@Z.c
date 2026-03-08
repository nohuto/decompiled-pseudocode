/*
 * XREFs of ?OnDescriptorUpdated@DXGMONITOR@@QEAAJAEAVIMonitorDeferredEventSource@DxgMonitor@@_N@Z @ 0x1C01FC7C4
 * Callers:
 *     ?_InitializeMonitorWithDriver@DXGMONITOR@@QEAAJPEAV1@AEAVIMonitorDeferredEventSource@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01FBF54 (-_InitializeMonitorWithDriver@DXGMONITOR@@QEAAJPEAV1@AEAVIMonitorDeferredEventSource@DxgMonitor@.c)
 *     ?_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJAEAVIMonitorDeferredEventSource@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01FC228 (-_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJAEAVIMonitorDeferredEventSource@DxgMonitor@@PEAU_DXG.c)
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@AEAVIMonitorDeferredEventSource@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01FC328 (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@AEAVIMonitorDeferredEvent.c)
 *     ?RebuildMonitorModeListCacheHelper@@YAJPEAVDXGADAPTER@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C03BEF88 (-RebuildMonitorModeListCacheHelper@@YAJPEAVDXGADAPTER@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?OnDescriptorUpdated@MonitorColorState@DxgMonitor@@QEAAXPEBUIMonitorDescriptor@2@@Z @ 0x1C01F8A4C (-OnDescriptorUpdated@MonitorColorState@DxgMonitor@@QEAAXPEBUIMonitorDescriptor@2@@Z.c)
 *     ?_CheckPortraitFirstMonitorFromEDID@DXGMONITOR@@AEAAJXZ @ 0x1C01FC184 (-_CheckPortraitFirstMonitorFromEDID@DXGMONITOR@@AEAAJXZ.c)
 *     ?RetrieveIntegratedPanelNativeOverride@MonitorModes@DxgMonitor@@QEAAJXZ @ 0x1C01FD5D0 (-RetrieveIntegratedPanelNativeOverride@MonitorModes@DxgMonitor@@QEAAJXZ.c)
 *     ?OnDescriptorUpdated@MonitorModes@DxgMonitor@@QEAAJPEBUIMonitorDescriptor@2@@Z @ 0x1C01FD69C (-OnDescriptorUpdated@MonitorModes@DxgMonitor@@QEAAJPEBUIMonitorDescriptor@2@@Z.c)
 *     ?_EvaluateUsageState@MonitorUsageState@DxgMonitor@@AEAA_NPEBUIMonitorDescriptor@2@@Z @ 0x1C0214408 (-_EvaluateUsageState@MonitorUsageState@DxgMonitor@@AEAA_NPEBUIMonitorDescriptor@2@@Z.c)
 *     ?CreateDefaultMonitorProfile@MonitorModes@DxgMonitor@@QEAAJXZ @ 0x1C03C7F38 (-CreateDefaultMonitorProfile@MonitorModes@DxgMonitor@@QEAAJXZ.c)
 */

__int64 __fastcall DXGMONITOR::OnDescriptorUpdated(
        DxgMonitor::MonitorColorState **this,
        struct DxgMonitor::IMonitorDeferredEventSource *a2)
{
  const struct DxgMonitor::IMonitorDescriptor *v4; // rsi
  int v5; // eax
  unsigned int v6; // edi
  DxgMonitor::MonitorModes *v7; // rcx

  WdLogSingleEntry1(7LL, this);
  v4 = (const struct DxgMonitor::IMonitorDescriptor *)*((_QWORD *)this[27] + 20);
  v5 = DxgMonitor::MonitorModes::OnDescriptorUpdated(this[29], v4);
  v6 = v5;
  if ( v5 < 0 )
  {
    WdLogSingleEntry1(2LL, v5);
  }
  else
  {
    if ( v4 )
    {
      DxgMonitor::MonitorColorState::OnDescriptorUpdated(this[28], v4);
      DxgMonitor::MonitorUsageState::_EvaluateUsageState(this[30], v4);
      v6 = 0;
    }
    DXGMONITOR::_CheckPortraitFirstMonitorFromEDID((DXGMONITOR *)this);
    if ( (int)DxgMonitor::MonitorModes::RetrieveIntegratedPanelNativeOverride(this[29]) < 0 )
      (*(void (__fastcall **)(DxgMonitor::MonitorColorState *))(*(_QWORD *)this[24] + 40LL))(this[24]);
    v7 = this[29];
    if ( !*((_DWORD *)v7 + 42) && !*((_DWORD *)v7 + 30) )
      DxgMonitor::MonitorModes::CreateDefaultMonitorProfile(v7);
    (**(void (__fastcall ***)(struct DxgMonitor::IMonitorDeferredEventSource *, _QWORD, __int64))a2)(
      a2,
      *((unsigned int *)this + 45),
      3LL);
  }
  return v6;
}
