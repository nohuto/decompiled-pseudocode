/*
 * XREFs of IrqPolicyGetSubKey @ 0x1C009FC24
 * Callers:
 *     PcisuppGetRoutingInfo @ 0x1C0099C6C (PcisuppGetRoutingInfo.c)
 *     PcisuppSetRoutingInfo @ 0x1C009A1E8 (PcisuppSetRoutingInfo.c)
 *     IrqPolicyGetDevicePolicy @ 0x1C009F8A4 (IrqPolicyGetDevicePolicy.c)
 *     IrqPolicySetDeviceAffinity @ 0x1C009FED4 (IrqPolicySetDeviceAffinity.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall IrqPolicyGetSubKey(struct _DEVICE_OBJECT *a1, const WCHAR *a2, ULONG a3, void **a4)
{
  NTSTATUS result; // eax
  NTSTATUS v8; // ebx
  void *DeviceRegKey; // [rsp+48h] [rbp+7h] BYREF
  void *KeyHandle; // [rsp+50h] [rbp+Fh] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+58h] [rbp+17h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp+27h] BYREF

  KeyHandle = 0LL;
  *(&ObjectAttributes.Attributes + 1) = 0;
  DeviceRegKey = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  DestinationString = 0LL;
  result = IoOpenDeviceRegistryKey(a1, 1u, 0xF003Fu, &DeviceRegKey);
  if ( result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"Interrupt Management");
    ObjectAttributes.RootDirectory = DeviceRegKey;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v8 = ZwCreateKey(&KeyHandle, 0xF003Fu, &ObjectAttributes, 0, 0LL, 0, 0LL);
    ZwClose(DeviceRegKey);
    if ( v8 >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, a2);
      ObjectAttributes.RootDirectory = KeyHandle;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v8 = ZwCreateKey(a4, 0xF003Fu, &ObjectAttributes, 0, 0LL, a3, 0LL);
      ZwClose(KeyHandle);
    }
    return v8;
  }
  return result;
}
