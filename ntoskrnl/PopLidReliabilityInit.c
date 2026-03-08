/*
 * XREFs of PopLidReliabilityInit @ 0x14038FDA0
 * Callers:
 *     PoInitSystem @ 0x140B45CAC (PoInitSystem.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwQueryValueKey @ 0x1404125F0 (ZwQueryValueKey.c)
 *     PopOpenPersistedRegistryKey @ 0x14080FB6C (PopOpenPersistedRegistryKey.c)
 *     PdcPoLidReliabilityUpdateCallback @ 0x140828FA0 (PdcPoLidReliabilityUpdateCallback.c)
 */

__int64 __fastcall PopLidReliabilityInit(__int64 a1)
{
  bool v1; // di
  __int64 v2; // rcx
  HANDLE KeyHandle; // [rsp+30h] [rbp-40h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-38h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-30h] BYREF
  __int128 KeyValueInformation; // [rsp+50h] [rbp-20h] BYREF
  int v8; // [rsp+60h] [rbp-10h]

  KeyHandle = 0LL;
  ResultLength = 0;
  DestinationString = 0LL;
  v8 = 0;
  v1 = 1;
  KeyValueInformation = 0LL;
  if ( (int)PopOpenPersistedRegistryKey(a1, &KeyHandle) >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"LidReliabilityState");
    if ( ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           &KeyValueInformation,
           0x14u,
           &ResultLength) >= 0 )
      v1 = BYTE12(KeyValueInformation) != 0;
    if ( KeyHandle )
      ZwClose(KeyHandle);
  }
  LOBYTE(v2) = v1;
  return PdcPoLidReliabilityUpdateCallback(v2);
}
