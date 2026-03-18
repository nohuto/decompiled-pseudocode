/*
 * XREFs of MmSizeOfMdl @ 0x140206EA0
 * Callers:
 *     ExLockUserBuffer @ 0x140687918 (ExLockUserBuffer.c)
 *     MiAllocatePerSessionProtos @ 0x1407B6410 (MiAllocatePerSessionProtos.c)
 *     ExInitializeLeapSecondData @ 0x140854420 (ExInitializeLeapSecondData.c)
 *     VslValidateDynamicCodePages @ 0x14087F3C8 (VslValidateDynamicCodePages.c)
 *     VslCreateSecureSection @ 0x140941CA0 (VslCreateSecureSection.c)
 *     VslObtainHotPatchUndoTable @ 0x140942BA8 (VslObtainHotPatchUndoTable.c)
 *     PspCreateSecureThread @ 0x1409B1010 (PspCreateSecureThread.c)
 *     SmProcessStatsRequest @ 0x1409D7428 (SmProcessStatsRequest.c)
 *     NtStartProfile @ 0x140A046D0 (NtStartProfile.c)
 *     MiReplaceRotateWithDemandZero @ 0x140A31478 (MiReplaceRotateWithDemandZero.c)
 *     MiRotateToFrameBuffer @ 0x140A31710 (MiRotateToFrameBuffer.c)
 *     MiLoadDataIntoVsmEnclave @ 0x140A3E144 (MiLoadDataIntoVsmEnclave.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x140A3F9C0 (MiQueryMemoryPhysicalContiguity.c)
 *     PopMarkHiberPhase @ 0x140AA3958 (PopMarkHiberPhase.c)
 * Callees:
 *     <none>
 */

SIZE_T __stdcall MmSizeOfMdl(PVOID Base, SIZE_T Length)
{
  return 8 * ((((unsigned __int16)Base & 0xFFF) + Length + 4095) >> 12) + 48;
}
