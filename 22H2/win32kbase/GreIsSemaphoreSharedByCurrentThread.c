/*
 * XREFs of GreIsSemaphoreSharedByCurrentThread @ 0x1C00A8E50
 * Callers:
 *     EngIsSemaphoreSharedByCurrentThread @ 0x1C00A8E30 (EngIsSemaphoreSharedByCurrentThread.c)
 *     GreIsVisRgnLockedShared @ 0x1C014B7A0 (GreIsVisRgnLockedShared.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall GreIsSemaphoreSharedByCurrentThread(struct _ERESOURCE *a1)
{
  return ExIsResourceAcquiredSharedLite(a1) != 0;
}
