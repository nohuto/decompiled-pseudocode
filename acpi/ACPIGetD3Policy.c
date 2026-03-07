NTSTATUS __fastcall ACPIGetD3Policy(__int64 a1, bool *a2)
{
  struct _DEVICE_OBJECT *v2; // rcx
  NTSTATUS result; // eax
  NTSTATUS v5; // ebx
  ULONG ResultLength; // [rsp+30h] [rbp-29h] BYREF
  void *DeviceRegKey; // [rsp+38h] [rbp-21h] BYREF
  void *KeyHandle; // [rsp+40h] [rbp-19h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-11h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-1h] BYREF
  __int128 KeyValueInformation; // [rsp+88h] [rbp+2Fh] BYREF
  int v12; // [rsp+98h] [rbp+3Fh]

  v2 = *(struct _DEVICE_OBJECT **)(a1 + 784);
  *(&ObjectAttributes.Attributes + 1) = 0;
  KeyHandle = 0LL;
  DeviceRegKey = 0LL;
  ResultLength = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  DestinationString = 0LL;
  v12 = 0;
  KeyValueInformation = 0LL;
  result = IoOpenDeviceRegistryKey(v2, 1u, 0xF003Fu, &DeviceRegKey);
  if ( result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"e5b3b5ac-9725-4f78-963f-03dfb1d828c7");
    ObjectAttributes.RootDirectory = DeviceRegKey;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v5 = ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes);
    ZwClose(DeviceRegKey);
    if ( v5 >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"D3ColdSupported");
      v5 = ZwQueryValueKey(
             KeyHandle,
             &DestinationString,
             KeyValuePartialInformation,
             &KeyValueInformation,
             0x14u,
             &ResultLength);
      ZwClose(KeyHandle);
      if ( v5 >= 0 )
        *a2 = HIDWORD(KeyValueInformation) != 0;
    }
    return v5;
  }
  return result;
}
