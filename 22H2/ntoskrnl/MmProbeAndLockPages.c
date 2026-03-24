/*
 * XREFs of MmProbeAndLockPages @ 0x1402096D0
 * Callers:
 *     sub_1403E9A50 @ 0x1403E9A50 (sub_1403E9A50.c)
 *     IopReadFile @ 0x1405CE318 (IopReadFile.c)
 *     WbMakeUserDataPagesKernelWritable @ 0x1405D7AD8 (WbMakeUserDataPagesKernelWritable.c)
 *     MmCopyVirtualMemory @ 0x1405F6DB0 (MmCopyVirtualMemory.c)
 *     MmProbeAndLockProcessPages @ 0x14061FE30 (MmProbeAndLockProcessPages.c)
 *     AlpcpInitializeCompletionList @ 0x14065C270 (AlpcpInitializeCompletionList.c)
 *     MmRotatePhysicalView @ 0x14065FD60 (MmRotatePhysicalView.c)
 *     ExLockUserBuffer @ 0x1406605D0 (ExLockUserBuffer.c)
 *     FsRtlKernelFsControlFile @ 0x140669ED0 (FsRtlKernelFsControlFile.c)
 *     MiAllocatePerSessionProtos @ 0x14069F848 (MiAllocatePerSessionProtos.c)
 *     CcMdlRead @ 0x140701480 (CcMdlRead.c)
 *     ExInitializeLeapSecondData @ 0x1407A92DC (ExInitializeLeapSecondData.c)
 *     VslCallEnclave @ 0x14088EC44 (VslCallEnclave.c)
 *     VslObtainHotPatchUndoTable @ 0x140890028 (VslObtainHotPatchUndoTable.c)
 *     IopSetFileObjectIosbRange @ 0x140892864 (IopSetFileObjectIosbRange.c)
 *     MiApplyImageHotPatch @ 0x1408C95AC (MiApplyImageHotPatch.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x1408D12F0 (MiQueryMemoryPhysicalContiguity.c)
 *     MiCopyPagesIntoEnclave @ 0x1408D21D8 (MiCopyPagesIntoEnclave.c)
 *     MiLoadDataIntoVsmEnclave @ 0x1408D3214 (MiLoadDataIntoVsmEnclave.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x1408D35C0 (MiLoadSectionIntoVsmEnclave.c)
 *     NtLoadEnclaveData @ 0x1408D44A0 (NtLoadEnclaveData.c)
 *     PopReadPagesFromHiberFile @ 0x1408E6F3C (PopReadPagesFromHiberFile.c)
 *     PspCreateSecureThread @ 0x140909FEC (PspCreateSecureThread.c)
 *     SmProcessStatsRequest @ 0x14092A088 (SmProcessStatsRequest.c)
 *     NtStartProfile @ 0x14095AE20 (NtStartProfile.c)
 *     NtPssCaptureVaSpaceBulk @ 0x14095BF90 (NtPssCaptureVaSpaceBulk.c)
 * Callees:
 *     MiProbeAndLockPages @ 0x14020A820 (MiProbeAndLockPages.c)
 */

void __stdcall MmProbeAndLockPages(PMDL MemoryDescriptorList, KPROCESSOR_MODE AccessMode, LOCK_OPERATION Operation)
{
  MiProbeAndLockPages(MemoryDescriptorList, AccessMode != 0, Operation != IoReadAccess);
}
