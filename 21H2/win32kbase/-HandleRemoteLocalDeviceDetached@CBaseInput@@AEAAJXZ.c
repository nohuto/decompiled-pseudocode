/*
 * XREFs of ?HandleRemoteLocalDeviceDetached@CBaseInput@@AEAAJXZ @ 0x1C00496B0
 * Callers:
 *     <none>
 * Callees:
 *     RIMDirectStopDeviceClassNotifications @ 0x1C0048450 (RIMDirectStopDeviceClassNotifications.c)
 *     ?ExecutingInSensorHostingProcess@CBaseInput@@IEBA_NXZ @ 0x1C00497F8 (-ExecutingInSensorHostingProcess@CBaseInput@@IEBA_NXZ.c)
 *     RawInputManagerObjectCreateKernelHandle @ 0x1C004A880 (RawInputManagerObjectCreateKernelHandle.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CBaseInput::HandleRemoteLocalDeviceDetached(char **this, __int64 a2, __int64 a3)
{
  unsigned int v4; // edi
  char *v5; // rcx
  char *v6; // rcx
  char *Handle; // [rsp+40h] [rbp+8h]

  Handle = 0LL;
  v4 = -1073741823;
  if ( !this[1] || !*((_DWORD *)this + 328) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  if ( CBaseInput::ExecutingInSensorHostingProcess((CBaseInput *)this) )
  {
    v6 = this[1];
    Handle = v6;
  }
  else
  {
    v5 = this[2];
    if ( v5 )
      RawInputManagerObjectCreateKernelHandle(v5, 3LL, 0LL);
    v6 = 0LL;
  }
  if ( v6 )
  {
    v4 = RIMDirectStopDeviceClassNotifications(v6);
    if ( Handle != this[1] )
      ZwClose(Handle);
  }
  return v4;
}
