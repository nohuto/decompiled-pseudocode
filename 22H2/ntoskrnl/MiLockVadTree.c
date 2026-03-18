/*
 * XREFs of MiLockVadTree @ 0x14028A7A0
 * Callers:
 *     MiImagePageOk @ 0x1402185AC (MiImagePageOk.c)
 *     MmAccessFault @ 0x140235350 (MmAccessFault.c)
 *     MiUserFault @ 0x140235870 (MiUserFault.c)
 *     MiComputeMaximumFaultCluster @ 0x1402385D0 (MiComputeMaximumFaultCluster.c)
 *     MiComputeFaultNode @ 0x14025D470 (MiComputeFaultNode.c)
 *     MiHandleTransitionFault @ 0x140262D30 (MiHandleTransitionFault.c)
 *     MiMigratePfn @ 0x140262FC0 (MiMigratePfn.c)
 *     MiResolveProtoPteFault @ 0x140267DB0 (MiResolveProtoPteFault.c)
 *     MiCompleteProtoPteFault @ 0x140268AC0 (MiCompleteProtoPteFault.c)
 *     MiResolveDemandZeroFault @ 0x140269C20 (MiResolveDemandZeroFault.c)
 *     MiCompletePrivateZeroFault @ 0x14026A860 (MiCompletePrivateZeroFault.c)
 *     MiCopyOnWrite @ 0x14026FC80 (MiCopyOnWrite.c)
 *     MiReservePageFileSpace @ 0x140284880 (MiReservePageFileSpace.c)
 *     MiRemoveVad @ 0x14028A350 (MiRemoveVad.c)
 *     MiInitializeReadInProgressPfn @ 0x1402DEB40 (MiInitializeReadInProgressPfn.c)
 *     MiResolveMappedFileFault @ 0x1402E05E0 (MiResolveMappedFileFault.c)
 *     MiSharedVaToPartition @ 0x1402E2788 (MiSharedVaToPartition.c)
 *     MiTrimSharedPageFromViews @ 0x1402EFC5C (MiTrimSharedPageFromViews.c)
 *     MiPerformVadSplitting @ 0x14030B4C4 (MiPerformVadSplitting.c)
 *     MiValidFault @ 0x140333340 (MiValidFault.c)
 *     MiUpdatePrefetchPriority @ 0x14033383C (MiUpdatePrefetchPriority.c)
 *     MiAdvanceToLastUntrimmableVa @ 0x140357D5C (MiAdvanceToLastUntrimmableVa.c)
 *     MiProcessCommitIntact @ 0x140369168 (MiProcessCommitIntact.c)
 *     MiLockStealUserVm @ 0x1403BD8B8 (MiLockStealUserVm.c)
 *     MiLeapPrefetch @ 0x140631964 (MiLeapPrefetch.c)
 *     MiCanGrantExecute @ 0x140645B34 (MiCanGrantExecute.c)
 *     MmStoreDecommitVirtualMemory @ 0x14065CFE4 (MmStoreDecommitVirtualMemory.c)
 *     MiResolvePageFileFault @ 0x14066B52C (MiResolvePageFileFault.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024D340 (ExAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14025ABF0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14028A810 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x140314440 (ExAcquireSpinLockShared.c)
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
