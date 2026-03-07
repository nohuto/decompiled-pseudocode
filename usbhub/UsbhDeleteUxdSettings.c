__int64 __fastcall UsbhDeleteUxdSettings(__int64 a1, __int64 a2, int a3)
{
  _DWORD *v6; // rsi
  PDEVICE_OBJECT v7; // rcx
  _DWORD *v8; // rdi
  int v9; // ebx
  bool v10; // zf
  unsigned int v11; // ebx
  __int64 v12; // rcx
  HANDLE Handle; // [rsp+68h] [rbp+20h] BYREF

  v6 = PdoExt(a2);
  v8 = FdoExt(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v7 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        0,
        1u,
        0x1Fu,
        (__int64)&WPP_4aa30c1ba02a3b8c2a9c4e9b57ebe163_Traceguids);
  }
  UsbhGetGlobalUxdSettings(v7, v8 + 1294);
  v9 = a3 - 1;
  if ( v9 )
  {
    if ( v9 != 1 )
      return 0LL;
    if ( !v6[661] )
    {
      v10 = v8[1296] == 0;
      goto LABEL_10;
    }
  }
  else if ( !v6[660] )
  {
    v10 = v8[1295] == 0;
LABEL_10:
    if ( v10 )
      return 0LL;
  }
  v11 = *((unsigned __int16 *)v6 + 714);
  Handle = 0LL;
  if ( (int)UsbhOpenUxdPortHandle(a1, &Handle) >= 0 )
  {
    UsbhDeleteUxdPortSettings(v12, (const WCHAR *)Handle, v11);
    ZwClose(Handle);
  }
  UsbhDeleteUxdDeviceKey(v12, a2);
  return 0LL;
}
