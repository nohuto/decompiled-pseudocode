/*
 * XREFs of RIMRegOpenDeviceInstanceKey @ 0x1C00A196C
 * Callers:
 *     RIMPopulateExtendedKeyboardDeviceProperties @ 0x1C009F0E8 (RIMPopulateExtendedKeyboardDeviceProperties.c)
 *     RIMPopulateExtendedMouseDeviceProperties @ 0x1C01A05FC (RIMPopulateExtendedMouseDeviceProperties.c)
 *     RIMPopulateExtendedPointerDeviceProperties @ 0x1C01A0784 (RIMPopulateExtendedPointerDeviceProperties.c)
 * Callees:
 *     RIMGetPointerDevicePDO @ 0x1C00A1C34 (RIMGetPointerDevicePDO.c)
 *     RIMGetDeviceObjectPointer @ 0x1C00A1D50 (RIMGetDeviceObjectPointer.c)
 */

void *__fastcall RIMRegOpenDeviceInstanceKey(int a1, int a2, int a3)
{
  NTSTATUS v3; // eax
  void *v4; // rdx
  PVOID v6[3]; // [rsp+30h] [rbp-18h] BYREF
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF
  void *DeviceRegKey; // [rsp+68h] [rbp+20h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+70h] [rbp+28h]
  HANDLE Handle; // [rsp+78h] [rbp+30h] BYREF

  DeviceRegKey = 0LL;
  Object = 0LL;
  v6[0] = 0LL;
  Handle = 0LL;
  DeviceObject = 0LL;
  if ( (int)RIMGetDeviceObjectPointer(a1 + 208, a2, a3, (unsigned int)&Handle, (__int64)v6, (__int64)&Object) >= 0 )
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
    ObfDereferenceObject(v6[0]);
    ObfDereferenceObject(Object);
  }
  return DeviceRegKey;
}
