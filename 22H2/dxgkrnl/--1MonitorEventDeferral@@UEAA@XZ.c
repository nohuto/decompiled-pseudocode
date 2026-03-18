/*
 * XREFs of ??1MonitorEventDeferral@@UEAA@XZ @ 0x1C020AB18
 * Callers:
 *     ??_GMonitorEventDeferral@@UEAAPEAXI@Z @ 0x1C006BE60 (--_GMonitorEventDeferral@@UEAAPEAXI@Z.c)
 *     MonitorNotifyDeviceNodeReady @ 0x1C020A2F0 (MonitorNotifyDeviceNodeReady.c)
 *     ?_HandleMonitorPnPNotification@MONITOR_MGR@@SAJPEAX0@Z @ 0x1C020A560 (-_HandleMonitorPnPNotification@MONITOR_MGR@@SAJPEAX0@Z.c)
 *     ?_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAPEAVDXGMONITOR@@PEAU_DXGK_CONNECTION_USB4_INFO@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C020A8B0 (-_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAPEAVDXGMONITOR@@PEAU_DXGK_CO.c)
 *     ?RebuildMonitorModeListCacheHelper@@YAJPEAVDXGADAPTER@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C03C3848 (-RebuildMonitorModeListCacheHelper@@YAJPEAVDXGADAPTER@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     MonitorDisableMonitorVirtualModeSupport @ 0x1C03C3E20 (MonitorDisableMonitorVirtualModeSupport.c)
 *     MonitorSetAppOverride @ 0x1C03C4C54 (MonitorSetAppOverride.c)
 *     MonitorSetUsageClass @ 0x1C03C53C0 (MonitorSetUsageClass.c)
 *     ?_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C03C7578 (-_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@.c)
 * Callees:
 *     ?FlushEventsWithContext@MonitorEventDeferral@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0207408 (-FlushEventsWithContext@MonitorEventDeferral@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 */

void __fastcall MonitorEventDeferral::~MonitorEventDeferral(MonitorEventDeferral *this)
{
  bool v1; // zf

  v1 = *((_QWORD *)this + 1) == 0LL;
  *(_QWORD *)this = &MonitorEventDeferral::`vftable';
  if ( !v1 )
  {
    if ( *((_DWORD *)this + 28) )
      MonitorEventDeferral::FlushEventsWithContext(this, 0LL);
  }
}
