/*
 * XREFs of MiReturnFullProcessCommitment @ 0x1406B6FB4
 * Callers:
 *     MiSplitPrivatePage @ 0x14021114C (MiSplitPrivatePage.c)
 *     MiCopyToUserVa @ 0x140211730 (MiCopyToUserVa.c)
 *     MiProbeAndLockPages @ 0x140242114 (MiProbeAndLockPages.c)
 *     MmProbeAndLockPages @ 0x140267B90 (MmProbeAndLockPages.c)
 *     MiCommitExistingVad @ 0x140320D70 (MiCommitExistingVad.c)
 *     MiMakeHyperRangeAccessible @ 0x1403219F0 (MiMakeHyperRangeAccessible.c)
 *     MiSetProtectionOnSection @ 0x140321FC0 (MiSetProtectionOnSection.c)
 *     MiProtectPrivateMemory @ 0x140344540 (MiProtectPrivateMemory.c)
 *     MiSplitReducedCommitClonePage @ 0x14061A624 (MiSplitReducedCommitClonePage.c)
 *     MiPrepareImagePagesForHotPatch @ 0x1406404D8 (MiPrepareImagePagesForHotPatch.c)
 *     MiCloneVads @ 0x140660C98 (MiCloneVads.c)
 *     MiReturnPageTablePageCommitment @ 0x1406B6AF0 (MiReturnPageTablePageCommitment.c)
 *     MiDeleteVadBitmap @ 0x1407266B4 (MiDeleteVadBitmap.c)
 *     MiFreeLargePageView @ 0x140A46E40 (MiFreeLargePageView.c)
 * Callees:
 *     MiReturnCommit @ 0x140287340 (MiReturnCommit.c)
 *     MiReturnFullProcessCharges @ 0x140289980 (MiReturnFullProcessCharges.c)
 *     MiGetProcessPartition @ 0x14031F9D4 (MiGetProcessPartition.c)
 */

__int64 __fastcall MiReturnFullProcessCommitment(__int64 a1, __int64 a2)
{
  __int64 ProcessPartition; // rax
  __int64 v5; // r8

  ProcessPartition = MiGetProcessPartition(a1);
  MiReturnCommit(ProcessPartition, a2, v5);
  return MiReturnFullProcessCharges(a1, a2);
}
