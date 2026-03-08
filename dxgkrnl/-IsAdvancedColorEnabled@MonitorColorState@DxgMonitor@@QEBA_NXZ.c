/*
 * XREFs of ?IsAdvancedColorEnabled@MonitorColorState@DxgMonitor@@QEBA_NXZ @ 0x1C0171D38
 * Callers:
 *     MonitorIsAdvancedColorEnabled @ 0x1C017140C (MonitorIsAdvancedColorEnabled.c)
 *     ?TriggerMonitorTelemetry@DXGMONITOR@@UEBAXW4TELEMETRY_MONITOR_INVENTORY_TRIGGER@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0210E00 (-TriggerMonitorTelemetry@DXGMONITOR@@UEBAXW4TELEMETRY_MONITOR_INVENTORY_TRIGGER@DxgMonitor@@PEAU.c)
 *     ?OnFunctionDriverArrival@MonitorColorState@DxgMonitor@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0217DE8 (-OnFunctionDriverArrival@MonitorColorState@DxgMonitor@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@.c)
 *     MonitorEnableDisableAdvancedColor @ 0x1C03BF7E4 (MonitorEnableDisableAdvancedColor.c)
 * Callees:
 *     DxgkIsConsoleSessionDispBrokerEnabled @ 0x1C0171D70 (DxgkIsConsoleSessionDispBrokerEnabled.c)
 */

bool __fastcall DxgMonitor::MonitorColorState::IsAdvancedColorEnabled(DxgMonitor::MonitorColorState *this)
{
  char v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0;
  DxgkIsConsoleSessionDispBrokerEnabled(&v3);
  if ( v3 )
    return 0;
  else
    return *((_BYTE *)this + 384);
}
