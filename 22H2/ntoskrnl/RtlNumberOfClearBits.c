/*
 * XREFs of RtlNumberOfClearBits @ 0x140293420
 * Callers:
 *     PopGetRemainingHibernateRangeDataSize @ 0x140AA2E7C (PopGetRemainingHibernateRangeDataSize.c)
 *     PopSaveHiberContext @ 0x140AA4A40 (PopSaveHiberContext.c)
 *     ViThunkCreateSharedExportInformation @ 0x140ABE010 (ViThunkCreateSharedExportInformation.c)
 *     ViThunkFindAllSharedExports @ 0x140ADC804 (ViThunkFindAllSharedExports.c)
 *     ViThunkReplaceAllSharedExports @ 0x140ADCE64 (ViThunkReplaceAllSharedExports.c)
 * Callees:
 *     RtlNumberOfSetBits @ 0x140293450 (RtlNumberOfSetBits.c)
 */

ULONG __stdcall RtlNumberOfClearBits(PRTL_BITMAP BitMapHeader)
{
  return BitMapHeader->SizeOfBitMap - RtlNumberOfSetBits(BitMapHeader);
}
