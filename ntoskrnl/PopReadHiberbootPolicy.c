/*
 * XREFs of PopReadHiberbootPolicy @ 0x14097DFFC
 * Callers:
 *     NtPowerInformation @ 0x14068AB90 (NtPowerInformation.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     PopOpenPowerKey @ 0x1403900C8 (PopOpenPowerKey.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwQueryValueKey @ 0x1404125F0 (ZwQueryValueKey.c)
 *     PopReadHiberbootGroupPolicy @ 0x14097DEE8 (PopReadHiberbootGroupPolicy.c)
 */

int __fastcall PopReadHiberbootPolicy(_BYTE *a1)
{
  char v1; // bl
  int result; // eax
  _BYTE v4[4]; // [rsp+30h] [rbp-40h] BYREF
  ULONG ResultLength; // [rsp+34h] [rbp-3Ch] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-38h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-30h] BYREF
  __int128 KeyValueInformation; // [rsp+50h] [rbp-20h] BYREF
  int v9; // [rsp+60h] [rbp-10h]

  v1 = 0;
  v4[0] = 0;
  KeyHandle = 0LL;
  ResultLength = 0;
  DestinationString = 0LL;
  result = PopReadHiberbootGroupPolicy(v4);
  if ( result >= 0 && v4[0] )
  {
    v1 = v4[0];
  }
  else
  {
    result = PopOpenPowerKey((__int64)&KeyHandle);
    if ( result >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"HiberbootEnabled");
      v9 = 0;
      KeyValueInformation = 0LL;
      v1 = 0;
      if ( ZwQueryValueKey(
             KeyHandle,
             &DestinationString,
             KeyValuePartialInformation,
             &KeyValueInformation,
             0x14u,
             &ResultLength) >= 0 )
        v1 = BYTE12(KeyValueInformation);
      result = ZwClose(KeyHandle);
    }
  }
  *a1 = v1;
  return result;
}
