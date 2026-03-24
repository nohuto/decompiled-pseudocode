/*
 * XREFs of FastGetProfileIntW @ 0x1C000F0D0
 * Callers:
 *     FastGetProfileIntsW @ 0x1C000DEF0 (FastGetProfileIntsW.c)
 *     xxxUpdatePerUserAccessPackSettings @ 0x1C000DFA0 (xxxUpdatePerUserAccessPackSettings.c)
 *     FastGetProfileIntFromID @ 0x1C000EF90 (FastGetProfileIntFromID.c)
 *     xxxRemoteConnect @ 0x1C01177E0 (xxxRemoteConnect.c)
 * Callees:
 *     FastGetProfileStringW @ 0x1C000F190 (FastGetProfileStringW.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 */

__int64 __fastcall FastGetProfileIntW(__int64 a1, __int64 a2, __int64 a3, ULONG a4, PULONG Value, int a6)
{
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-88h] BYREF
  WCHAR SourceString[40]; // [rsp+50h] [rbp-78h] BYREF

  DestinationString = 0LL;
  if ( (unsigned int)FastGetProfileStringW(a1, a2, a3, 0LL, SourceString, 40, a6) )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    RtlUnicodeStringToInteger(&DestinationString, 0xAu, Value);
    return 1LL;
  }
  if ( (a6 & 0x10) == 0 )
  {
    *Value = a4;
    return 1LL;
  }
  return 0LL;
}
