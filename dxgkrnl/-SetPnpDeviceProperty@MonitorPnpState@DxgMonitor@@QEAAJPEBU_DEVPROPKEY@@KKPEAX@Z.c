/*
 * XREFs of ?SetPnpDeviceProperty@MonitorPnpState@DxgMonitor@@QEAAJPEBU_DEVPROPKEY@@KKPEAX@Z @ 0x1C01FA6F0
 * Callers:
 *     ?UpdatePnPDeviceProperties@MonitorPnpState@DxgMonitor@@AEAAJXZ @ 0x1C01FA648 (-UpdatePnPDeviceProperties@MonitorPnpState@DxgMonitor@@AEAAJXZ.c)
 *     ?_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJAEAVIMonitorDeferredEventSource@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01FC228 (-_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJAEAVIMonitorDeferredEventSource@DxgMonitor@@PEAU_DXG.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall DxgMonitor::MonitorPnpState::SetPnpDeviceProperty(
        PDEVICE_OBJECT *this,
        const struct _DEVPROPKEY *a2,
        DEVPROPTYPE Type,
        ULONG Size,
        PVOID Data)
{
  if ( *((_BYTE *)this + 16) )
    return IoSetDevicePropertyData(this[1], a2, 0, 0, Type, Size, Data);
  else
    return -1073741275;
}
