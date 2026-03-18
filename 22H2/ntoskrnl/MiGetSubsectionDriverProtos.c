/*
 * XREFs of MiGetSubsectionDriverProtos @ 0x1402A25C4
 * Callers:
 *     MiCountSystemImageCommitment @ 0x14020ABD4 (MiCountSystemImageCommitment.c)
 *     MiIdentifyPfn @ 0x14023E4A0 (MiIdentifyPfn.c)
 *     MiCompleteProtoPteFault @ 0x140268AC0 (MiCompleteProtoPteFault.c)
 *     MiComputeImagePteIndex @ 0x1402A2524 (MiComputeImagePteIndex.c)
 *     MiStartingOffset @ 0x1402E2310 (MiStartingOffset.c)
 *     MiImageProtoChargedCommit @ 0x14035E5A8 (MiImageProtoChargedCommit.c)
 *     MiDeleteSessionDriverProtos @ 0x140682C1C (MiDeleteSessionDriverProtos.c)
 *     MiAddMappedPtes @ 0x1406AD7A0 (MiAddMappedPtes.c)
 *     MiPfAllocateMdls @ 0x1407465B0 (MiPfAllocateMdls.c)
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
