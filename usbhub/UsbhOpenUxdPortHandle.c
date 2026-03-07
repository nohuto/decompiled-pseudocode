__int64 __fastcall UsbhOpenUxdPortHandle(__int64 a1, void **a2)
{
  PDEVICE_OBJECT *v3; // rax
  NTSTATUS v4; // ebx
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  void *DeviceRegKey; // [rsp+A0h] [rbp+20h] BYREF
  void *KeyHandle; // [rsp+A8h] [rbp+28h] BYREF

  DeviceRegKey = 0LL;
  KeyHandle = 0LL;
  v3 = (PDEVICE_OBJECT *)FdoExt(a1);
  DestinationString = 0LL;
  v4 = IoOpenDeviceRegistryKey(v3[149], 1u, 0x1F0000u, &DeviceRegKey);
  if ( v4 >= 0 )
  {
    *(&ObjectAttributes.Attributes + 1) = 0;
    *(&ObjectAttributes.Length + 1) = 0;
    RtlInitUnicodeString(&DestinationString, L"uxd");
    ObjectAttributes.RootDirectory = DeviceRegKey;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v4 = ZwCreateKey(&KeyHandle, 0xF003Fu, &ObjectAttributes, 0, 0LL, 0, 0LL);
    if ( v4 >= 0 )
      *a2 = KeyHandle;
    ZwClose(DeviceRegKey);
  }
  return (unsigned int)v4;
}
