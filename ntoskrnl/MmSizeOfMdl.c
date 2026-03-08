/*
 * XREFs of MmSizeOfMdl @ 0x1402CFFB0
 * Callers:
 *     MiAllocatePerSessionProtos @ 0x14075B9D4 (MiAllocatePerSessionProtos.c)
 *     ExLockUserBuffer @ 0x14075D5A4 (ExLockUserBuffer.c)
 *     ExInitializeLeapSecondData @ 0x140850BB0 (ExInitializeLeapSecondData.c)
 *     VslValidateDynamicCodePages @ 0x14087A498 (VslValidateDynamicCodePages.c)
 *     VslCreateSecureSection @ 0x14093EC80 (VslCreateSecureSection.c)
 *     VslObtainHotPatchUndoTable @ 0x14093FB88 (VslObtainHotPatchUndoTable.c)
 *     PspCreateSecureThread @ 0x1409ADFC0 (PspCreateSecureThread.c)
 *     SmProcessStatsRequest @ 0x1409D4588 (SmProcessStatsRequest.c)
 *     NtStartProfile @ 0x140A019E0 (NtStartProfile.c)
 *     MiReplaceRotateWithDemandZero @ 0x140A2E748 (MiReplaceRotateWithDemandZero.c)
 *     MiRotateToFrameBuffer @ 0x140A2E9E0 (MiRotateToFrameBuffer.c)
 *     MiLoadDataIntoVsmEnclave @ 0x140A3B45C (MiLoadDataIntoVsmEnclave.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x140A3CCE0 (MiQueryMemoryPhysicalContiguity.c)
 *     PopMarkHiberPhase @ 0x140AA0728 (PopMarkHiberPhase.c)
 * Callees:
 *     <none>
 */

SIZE_T __stdcall MmSizeOfMdl(PVOID Base, SIZE_T Length)
{
  return 8 * ((((unsigned __int16)Base & 0xFFF) + Length + 4095) >> 12) + 48;
}
