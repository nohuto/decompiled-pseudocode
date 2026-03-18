/*
 * XREFs of MiUnlockAllMemoryLists @ 0x140652874
 * Callers:
 *     MmDuplicateMemory @ 0x140AAC90C (MmDuplicateMemory.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402893A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiIterateOverPartitions @ 0x14062947C (MiIterateOverPartitions.c)
 */

__int64 MiUnlockAllMemoryLists()
{
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C67360);
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C67370);
  return MiIterateOverPartitions(MiLockMemoryLists, 0LL);
}
