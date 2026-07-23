/*
 * XREFs of RtlpInitNlsFileName @ 0x14060F1F8
 * Callers:
 *     NtGetNlsSectionPtr @ 0x14060EE10 (NtGetNlsSectionPtr.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     RtlStringCchPrintfW @ 0x14026D570 (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwOpenKey @ 0x1403FA7C0 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1403FA860 (ZwQueryValueKey.c)
 *     RtlIntegerToUnicodeString @ 0x14060F3A0 (RtlIntegerToUnicodeString.c)
 */

NTSTATUS __fastcall RtlpInitNlsFileName(int a1, ULONG a2, wchar_t *a3, __int64 a4, UNICODE_STRING *DestinationString)
{
  int v7; // ecx
  NTSTATUS result; // eax
  NTSTATUS v9; // ebx
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-C8h] BYREF
  UNICODE_STRING String; // [rsp+40h] [rbp-C0h] BYREF
  UNICODE_STRING v13; // [rsp+50h] [rbp-B0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A0h] BYREF
  char v15; // [rsp+90h] [rbp-70h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+D0h] [rbp-30h] BYREF
  int v17; // [rsp+D4h] [rbp-2Ch]
  _BYTE v18[276]; // [rsp+DCh] [rbp-24h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  ResultLength = 0;
  KeyHandle = 0LL;
  v13 = 0LL;
  v7 = a1 - 11;
  if ( v7 )
  {
    if ( v7 != 1 )
      return -1073741585;
    RtlInitUnicodeString(&v13, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Nls\\Normalization");
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &v13;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v9 = ZwOpenKey(&KeyHandle, 0x80000000, &ObjectAttributes);
    if ( v9 < 0 )
      return v9;
    *(_DWORD *)(&String.MaximumLength + 1) = 0;
    *(_DWORD *)&String.Length = 4194368;
    String.Buffer = (wchar_t *)&v15;
    RtlIntegerToUnicodeString(a2, 0x10u, &String);
    v9 = ZwQueryValueKey(KeyHandle, &String, KeyValuePartialInformation, KeyValueInformation, 0x120u, &ResultLength);
    ZwClose(KeyHandle);
    if ( v9 < 0 )
      return v9;
    if ( v17 != 1 )
      return -1073741823;
    v9 = RtlStringCchPrintfW(a3, 0x40uLL, L"\\SystemRoot\\System32\\%s", v18);
    if ( v9 < 0 )
      return v9;
  }
  else
  {
    result = RtlStringCchPrintfW(a3, 0x40uLL, L"\\SystemRoot\\System32\\c_%.3d.nls", a2);
    v9 = result;
    if ( result < 0 )
      return result;
  }
  RtlInitUnicodeString(DestinationString, a3);
  return v9;
}
