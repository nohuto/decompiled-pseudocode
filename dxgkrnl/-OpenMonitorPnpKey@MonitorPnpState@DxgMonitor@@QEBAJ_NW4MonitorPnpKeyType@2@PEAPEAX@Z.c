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
