/*
 * XREFs of PortpReadLinkTimeoutValue @ 0x1C007CD4C
 * Callers:
 *     PortGetLinkTimeoutValue @ 0x1C0059B60 (PortGetLinkTimeoutValue.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001D620 (__security_check_cookie.c)
 */

char __fastcall PortpReadLinkTimeoutValue(HANDLE KeyHandle, unsigned int *a2)
{
  char result; // al
  unsigned int v5; // edx
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-C8h] BYREF
  int KeyValueInformation; // [rsp+50h] [rbp-B0h] BYREF
  int v9; // [rsp+54h] [rbp-ACh]
  unsigned int v10; // [rsp+58h] [rbp-A8h]
  int v11; // [rsp+5Ch] [rbp-A4h]
  unsigned int v12; // [rsp+60h] [rbp-A0h]
  wchar_t Str1[246]; // [rsp+64h] [rbp-9Ch] BYREF

  ResultLength = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"LinkTimeout");
  if ( ZwQueryValueKey(
         KeyHandle,
         &DestinationString,
         KeyValueFullInformation,
         &KeyValueInformation,
         0x200u,
         &ResultLength) < 0
    || v9 == 4 && v11 != 4
    || _wcsnicmp(Str1, L"LinkTimeout", (unsigned __int64)v12 >> 1)
    || !v11
    || v9 != 4 )
  {
    return 0;
  }
  result = 1;
  v5 = *(int *)((char *)&KeyValueInformation + v10);
  if ( v5 > 0x258 )
    v5 = 600;
  *a2 = v5;
  return result;
}
