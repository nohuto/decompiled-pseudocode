/*
 * XREFs of EngInitializeSafeSemaphore @ 0x1C0177470
 * Callers:
 *     <none>
 * Callees:
 *     GreAcquireHmgrSemaphore @ 0x1C002DF20 (GreAcquireHmgrSemaphore.c)
 *     GreReleaseHmgrSemaphore @ 0x1C002E900 (GreReleaseHmgrSemaphore.c)
 *     GreCreateSemaphoreInternal @ 0x1C0045014 (GreCreateSemaphoreInternal.c)
 */

BOOL __stdcall EngInitializeSafeSemaphore(ENGSAFESEMAPHORE *pssem)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v4; // rdx
  int v5; // ecx
  int v6; // r8d
  BOOL v7; // ebx
  HSEMAPHORE SemaphoreInternal; // rax

  GreAcquireHmgrSemaphore((__int64)pssem, v1, v2);
  v7 = 0;
  if ( pssem->lCount
    || (SemaphoreInternal = (HSEMAPHORE)GreCreateSemaphoreInternal(1), (pssem->hsem = SemaphoreInternal) != 0LL) )
  {
    ++pssem->lCount;
    v7 = 1;
  }
  GreReleaseHmgrSemaphore(v5, v4, v6);
  return v7;
}
