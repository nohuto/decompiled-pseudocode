/*
 * XREFs of MiUnlockVadTree @ 0x140330EC8
 * Callers:
 *     MiCheckVirtualAddress @ 0x140225600 (MiCheckVirtualAddress.c)
 *     MiZeroFault @ 0x140266000 (MiZeroFault.c)
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
 *     MiTranslatePageForCopy @ 0x1402A1FD4 (MiTranslatePageForCopy.c)
 *     MiIsFaultPteIntact @ 0x1402A30FC (MiIsFaultPteIntact.c)
 *     MiFindActualFaultingPte @ 0x1402A31F0 (MiFindActualFaultingPte.c)
 *     MiValidFault @ 0x1402C90E0 (MiValidFault.c)
 *     MiUpdatePrefetchPriority @ 0x1402C95DC (MiUpdatePrefetchPriority.c)
 *     MiPerformVadSplitting @ 0x1402D581C (MiPerformVadSplitting.c)
 *     MiSharedVaToPartition @ 0x1402E21A4 (MiSharedVaToPartition.c)
 *     MiAdvanceToLastUntrimmableVa @ 0x1402EC17C (MiAdvanceToLastUntrimmableVa.c)
 *     MiProcessCommitIntact @ 0x1402FDBAC (MiProcessCommitIntact.c)
 *     MiCopyOnWrite @ 0x140319F00 (MiCopyOnWrite.c)
 *     MiRemoveVad @ 0x140333090 (MiRemoveVad.c)
 *     MiInPagePageTable @ 0x140345FA0 (MiInPagePageTable.c)
 *     MiImagePageOk @ 0x14034B09C (MiImagePageOk.c)
 *     MiLockStealUserVm @ 0x1403B7F90 (MiLockStealUserVm.c)
 *     MiLeapPrefetch @ 0x14062F4D4 (MiLeapPrefetch.c)
 *     MiCanGrantExecute @ 0x140643510 (MiCanGrantExecute.c)
 *     MmStoreDecommitVirtualMemory @ 0x14065A994 (MmStoreDecommitVirtualMemory.c)
 *     MiResolvePageFileFault @ 0x140668EDC (MiResolvePageFileFault.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14027F8D0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall MiUnlockVadTree(char a1, unsigned __int8 a2)
{
  unsigned __int64 v2; // rbx
  int v3; // edx
  bool v4; // zf
  volatile LONG *v5; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v9; // eax

  v2 = a2;
  v3 = a1 & 1;
  v4 = (a1 & 2) == 0;
  v5 = (volatile LONG *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[28] + 284);
  if ( v4 )
  {
    if ( v3 )
    {
      ExReleaseSpinLockSharedFromDpcLevel(v5);
      return;
    }
    ExReleaseSpinLockSharedFromDpcLevel(v5);
  }
  else
  {
    if ( v3 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(v5);
      return;
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(v5);
  }
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v2 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v9 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
      v4 = (v9 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v9;
      if ( v4 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v2);
}
