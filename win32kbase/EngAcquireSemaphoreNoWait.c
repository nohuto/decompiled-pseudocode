/*
 * XREFs of EngAcquireSemaphoreNoWait @ 0x1C00BD8F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOL __stdcall EngAcquireSemaphoreNoWait(HSEMAPHORE hsem)
{
  int v1; // ebx
  BOOLEAN v3; // al
  __int64 v5; // rdx
  __int64 v6; // rcx

  v1 = 0;
  if ( hsem )
  {
    PsEnterPriorityRegion(hsem);
    KeEnterCriticalRegion();
    v3 = ExAcquireResourceExclusiveLite((PERESOURCE)hsem, 0);
    v1 = v3;
    if ( !v3 )
    {
      KeLeaveCriticalRegion();
      PsLeavePriorityRegion(v6, v5);
    }
  }
  return v1;
}
