/*
 * XREFs of EngDeleteSafeSemaphore @ 0x1C01772B0
 * Callers:
 *     <none>
 * Callees:
 *     GreAcquireHmgrSemaphore @ 0x1C002DF20 (GreAcquireHmgrSemaphore.c)
 *     GreReleaseHmgrSemaphore @ 0x1C002E900 (GreReleaseHmgrSemaphore.c)
 *     GreDeleteSemaphore @ 0x1C0044F30 (GreDeleteSemaphore.c)
 */

void __stdcall EngDeleteSafeSemaphore(ENGSAFESEMAPHORE *pssem)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v4; // rdx
  int v5; // ecx
  int v6; // r8d
  LONG lCount; // eax

  GreAcquireHmgrSemaphore((__int64)pssem, v1, v2);
  lCount = pssem->lCount;
  if ( lCount == 1 )
  {
    GreDeleteSemaphore((PERESOURCE)pssem->hsem);
    pssem->hsem = 0LL;
    lCount = pssem->lCount;
  }
  pssem->lCount = lCount - 1;
  GreReleaseHmgrSemaphore(v5, v4, v6);
}
