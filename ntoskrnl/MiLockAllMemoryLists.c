/*
 * XREFs of MiLockAllMemoryLists @ 0x14064E354
 * Callers:
 *     MmDuplicateMemory @ 0x140AA96DC (MmDuplicateMemory.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140333520 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiIterateOverPartitions @ 0x140626FE0 (MiIterateOverPartitions.c)
 */

void MiLockAllMemoryLists()
{
  MiIterateOverPartitions((void (__fastcall *)(__int64, __int64))MiLockMemoryLists, 1LL);
  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140C66EF0);
  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140C66EE0);
}
