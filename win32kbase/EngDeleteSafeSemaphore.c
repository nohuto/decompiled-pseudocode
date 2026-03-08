/*
 * XREFs of EngDeleteSafeSemaphore @ 0x1C0196C70
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteSemaphore @ 0x1C002AF30 (GreDeleteSemaphore.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0049700 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0049780 (GreAcquireHmgrSemaphore.c)
 */

void __stdcall EngDeleteSafeSemaphore(ENGSAFESEMAPHORE *pssem)
{
  __int64 v2; // rcx

  GreAcquireHmgrSemaphore((__int64)pssem);
  if ( pssem->lCount == 1 )
  {
    GreDeleteSemaphore((PERESOURCE)pssem->hsem);
    pssem->hsem = 0LL;
  }
  --pssem->lCount;
  GreReleaseHmgrSemaphore(v2);
}
