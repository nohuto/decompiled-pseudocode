/*
 * XREFs of MiLockAllMemoryLists @ 0x1403821EC
 * Callers:
 *     MmDuplicateMemory @ 0x1409907AC (MmDuplicateMemory.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140295410 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiIterateOverPartitions @ 0x140382280 (MiIterateOverPartitions.c)
 */

void MiLockAllMemoryLists()
{
  MiIterateOverPartitions(MiLockMemoryLists, 1LL);
  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140C4E570);
  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140C4E560);
}
