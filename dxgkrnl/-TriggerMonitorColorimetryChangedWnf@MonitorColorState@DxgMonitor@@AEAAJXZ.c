/*
 * XREFs of ?TriggerMonitorColorimetryChangedWnf@MonitorColorState@DxgMonitor@@AEAAJXZ @ 0x1C0167CA8
 * Callers:
 *     ?OnOutputColorspaceUpdated@MonitorColorState@DxgMonitor@@QEAAXXZ @ 0x1C0167C74 (-OnOutputColorspaceUpdated@MonitorColorState@DxgMonitor@@QEAAXXZ.c)
 *     ?OnDescriptorUpdated@MonitorColorState@DxgMonitor@@QEAAXPEBUIMonitorDescriptor@2@@Z @ 0x1C01F8A4C (-OnDescriptorUpdated@MonitorColorState@DxgMonitor@@QEAAXPEBUIMonitorDescriptor@2@@Z.c)
 *     MonitorSetDriverColorimetryOverride @ 0x1C03C0640 (MonitorSetDriverColorimetryOverride.c)
 *     ?OnBrightnessNitsUpdated@MonitorColorState@DxgMonitor@@QEAAXI@Z @ 0x1C03C960C (-OnBrightnessNitsUpdated@MonitorColorState@DxgMonitor@@QEAAXI@Z.c)
 *     ?SetColorProfile@MonitorColorState@DxgMonitor@@QEAAJAEBUDISPLAY_COLOR_DATA_RAW@@KKK@Z @ 0x1C03C9714 (-SetColorProfile@MonitorColorState@DxgMonitor@@QEAAJAEBUDISPLAY_COLOR_DATA_RAW@@KKK@Z.c)
 *     ?SetSDRWhiteLevel@MonitorColorState@DxgMonitor@@QEAAJK@Z @ 0x1C03C987C (-SetSDRWhiteLevel@MonitorColorState@DxgMonitor@@QEAAJK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgMonitor::MonitorColorState::TriggerMonitorColorimetryChangedWnf(
        DxgMonitor::MonitorColorState *this)
{
  int updated; // eax
  unsigned int v2; // ebx

  updated = ZwUpdateWnfStateData(&WNF_DX_DISPLAY_COLORIMETRY_DATA_CHANGED, 0LL, 0LL, 0LL, 0LL, 0, 0);
  v2 = updated;
  if ( updated < 0 )
    WdLogSingleEntry1(2LL, updated);
  return v2;
}
