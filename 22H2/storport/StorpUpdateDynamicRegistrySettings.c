/*
 * XREFs of StorpUpdateDynamicRegistrySettings @ 0x1C00362A0
 * Callers:
 *     DllInitialize @ 0x1C004C5A0 (DllInitialize.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001D5B0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall StorpUpdateDynamicRegistrySettings(__int64 a1)
{
  NTSTATUS result; // eax
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+50h] [rbp-B0h] BYREF
  int v6; // [rsp+54h] [rbp-ACh]
  __int64 v7; // [rsp+5Ch] [rbp-A4h]

  ResultLength = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"DeviceQueueIoWaitThreshold");
  if ( ZwQueryValueKey(
         *(HANDLE *)(a1 + 56),
         &DestinationString,
         KeyValuePartialInformation,
         KeyValueInformation,
         0x110u,
         &ResultLength) >= 0
    && v6 == 11
    && ResultLength >= 8
    && v7 )
  {
    _InterlockedExchange64(&DeviceQueueIoWaitThreshold, v7);
  }
  RtlInitUnicodeString(&DestinationString, L"HighLatencyIoThreshold");
  result = ZwQueryValueKey(
             *(HANDLE *)(a1 + 56),
             &DestinationString,
             KeyValuePartialInformation,
             KeyValueInformation,
             0x110u,
             &ResultLength);
  if ( result >= 0 && v6 == 11 && ResultLength >= 8 )
  {
    result = v7;
    if ( v7 )
      return _InterlockedExchange64(&HighLatencyIoThreshold, v7);
  }
  return result;
}
