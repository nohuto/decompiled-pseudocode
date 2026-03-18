/*
 * XREFs of UsbhUxdShutdown @ 0x1C005BFA4
 * Callers:
 *     UsbhDeviceShutdown @ 0x1C00431B0 (UsbhDeviceShutdown.c)
 * Callees:
 *     FdoExt @ 0x1C000F050 (FdoExt.c)
 *     WPP_RECORDER_SF_ @ 0x1C002EEF4 (WPP_RECORDER_SF_.c)
 *     UsbhDeleteUxdSubKeys @ 0x1C005AB48 (UsbhDeleteUxdSubKeys.c)
 *     UsbhGetGlobalUxdSettings @ 0x1C005ACF0 (UsbhGetGlobalUxdSettings.c)
 *     UsbhOpenUxdPortHandle @ 0x1C005B4A4 (UsbhOpenUxdPortHandle.c)
 */

__int64 __fastcall UsbhUxdShutdown(__int64 a1)
{
  PDEVICE_OBJECT v2; // rcx
  _DWORD *v3; // rdi
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  void *KeyHandle; // [rsp+88h] [rbp+18h] BYREF

  v3 = FdoExt(a1);
  KeyHandle = 0LL;
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
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\registry\\machine\\system\\currentcontrolset\\services\\usbhub\\uxd_control\\devices\\");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes) >= 0 )
  {
    UsbhDeleteUxdSubKeys(a1, (WCHAR *)KeyHandle);
    ZwClose(KeyHandle);
  }
  KeyHandle = 0LL;
  if ( (int)UsbhOpenUxdPortHandle(a1, &KeyHandle) >= 0 )
  {
    UsbhDeleteUxdSubKeys(a1, (WCHAR *)KeyHandle);
    ZwClose(KeyHandle);
  }
  return 0LL;
}
