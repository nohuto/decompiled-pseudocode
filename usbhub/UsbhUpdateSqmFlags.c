void __fastcall UsbhUpdateSqmFlags(PDEVICE_OBJECT DeviceObject)
{
  _DWORD *v2; // rax
  _DWORD *Pool2; // rdi
  _DWORD *v4; // rsi
  NTSTATUS v5; // eax
  unsigned int v6; // ecx
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  ULONG ResultLength; // [rsp+A8h] [rbp+28h] BYREF
  void *KeyHandle; // [rsp+B0h] [rbp+30h] BYREF
  void *DeviceRegKey; // [rsp+B8h] [rbp+38h] BYREF

  ResultLength = 0;
  memset(&ObjectAttributes, 0, 44);
  DestinationString = 0LL;
  v2 = PdoExt((__int64)DeviceObject);
  DeviceRegKey = 0LL;
  KeyHandle = 0LL;
  Pool2 = 0LL;
  v4 = v2;
  if ( IoOpenDeviceRegistryKey(DeviceObject, 1u, 0x1F0000u, &DeviceRegKey) >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"Ceip");
    ObjectAttributes.RootDirectory = DeviceRegKey;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwCreateKey(&KeyHandle, 0xF003Fu, &ObjectAttributes, 0, 0LL, 0, 0LL) >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"DeviceInformation");
      Pool2 = (_DWORD *)ExAllocatePool2(256LL, 16LL, 1112885333LL);
      if ( Pool2 )
      {
        v5 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, Pool2, 0x10u, &ResultLength);
        if ( (int)(v5 + 0x80000000) < 0 || v5 == -1073741772 )
        {
          v6 = (Pool2[3] | v4[701]) & 0xFFFFFFF7;
          Pool2[3] = v6;
          v4[701] = v6;
          RtlWriteRegistryValue(0x40000000u, (PCWSTR)KeyHandle, L"DeviceInformation", 4u, Pool2 + 3, 4u);
        }
      }
    }
  }
  if ( DeviceRegKey )
    ZwClose(DeviceRegKey);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
}
