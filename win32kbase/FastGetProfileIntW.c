/*
 * XREFs of FastGetProfileIntW @ 0x1C0018FA0
 * Callers:
 *     xxxRemoteConnect @ 0x1C000F480 (xxxRemoteConnect.c)
 *     FastGetProfileIntsW @ 0x1C0017DC0 (FastGetProfileIntsW.c)
 *     xxxUpdatePerUserAccessPackSettings @ 0x1C0017E70 (xxxUpdatePerUserAccessPackSettings.c)
 *     FastGetProfileIntFromID @ 0x1C0018DA0 (FastGetProfileIntFromID.c)
 * Callees:
 *     FastGetProfileStringW @ 0x1C0074270 (FastGetProfileStringW.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 */

__int64 __fastcall FastGetProfileIntW(const UNICODE_STRING *a1, __int64 a2, __int64 a3, ULONG a4, PULONG Value, int a6)
{
  unsigned __int64 v8; // [rsp+28h] [rbp-A0h]
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-88h] BYREF
  WCHAR SourceString[40]; // [rsp+50h] [rbp-78h] BYREF

  LODWORD(v8) = 40;
  DestinationString = 0LL;
  if ( (unsigned int)FastGetProfileStringW(a1, SourceString, v8, a6) )
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
