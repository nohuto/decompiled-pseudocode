/*
 * XREFs of ?HandleRemoteLocalDeviceDetached@CBaseInput@@AEAAJXZ @ 0x1C0076DE0
 * Callers:
 *     <none>
 * Callees:
 *     RIMDirectStopDeviceClassNotifications @ 0x1C0075530 (RIMDirectStopDeviceClassNotifications.c)
 *     ?ExecutingInSensorHostingProcess@CBaseInput@@IEBA_NXZ @ 0x1C0076E90 (-ExecutingInSensorHostingProcess@CBaseInput@@IEBA_NXZ.c)
 *     RawInputManagerObjectCreateKernelHandle @ 0x1C0078710 (RawInputManagerObjectCreateKernelHandle.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall CBaseInput::HandleRemoteLocalDeviceDetached(CBaseInput *this)
{
  unsigned int v2; // edi
  __int64 v3; // rcx
  char *v4; // rcx
  char *Handle; // [rsp+48h] [rbp+10h]

  v2 = -1073741823;
  Handle = 0LL;
  if ( !*((_QWORD *)this + 1) || !*((_DWORD *)this + 334) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1380LL);
  if ( CBaseInput::ExecutingInSensorHostingProcess(this) )
  {
    v4 = (char *)*((_QWORD *)this + 1);
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
    if ( Handle != *((char **)this + 1) )
      ZwClose(Handle);
  }
  return v2;
}
