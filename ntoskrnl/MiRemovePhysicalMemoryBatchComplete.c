char MiRemovePhysicalMemoryBatchComplete()
{
  MiFlushEntireTbDueToAttributeChange();
  ++dword_140C65784;
  KeInvalidateAllCaches();
  return IoUpdateDumpPhysicalRanges();
}
