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
