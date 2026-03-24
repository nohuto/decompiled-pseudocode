/*
 * XREFs of RtlNumberOfClearBits @ 0x140253060
 * Callers:
 *     PopSaveHiberContext @ 0x140993F80 (PopSaveHiberContext.c)
 *     PopGetRemainingHibernateRangeDataSize @ 0x1409B13D4 (PopGetRemainingHibernateRangeDataSize.c)
 *     ViThunkCreateSharedExportInformation @ 0x1409C21D8 (ViThunkCreateSharedExportInformation.c)
 *     ViThunkReplaceAllSharedExports @ 0x1409D92D8 (ViThunkReplaceAllSharedExports.c)
 * Callees:
 *     RtlNumberOfSetBits @ 0x140253090 (RtlNumberOfSetBits.c)
 */

ULONG __stdcall RtlNumberOfClearBits(PRTL_BITMAP BitMapHeader)
{
  return BitMapHeader->SizeOfBitMap - RtlNumberOfSetBits(BitMapHeader);
}
