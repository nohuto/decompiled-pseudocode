/*
 * XREFs of EngDeleteSafeSemaphore @ 0x1C0169EE0
 * Callers:
 *     <none>
 * Callees:
 *     GreReleaseHmgrSemaphore @ 0x1C00427F0 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0042870 (GreAcquireHmgrSemaphore.c)
 *     GreDeleteSemaphore @ 0x1C0077EE0 (GreDeleteSemaphore.c)
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
