/*
 * XREFs of MiReturnFullProcessCommitment @ 0x14063BF58
 * Callers:
 *     MiProbeAndLockPages @ 0x14020A820 (MiProbeAndLockPages.c)
 *     MiCommitExistingVad @ 0x140218D50 (MiCommitExistingVad.c)
 *     MiMakeHyperRangeAccessible @ 0x14021B4A0 (MiMakeHyperRangeAccessible.c)
 *     MiSplitPrivatePage @ 0x14028D630 (MiSplitPrivatePage.c)
 *     MiProtectPrivateMemory @ 0x14028E080 (MiProtectPrivateMemory.c)
 *     MiCopyToUserVa @ 0x14028EBB8 (MiCopyToUserVa.c)
 *     MiSetProtectionOnSection @ 0x1402B3300 (MiSetProtectionOnSection.c)
 *     MiSplitReducedCommitClonePage @ 0x140530CD4 (MiSplitReducedCommitClonePage.c)
 *     MiPrepareImagePagesForHotPatch @ 0x14053EB0C (MiPrepareImagePagesForHotPatch.c)
 *     MiCloneVads @ 0x140559268 (MiCloneVads.c)
 *     MiReturnPageTablePageCommitment @ 0x14063C0B0 (MiReturnPageTablePageCommitment.c)
 *     MiDeleteVadBitmap @ 0x140660300 (MiDeleteVadBitmap.c)
 *     MiFreeLargePageView @ 0x1408DA360 (MiFreeLargePageView.c)
 * Callees:
 *     MiGetProcessPartition @ 0x14021AD00 (MiGetProcessPartition.c)
 *     MiReturnCommit @ 0x140298920 (MiReturnCommit.c)
 *     MiReturnFullProcessCharges @ 0x1402989F0 (MiReturnFullProcessCharges.c)
 */

__int64 __fastcall MiReturnFullProcessCommitment(__int64 a1, __int64 a2)
{
  __int64 ProcessPartition; // rax

  ProcessPartition = MiGetProcessPartition(a1);
  MiReturnCommit(ProcessPartition, a2);
  return MiReturnFullProcessCharges(a1, a2);
}
