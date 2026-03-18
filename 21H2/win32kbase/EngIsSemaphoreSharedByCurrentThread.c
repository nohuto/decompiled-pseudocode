/*
 * XREFs of EngIsSemaphoreSharedByCurrentThread @ 0x1C00B7DA0
 * Callers:
 *     <none>
 * Callees:
 *     GreIsSemaphoreSharedByCurrentThread @ 0x1C00B7DC0 (GreIsSemaphoreSharedByCurrentThread.c)
 */

BOOL __stdcall EngIsSemaphoreSharedByCurrentThread(HSEMAPHORE hsem)
{
  return GreIsSemaphoreSharedByCurrentThread(hsem);
}
