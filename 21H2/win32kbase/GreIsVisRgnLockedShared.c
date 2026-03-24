/*
 * XREFs of GreIsVisRgnLockedShared @ 0x1C014B470
 * Callers:
 *     <none>
 * Callees:
 *     GreIsSemaphoreSharedByCurrentThread @ 0x1C00A8950 (GreIsSemaphoreSharedByCurrentThread.c)
 */

_BOOL8 GreIsVisRgnLockedShared()
{
  return GreIsSemaphoreSharedByCurrentThread((struct _ERESOURCE *)ghsemDCVisRgn);
}
