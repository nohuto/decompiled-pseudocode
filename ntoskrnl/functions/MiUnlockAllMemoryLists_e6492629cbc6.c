__int64 MiUnlockAllMemoryLists()
{
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C66EE0);
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C66EF0);
  return MiIterateOverPartitions(MiLockMemoryLists, 0LL);
}
