/*
 * XREFs of ?_ChangeLIDStatus@DXGMONITOR@@QEAAX_N@Z @ 0x1C03C9194
 * Callers:
 *     ?_EnableDisableMonitorInternal@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@PEA_N@Z @ 0x1C01F31C0 (-_EnableDisableMonitorInternal@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO.c)
 *     ?_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_CONNECTION_USB4_INFO@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0209E7C (-_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_CONNECTION_USB4.c)
 *     ?_HandleRemovePhysicalMonitor@MONITOR_MGR@@QEAAJIEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C03C8044 (-_HandleRemovePhysicalMonitor@MONITOR_MGR@@QEAAJIEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGMONITOR::_ChangeLIDStatus(DXGMONITOR *this, char a2)
{
  char v2; // al

  v2 = *((_BYTE *)this + 176);
  if ( (v2 & 2) == 0 )
  {
    WdLogSingleEntry0(1LL);
    v2 = *((_BYTE *)this + 176);
  }
  *((_BYTE *)this + 176) = v2 & 0xFB | (4 * (a2 ^ 1));
}
