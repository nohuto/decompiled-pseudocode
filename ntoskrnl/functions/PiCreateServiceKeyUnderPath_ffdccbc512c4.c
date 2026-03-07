__int64 __fastcall PiCreateServiceKeyUnderPath(
        UNICODE_STRING *CreateOptions,
        UNICODE_STRING *SourceString,
        __int64 a3,
        _QWORD *a4)
{
  void *v6; // rsi
  HANDLE v7; // rdi
  int Length; // ecx
  int v10; // eax
  unsigned int v11; // ecx
  unsigned int v12; // edx
  int UnicodeString; // ebx
  NTSTATUS v14; // eax
  int ServiceStateSecurityObject; // eax
  __int64 v16; // rdx
  int v17; // eax
  HANDLE v18; // rax
  HANDLE v20; // [rsp+40h] [rbp-19h] BYREF
  void *v21; // [rsp+48h] [rbp-11h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+7h] BYREF
  HANDLE KeyHandle; // [rsp+C0h] [rbp+67h] BYREF

  KeyHandle = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v21 = 0LL;
  v20 = 0LL;
  memset(&ObjectAttributes, 0, 44);
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  if ( !CreateOptions
    || !CreateOptions->Buffer
    || (Length = CreateOptions->Length, (unsigned __int16)Length < 2u)
    || !SourceString
    || !SourceString->Buffer
    || (v10 = SourceString->Length, (unsigned __int16)v10 < 2u)
    || !a4 )
  {
    UnicodeString = -1073741811;
    goto LABEL_23;
  }
  v11 = Length + 2;
  v12 = v11 + v10;
  if ( v11 + v10 < v11 )
  {
    UnicodeString = -1073741675;
    goto LABEL_23;
  }
  if ( v12 > 0xFFFE )
  {
    UnicodeString = -2147483643;
    goto LABEL_23;
  }
  UnicodeString = IopAllocateUnicodeString((__int64)&DestinationString, v12);
  if ( UnicodeString >= 0 )
  {
    UnicodeString = RtlUnicodeStringPrintfEx(&DestinationString, 0LL, 0x800u, L"%wZ\\%wZ", SourceString, CreateOptions);
    if ( UnicodeString >= 0 )
    {
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v14 = ZwOpenKey(&KeyHandle, 4u, &ObjectAttributes);
      UnicodeString = v14;
      if ( v14 != -1073741772 )
      {
LABEL_19:
        if ( v14 >= 0 )
        {
          v18 = KeyHandle;
          KeyHandle = 0LL;
          *a4 = v18;
        }
        goto LABEL_23;
      }
      ServiceStateSecurityObject = PiAuGetServiceStateSecurityObject(0LL, &v21);
      v6 = v21;
      UnicodeString = ServiceStateSecurityObject;
      if ( ServiceStateSecurityObject < 0 )
        goto LABEL_23;
      v17 = PiCreateRegistryPath(SourceString, v16, v21, &v20);
      v7 = v20;
      UnicodeString = v17;
      if ( v17 == -1073741772 )
        goto LABEL_16;
      if ( v17 >= 0 )
      {
        ObjectAttributes.SecurityQualityOfService = 0LL;
        ObjectAttributes.Length = 48;
        ObjectAttributes.RootDirectory = v20;
        ObjectAttributes.Attributes = 576;
        ObjectAttributes.ObjectName = CreateOptions;
        ObjectAttributes.SecurityDescriptor = v6;
        v14 = ZwCreateKey(&KeyHandle, 4u, &ObjectAttributes, 0, 0LL, 0, 0LL);
        UnicodeString = v14;
        if ( v14 == -1073741772 )
        {
LABEL_16:
          UnicodeString = -1073741595;
          goto LABEL_23;
        }
        goto LABEL_19;
      }
    }
  }
LABEL_23:
  RtlFreeUnicodeString(&DestinationString);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v7 )
    ZwClose(v7);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  return (unsigned int)UnicodeString;
}
