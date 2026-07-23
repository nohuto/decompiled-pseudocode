/*
 * XREFs of RtlpGetTimeZoneInfoHandle @ 0x140714474
 * Callers:
 *     RtlpQueryTimeZoneInformationWorker @ 0x1407141E4 (RtlpQueryTimeZoneInformationWorker.c)
 *     RtlSetActiveTimeBias @ 0x1407AA824 (RtlSetActiveTimeBias.c)
 *     RtlpSetTimeZoneInformationWorker @ 0x14091515C (RtlpSetTimeZoneInformationWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     RtlGetPersistedStateLocation @ 0x1406B87A0 (RtlGetPersistedStateLocation.c)
 *     RtlpGetRegistryHandle @ 0x1406BB240 (RtlpGetRegistryHandle.c)
 */

int __fastcall RtlpGetTimeZoneInfoHandle(char a1, HANDLE *a2)
{
  int result; // eax
  ULONG BufferLengthOut[4]; // [rsp+40h] [rbp-238h] BYREF
  WCHAR TargetPath[264]; // [rsp+50h] [rbp-228h] BYREF

  if ( dword_140C4C5AC == 2 )
    return RtlpGetRegistryHandle(2, L"TimeZoneInformation", a1, a2);
  result = RtlGetPersistedStateLocation(
             L"TimeZoneInformationSettings",
             L"TargetNtPath",
             0LL,
             LocationTypeRegistry,
             TargetPath,
             0x208u,
             BufferLengthOut);
  if ( result >= 0 )
  {
    dword_140C4C5AC = 1;
    result = RtlpGetRegistryHandle(0, TargetPath, a1, a2);
    if ( result != -1073741772 )
      return result;
    return RtlpGetRegistryHandle(2, L"TimeZoneInformation", a1, a2);
  }
  if ( result == -1073741772 )
  {
    dword_140C4C5AC = 2;
    return RtlpGetRegistryHandle(2, L"TimeZoneInformation", a1, a2);
  }
  return result;
}
