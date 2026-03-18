/*
 * XREFs of IopInterlockedDecrementUlong @ 0x1403C729C
 * Callers:
 *     IopDecrementDeviceObjectRefCount @ 0x1403690A4 (IopDecrementDeviceObjectRefCount.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x1402A0640 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x140302810 (KeReleaseQueuedSpinLock.c)
 */

__int64 __fastcall IopInterlockedDecrementUlong(KSPIN_LOCK_QUEUE_NUMBER Number, _DWORD *a2)
{
  KIRQL v4; // al

  v4 = KeAcquireQueuedSpinLock(Number);
  LODWORD(a2) = --*a2;
  KeReleaseQueuedSpinLock(Number, v4);
  return (unsigned int)a2;
}
