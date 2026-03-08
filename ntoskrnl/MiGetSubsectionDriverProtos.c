/*
 * XREFs of MiGetSubsectionDriverProtos @ 0x1403443A4
 * Callers:
 *     MiIdentifyPfn @ 0x14025E5D0 (MiIdentifyPfn.c)
 *     MiCompleteProtoPteFault @ 0x14026F5F0 (MiCompleteProtoPteFault.c)
 *     MiStartingOffset @ 0x14028C530 (MiStartingOffset.c)
 *     MiCountSystemImageCommitment @ 0x1402B0C2C (MiCountSystemImageCommitment.c)
 *     MiImageProtoChargedCommit @ 0x1402B0EDC (MiImageProtoChargedCommit.c)
 *     MiComputeImagePteIndex @ 0x140344304 (MiComputeImagePteIndex.c)
 *     MiDeleteSessionDriverProtos @ 0x14067F83C (MiDeleteSessionDriverProtos.c)
 *     MiAddMappedPtes @ 0x1406A56B0 (MiAddMappedPtes.c)
 *     MiPfAllocateMdls @ 0x14075A230 (MiPfAllocateMdls.c)
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
