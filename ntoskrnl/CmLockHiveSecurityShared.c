/*
 * XREFs of CmLockHiveSecurityShared @ 0x140AF2590
 * Callers:
 *     CmpLockTwoSecurityCachesExclusiveShared @ 0x14078F258 (CmpLockTwoSecurityCachesExclusiveShared.c)
 *     CmpAssignSecurityToKcb @ 0x1407A560C (CmpAssignSecurityToKcb.c)
 *     CmpCreateKeyControlBlock @ 0x1407AFAA0 (CmpCreateKeyControlBlock.c)
 *     CmDumpKeyToFile @ 0x140A07E64 (CmDumpKeyToFile.c)
 *     CmSaveMergedKeys @ 0x140A09144 (CmSaveMergedKeys.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x1402413F0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 */

signed __int64 __fastcall CmLockHiveSecurityShared(__int64 a1)
{
  volatile signed __int64 *v1; // rdi
  __int64 v2; // rbx
  signed __int64 result; // rax

  v1 = (volatile signed __int64 *)(a1 + 1784);
  v2 = KeAbPreAcquire(a1 + 1784, 0LL);
  result = _InterlockedCompareExchange64(v1, 17LL, 0LL);
  if ( result )
    result = ExfAcquirePushLockSharedEx((signed __int64 *)v1, 0, v2, (__int64)v1);
  if ( v2 )
    *(_BYTE *)(v2 + 18) = 1;
  return result;
}
