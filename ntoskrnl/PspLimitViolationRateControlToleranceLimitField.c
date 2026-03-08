/*
 * XREFs of PspLimitViolationRateControlToleranceLimitField @ 0x1406F90B8
 * Callers:
 *     NtQueryInformationJobObject @ 0x1406F9480 (NtQueryInformationJobObject.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspLimitViolationRateControlToleranceLimitField(__int64 a1, int a2)
{
  __int64 v2; // rax

  if ( a2 )
  {
    if ( a2 == 1 )
      v2 = 92LL;
    else
      v2 = 76LL;
  }
  else
  {
    v2 = 100LL;
  }
  return a1 + v2;
}
