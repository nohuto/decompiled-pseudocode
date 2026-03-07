__int64 RegistryOverwriteCentralProcessor()
{
  NTSTATUS v0; // ebx
  ULONG v1; // esi
  ULONG i; // edx
  wchar_t *Buffer; // rbx
  ULONG DataSize; // edi
  ULONG ResultLength; // [rsp+38h] [rbp-69h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-61h] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-59h] BYREF
  UNICODE_STRING ValueName; // [rsp+50h] [rbp-51h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-41h] BYREF
  UNICODE_STRING Data; // [rsp+90h] [rbp-11h] BYREF
  UNICODE_STRING DestinationString; // [rsp+A0h] [rbp-1h] BYREF
  UNICODE_STRING v13; // [rsp+B0h] [rbp+Fh] BYREF
  __int128 KeyInformation; // [rsp+C0h] [rbp+1Fh] BYREF
  WCHAR SourceString[8]; // [rsp+D0h] [rbp+2Fh] BYREF
  __int64 v16; // [rsp+E0h] [rbp+3Fh]

  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  KeyHandle = 0LL;
  ResultLength = 0;
  v16 = 0LL;
  Handle = 0LL;
  DestinationString = 0LL;
  v13 = 0LL;
  ValueName = 0LL;
  KeyInformation = 0LL;
  *(_OWORD *)SourceString = 0LL;
  Data = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\Hardware\\Description\\System\\CentralProcessor");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v0 = ZwOpenKey(&KeyHandle, 8u, &ObjectAttributes);
  if ( v0 >= 0 )
  {
    v1 = 0;
    for ( i = 0; ; i = v1 )
    {
      v0 = ZwEnumerateKey(KeyHandle, i, KeyBasicInformation, &KeyInformation, 0x26u, &ResultLength);
      if ( v0 == -2147483622 )
        break;
      ++v1;
      if ( v0 >= 0 )
      {
        SourceString[(unsigned __int64)HIDWORD(KeyInformation) >> 1] = 0;
        RtlInitUnicodeString(&v13, SourceString);
        ObjectAttributes.RootDirectory = KeyHandle;
        ObjectAttributes.Length = 48;
        ObjectAttributes.ObjectName = &v13;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        if ( ZwOpenKey(&Handle, 0xF003Fu, &ObjectAttributes) >= 0 )
        {
          RtlInitUnicodeString(&Data, L"Not Available");
          RtlInitUnicodeString(&ValueName, L"VendorIdentifier");
          Buffer = Data.Buffer;
          DataSize = Data.Length + 2;
          ZwSetValueKey(Handle, &ValueName, 0, 1u, Data.Buffer, DataSize);
          RtlInitUnicodeString(&ValueName, L"ProcessorNameString");
          ZwSetValueKey(Handle, &ValueName, 0, 1u, Buffer, DataSize);
          RtlInitUnicodeString(&ValueName, L"Identifier");
          ZwSetValueKey(Handle, &ValueName, 0, 1u, Buffer, DataSize);
          ZwClose(Handle);
        }
      }
    }
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v0;
}
