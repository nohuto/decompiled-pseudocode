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
