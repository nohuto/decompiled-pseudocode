/*
 * XREFs of UsbhUxdShutdown @ 0x1C005B1D0
 * Callers:
 *     UsbhDeviceShutdown @ 0x1C00427C0 (UsbhDeviceShutdown.c)
 * Callees:
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     WPP_RECORDER_SF_ @ 0x1C002E4E8 (WPP_RECORDER_SF_.c)
 *     UsbhDeleteUxdSubKeys @ 0x1C0059D10 (UsbhDeleteUxdSubKeys.c)
 *     UsbhGetGlobalUxdSettings @ 0x1C0059EA0 (UsbhGetGlobalUxdSettings.c)
 *     UsbhOpenRegistryKey @ 0x1C005A648 (UsbhOpenRegistryKey.c)
 *     UsbhOpenUxdPortHandle @ 0x1C005A6D0 (UsbhOpenUxdPortHandle.c)
 */

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
