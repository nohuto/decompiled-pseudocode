/*
 * XREFs of PipIs32bitKey @ 0x14055D2BC
 * Callers:
 *     PnpLoadBootFilterDriver @ 0x140B6936C (PnpLoadBootFilterDriver.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwQueryKey @ 0x1404125D0 (ZwQueryKey.c)
 *     ZwQueryValueKey @ 0x1404125F0 (ZwQueryValueKey.c)
 */

__int64 __fastcall PipIs32bitKey(HANDLE KeyHandle)
{
  unsigned int v2; // ebx
  ULONG ResultLength; // [rsp+30h] [rbp-48h] BYREF
  __int64 v5; // [rsp+38h] [rbp-40h] BYREF
  int v6; // [rsp+40h] [rbp-38h]
  _BYTE KeyValueInformation[4]; // [rsp+48h] [rbp-30h] BYREF
  int v8; // [rsp+4Ch] [rbp-2Ch]
  int v9; // [rsp+50h] [rbp-28h]
  int v10; // [rsp+54h] [rbp-24h]

  ResultLength = 0;
  v5 = 0LL;
  v6 = 0;
  if ( ZwQueryKey(KeyHandle, KeyFlagsInformation, &v5, 0xCu, &ResultLength) >= 0 && (v5 & 1) != 0 )
  {
    return 1;
  }
  else
  {
    v2 = 0;
    if ( ZwQueryValueKey(
           KeyHandle,
           (PUNICODE_STRING)&stru_14000A490,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x14u,
           &ResultLength) >= 0
      && v8 == 4
      && v9 == 4 )
    {
      return v10 == 1;
    }
  }
  return v2;
}
