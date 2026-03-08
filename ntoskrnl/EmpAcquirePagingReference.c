/*
 * XREFs of EmpAcquirePagingReference @ 0x140A85380
 * Callers:
 *     EmClientQueryRuleState @ 0x140A85190 (EmClientQueryRuleState.c)
 *     EmClientRuleEvaluate @ 0x140A85280 (EmClientRuleEvaluate.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 */

char EmpAcquirePagingReference()
{
  char v0; // bl

  v0 = 0;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&EmpPagingLock, 0LL);
  if ( dword_140C5F468 < 0 )
  {
    v0 = 1;
    dword_140C5F468 ^= (dword_140C5F468 ^ (dword_140C5F468 + 1)) & 0x7FFFFFFF;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EmpPagingLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&EmpPagingLock);
  KeAbPostRelease((ULONG_PTR)&EmpPagingLock);
  return v0;
}
