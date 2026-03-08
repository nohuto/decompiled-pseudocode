/*
 * XREFs of CmpQueryLayerVersionString @ 0x14081502C
 * Callers:
 *     CmpLoadLayerVersion @ 0x140814A94 (CmpLoadLayerVersion.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x1404125F0 (ZwQueryValueKey.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

NTSTATUS __fastcall CmpQueryLayerVersionString(
        PUNICODE_STRING DestinationString,
        char *SourceString,
        unsigned __int16 a3,
        const WCHAR *a4,
        HANDLE KeyHandle)
{
  unsigned __int64 v6; // r14
  NTSTATUS result; // eax
  __int64 v10; // rbx
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  UNICODE_STRING DestinationStringa; // [rsp+38h] [rbp-C8h] BYREF
  _DWORD KeyValueInformation[64]; // [rsp+50h] [rbp-B0h] BYREF

  v6 = a3;
  DestinationStringa = 0LL;
  memset(KeyValueInformation, 0, sizeof(KeyValueInformation));
  *DestinationString = 0LL;
  ResultLength = 0;
  RtlInitUnicodeString(&DestinationStringa, a4);
  result = ZwQueryValueKey(
             KeyHandle,
             &DestinationStringa,
             KeyValueFullInformation,
             KeyValueInformation,
             0x100u,
             &ResultLength);
  if ( result >= 0 )
  {
    if ( KeyValueInformation[1] == 1 )
    {
      if ( KeyValueInformation[3] + KeyValueInformation[2] == ResultLength )
      {
        if ( (KeyValueInformation[3] & 1) != 0 )
        {
          return -1073741306;
        }
        else
        {
          v10 = KeyValueInformation[3];
          if ( (unsigned __int64)KeyValueInformation[3] + 2 > v6 )
          {
            return -1073741789;
          }
          else
          {
            memmove(SourceString, (char *)KeyValueInformation + KeyValueInformation[2], KeyValueInformation[3]);
            *(_WORD *)&SourceString[v10] = 0;
            RtlInitUnicodeString(DestinationString, (PCWSTR)SourceString);
            result = 0;
            DestinationString->MaximumLength = v6;
          }
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
