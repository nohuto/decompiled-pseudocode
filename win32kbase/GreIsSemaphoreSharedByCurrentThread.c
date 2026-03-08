/*
 * XREFs of GreIsSemaphoreSharedByCurrentThread @ 0x1C00C1360
 * Callers:
 *     EngIsSemaphoreSharedByCurrentThread @ 0x1C00C1340 (EngIsSemaphoreSharedByCurrentThread.c)
 *     GreIsVisRgnLockedShared @ 0x1C0197390 (GreIsVisRgnLockedShared.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall GreIsSemaphoreSharedByCurrentThread(struct _ERESOURCE *a1)
{
  return ExIsResourceAcquiredSharedLite(a1) != 0;
}
