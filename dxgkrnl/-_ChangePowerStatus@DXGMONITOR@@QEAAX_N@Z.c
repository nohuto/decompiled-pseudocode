/*
 * XREFs of ?_ChangePowerStatus@DXGMONITOR@@QEAAX_N@Z @ 0x1C01E4A68
 * Callers:
 *     ?_EnableDisableMonitorInternal@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@PEA_N@Z @ 0x1C01E48A0 (-_EnableDisableMonitorInternal@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO.c)
 * Callees:
 *     ?_OnChangePowerOff@MonitorUsb4State@DxgMonitor@@AEAAXXZ @ 0x1C03C6E00 (-_OnChangePowerOff@MonitorUsb4State@DxgMonitor@@AEAAXXZ.c)
 */

void __fastcall DXGMONITOR::_ChangePowerStatus(DXGMONITOR *this, char a2)
{
  DxgMonitor::MonitorUsb4State *v4; // rcx

  v4 = (DxgMonitor::MonitorUsb4State *)*((_QWORD *)this + 33);
  if ( *((_BYTE *)v4 + 8) && !a2 )
    DxgMonitor::MonitorUsb4State::_OnChangePowerOff(v4);
  *((_BYTE *)this + 176) = *((_BYTE *)this + 176) & 0xDF | (32 * (a2 ^ 1));
}
