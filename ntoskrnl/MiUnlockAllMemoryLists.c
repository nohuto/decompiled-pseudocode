/*
 * XREFs of MiUnlockAllMemoryLists @ 0x140650214
 * Callers:
 *     MmDuplicateMemory @ 0x140AA96DC (MmDuplicateMemory.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiIterateOverPartitions @ 0x140626FE0 (MiIterateOverPartitions.c)
 */

__int64 MiUnlockAllMemoryLists()
{
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C66EE0);
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C66EF0);
  return MiIterateOverPartitions(MiLockMemoryLists, 0LL);
}
