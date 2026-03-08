/*
 * XREFs of ?OpenMonitorPnpKey@MonitorPnpState@DxgMonitor@@QEBAJ_NW4MonitorPnpKeyType@2@PEAPEAX@Z @ 0x1C01D4D7C
 * Callers:
 *     ?OpenMonitorPnpKey@DXGMONITOR@@UEBAJ_NW4MonitorPnpKeyType@DxgMonitor@@PEAPEAX@Z @ 0x1C01D4D60 (-OpenMonitorPnpKey@DXGMONITOR@@UEBAJ_NW4MonitorPnpKeyType@DxgMonitor@@PEAPEAX@Z.c)
 *     ?_RetrieveMonitorConfigurationFromDriverInf@DXGMONITOR@@AEAAJXZ @ 0x1C01FD8C8 (-_RetrieveMonitorConfigurationFromDriverInf@DXGMONITOR@@AEAAJXZ.c)
 *     ?IsOemPanelDriverPresent@MonitorPnpState@DxgMonitor@@QEBA_NXZ @ 0x1C01FFB74 (-IsOemPanelDriverPresent@MonitorPnpState@DxgMonitor@@QEBA_NXZ.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall DxgMonitor::MonitorPnpState::OpenMonitorPnpKey(__int64 a1, char a2, int a3, void **a4)
{
  int v5; // r8d
  ULONG v6; // edx

  if ( !*(_QWORD *)(a1 + 8) || !*(_BYTE *)(a1 + 16) )
    return -1073741661;
  v5 = a3 - 1;
  if ( !v5 || (v6 = 2, v5 != 1) )
    v6 = 1;
  return IoOpenDeviceRegistryKey(*(PDEVICE_OBJECT *)(a1 + 8), v6, a2 != 0 ? 131097 : 983103, a4);
}
