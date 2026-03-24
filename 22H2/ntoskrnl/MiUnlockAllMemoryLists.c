/*
 * XREFs of MiUnlockAllMemoryLists @ 0x140382228
 * Callers:
 *     MmDuplicateMemory @ 0x1409907AC (MmDuplicateMemory.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402BC410 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiIterateOverPartitions @ 0x140382280 (MiIterateOverPartitions.c)
 */

__int64 MiUnlockAllMemoryLists()
{
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4E560);
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4E570);
  return MiIterateOverPartitions(MiLockMemoryLists, 0LL);
}
