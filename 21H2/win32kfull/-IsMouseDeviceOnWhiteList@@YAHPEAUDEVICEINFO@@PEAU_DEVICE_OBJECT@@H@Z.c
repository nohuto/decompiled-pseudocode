/*
 * XREFs of ?IsMouseDeviceOnWhiteList@@YAHPEAUDEVICEINFO@@PEAU_DEVICE_OBJECT@@H@Z @ 0x1C01CFFA0
 * Callers:
 *     CheckForLegacyTouchPad @ 0x1C011A940 (CheckForLegacyTouchPad.c)
 * Callees:
 *     ?IsDeviceOnRegistryList@@YAHU_UNICODE_STRING@@0H@Z @ 0x1C01160C4 (-IsDeviceOnRegistryList@@YAHU_UNICODE_STRING@@0H@Z.c)
 */

_BOOL8 __fastcall IsMouseDeviceOnWhiteList(struct DEVICEINFO *a1, struct _DEVICE_OBJECT *a2, int a3)
{
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-38h] BYREF
  struct _UNICODE_STRING v7; // [rsp+30h] [rbp-28h] BYREF
  struct _UNICODE_STRING v8; // [rsp+40h] [rbp-18h] BYREF

  DestinationString = 0LL;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\PrecisionTouchPad\\LegacyDevices");
  v7 = *(struct _UNICODE_STRING *)((char *)a1 + 888);
  v8 = DestinationString;
  return IsDeviceOnRegistryList(&v8, &v7, a3);
}
