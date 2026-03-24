/*
 * XREFs of EngIsSemaphoreOwnedByCurrentThread @ 0x1C0094580
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOL __stdcall EngIsSemaphoreOwnedByCurrentThread(HSEMAPHORE hsem)
{
  return ExIsResourceAcquiredExclusiveLite((PERESOURCE)hsem);
}
