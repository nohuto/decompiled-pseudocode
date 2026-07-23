/*
 * XREFs of LdrInitializeMrdata @ 0x1800D5954
 * Callers:
 *     _LdrpInitialize @ 0x180075C8C (_LdrpInitialize.c)
 * Callees:
 *     __security_check_cookie @ 0x18008C910 (__security_check_cookie.c)
 *     NtQuerySystemInformation @ 0x18009DBA0 (NtQuerySystemInformation.c)
 */

NTSTATUS LdrInitializeMrdata()
{
  NTSTATUS result; // eax
  _BYTE SystemInformation[8]; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v2; // [rsp+28h] [rbp-50h]
  unsigned int v3; // [rsp+38h] [rbp-40h]
  __int64 v4; // [rsp+48h] [rbp-30h]

  LdrpMrdataLock.0 = 0LL;
  result = NtQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL);
  if ( result >= 0 )
  {
    LdrpPageSize = v2;
    LdrpAllocationGranularity = v3;
    LdrpMaximumUserModeAddress = v4;
    return 0;
  }
  return result;
}
