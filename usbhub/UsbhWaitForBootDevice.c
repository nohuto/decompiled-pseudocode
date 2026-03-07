NTSTATUS __fastcall UsbhWaitForBootDevice(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v7; // rdx
  _DWORD *v8; // rbx
  __int64 v9; // rcx
  NTSTATUS result; // eax
  __int64 v11; // rdx

  v8 = PdoExt(a2);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_q((__int64)WPP_GLOBAL_Control->DeviceExtension, v7, 3u, 0x52u, (__int64)"FKh&", a1);
  v9 = *((_QWORD *)v8 + 344);
  v8[687] = a3;
  v8[686] = a4;
  result = ExNotifyBootDeviceRemoval(v9);
  if ( (_BYTE)result )
    result = KeWaitForSingleObject(v8 + 690, Executive, 0, 0, 0LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return WPP_RECORDER_SF_q((__int64)WPP_GLOBAL_Control->DeviceExtension, v11, 3u, 0x53u, (__int64)"FKh&", a1);
  }
  return result;
}
