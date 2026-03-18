/*
 * XREFs of EngIsSemaphoreSharedByCurrentThread @ 0x1C00B2D80
 * Callers:
 *     <none>
 * Callees:
 *     GreIsSemaphoreSharedByCurrentThread @ 0x1C00B2DA0 (GreIsSemaphoreSharedByCurrentThread.c)
 */

BOOL __stdcall EngIsSemaphoreSharedByCurrentThread(HSEMAPHORE hsem)
{
  return GreIsSemaphoreSharedByCurrentThread(hsem);
}
