__int64 __fastcall CLegacyRotationMgr::UpdateAutoRotationRegistrySetting(
        CLegacyRotationMgr *this,
        int a2,
        const unsigned __int16 *a3,
        ULONG a4,
        const unsigned __int16 *SourceString)
{
  NTSTATUS v7; // ebx
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-1h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+58h] [rbp+Fh] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp+1Fh] BYREF
  void *KeyHandle; // [rsp+A8h] [rbp+5Fh] BYREF
  int Data; // [rsp+B0h] [rbp+67h] BYREF

  Data = a2;
  KeyHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  DestinationString = 0LL;
  ValueName = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.Attributes = 576;
  v7 = ZwCreateKey(&KeyHandle, 0x2000000u, &ObjectAttributes, 0, 0LL, a4, 0LL);
  if ( v7 >= 0 )
  {
    RtlInitUnicodeString(&ValueName, a3);
    v7 = ZwSetValueKey(KeyHandle, &ValueName, 0, 4u, &Data, 4u);
    ZwClose(KeyHandle);
  }
  return (unsigned int)v7;
}
