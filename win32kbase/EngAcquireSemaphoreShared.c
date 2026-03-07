void __stdcall EngAcquireSemaphoreShared(HSEMAPHORE hsem)
{
  int v1; // ebx

  v1 = (int)hsem;
  if ( hsem )
    ExEnterPriorityRegionAndAcquireResourceShared(hsem);
  EtwTraceGreLockAcquireSemaphoreShared((__int64)L"hsem", v1);
}
