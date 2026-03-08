/*
 * XREFs of CmpQueryLayerVersionUlong @ 0x140814F44
 * Callers:
 *     CmpLoadLayerVersion @ 0x140814A94 (CmpLoadLayerVersion.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x1404125F0 (ZwQueryValueKey.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

NTSTATUS __fastcall CmpQueryLayerVersionUlong(_DWORD *a1, const WCHAR *a2, void *a3)
{
  NTSTATUS result; // eax
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-C8h] BYREF
  _DWORD KeyValueInformation[64]; // [rsp+50h] [rbp-B0h] BYREF

  DestinationString = 0LL;
  memset(KeyValueInformation, 0, sizeof(KeyValueInformation));
  ResultLength = 0;
  *a1 = 0;
  RtlInitUnicodeString(&DestinationString, a2);
  result = ZwQueryValueKey(a3, &DestinationString, KeyValueFullInformation, KeyValueInformation, 0x100u, &ResultLength);
  if ( result >= 0 )
  {
    if ( KeyValueInformation[1] == 4 )
    {
      if ( KeyValueInformation[3] + KeyValueInformation[2] == ResultLength )
      {
        if ( KeyValueInformation[3] == 4 )
        {
          result = 0;
          *a1 = *(_DWORD *)((char *)KeyValueInformation + KeyValueInformation[2]);
        }
        else
        {
          return -1073741306;
        }
      }
      else
      {
        return -1073741764;
      }
    }
    else
    {
      return -1073741788;
    }
  }
  return result;
}
