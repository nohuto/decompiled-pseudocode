/*
 * XREFs of MmSizeOfMdl @ 0x1402EB830
 * Callers:
 *     MmRotatePhysicalView @ 0x14065FD60 (MmRotatePhysicalView.c)
 *     ExLockUserBuffer @ 0x1406605D0 (ExLockUserBuffer.c)
 *     MiAllocatePerSessionProtos @ 0x14069F848 (MiAllocatePerSessionProtos.c)
 *     ExInitializeLeapSecondData @ 0x1407A92DC (ExInitializeLeapSecondData.c)
 *     VslCreateSecureSection @ 0x14088F1A0 (VslCreateSecureSection.c)
 *     VslObtainHotPatchUndoTable @ 0x140890028 (VslObtainHotPatchUndoTable.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x1408D12F0 (MiQueryMemoryPhysicalContiguity.c)
 *     MiLoadDataIntoVsmEnclave @ 0x1408D3214 (MiLoadDataIntoVsmEnclave.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x1408D35C0 (MiLoadSectionIntoVsmEnclave.c)
 *     NtLoadEnclaveData @ 0x1408D44A0 (NtLoadEnclaveData.c)
 *     PspCreateSecureThread @ 0x140909FEC (PspCreateSecureThread.c)
 *     SmProcessStatsRequest @ 0x14092A088 (SmProcessStatsRequest.c)
 *     NtStartProfile @ 0x14095AE20 (NtStartProfile.c)
 *     PopMarkHiberPhase @ 0x1409B1708 (PopMarkHiberPhase.c)
 * Callees:
 *     <none>
 */

SIZE_T __stdcall MmSizeOfMdl(PVOID Base, SIZE_T Length)
{
  return 8 * ((((unsigned __int16)Base & 0xFFF) + Length + 4095) >> 12) + 48;
}
