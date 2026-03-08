/*
 * XREFs of MiRemovePhysicalMemoryBatchComplete @ 0x140619B48
 * Callers:
 *     MiInsertPartitionPages @ 0x140657EB8 (MiInsertPartitionPages.c)
 *     MiRemoveMdlPages @ 0x140A2B84C (MiRemoveMdlPages.c)
 * Callees:
 *     KeInvalidateAllCaches @ 0x1403010D0 (KeInvalidateAllCaches.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x14036D020 (MiFlushEntireTbDueToAttributeChange.c)
 *     IoUpdateDumpPhysicalRanges @ 0x14054EC60 (IoUpdateDumpPhysicalRanges.c)
 */

char MiRemovePhysicalMemoryBatchComplete()
{
  MiFlushEntireTbDueToAttributeChange();
  ++dword_140C65784;
  KeInvalidateAllCaches();
  return IoUpdateDumpPhysicalRanges();
}
