void __stdcall EngAcquireSemaphore(HSEMAPHORE hsem)
{
  if ( hsem )
  {
    PsEnterPriorityRegion(hsem);
    ExEnterCriticalRegionAndAcquireResourceExclusive((PERESOURCE)hsem);
  }
}
