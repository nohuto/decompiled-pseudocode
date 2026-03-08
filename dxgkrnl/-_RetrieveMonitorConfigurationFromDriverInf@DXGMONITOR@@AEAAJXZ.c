/*
 * XREFs of ?_RetrieveMonitorConfigurationFromDriverInf@DXGMONITOR@@AEAAJXZ @ 0x1C01FD8C8
 * Callers:
 *     ?_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJAEAVIMonitorDeferredEventSource@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01FC228 (-_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJAEAVIMonitorDeferredEventSource@DxgMonitor@@PEAU_DXG.c)
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@AEAVIMonitorDeferredEventSource@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01FC328 (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@AEAVIMonitorDeferredEvent.c)
 * Callees:
 *     ?OpenMonitorPnpKey@MonitorPnpState@DxgMonitor@@QEBAJ_NW4MonitorPnpKeyType@2@PEAPEAX@Z @ 0x1C01D4D7C (-OpenMonitorPnpKey@MonitorPnpState@DxgMonitor@@QEBAJ_NW4MonitorPnpKeyType@2@PEAPEAX@Z.c)
 *     ?_RetrieveMonitorOrientationFromAcpi@DXGMONITOR@@AEAAJXZ @ 0x1C01FD958 (-_RetrieveMonitorOrientationFromAcpi@DXGMONITOR@@AEAAJXZ.c)
 *     ?_RetrieveMonitorConfigurationFromRegistry@DXGMONITOR@@AEAAJPEAXE@Z @ 0x1C01FDA1C (-_RetrieveMonitorConfigurationFromRegistry@DXGMONITOR@@AEAAJPEAXE@Z.c)
 */

__int64 __fastcall DXGMONITOR::_RetrieveMonitorConfigurationFromDriverInf(DXGMONITOR *this)
{
  __int64 v2; // rcx
  NTSTATUS v3; // eax
  int MonitorConfigurationFromRegistry; // ebx
  HANDLE Handle; // [rsp+30h] [rbp+8h] BYREF

  Handle = 0LL;
  v2 = *((_QWORD *)this + 25);
  if ( *(_BYTE *)(v2 + 16) )
  {
    v3 = DxgMonitor::MonitorPnpState::OpenMonitorPnpKey(v2, 1, 2, &Handle);
    MonitorConfigurationFromRegistry = v3;
    if ( v3 < 0 )
    {
      WdLogSingleEntry1(2LL, v3);
    }
    else
    {
      MonitorConfigurationFromRegistry = DXGMONITOR::_RetrieveMonitorConfigurationFromRegistry(this, Handle, 1u);
      if ( MonitorConfigurationFromRegistry >= 0 )
        MonitorConfigurationFromRegistry = DXGMONITOR::_RetrieveMonitorOrientationFromAcpi(this);
    }
  }
  else
  {
    MonitorConfigurationFromRegistry = -1073741275;
  }
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)MonitorConfigurationFromRegistry;
}
