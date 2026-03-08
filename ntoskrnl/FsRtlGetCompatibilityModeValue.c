/*
 * XREFs of FsRtlGetCompatibilityModeValue @ 0x140B65E28
 * Callers:
 *     FsRtlInitSystem @ 0x140B65B14 (FsRtlInitSystem.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwOpenKey @ 0x140412550 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1404125F0 (ZwQueryValueKey.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall FsRtlGetCompatibilityModeValue(PUNICODE_STRING ValueName, _DWORD *a2)
{
  NTSTATUS result; // eax
  ULONG Length; // esi
  unsigned int *v6; // rbx
  _BYTE *i; // r9
  NTSTATUS v8; // edi
  __int64 Pool2; // rax
  ULONG ResultLength; // [rsp+30h] [rbp-89h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-81h] BYREF
  _DWORD v12[2]; // [rsp+40h] [rbp-79h] BYREF
  const wchar_t *v13; // [rsp+48h] [rbp-71h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-69h] BYREF
  _BYTE KeyValueInformation[96]; // [rsp+80h] [rbp-39h] BYREF

  KeyHandle = 0LL;
  ResultLength = 0;
  v12[1] = 0;
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  ObjectAttributes.RootDirectory = 0LL;
  v13 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\FileSystem";
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v12;
  v12[0] = 8126586;
  ObjectAttributes.Attributes = 64;
  result = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( result >= 0 )
  {
    Length = 92;
    v6 = (unsigned int *)KeyValueInformation;
    for ( i = KeyValueInformation; ; i = (_BYTE *)Pool2 )
    {
      v8 = ZwQueryValueKey(KeyHandle, ValueName, KeyValueFullInformation, i, Length, &ResultLength);
      if ( v8 != -2147483643 )
        break;
      if ( v6 != (unsigned int *)KeyValueInformation )
        ExFreePoolWithTag(v6, 0);
      Length += 256;
      Pool2 = ExAllocatePool2(256LL, Length, 0x20746146u);
      v6 = (unsigned int *)Pool2;
      if ( !Pool2 )
        return -1073741801;
    }
    ZwClose(KeyHandle);
    if ( v8 >= 0 )
    {
      if ( v6[3] )
        *a2 = *(unsigned int *)((char *)v6 + v6[2]);
      else
        v8 = -1073741772;
    }
    if ( v6 != (unsigned int *)KeyValueInformation )
      ExFreePoolWithTag(v6, 0);
    return v8;
  }
  return result;
}
