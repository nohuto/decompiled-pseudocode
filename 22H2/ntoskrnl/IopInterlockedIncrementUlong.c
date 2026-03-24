/*
 * XREFs of IopInterlockedIncrementUlong @ 0x14028F76C
 * Callers:
 *     IopIncrementVpbRefCount @ 0x14028F728 (IopIncrementVpbRefCount.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x140291250 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1402912F0 (KeAcquireQueuedSpinLock.c)
 */

__int64 __fastcall IopInterlockedIncrementUlong(KSPIN_LOCK_QUEUE_NUMBER Number, _DWORD *a2)
{
  KIRQL v4; // al

  v4 = KeAcquireQueuedSpinLock(Number);
  LODWORD(a2) = ++*a2;
  KeReleaseQueuedSpinLock(Number, v4);
  return (unsigned int)a2;
}
