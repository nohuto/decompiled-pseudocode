/*
 * XREFs of IoReleaseVpbSpinLock @ 0x14026DC60
 * Callers:
 *     RawInitiateDeleteVolume @ 0x14026D9DC (RawInitiateDeleteVolume.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x140291250 (KeReleaseQueuedSpinLock.c)
 */

void __stdcall IoReleaseVpbSpinLock(KIRQL Irql)
{
  KeReleaseQueuedSpinLock(9uLL, Irql);
}
