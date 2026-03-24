/*
 * XREFs of ?HandleRemoteLocalDeviceDetached@CBaseInput@@AEAAJXZ @ 0x1C0056410
 * Callers:
 *     <none>
 * Callees:
 *     RawInputManagerObjectCreateKernelHandle @ 0x1C000A5E0 (RawInputManagerObjectCreateKernelHandle.c)
 *     RIMDirectStopDeviceClassNotifications @ 0x1C0052BE0 (RIMDirectStopDeviceClassNotifications.c)
 *     ?ExecutingInSensorHostingProcess@CBaseInput@@IEBA_NXZ @ 0x1C0056538 (-ExecutingInSensorHostingProcess@CBaseInput@@IEBA_NXZ.c)
 */

__int64 __fastcall CBaseInput::HandleRemoteLocalDeviceDetached(CBaseInput *this)
{
  unsigned int v2; // edi
  HANDLE v3; // rcx
  _DWORD *v5; // rcx
  HANDLE Handle; // [rsp+48h] [rbp+10h] BYREF

  Handle = 0LL;
  v2 = -1073741823;
  if ( CBaseInput::ExecutingInSensorHostingProcess(this) )
  {
    v3 = (HANDLE)*((_QWORD *)this + 1);
    Handle = v3;
  }
  else
  {
    v5 = (_DWORD *)*((_QWORD *)this + 2);
    if ( v5 )
      RawInputManagerObjectCreateKernelHandle(v5, 3u, 0, 0, &Handle);
    v3 = Handle;
  }
  if ( v3 )
  {
    v2 = RIMDirectStopDeviceClassNotifications((__int64)v3);
    if ( Handle != *((HANDLE *)this + 1) )
      ZwClose(Handle);
  }
  return v2;
}
