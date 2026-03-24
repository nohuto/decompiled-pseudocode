/*
 * XREFs of ?IsMouseDeviceOnWhiteList@@YAHPEAUDEVICEINFO@@PEAU_DEVICE_OBJECT@@H@Z @ 0x1C0220690
 * Callers:
 *     IsLegacyTouchPadDevice @ 0x1C0121020 (IsLegacyTouchPadDevice.c)
 * Callees:
 *     ?IsDeviceOnRegistryList@@YAHU_UNICODE_STRING@@0H@Z @ 0x1C012164C (-IsDeviceOnRegistryList@@YAHU_UNICODE_STRING@@0H@Z.c)
 *     ?GetMouseDeviceHardwareId@@YAJPEAUDEVICEINFO@@PEAU_DEVICE_OBJECT@@PEAU_UNICODE_STRING@@@Z @ 0x1C0121778 (-GetMouseDeviceHardwareId@@YAJPEAUDEVICEINFO@@PEAU_DEVICE_OBJECT@@PEAU_UNICODE_STRING@@@Z.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 */

__int64 __fastcall IsMouseDeviceOnWhiteList(struct DEVICEINFO *a1, struct _DEVICE_OBJECT *a2, int a3)
{
  unsigned int v4; // ebx
  struct _UNICODE_STRING v6; // [rsp+20h] [rbp-E0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-D0h] BYREF
  struct _UNICODE_STRING v8; // [rsp+40h] [rbp-C0h] BYREF
  struct _UNICODE_STRING v9; // [rsp+50h] [rbp-B0h] BYREF
  char v10; // [rsp+60h] [rbp-A0h] BYREF

  *(_QWORD *)&v6.Length = 13107200LL;
  v6.Buffer = (PWSTR)&v10;
  DestinationString = 0LL;
  v4 = 0;
  if ( (int)GetMouseDeviceHardwareId(a1, a2, &v6) >= 0 )
  {
    RtlInitUnicodeString(
      &DestinationString,
      L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\PrecisionTouchPad\\LegacyDevices");
    v8 = v6;
    v9 = DestinationString;
    return IsDeviceOnRegistryList(&v9, &v8, a3);
  }
  return v4;
}
