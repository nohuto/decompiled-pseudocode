/*
 * XREFs of ?EdidSupportsHDR@MonitorColorState@DxgMonitor@@QEBA_NXZ @ 0x1C01B0374
 * Callers:
 *     ?GetMonitorAndLinkHdrCapable@MonitorColorState@DxgMonitor@@QEBAXAEBU_DXGK_MONITORLINKINFO@@AEATMONITOR_AND_LINK_HDR_CAPS@@@Z @ 0x1C0171DE0 (-GetMonitorAndLinkHdrCapable@MonitorColorState@DxgMonitor@@QEBAXAEBU_DXGK_MONITORLINKINFO@@AEATM.c)
 *     ?IsAutoColorManagementSupported@MonitorColorState@DxgMonitor@@QEBA_NXZ @ 0x1C01B0348 (-IsAutoColorManagementSupported@MonitorColorState@DxgMonitor@@QEBA_NXZ.c)
 *     ?_UpdateHDRParamsIfRequired@MonitorColorState@DxgMonitor@@AEAAXXZ @ 0x1C01FA1E0 (-_UpdateHDRParamsIfRequired@MonitorColorState@DxgMonitor@@AEAAXXZ.c)
 *     ?TriggerMonitorTelemetry@DXGMONITOR@@UEBAXW4TELEMETRY_MONITOR_INVENTORY_TRIGGER@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0210E00 (-TriggerMonitorTelemetry@DXGMONITOR@@UEBAXW4TELEMETRY_MONITOR_INVENTORY_TRIGGER@DxgMonitor@@PEAU.c)
 *     ?OnFunctionDriverArrival@MonitorColorState@DxgMonitor@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0217DE8 (-OnFunctionDriverArrival@MonitorColorState@DxgMonitor@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@.c)
 *     ?SetAutoColorManagementSupported@MonitorColorState@DxgMonitor@@QEAAJ_N@Z @ 0x1C0218254 (-SetAutoColorManagementSupported@MonitorColorState@DxgMonitor@@QEAAJ_N@Z.c)
 *     MonitorSetDriverColorimetryOverride @ 0x1C03C0640 (MonitorSetDriverColorimetryOverride.c)
 *     MonitorSetSDRWhiteLevel @ 0x1C03C08CC (MonitorSetSDRWhiteLevel.c)
 *     MonitorSetSDRWhiteLevelOverride @ 0x1C03C0994 (MonitorSetSDRWhiteLevelOverride.c)
 * Callees:
 *     <none>
 */

char __fastcall DxgMonitor::MonitorColorState::EdidSupportsHDR(DxgMonitor::MonitorColorState *this)
{
  char v1; // dl

  v1 = 0;
  if ( *((_BYTE *)this + 268)
    && (*((_BYTE *)this + 235) || *((_BYTE *)this + 234))
    && ((*((_DWORD *)this + 52) & 0x3C) != 0
     || (*((_DWORD *)this + 53) & 0x3C) != 0
     || (*((_DWORD *)this + 54) & 0x3C) != 0
     || (*((_DWORD *)this + 55) & 0x3C) != 0) )
  {
    return 1;
  }
  return v1;
}
