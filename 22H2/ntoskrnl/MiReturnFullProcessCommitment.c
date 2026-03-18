/*
 * XREFs of MiReturnFullProcessCommitment @ 0x140765364
 * Callers:
 *     MiCopyToUserVa @ 0x14021CBFC (MiCopyToUserVa.c)
 *     MiSplitPrivatePage @ 0x14021CE64 (MiSplitPrivatePage.c)
 *     MmProbeAndLockPages @ 0x140238770 (MmProbeAndLockPages.c)
 *     MiCommitExistingVad @ 0x140276910 (MiCommitExistingVad.c)
 *     MiMakeHyperRangeAccessible @ 0x140277590 (MiMakeHyperRangeAccessible.c)
 *     MiSetProtectionOnSection @ 0x140277B60 (MiSetProtectionOnSection.c)
 *     MiProtectPrivateMemory @ 0x1402A2760 (MiProtectPrivateMemory.c)
 *     MiProbeAndLockPages @ 0x1402FC270 (MiProbeAndLockPages.c)
 *     MiSplitReducedCommitClonePage @ 0x14061CAD4 (MiSplitReducedCommitClonePage.c)
 *     MiPrepareImagePagesForHotPatch @ 0x140642938 (MiPrepareImagePagesForHotPatch.c)
 *     MiCloneVads @ 0x1406632E8 (MiCloneVads.c)
 *     MiDeleteVadBitmap @ 0x140706C64 (MiDeleteVadBitmap.c)
 *     MiReturnPageTablePageCommitment @ 0x140764EA0 (MiReturnPageTablePageCommitment.c)
 *     MiFreeLargePageView @ 0x140A49B10 (MiFreeLargePageView.c)
 * Callees:
 *     MiGetProcessPartition @ 0x140275574 (MiGetProcessPartition.c)
 *     MiReturnCommit @ 0x1402DC250 (MiReturnCommit.c)
 *     MiReturnFullProcessCharges @ 0x1402DF130 (MiReturnFullProcessCharges.c)
 */

__int64 __fastcall MiReturnFullProcessCommitment(__int64 a1, __int64 a2)
{
  __int64 ProcessPartition; // rax

  ProcessPartition = MiGetProcessPartition(a1);
  MiReturnCommit(ProcessPartition, a2);
  return MiReturnFullProcessCharges(a1, a2);
}
