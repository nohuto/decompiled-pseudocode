__int64 __fastcall RtlpQueryNlsSystemCodePages(PULONG Value, PULONG a2)
{
  NTSTATUS v4; // ebx
  ULONG ResultLength; // [rsp+30h] [rbp-59h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-51h] BYREF
  UNICODE_STRING ValueName; // [rsp+40h] [rbp-49h] BYREF
  UNICODE_STRING String; // [rsp+50h] [rbp-39h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-29h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-19h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+A0h] [rbp+17h] BYREF
  int v13; // [rsp+A4h] [rbp+1Bh]
  WCHAR SourceString[11]; // [rsp+ACh] [rbp+23h] BYREF
  __int16 v15; // [rsp+C2h] [rbp+39h]

  *Value = 65001;
  *a2 = 65001;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  ResultLength = 0;
  KeyHandle = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Nls\\CodePage");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x80000000, &ObjectAttributes) < 0 )
    goto LABEL_10;
  ValueName = 0LL;
  String = 0LL;
  RtlInitUnicodeString(&ValueName, L"ACP");
  v4 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x24u, &ResultLength);
  if ( v4 >= 0 )
  {
    if ( v13 != 1
      || (v15 = 0,
          RtlInitUnicodeString(&String, SourceString),
          v4 = RtlUnicodeStringToInteger(&String, 0xAu, Value),
          v4 >= 0) )
    {
      RtlInitUnicodeString(&ValueName, L"OEMCP");
      v4 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x24u, &ResultLength);
      if ( v4 >= 0 && v13 == 1 )
      {
        v15 = 0;
        RtlInitUnicodeString(&String, SourceString);
        v4 = RtlUnicodeStringToInteger(&String, 0xAu, a2);
      }
    }
  }
  ZwClose(KeyHandle);
  if ( v4 < 0 )
  {
LABEL_10:
    *Value = 65001;
    *a2 = 65001;
  }
  return 0LL;
}
