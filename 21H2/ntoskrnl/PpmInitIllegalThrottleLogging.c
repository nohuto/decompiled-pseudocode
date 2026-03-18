/*
 * XREFs of PpmInitIllegalThrottleLogging @ 0x1403B80CC
 * Callers:
 *     PoInitSystem @ 0x140B026CC (PoInitSystem.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     PopOpenKey @ 0x1403B1A48 (PopOpenKey.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwQueryValueKey @ 0x14041BA40 (ZwQueryValueKey.c)
 */

NTSTATUS PpmInitIllegalThrottleLogging()
{
  NTSTATUS result; // eax
  ULONG ResultLength; // [rsp+30h] [rbp-40h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-38h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-30h] BYREF
  __int128 KeyValueInformation; // [rsp+50h] [rbp-20h] BYREF
  int v5; // [rsp+60h] [rbp-10h]

  ResultLength = 0;
  KeyHandle = 0LL;
  DestinationString = 0LL;
  result = PopOpenKey(&KeyHandle, L"Control\\Session Manager\\Power");
  if ( result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"ProcessorThrottleLogInterval");
    v5 = 0;
    KeyValueInformation = 0LL;
    if ( ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           &KeyValueInformation,
           0x14u,
           &ResultLength) >= 0
      && *(_QWORD *)((char *)&KeyValueInformation + 4) == 0x400000004LL )
    {
      PopProcessorThrottleLogInterval = HIDWORD(KeyValueInformation);
      if ( HIDWORD(KeyValueInformation) > 0x2710 )
        PopProcessorThrottleLogInterval = 10000;
    }
    return ZwClose(KeyHandle);
  }
  return result;
}
