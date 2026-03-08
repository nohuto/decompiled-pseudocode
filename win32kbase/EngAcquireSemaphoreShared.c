/*
 * XREFs of EngAcquireSemaphoreShared @ 0x1C0196820
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceGreLockAcquireSemaphoreShared @ 0x1C0047AF0 (EtwTraceGreLockAcquireSemaphoreShared.c)
 */

void __stdcall EngAcquireSemaphoreShared(HSEMAPHORE hsem)
{
  int v1; // ebx

  v1 = (int)hsem;
  if ( hsem )
    ExEnterPriorityRegionAndAcquireResourceShared(hsem);
  EtwTraceGreLockAcquireSemaphoreShared((__int64)L"hsem", v1);
}
