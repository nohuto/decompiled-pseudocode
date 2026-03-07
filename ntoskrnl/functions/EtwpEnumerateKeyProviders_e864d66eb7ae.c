int __fastcall EtwpEnumerateKeyProviders(
        __int64 a1,
        unsigned int a2,
        const WCHAR *a3,
        const WCHAR *a4,
        unsigned int *KeyInformation,
        BOOLEAN NewElement,
        PRTL_AVL_TABLE Table,
        int a8)
{
  int result; // eax
  ULONG v12; // ebx
  int v13; // r12d
  int v14; // eax
  unsigned __int64 v15; // rcx
  const WCHAR *v16; // rdx
  __int64 ValueData; // [rsp+30h] [rbp-50h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-48h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF

  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ValueData = 0LL;
  KeyHandle = 0LL;
  NewElement = 0;
  DestinationString = 0LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  RtlInitUnicodeString(&DestinationString, a3);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( result >= 0 )
  {
    v12 = 0;
    v13 = a8;
    while ( 1 )
    {
      v14 = ZwEnumerateKey(KeyHandle, v12, KeyBasicInformation, KeyInformation, 0x11Eu, (PULONG)&ValueData + 1);
      v15 = KeyInformation[3];
      if ( v15 >= 0x108 )
      {
        v14 = -2147483643;
        goto LABEL_12;
      }
      if ( v14 < 0 )
        break;
      *((_WORD *)KeyInformation + (v15 >> 1) + 8) = 0;
      RtlInsertElementGenericTableAvl(Table, KeyInformation + 4, KeyInformation[3] + 2, &NewElement);
      if ( NewElement )
        EtwpEnableAutoLoggerProvider(a1, a2, KeyInformation + 4, a3, a4, v13, ValueData);
      ++v12;
    }
    if ( v14 == -2147483622 )
      return ZwClose(KeyHandle);
LABEL_12:
    LODWORD(ValueData) = RtlNtStatusToDosError(v14);
    v16 = a4;
    if ( !a4 )
      v16 = a3;
    RtlWriteRegistryValue(0, v16, L"EnableStatus", 4u, &ValueData, 4u);
    return ZwClose(KeyHandle);
  }
  return result;
}
