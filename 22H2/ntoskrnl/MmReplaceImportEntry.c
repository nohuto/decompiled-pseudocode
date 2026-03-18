/*
 * XREFs of MmReplaceImportEntry @ 0x14062CB38
 * Callers:
 *     KsepPatchImportTableEntry @ 0x1409773D4 (KsepPatchImportTableEntry.c)
 *     ViThunkReplaceIatEntryForClassDriverThunk @ 0x140ADCFE8 (ViThunkReplaceIatEntryForClassDriverThunk.c)
 *     ViThunkReplaceIatEntryForWdmThunk @ 0x140ADD048 (ViThunkReplaceIatEntryForWdmThunk.c)
 *     ViThunkReplaceSharedExports @ 0x140ADD108 (ViThunkReplaceSharedExports.c)
 * Callees:
 *     MiReplaceImportEntry @ 0x14062C720 (MiReplaceImportEntry.c)
 */

__int64 __fastcall MmReplaceImportEntry(ULONG_PTR a1, ULONG_PTR a2)
{
  return MiReplaceImportEntry(a1, a2);
}
