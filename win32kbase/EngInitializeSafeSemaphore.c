/*
 * XREFs of EngInitializeSafeSemaphore @ 0x1C0196F10
 * Callers:
 *     <none>
 * Callees:
 *     GreCreateSemaphoreInternal @ 0x1C002B04C (GreCreateSemaphoreInternal.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0049700 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0049780 (GreAcquireHmgrSemaphore.c)
 */

BOOL __stdcall EngInitializeSafeSemaphore(ENGSAFESEMAPHORE *pssem)
{
  __int64 v2; // rcx
  BOOL v3; // ebx
  char *SemaphoreInternal; // rax

  GreAcquireHmgrSemaphore((__int64)pssem);
  v3 = 0;
  if ( pssem->lCount
    || (SemaphoreInternal = GreCreateSemaphoreInternal(1), (pssem->hsem = (HSEMAPHORE)SemaphoreInternal) != 0LL) )
  {
    ++pssem->lCount;
    v3 = 1;
  }
  GreReleaseHmgrSemaphore(v2);
  return v3;
}
