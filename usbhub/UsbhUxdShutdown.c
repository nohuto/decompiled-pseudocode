__int64 __fastcall UsbhUxdShutdown(__int64 a1)
{
  PDEVICE_OBJECT v2; // rcx
  _DWORD *v3; // rdi
  HANDLE Handle; // [rsp+48h] [rbp+10h] BYREF

  v3 = FdoExt(a1);
  Handle = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v2 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        0,
        1u,
        0x23u,
        (__int64)&WPP_4aa30c1ba02a3b8c2a9c4e9b57ebe163_Traceguids);
  }
  UsbhGetGlobalUxdSettings((__int64)v2, v3 + 1294);
  if ( UsbhOpenRegistryKey(&Handle) >= 0 )
  {
    UsbhDeleteUxdSubKeys(a1, (WCHAR *)Handle);
    ZwClose(Handle);
  }
  Handle = 0LL;
  if ( (int)UsbhOpenUxdPortHandle(a1, &Handle) >= 0 )
  {
    UsbhDeleteUxdSubKeys(a1, (WCHAR *)Handle);
    ZwClose(Handle);
  }
  return 0LL;
}
