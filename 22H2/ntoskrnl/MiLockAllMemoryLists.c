/*
 * XREFs of MiLockAllMemoryLists @ 0x1406509A8
 * Callers:
 *     MmDuplicateMemory @ 0x140AAC90C (MmDuplicateMemory.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14028A810 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiIterateOverPartitions @ 0x14062947C (MiIterateOverPartitions.c)
 */

void MiLockAllMemoryLists()
{
  MiIterateOverPartitions((void (__fastcall *)(__int64, __int64))MiLockMemoryLists, 1LL);
  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140C67370);
  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140C67360);
}
