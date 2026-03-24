/*
 * XREFs of MiUnlockWorkingSetCoreExclusive @ 0x14054F82C
 * Callers:
 *     MiAllocateWsle @ 0x140211C80 (MiAllocateWsle.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402CDE30 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 */

void __fastcall MiUnlockWorkingSetCoreExclusive(struct _KLOCK_QUEUE_HANDLE *a1)
{
  KeReleaseInStackQueuedSpinLockFromDpcLevel(a1);
}
