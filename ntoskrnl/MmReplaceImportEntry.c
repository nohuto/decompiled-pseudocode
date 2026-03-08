/*
 * XREFs of MmReplaceImportEntry @ 0x14062A6B8
 * Callers:
 *     KsepPatchImportTableEntry @ 0x140974334 (KsepPatchImportTableEntry.c)
 *     ViThunkReplaceIatEntryForClassDriverThunk @ 0x140AD8FE8 (ViThunkReplaceIatEntryForClassDriverThunk.c)
 *     ViThunkReplaceIatEntryForWdmThunk @ 0x140AD9048 (ViThunkReplaceIatEntryForWdmThunk.c)
 *     ViThunkReplaceSharedExports @ 0x140AD9108 (ViThunkReplaceSharedExports.c)
 * Callees:
 *     MiReplaceImportEntry @ 0x14062A2A0 (MiReplaceImportEntry.c)
 */

__int64 __fastcall MmReplaceImportEntry(ULONG_PTR a1, ULONG_PTR a2)
{
  return MiReplaceImportEntry(a1, a2);
}
