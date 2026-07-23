/*
 * XREFs of ExAcquireAutoExpandPushLockExclusive @ 0x1402FAF60
 * Callers:
 *     MiDeletePagablePteRange @ 0x1402B79F0 (MiDeletePagablePteRange.c)
 *     MiLockLoaderEntry @ 0x140358C88 (MiLockLoaderEntry.c)
 *     MiFreePhysicalPageChain @ 0x14054BB28 (MiFreePhysicalPageChain.c)
 *     MiFreePhysicalPages @ 0x14054BE84 (MiFreePhysicalPages.c)
 *     MiLockAwePagesExclusive @ 0x14054CEF8 (MiLockAwePagesExclusive.c)
 *     MiLockAweVadsExclusive @ 0x14054CF40 (MiLockAweVadsExclusive.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140273310 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x1402CA920 (KeAbPreAcquire.c)
 *     ExpAcquireFannedOutPushLockExclusive @ 0x140390BD0 (ExpAcquireFannedOutPushLockExclusive.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 */

__int64 __fastcall ExAcquireAutoExpandPushLockExclusive(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter1)
{
  __int64 v2; // rbx
  __int64 result; // rax

  v2 = 0LL;
  if ( (BugCheckParameter1 & 0xFFFFFFFC) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, BugCheckParameter2, 0LL, 0LL);
  if ( (BugCheckParameter1 & 2) == 0 )
    v2 = KeAbPreAcquire(BugCheckParameter2, 0LL, 0);
  if ( _interlockedbittestandset64((volatile signed __int32 *)BugCheckParameter2, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)BugCheckParameter2, v2, BugCheckParameter2);
  result = *(unsigned int *)(BugCheckParameter2 + 8);
  if ( (result & 1) != 0 )
    result = ExpAcquireFannedOutPushLockExclusive((unsigned int)result & 0xFFFFFFF8, v2, BugCheckParameter2);
  if ( v2 )
    *(_BYTE *)(v2 + 26) |= 1u;
  return result;
}
