/*
 * XREFs of HalpMcaExtendedLogGetL1DirectoryBase @ 0x140500FFC
 * Callers:
 *     HalpMcaExtendedLogInitialize @ 0x14050110C (HalpMcaExtendedLogInitialize.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwOpenKey @ 0x140412550 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1404125F0 (ZwQueryValueKey.c)
 */

NTSTATUS __fastcall HalpMcaExtendedLogGetL1DirectoryBase(_QWORD *a1)
{
  NTSTATUS result; // eax
  NTSTATUS v3; // ebx
  ULONG ResultLength; // [rsp+30h] [rbp-29h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-21h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-19h] BYREF
  UNICODE_STRING ValueName; // [rsp+50h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+7h] BYREF
  _BYTE KeyValueInformation[12]; // [rsp+90h] [rbp+37h] BYREF
  __int64 v10; // [rsp+9Ch] [rbp+43h]

  *a1 = 0LL;
  *(&ObjectAttributes.Attributes + 1) = 0;
  ResultLength = 0;
  KeyHandle = 0LL;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  DestinationString = 0LL;
  ValueName = 0LL;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\ACPI\\Parameters");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( result >= 0 )
  {
    RtlInitUnicodeString(&ValueName, L"EMcaL1DirectoryBase");
    v3 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x17u, &ResultLength);
    if ( v3 >= 0 )
      *a1 = v10;
    ZwClose(KeyHandle);
    return v3;
  }
  return result;
}
