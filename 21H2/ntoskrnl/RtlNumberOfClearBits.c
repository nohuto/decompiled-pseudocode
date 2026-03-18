/*
 * XREFs of RtlNumberOfClearBits @ 0x140209930
 * Callers:
 *     PopSaveHiberContext @ 0x140A4B9E0 (PopSaveHiberContext.c)
 *     PopGetRemainingHibernateRangeDataSize @ 0x140A6B37C (PopGetRemainingHibernateRangeDataSize.c)
 *     ViThunkCreateSharedExportInformation @ 0x140A7C0B8 (ViThunkCreateSharedExportInformation.c)
 *     ViThunkFindAllSharedExports @ 0x140A93BA8 (ViThunkFindAllSharedExports.c)
 *     ViThunkReplaceAllSharedExports @ 0x140A942C0 (ViThunkReplaceAllSharedExports.c)
 * Callees:
 *     RtlNumberOfSetBits @ 0x140209960 (RtlNumberOfSetBits.c)
 */

ULONG __stdcall RtlNumberOfClearBits(PRTL_BITMAP BitMapHeader)
{
  return BitMapHeader->SizeOfBitMap - RtlNumberOfSetBits(BitMapHeader);
}
