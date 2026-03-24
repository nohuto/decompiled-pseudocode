/*
 * XREFs of MiGetSubsectionDriverProtos @ 0x14027D460
 * Callers:
 *     MiCompleteProtoPteFault @ 0x140213D50 (MiCompleteProtoPteFault.c)
 *     MiEmptyPageAccessLog @ 0x14025B4D0 (MiEmptyPageAccessLog.c)
 *     MiComputeImagePteIndex @ 0x14027D3C0 (MiComputeImagePteIndex.c)
 *     MiResolveMappedFileFault @ 0x140299B10 (MiResolveMappedFileFault.c)
 *     MiStartingOffset @ 0x14029EAA0 (MiStartingOffset.c)
 *     MiIdentifyPfn @ 0x1402C9940 (MiIdentifyPfn.c)
 *     MiImageProtoChargedCommit @ 0x140379D10 (MiImageProtoChargedCommit.c)
 *     MiCountSystemImageCommitment @ 0x14039E594 (MiCountSystemImageCommitment.c)
 *     MiPfAllocateMdls @ 0x1406363C0 (MiPfAllocateMdls.c)
 *     MiAddMappedPtes @ 0x140636970 (MiAddMappedPtes.c)
 *     MiRevertRelocations @ 0x14066BE54 (MiRevertRelocations.c)
 *     MiDeleteSessionDriverProtos @ 0x140779528 (MiDeleteSessionDriverProtos.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetSubsectionDriverProtos(_QWORD *a1)
{
  if ( (*(_DWORD *)(*a1 + 56LL) & 0x20) != 0 )
    return a1[3];
  else
    return 0LL;
}
