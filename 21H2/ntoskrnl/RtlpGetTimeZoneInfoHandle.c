/*
 * XREFs of RtlpGetTimeZoneInfoHandle @ 0x1406F1A04
 * Callers:
 *     RtlpQueryTimeZoneInformationWorker @ 0x1406F1774 (RtlpQueryTimeZoneInformationWorker.c)
 *     RtlSetActiveTimeBias @ 0x1408364C4 (RtlSetActiveTimeBias.c)
 *     RtlpSetTimeZoneInformationWorker @ 0x1409BA71C (RtlpSetTimeZoneInformationWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     RtlpGetRegistryHandle @ 0x14077FDA0 (RtlpGetRegistryHandle.c)
 *     RtlGetPersistedStateLocation @ 0x140782DD0 (RtlGetPersistedStateLocation.c)
 */

__int64 __fastcall RtlpGetTimeZoneInfoHandle(char a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v6; // [rsp+40h] [rbp-238h] BYREF
  _BYTE v7[528]; // [rsp+50h] [rbp-228h] BYREF

  if ( dword_140C4EF20 == 2 )
    goto LABEL_2;
  result = RtlGetPersistedStateLocation(L"TimeZoneInformationSettings", v7, 520, (__int64)&v6);
  if ( (int)result >= 0 )
  {
    dword_140C4EF20 = 1;
    LOBYTE(a3) = a1;
    result = RtlpGetRegistryHandle(0LL, v7, a3, a2);
    if ( (_DWORD)result != -1073741772 )
      return result;
    goto LABEL_2;
  }
  if ( (_DWORD)result == -1073741772 )
  {
    dword_140C4EF20 = 2;
LABEL_2:
    LOBYTE(a3) = a1;
    return RtlpGetRegistryHandle(2LL, L"TimeZoneInformation", a3, a2);
  }
  return result;
}
