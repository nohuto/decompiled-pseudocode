__int64 __fastcall DxgMonitor::MonitorPnpState::UpdatePnPDeviceProperties(DxgMonitor::MonitorPnpState *this)
{
  int v2; // eax
  __int64 v3; // rbx
  int v4; // eax
  int v6; // [rsp+40h] [rbp+8h] BYREF
  char v7; // [rsp+48h] [rbp+10h] BYREF

  (*(void (__fastcall **)(_QWORD, char *))(**(_QWORD **)this + 8LL))(*(_QWORD *)this, &v7);
  v6 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 16LL))(*(_QWORD *)this);
  v2 = DxgMonitor::MonitorPnpState::SetPnpDeviceProperty(this, &DEVPKEY_Monitor_AdapterLuid, 8u, 8u, &v7);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v4 = DxgMonitor::MonitorPnpState::SetPnpDeviceProperty(this, &DEVPKEY_Monitor_TargetId, 7u, 4u, &v6);
    v3 = v4;
    if ( v4 >= 0 )
      return 0LL;
  }
  WdLogSingleEntry1(2LL, v3);
  return (unsigned int)v3;
}
