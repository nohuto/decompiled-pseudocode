/*
 * XREFs of IsMouseDeviceOnIgnoreList @ 0x1C0121860
 * Callers:
 *     <none>
 * Callees:
 *     ?IsDeviceOnRegistryList@@YAHU_UNICODE_STRING@@0H@Z @ 0x1C01219CC (-IsDeviceOnRegistryList@@YAHU_UNICODE_STRING@@0H@Z.c)
 *     ?GetMouseDeviceHardwareId@@YAJPEAUDEVICEINFO@@PEAU_DEVICE_OBJECT@@PEAU_UNICODE_STRING@@@Z @ 0x1C0121AF8 (-GetMouseDeviceHardwareId@@YAJPEAUDEVICEINFO@@PEAU_DEVICE_OBJECT@@PEAU_UNICODE_STRING@@@Z.c)
 *     ?IsHIDMouse@@YAHPEAUDEVICEINFO@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C0121BA8 (-IsHIDMouse@@YAHPEAUDEVICEINFO@@PEAU_DEVICE_OBJECT@@@Z.c)
 *     GetDeviceObjectPointer @ 0x1C0121DAC (GetDeviceObjectPointer.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 */

__int64 __fastcall IsMouseDeviceOnIgnoreList(struct DEVICEINFO *a1, __int64 a2, int a3)
{
  unsigned int v4; // esi
  struct DEVICEINFO *v5; // rcx
  int v6; // r14d
  int MouseDeviceHardwareId; // ebx
  PVOID Object[2]; // [rsp+30h] [rbp-D0h] BYREF
  struct _UNICODE_STRING v10; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE Handle[2]; // [rsp+50h] [rbp-B0h] BYREF
  PVOID v12[2]; // [rsp+60h] [rbp-A0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-90h] BYREF
  char v14; // [rsp+80h] [rbp-80h] BYREF

  Object[0] = 0LL;
  v12[0] = 0LL;
  Handle[0] = 0LL;
  *(_DWORD *)(&v10.MaximumLength + 1) = 0;
  v4 = 1;
  DestinationString = 0LL;
  if ( (int)GetDeviceObjectPointer((int)a1 + 208, 0, a3, (unsigned int)Handle, (__int64)v12, (__int64)Object) < 0 )
    return 0LL;
  ObfReferenceObject(Object[0]);
  v6 = IsHIDMouse(v5, (struct _DEVICE_OBJECT *)Object[0]);
  *(_DWORD *)&v10.Length = 13107200;
  v10.Buffer = (PWSTR)&v14;
  MouseDeviceHardwareId = GetMouseDeviceHardwareId(a1, (struct _DEVICE_OBJECT *)Object[0], &v10);
  ZwClose(Handle[0]);
  ObfDereferenceObject(v12[0]);
  ObfDereferenceObject(Object[0]);
  if ( MouseDeviceHardwareId >= 0 )
  {
    RtlInitUnicodeString(
      &DestinationString,
      L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\PrecisionTouchPad\\IgnoredExternalMice");
    *(struct _UNICODE_STRING *)v12 = v10;
    *(struct _UNICODE_STRING *)Handle = DestinationString;
    return (unsigned int)IsDeviceOnRegistryList((struct _UNICODE_STRING *)Handle, (struct _UNICODE_STRING *)v12, v6);
  }
  return v4;
}
