void MiLockAllMemoryLists()
{
  MiIterateOverPartitions((void (__fastcall *)(__int64, __int64))MiLockMemoryLists, 1LL);
  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140C66EF0);
  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140C66EE0);
}
