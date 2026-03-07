__int64 __fastcall DxgMonitor::MonitorPnpState::UpdatePnPDeviceInterfaceProperties(DxgMonitor::MonitorPnpState *this)
{
  unsigned int v1; // ebx
  char *v3; // rsi
  __int64 result; // rax
  int v5; // eax
  int v6; // [rsp+50h] [rbp+8h] BYREF
  char v7; // [rsp+58h] [rbp+10h] BYREF

  v1 = 0;
  if ( !*((_QWORD *)this + 1) )
    return 3221226021LL;
  if ( !*((_BYTE *)this + 16) )
    return 3221226021LL;
  if ( !*((_QWORD *)this + 7) )
    return 3221226021LL;
  v3 = (char *)this + 48;
  if ( !*((_WORD *)this + 24) )
    return 3221226021LL;
  (*(void (__fastcall **)(_QWORD, char *))(**(_QWORD **)this + 8LL))(*(_QWORD *)this, &v7);
  v6 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 16LL))(*(_QWORD *)this);
  result = IoSetDeviceInterfacePropertyData(v3, &DEVPKEY_Monitor_AdapterLuid, 0LL, 0LL, 8, 8, &v7);
  if ( (int)result >= 0 )
  {
    v5 = IoSetDeviceInterfacePropertyData(v3, &DEVPKEY_Monitor_TargetId, 0LL, 0LL, 7, 4, &v6);
    if ( v5 < 0 )
      return (unsigned int)v5;
    return v1;
  }
  return result;
}
