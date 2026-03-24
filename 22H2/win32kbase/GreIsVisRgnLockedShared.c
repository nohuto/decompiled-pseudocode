/*
 * XREFs of GreIsVisRgnLockedShared @ 0x1C014B7A0
 * Callers:
 *     <none>
 * Callees:
 *     GreIsSemaphoreSharedByCurrentThread @ 0x1C00A8E50 (GreIsSemaphoreSharedByCurrentThread.c)
 */

_BOOL8 GreIsVisRgnLockedShared()
{
  return GreIsSemaphoreSharedByCurrentThread((struct _ERESOURCE *)ghsemDCVisRgn);
}
