/*
 * XREFs of RtlNumberOfClearBits @ 0x14035C4F0
 * Callers:
 *     PopGetRemainingHibernateRangeDataSize @ 0x140A9FC4C (PopGetRemainingHibernateRangeDataSize.c)
 *     PopSaveHiberContext @ 0x140AA1810 (PopSaveHiberContext.c)
 *     ViThunkCreateSharedExportInformation @ 0x140AB9FE0 (ViThunkCreateSharedExportInformation.c)
 *     ViThunkFindAllSharedExports @ 0x140AD8804 (ViThunkFindAllSharedExports.c)
 *     ViThunkReplaceAllSharedExports @ 0x140AD8E64 (ViThunkReplaceAllSharedExports.c)
 * Callees:
 *     RtlNumberOfSetBits @ 0x14035C520 (RtlNumberOfSetBits.c)
 */

ULONG __stdcall RtlNumberOfClearBits(PRTL_BITMAP BitMapHeader)
{
  return BitMapHeader->SizeOfBitMap - RtlNumberOfSetBits(BitMapHeader);
}
