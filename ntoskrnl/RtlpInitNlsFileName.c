/*
 * XREFs of RtlpInitNlsFileName @ 0x14077F74C
 * Callers:
 *     NtGetNlsSectionPtr @ 0x14069E7D0 (NtGetNlsSectionPtr.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x140208BFC (RtlStringCchPrintfW.c)
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwOpenKey @ 0x140412550 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1404125F0 (ZwQueryValueKey.c)
 *     RtlIntegerToUnicodeString @ 0x1407805C0 (RtlIntegerToUnicodeString.c)
 */

NTSTATUS __fastcall RtlpInitNlsFileName(int a1, ULONG a2, wchar_t *a3, __int64 a4, UNICODE_STRING *DestinationString)
{
  int v7; // ecx
  NTSTATUS result; // eax
  NTSTATUS v9; // ebx
  int v10; // ecx
  __int64 v11; // rdi
  wchar_t *v12; // rcx
  wchar_t v13; // ax
  wchar_t *v14; // rax
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-C8h] BYREF
  UNICODE_STRING String; // [rsp+40h] [rbp-C0h] BYREF
  UNICODE_STRING v18; // [rsp+50h] [rbp-B0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A0h] BYREF
  char v20; // [rsp+90h] [rbp-70h] BYREF
  char KeyValueInformation[4]; // [rsp+D0h] [rbp-30h] BYREF
  int v22; // [rsp+D4h] [rbp-2Ch]
  char v23[276]; // [rsp+DCh] [rbp-24h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  ResultLength = 0;
  KeyHandle = 0LL;
  v18 = 0LL;
  v7 = a1 - 11;
  if ( v7 )
  {
    v10 = v7 - 1;
    if ( v10 )
    {
      if ( v10 != 2 )
        return -1073741585;
      v11 = 64LL;
      v12 = a3;
      do
      {
        if ( v11 == -2147483582 )
          break;
        v13 = *(wchar_t *)((char *)v12 + (char *)L"\\SystemRoot\\System32\\l_intl.nls" - (char *)a3);
        if ( !v13 )
          break;
        *v12++ = v13;
        --v11;
      }
      while ( v11 );
      v14 = v12 - 1;
      if ( v11 )
        v14 = v12;
      *v14 = 0;
      v9 = v11 == 0 ? 0x80000005 : 0;
      if ( !v11 )
        return v9;
    }
    else
    {
      RtlInitUnicodeString(&v18, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Nls\\Normalization");
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &v18;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v9 = ZwOpenKey(&KeyHandle, 0x80000000, &ObjectAttributes);
      if ( v9 < 0 )
        return v9;
      *(_QWORD *)&String.Length = 4194368LL;
      String.Buffer = (wchar_t *)&v20;
      RtlIntegerToUnicodeString(a2, 0x10u, &String);
      v9 = ZwQueryValueKey(KeyHandle, &String, KeyValuePartialInformation, KeyValueInformation, 0x120u, &ResultLength);
      ZwClose(KeyHandle);
      if ( v9 < 0 )
        return v9;
      if ( v22 != 1 )
        return -1073741823;
      v9 = RtlStringCchPrintfW(a3, 0x40uLL, L"\\SystemRoot\\System32\\%s", v23);
      if ( v9 < 0 )
        return v9;
    }
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
