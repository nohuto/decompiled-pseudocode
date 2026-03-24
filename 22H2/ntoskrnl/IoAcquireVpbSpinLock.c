/*
 * XREFs of IoAcquireVpbSpinLock @ 0x14026DC80
 * Callers:
 *     RawInitiateDeleteVolume @ 0x14026D9DC (RawInitiateDeleteVolume.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x1402912F0 (KeAcquireQueuedSpinLock.c)
 */

void __stdcall IoAcquireVpbSpinLock(PKIRQL Irql)
{
  *Irql = KeAcquireQueuedSpinLock(9uLL);
}
