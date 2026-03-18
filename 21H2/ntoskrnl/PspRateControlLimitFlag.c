/*
 * XREFs of PspRateControlLimitFlag @ 0x1406859F8
 * Callers:
 *     NtQueryInformationJobObject @ 0x140684450 (NtQueryInformationJobObject.c)
 *     NtSetInformationJobObject @ 0x140685A20 (NtSetInformationJobObject.c)
 *     PspEnforceLimitsJobPostCallback @ 0x1406FFA80 (PspEnforceLimitsJobPostCallback.c)
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
