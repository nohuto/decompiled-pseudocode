__int64 __fastcall CBaseInput::HandleRemoteLocalDeviceDetached(CBaseInput *this)
{
  unsigned int v2; // edi
  __int64 v3; // rcx
  void *v4; // rcx
  HANDLE Handle; // [rsp+48h] [rbp+10h]

  v2 = -1073741823;
  Handle = 0LL;
  if ( !*((_QWORD *)this + 1) || !*((_DWORD *)this + 350) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1404LL);
  if ( CBaseInput::ExecutingInSensorHostingProcess(this) )
  {
    v4 = (void *)*((_QWORD *)this + 1);
    Handle = v4;
  }
  else
  {
    v3 = *((_QWORD *)this + 2);
    if ( v3 )
      RawInputManagerObjectCreateKernelHandle(v3, 3LL, 0LL);
    v4 = 0LL;
  }
  if ( v4 )
  {
    v2 = RIMDirectStopDeviceClassNotifications(v4);
    if ( Handle != *((HANDLE *)this + 1) )
      ZwClose(Handle);
  }
  return v2;
}
