/*
 * XREFs of RIMRegOpenDeviceInstanceKey @ 0x1C006D818
 * Callers:
 *     RIMPopulateExtendedKeyboardDeviceProperties @ 0x1C006CA68 (RIMPopulateExtendedKeyboardDeviceProperties.c)
 *     RIMPopulateExtendedMouseDeviceProperties @ 0x1C00CC988 (RIMPopulateExtendedMouseDeviceProperties.c)
 *     RIMPopulateExtendedPointerDeviceProperties @ 0x1C016BD98 (RIMPopulateExtendedPointerDeviceProperties.c)
 * Callees:
 *     RIMGetDeviceObjectPointer @ 0x1C00581B0 (RIMGetDeviceObjectPointer.c)
 *     RIMGetPointerDevicePDO @ 0x1C006DD34 (RIMGetPointerDevicePDO.c)
 */

void *__fastcall RIMRegOpenDeviceInstanceKey(struct _UNICODE_STRING *a1, __int64 a2, __int64 a3)
{
  NTSTATUS v3; // eax
  void *v4; // rdx
  PVOID v6; // [rsp+30h] [rbp-18h] BYREF
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF
  void *DeviceRegKey; // [rsp+68h] [rbp+20h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+70h] [rbp+28h]
  HANDLE Handle; // [rsp+78h] [rbp+30h] BYREF

  DeviceRegKey = 0LL;
  Object = 0LL;
  v6 = 0LL;
  Handle = 0LL;
  DeviceObject = 0LL;
  if ( (int)RIMGetDeviceObjectPointer(a1 + 13, a2, a3, &Handle, &v6, (PDEVICE_OBJECT *)&Object) >= 0 )
  {
    ObfReferenceObject(Object);
    if ( (int)RIMGetPointerDevicePDO((PDEVICE_OBJECT)Object) >= 0 )
    {
      v3 = IoOpenDeviceRegistryKey(DeviceObject, 1u, 0x20019u, &DeviceRegKey);
      v4 = DeviceRegKey;
      if ( v3 < 0 )
        v4 = 0LL;
      DeviceRegKey = v4;
      ObfDereferenceObject(DeviceObject);
    }
    ZwClose(Handle);
    ObfDereferenceObject(v6);
    ObfDereferenceObject(Object);
  }
  return DeviceRegKey;
}
