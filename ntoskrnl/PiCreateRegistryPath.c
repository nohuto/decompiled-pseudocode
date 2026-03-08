/*
 * XREFs of PiCreateRegistryPath @ 0x140952A34
 * Callers:
 *     PiCreateServiceKeyUnderPath @ 0x140952CC8 (PiCreateServiceKeyUnderPath.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwCreateKey @ 0x1404126B0 (ZwCreateKey.c)
 *     PnpConcatenateUnicodeStrings @ 0x140683298 (PnpConcatenateUnicodeStrings.c)
 *     RtlPrefixUnicodeString @ 0x1406D5A70 (RtlPrefixUnicodeString.c)
 *     RtlFreeUnicodeString @ 0x1407F0430 (RtlFreeUnicodeString.c)
 */

__int64 __fastcall PiCreateRegistryPath(UNICODE_STRING *SourceString, __int64 a2, void *a3, HANDLE *a4)
{
  NTSTATUS v7; // eax
  NTSTATUS v8; // ebx
  wchar_t *Buffer; // rcx
  unsigned __int16 Length; // r15
  unsigned __int16 v11; // r14
  wchar_t *v12; // rdi
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+B0h] [rbp+30h] BYREF

  KeyHandle = 0LL;
  memset(&ObjectAttributes, 0, 44);
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  if ( SourceString
    && a4
    && SourceString->Length >= 4u
    && RtlPrefixUnicodeString(&CmRegistryMachineName, SourceString, 1u) )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.ObjectName = SourceString;
    ObjectAttributes.SecurityDescriptor = a3;
    ObjectAttributes.SecurityQualityOfService = 0LL;
    v7 = ZwCreateKey(&KeyHandle, 4u, &ObjectAttributes, 0, 0LL, 0, 0LL);
    v8 = v7;
    if ( v7 >= 0 )
    {
      *a4 = KeyHandle;
LABEL_7:
      KeyHandle = 0LL;
      goto LABEL_21;
    }
    if ( v7 == -1073741772 )
    {
      v8 = PnpConcatenateUnicodeStrings(&DestinationString, SourceString);
      if ( v8 >= 0 )
      {
        Buffer = DestinationString.Buffer;
        Length = DestinationString.Length;
        v11 = DestinationString.Length >> 1;
        v12 = &DestinationString.Buffer[((unsigned __int64)CmRegistryMachineName.Length >> 1) + 1];
        if ( (unsigned __int16)((__int64)(2 * (((unsigned __int64)CmRegistryMachineName.Length >> 1) + 1)) >> 1) < (unsigned __int16)(DestinationString.Length >> 1) )
        {
          do
          {
            if ( !*v12 )
              break;
            if ( *v12 == 92 )
            {
              *v12 = 0;
              ObjectAttributes.Length = 48;
              ObjectAttributes.RootDirectory = 0LL;
              DestinationString.Length = 2 * (v12 - DestinationString.Buffer);
              ObjectAttributes.ObjectName = &DestinationString;
              ObjectAttributes.Attributes = 576;
              *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
              v8 = ZwCreateKey(&KeyHandle, 4u, &ObjectAttributes, 0, 0LL, 0, 0LL);
              *v12 = 92;
              if ( v8 < 0 )
                goto LABEL_21;
              if ( KeyHandle )
              {
                ZwClose(KeyHandle);
                KeyHandle = 0LL;
              }
              Buffer = DestinationString.Buffer;
            }
            ++v12;
          }
          while ( (unsigned __int16)(v12 - Buffer) < v11 );
        }
        DestinationString.Length = Length;
        ObjectAttributes.Length = 48;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Attributes = 576;
        ObjectAttributes.ObjectName = &DestinationString;
        ObjectAttributes.SecurityDescriptor = a3;
        ObjectAttributes.SecurityQualityOfService = 0LL;
        v8 = ZwCreateKey(&KeyHandle, 4u, &ObjectAttributes, 0, 0LL, 0, 0LL);
        if ( v8 >= 0 )
        {
          *a4 = KeyHandle;
          goto LABEL_7;
        }
      }
    }
  }
  else
  {
    v8 = -1073741811;
  }
LABEL_21:
  RtlFreeUnicodeString(&DestinationString);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v8;
}
