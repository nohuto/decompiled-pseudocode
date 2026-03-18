/*
 * XREFs of PspRateControlLimitFlag @ 0x1406A3E20
 * Callers:
 *     NtQueryInformationJobObject @ 0x1406A1130 (NtQueryInformationJobObject.c)
 *     PspEnforceLimitsJobPostCallback @ 0x1406A3680 (PspEnforceLimitsJobPostCallback.c)
 *     NtSetInformationJobObject @ 0x1406A4040 (NtSetInformationJobObject.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspRateControlLimitFlag(int a1)
{
  if ( !a1 )
    return 0x100000LL;
  if ( a1 == 1 )
    return 0x80000LL;
  return 0x40000LL;
}
