/*
 * XREFs of MiLockVadTree @ 0x1403334B4
 * Callers:
 *     MmAccessFault @ 0x140267D40 (MmAccessFault.c)
 *     MiUserFault @ 0x140268260 (MiUserFault.c)
 *     MiComputeMaximumFaultCluster @ 0x14026AFC0 (MiComputeMaximumFaultCluster.c)
 *     MiResolveDemandZeroFault @ 0x14026B720 (MiResolveDemandZeroFault.c)
 *     MiCompletePrivateZeroFault @ 0x14026C360 (MiCompletePrivateZeroFault.c)
 *     MiCompleteProtoPteFault @ 0x14026F5F0 (MiCompleteProtoPteFault.c)
 *     MiResolveProtoPteFault @ 0x140270A50 (MiResolveProtoPteFault.c)
 *     MiHandleTransitionFault @ 0x1402720E0 (MiHandleTransitionFault.c)
 *     MiMigratePfn @ 0x140272370 (MiMigratePfn.c)
 *     MiInitializeReadInProgressPfn @ 0x140289390 (MiInitializeReadInProgressPfn.c)
 *     MiResolveMappedFileFault @ 0x14028A780 (MiResolveMappedFileFault.c)
 *     MiComputeFaultNode @ 0x14028AE90 (MiComputeFaultNode.c)
 *     MiTrimSharedPageFromViews @ 0x1402A031C (MiTrimSharedPageFromViews.c)
 *     MiValidFault @ 0x1402C90E0 (MiValidFault.c)
 *     MiUpdatePrefetchPriority @ 0x1402C95DC (MiUpdatePrefetchPriority.c)
 *     MiPerformVadSplitting @ 0x1402D581C (MiPerformVadSplitting.c)
 *     MiSharedVaToPartition @ 0x1402E21A4 (MiSharedVaToPartition.c)
 *     MiAdvanceToLastUntrimmableVa @ 0x1402EC17C (MiAdvanceToLastUntrimmableVa.c)
 *     MiProcessCommitIntact @ 0x1402FDBAC (MiProcessCommitIntact.c)
 *     MiCopyOnWrite @ 0x140319F00 (MiCopyOnWrite.c)
 *     MiReservePageFileSpace @ 0x14032E800 (MiReservePageFileSpace.c)
 *     MiRemoveVad @ 0x140333090 (MiRemoveVad.c)
 *     MiImagePageOk @ 0x14034B09C (MiImagePageOk.c)
 *     MiLockStealUserVm @ 0x1403B7F90 (MiLockStealUserVm.c)
 *     MiLeapPrefetch @ 0x14062F4D4 (MiLeapPrefetch.c)
 *     MiCanGrantExecute @ 0x140643510 (MiCanGrantExecute.c)
 *     MmStoreDecommitVirtualMemory @ 0x14065A994 (MmStoreDecommitVirtualMemory.c)
 *     MiResolvePageFileFault @ 0x140668EDC (MiResolvePageFileFault.c)
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140225810 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockShared @ 0x140308060 (ExAcquireSpinLockShared.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140333520 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

KIRQL __fastcall MiLockVadTree(char a1)
{
  int v1; // r8d
  bool v2; // zf
  volatile LONG *v3; // rcx
  char v4; // bl

  v1 = a1 & 1;
  v2 = (a1 & 2) == 0;
  v3 = (volatile LONG *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[28] + 284);
  if ( v2 )
  {
    if ( v1 )
    {
      v4 = 17;
      ExAcquireSpinLockSharedAtDpcLevel(v3);
      return v4;
    }
    return ExAcquireSpinLockShared(v3);
  }
  if ( !v1 )
    return ExAcquireSpinLockExclusive(v3);
  v4 = 17;
  ExAcquireSpinLockExclusiveAtDpcLevel(v3);
  return v4;
}
