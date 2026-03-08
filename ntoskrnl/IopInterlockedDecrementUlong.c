/*
 * XREFs of IopInterlockedDecrementUlong @ 0x1403C19DC
 * Callers:
 *     IopDecrementDeviceObjectRefCount @ 0x1402F0E78 (IopDecrementDeviceObjectRefCount.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x14023FDE0 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x140336900 (KeAcquireQueuedSpinLock.c)
 */

__int64 __fastcall IopInterlockedDecrementUlong(KSPIN_LOCK_QUEUE_NUMBER Number, _DWORD *a2)
{
  KIRQL v4; // al

  v4 = KeAcquireQueuedSpinLock(Number);
  LODWORD(a2) = --*a2;
  KeReleaseQueuedSpinLock(Number, v4);
  return (unsigned int)a2;
}
