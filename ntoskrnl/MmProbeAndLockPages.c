/*
 * XREFs of MmProbeAndLockPages @ 0x140267B90
 * Callers:
 *     sub_1403EBCD0 @ 0x1403EBCD0 (sub_1403EBCD0.c)
 *     CcMdlRead @ 0x1406A3B50 (CcMdlRead.c)
 *     MmProbeAndLockProcessPages @ 0x1406A40F0 (MmProbeAndLockProcessPages.c)
 *     MiAllocatePerSessionProtos @ 0x14075B9D4 (MiAllocatePerSessionProtos.c)
 *     ExLockUserBuffer @ 0x14075D5A4 (ExLockUserBuffer.c)
 *     IopXxxControlFile @ 0x1407C1720 (IopXxxControlFile.c)
 *     MiCopyVirtualMemory @ 0x1407C5950 (MiCopyVirtualMemory.c)
 *     FsRtlKernelFsControlFile @ 0x1407DB1B0 (FsRtlKernelFsControlFile.c)
 *     IopReadFile @ 0x1407E0C40 (IopReadFile.c)
 *     ExInitializeLeapSecondData @ 0x140850BB0 (ExInitializeLeapSecondData.c)
 *     VslValidateDynamicCodePages @ 0x14087A498 (VslValidateDynamicCodePages.c)
 *     VslCallEnclave @ 0x1408A00F8 (VslCallEnclave.c)
 *     VslObtainHotPatchUndoTable @ 0x14093FB88 (VslObtainHotPatchUndoTable.c)
 *     IopAllocateAndLockMdl @ 0x1409410EC (IopAllocateAndLockMdl.c)
 *     IopSetFileObjectIosbRange @ 0x140942FC8 (IopSetFileObjectIosbRange.c)
 *     AlpcpInitializeCompletionList @ 0x14097672C (AlpcpInitializeCompletionList.c)
 *     PopReadPagesFromHiberFile @ 0x140985B2C (PopReadPagesFromHiberFile.c)
 *     PspCreateSecureThread @ 0x1409ADFC0 (PspCreateSecureThread.c)
 *     SmProcessStatsRequest @ 0x1409D4588 (SmProcessStatsRequest.c)
 *     NtStartProfile @ 0x140A019E0 (NtStartProfile.c)
 *     NtPssCaptureVaSpaceBulk @ 0x140A025D0 (NtPssCaptureVaSpaceBulk.c)
 *     CmpLockKeyBodyIntoMemory @ 0x140A14838 (CmpLockKeyBodyIntoMemory.c)
 *     MiRotateToFrameBuffer @ 0x140A2E9E0 (MiRotateToFrameBuffer.c)
 *     MiApplyImageHotPatch @ 0x140A326C8 (MiApplyImageHotPatch.c)
 *     MiCopyPagesIntoEnclave @ 0x140A3A34C (MiCopyPagesIntoEnclave.c)
 *     MiLoadDataIntoVsmEnclave @ 0x140A3B45C (MiLoadDataIntoVsmEnclave.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x140A3CCE0 (MiQueryMemoryPhysicalContiguity.c)
 *     sub_140A4AE60 @ 0x140A4AE60 (sub_140A4AE60.c)
 * Callees:
 *     MiProbeAndLockComplete @ 0x140267C70 (MiProbeAndLockComplete.c)
 *     MiProbeAndLockPacket @ 0x140268C30 (MiProbeAndLockPacket.c)
 *     MiProbeAndLockPrepare @ 0x14026B160 (MiProbeAndLockPrepare.c)
 *     RtlRaiseStatus @ 0x140292590 (RtlRaiseStatus.c)
 *     MiUnlockAndDereferenceVad @ 0x14031EDC0 (MiUnlockAndDereferenceVad.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     MiReturnFullProcessCommitment @ 0x1406B6FB4 (MiReturnFullProcessCommitment.c)
 */

void __stdcall MmProbeAndLockPages(PMDL MemoryDescriptorList, KPROCESSOR_MODE AccessMode, LOCK_OPERATION Operation)
{
  int v6; // eax
  unsigned int v7; // eax
  int v8; // eax
  _BYTE *v9; // rdi
  int v10; // ebx
  __int64 v11; // rax
  unsigned __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rdx
  _QWORD v15[22]; // [rsp+40h] [rbp-B8h] BYREF

  memset(v15, 0, sizeof(v15));
  v6 = MiProbeAndLockPrepare(
         (unsigned int)v15,
         (_DWORD)MemoryDescriptorList,
         LODWORD(MemoryDescriptorList->StartVa) + MemoryDescriptorList->ByteOffset,
         MemoryDescriptorList->ByteCount,
         AccessMode != 0,
         Operation != IoReadAccess,
         1);
  if ( v6 < 0 )
    RtlRaiseStatus((unsigned int)v6);
  v7 = MiProbeAndLockPacket(v15);
  v8 = MiProbeAndLockComplete(v15, v7, 3LL);
  v9 = (_BYTE *)v15[16];
  v10 = v8;
  if ( v15[16] )
  {
    v11 = *(unsigned int *)(v15[16] + 52LL);
    LODWORD(v11) = v11 & 0x7FFFFFFF;
    v12 = v15[14] + (v11 | ((unsigned __int64)*(unsigned __int8 *)(v15[16] + 34LL) << 31));
    v13 = v15[15];
    *(_DWORD *)(v15[16] + 52LL) ^= (v12 ^ *(_DWORD *)(v15[16] + 52LL)) & 0x7FFFFFFF;
    v9[34] = v12 >> 31;
    v14 = v13 - v15[14];
    if ( v14 )
      MiReturnFullProcessCommitment(v15[11], v14);
    MiUnlockAndDereferenceVad(v9);
  }
  if ( v10 < 0 )
    RtlRaiseStatus((unsigned int)v10);
}
