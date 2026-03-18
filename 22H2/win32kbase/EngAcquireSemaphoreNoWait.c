/*
 * XREFs of EngAcquireSemaphoreNoWait @ 0x1C00ADB20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOL __stdcall EngAcquireSemaphoreNoWait(HSEMAPHORE hsem)
{
  int v1; // ebx
  BOOLEAN v3; // al

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
      PsLeavePriorityRegion();
    }
  }
  return v1;
}
