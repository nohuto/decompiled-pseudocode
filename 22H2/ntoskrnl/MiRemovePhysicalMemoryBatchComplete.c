/*
 * XREFs of MiRemovePhysicalMemoryBatchComplete @ 0x14061BFF4
 * Callers:
 *     MiRemoveMdlPages @ 0x140A2E5AC (MiRemoveMdlPages.c)
 * Callees:
 *     KeInvalidateAllCaches @ 0x14036D4F0 (KeInvalidateAllCaches.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x14036EF4C (MiFlushEntireTbDueToAttributeChange.c)
 *     IoUpdateDumpPhysicalRanges @ 0x140551100 (IoUpdateDumpPhysicalRanges.c)
 */

_QWORD *MiRemovePhysicalMemoryBatchComplete()
{
  MiFlushEntireTbDueToAttributeChange();
  ++dword_140C65C04;
  KeInvalidateAllCaches();
  return IoUpdateDumpPhysicalRanges();
}
