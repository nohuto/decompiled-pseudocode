/*
 * XREFs of ExpAeUpdateStatsForExclusiveRelease @ 0x1403C9834
 * Callers:
 *     ExTryAcquireAutoExpandPushLockExclusive @ 0x1403C9690 (ExTryAcquireAutoExpandPushLockExclusive.c)
 * Callees:
 *     <none>
 */

char __fastcall ExpAeUpdateStatsForExclusiveRelease(_DWORD *a1)
{
  if ( (*a1 & 0xF0000u) >= 0xF0000 )
    return 0;
  *a1 += 0x10000;
  return 1;
}
