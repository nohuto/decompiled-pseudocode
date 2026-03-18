/*
 * XREFs of GreIsSemaphoreSharedByCurrentThread @ 0x1C00B7DC0
 * Callers:
 *     EngIsSemaphoreSharedByCurrentThread @ 0x1C00B7DA0 (EngIsSemaphoreSharedByCurrentThread.c)
 *     GreIsVisRgnLockedShared @ 0x1C01778A0 (GreIsVisRgnLockedShared.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall GreIsSemaphoreSharedByCurrentThread(struct _ERESOURCE *a1)
{
  return ExIsResourceAcquiredSharedLite(a1) != 0;
}
