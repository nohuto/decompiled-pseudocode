/*
 * XREFs of PoGetLightestSystemStateForEject @ 0x14097D470
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x1408625F0 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     PopOpenPowerKey @ 0x1403900C8 (PopOpenPowerKey.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwQueryValueKey @ 0x1404125F0 (ZwQueryValueKey.c)
 *     ZwPowerInformation @ 0x140412EF0 (ZwPowerInformation.c)
 */

int __fastcall PoGetLightestSystemStateForEject(char a1, bool a2, char a3, _DWORD *a4)
{
  bool v6; // bl
  int result; // eax
  NTSTATUS v8; // esi
  int v9; // ecx
  unsigned int v10; // eax
  ULONG ResultLength; // [rsp+38h] [rbp-29h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-21h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-19h] BYREF
  __int128 KeyValueInformation; // [rsp+58h] [rbp-9h] BYREF
  __int128 v15; // [rsp+68h] [rbp+7h]
  _OWORD OutputBuffer[2]; // [rsp+78h] [rbp+17h] BYREF

  KeyHandle = 0LL;
  ResultLength = 0;
  *a4 = 0;
  v6 = a2;
  memset(OutputBuffer, 0, sizeof(OutputBuffer));
  DestinationString = 0LL;
  KeyValueInformation = 0LL;
  v15 = 0LL;
  if ( !a2 )
    v6 = a3 == 0;
  if ( !a1 )
  {
    *a4 = 2 - v6;
    return 0;
  }
  result = PopOpenPowerKey((__int64)&KeyHandle);
  if ( result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"UndockPowerPolicy");
    v8 = ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           &KeyValueInformation,
           0x20u,
           &ResultLength);
    ZwClose(KeyHandle);
    if ( v8 >= 0 )
    {
      if ( DWORD2(KeyValueInformation) < 8 )
        return -1073741492;
      if ( HIDWORD(KeyValueInformation) != 1 )
        return -1073741823;
      if ( DWORD2(KeyValueInformation) < 0x10 || (_DWORD)v15 != DWORD2(KeyValueInformation) )
        return -1073741492;
    }
    else
    {
      if ( v8 != -1073741772 )
        return v8;
      *(_QWORD *)((char *)&v15 + 4) = 10LL;
    }
    result = ZwPowerInformation(SystemBatteryState, 0LL, 0, OutputBuffer, 0x20u);
    v9 = result;
    if ( result >= 0 )
    {
      if ( DWORD2(OutputBuffer[0]) && (unsigned int)(100 * HIDWORD(OutputBuffer[0])) > HIDWORD(OutputBuffer[0]) )
        v10 = (unsigned int)(100 * HIDWORD(OutputBuffer[0])) / DWORD2(OutputBuffer[0]);
      else
        v10 = 0;
      if ( v10 >= DWORD1(v15) && v6 )
      {
        *a4 = 1;
      }
      else if ( a3 )
      {
        *a4 = v10 < DWORD2(v15) ? 5 : 2;
      }
      else
      {
        return -1073741090;
      }
      return v9;
    }
  }
  return result;
}
