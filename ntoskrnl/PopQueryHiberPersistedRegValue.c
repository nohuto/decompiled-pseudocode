/*
 * XREFs of PopQueryHiberPersistedRegValue @ 0x14080FD60
 * Callers:
 *     PopInitHiberPersistedRegValues @ 0x14080FC80 (PopInitHiberPersistedRegValues.c)
 *     PopWnfHibernatePolicyCallback @ 0x140986410 (PopWnfHibernatePolicyCallback.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     PopReadUlongPowerKey @ 0x140380EC0 (PopReadUlongPowerKey.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwQueryValueKey @ 0x1404125F0 (ZwQueryValueKey.c)
 *     PopOpenHiberPersistedKey @ 0x14080FEC0 (PopOpenHiberPersistedKey.c)
 */

__int64 __fastcall PopQueryHiberPersistedRegValue(int a1, unsigned int *a2)
{
  __int64 v2; // rax
  __int64 v4; // rcx
  __int64 v5; // rsi
  unsigned int v6; // edi
  int v7; // ebx
  NTSTATUS v8; // eax
  int v9; // eax
  unsigned int v11; // [rsp+30h] [rbp-50h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-48h] BYREF
  ULONG ResultLength; // [rsp+40h] [rbp-40h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-38h] BYREF
  __int128 KeyValueInformation; // [rsp+58h] [rbp-28h] BYREF
  int v16; // [rsp+68h] [rbp-18h]

  v2 = a1;
  ResultLength = 0;
  v11 = 0;
  v16 = 0;
  v4 = -1LL;
  KeyHandle = (HANDLE)-1LL;
  KeyValueInformation = 0LL;
  DestinationString = 0LL;
  if ( (unsigned int)v2 <= 3 && a2 )
  {
    v5 = 3 * v2;
    v6 = *((_DWORD *)&PopHiberPersistedRegValueDatabase + 6 * v2 + 5);
    v7 = PopOpenHiberPersistedKey(&KeyHandle, 0x20019u);
    if ( v7 >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, (&PopHiberPersistedRegValueDatabase)[v5]);
      v8 = ZwQueryValueKey(
             KeyHandle,
             &DestinationString,
             KeyValuePartialInformation,
             &KeyValueInformation,
             0x14u,
             &ResultLength);
      v7 = v8;
      if ( v8 != -1073741772 )
      {
        if ( v8 < 0 || *(_QWORD *)((char *)&KeyValueInformation + 4) != 0x400000004LL )
          goto LABEL_15;
        v6 = HIDWORD(KeyValueInformation);
        goto LABEL_12;
      }
      v9 = PopReadUlongPowerKey(
             (&PopHiberPersistedRegValueDatabase)[v5],
             &v11,
             *((_DWORD *)&PopHiberPersistedRegValueDatabase + 2 * v5 + 5),
             0,
             0xFFFFFFFF,
             *((_DWORD *)&PopHiberPersistedRegValueDatabase + 2 * v5 + 5));
      v7 = v9;
      if ( v9 >= 0 )
      {
        v6 = v11;
LABEL_7:
        if ( v9 == -1073741772 )
        {
          v6 = *((_DWORD *)&PopHiberPersistedRegValueDatabase + 2 * v5 + 5);
LABEL_14:
          *a2 = v6;
          v7 = 0;
          goto LABEL_15;
        }
LABEL_12:
        if ( LOBYTE((&PopHiberPersistedRegValueDatabase)[v5 + 1]) )
          v6 = v6 != 0;
        goto LABEL_14;
      }
      if ( v9 == -1073741772 )
        goto LABEL_7;
    }
LABEL_15:
    v4 = (__int64)KeyHandle;
    goto LABEL_16;
  }
  v7 = -1073741811;
LABEL_16:
  if ( v4 != -1 )
    ZwClose((HANDLE)v4);
  return (unsigned int)v7;
}
