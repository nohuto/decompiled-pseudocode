/*
 * XREFs of ?IsAutoColorManagementSupported@MonitorColorState@DxgMonitor@@QEBA_NXZ @ 0x1C01B0348
 * Callers:
 *     MonitorIsMonitorAndDriverWCGCapable @ 0x1C01ADF6C (MonitorIsMonitorAndDriverWCGCapable.c)
 *     MonitorGetIsAutoColorManagementSupported @ 0x1C01B01A4 (MonitorGetIsAutoColorManagementSupported.c)
 *     ?TriggerMonitorTelemetry@DXGMONITOR@@UEBAXW4TELEMETRY_MONITOR_INVENTORY_TRIGGER@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0210E00 (-TriggerMonitorTelemetry@DXGMONITOR@@UEBAXW4TELEMETRY_MONITOR_INVENTORY_TRIGGER@DxgMonitor@@PEAU.c)
 * Callees:
 *     ?EdidSupportsHDR@MonitorColorState@DxgMonitor@@QEBA_NXZ @ 0x1C01B0374 (-EdidSupportsHDR@MonitorColorState@DxgMonitor@@QEBA_NXZ.c)
 */

bool __fastcall DxgMonitor::MonitorColorState::IsAutoColorManagementSupported(DxgMonitor::MonitorColorState *this)
{
  char v1; // r9

  v1 = 0;
  if ( *((_BYTE *)this + 385) )
    return !DxgMonitor::MonitorColorState::EdidSupportsHDR(this);
  return v1;
}
