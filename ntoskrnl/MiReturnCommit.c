/*
 * XREFs of MiReturnCommit @ 0x140287340
 * Callers:
 *     MiDeleteSessionPdes @ 0x140200F38 (MiDeleteSessionPdes.c)
 *     MmFreePoolMemory @ 0x14020DD58 (MmFreePoolMemory.c)
 *     MiInsertInSystemSpace @ 0x14020EB30 (MiInsertInSystemSpace.c)
 *     MiCleanupPageTablePages @ 0x14020FD04 (MiCleanupPageTablePages.c)
 *     MiWriteCompletePfn @ 0x140212B10 (MiWriteCompletePfn.c)
 *     MiReleaseWriteInProgressCharges @ 0x140212C98 (MiReleaseWriteInProgressCharges.c)
 *     MmCheckCachedPageStates @ 0x1402200B0 (MmCheckCachedPageStates.c)
 *     MiUnlockImageSection @ 0x140225A90 (MiUnlockImageSection.c)
 *     MiCreateUltraThreadContextHelper @ 0x1402445C4 (MiCreateUltraThreadContextHelper.c)
 *     MiProbeLockFrame @ 0x140268ED0 (MiProbeLockFrame.c)
 *     MiResolveProtoPteFault @ 0x140270A50 (MiResolveProtoPteFault.c)
 *     MiResolveTransitionFault @ 0x140271760 (MiResolveTransitionFault.c)
 *     MiMakePageAvoidRead @ 0x140272670 (MiMakePageAvoidRead.c)
 *     MiFreeMdlPageRun @ 0x14027AF50 (MiFreeMdlPageRun.c)
 *     MmUnlockPages @ 0x14027C0C0 (MmUnlockPages.c)
 *     MiCheckProtoPtePageState @ 0x140283EB0 (MiCheckProtoPtePageState.c)
 *     MiFinishHardFault @ 0x140284200 (MiFinishHardFault.c)
 *     MiUnlockMdlWritePages @ 0x140284DD0 (MiUnlockMdlWritePages.c)
 *     MiChargeForLockedPage @ 0x140287410 (MiChargeForLockedPage.c)
 *     MiPfPutPagesInTransition @ 0x140288890 (MiPfPutPagesInTransition.c)
 *     MiReturnCrossPartitionCloneCharges @ 0x14029DD9C (MiReturnCrossPartitionCloneCharges.c)
 *     MiDeleteProcessShadow @ 0x1402A5828 (MiDeleteProcessShadow.c)
 *     MiMakePartitionActive @ 0x1402A6140 (MiMakePartitionActive.c)
 *     MiObtainMdlCharges @ 0x1402B3CA8 (MiObtainMdlCharges.c)
 *     MiDeletePerSessionProtos @ 0x1402CF6DC (MiDeletePerSessionProtos.c)
 *     MiReturnPoolCharges @ 0x1402D89F8 (MiReturnPoolCharges.c)
 *     MiDeleteSystemPageTableTail @ 0x1402D8B30 (MiDeleteSystemPageTableTail.c)
 *     MiReturnFaultCharges @ 0x1402F4480 (MiReturnFaultCharges.c)
 *     MmReleaseResourceCharge @ 0x140302870 (MmReleaseResourceCharge.c)
 *     MmCreateKernelStack @ 0x140317B10 (MmCreateKernelStack.c)
 *     MiCopyOnWrite @ 0x140319F00 (MiCopyOnWrite.c)
 *     MiCommitExistingVad @ 0x140320D70 (MiCommitExistingVad.c)
 *     MiSetProtectionOnSection @ 0x140321FC0 (MiSetProtectionOnSection.c)
 *     MiDeleteKernelStack @ 0x14032D7F0 (MiDeleteKernelStack.c)
 *     MiReturnExcessPoolCommit @ 0x1403303F8 (MiReturnExcessPoolCommit.c)
 *     MiUnlockWsle @ 0x1403443C0 (MiUnlockWsle.c)
 *     NtLockVirtualMemory @ 0x140344C50 (NtLockVirtualMemory.c)
 *     MiUnlockPageTableCharges @ 0x140345720 (MiUnlockPageTableCharges.c)
 *     MiRemoveMappedPtes @ 0x1403474D0 (MiRemoveMappedPtes.c)
 *     MiGetPageTablePages @ 0x140348AF8 (MiGetPageTablePages.c)
 *     MiObtainSystemCharges @ 0x140348C90 (MiObtainSystemCharges.c)
 *     MiAcquireNonPagedResources @ 0x140348D54 (MiAcquireNonPagedResources.c)
 *     MiReplenishSlabAllocator @ 0x1403496D8 (MiReplenishSlabAllocator.c)
 *     MiAllocateSlabEntry @ 0x140349850 (MiAllocateSlabEntry.c)
 *     MiChargeCrossPartitionSharedPage @ 0x14034A438 (MiChargeCrossPartitionSharedPage.c)
 *     MiDeleteSegmentPages @ 0x14034BEB8 (MiDeleteSegmentPages.c)
 *     MiFinishLargePageFree @ 0x1403506BC (MiFinishLargePageFree.c)
 *     MiDeleteUltraMapContext @ 0x1403513B4 (MiDeleteUltraMapContext.c)
 *     MiFreePageFileHashPfns @ 0x1403619CC (MiFreePageFileHashPfns.c)
 *     MiSessionInsertImage @ 0x14036BEC4 (MiSessionInsertImage.c)
 *     MiSessionUpdateImageCharges @ 0x14036C724 (MiSessionUpdateImageCharges.c)
 *     MiReturnSplitPageCharges @ 0x1403717EC (MiReturnSplitPageCharges.c)
 *     MiPfnRangeIsZero @ 0x14038B144 (MiPfnRangeIsZero.c)
 *     MiDeleteBootRange @ 0x14038BEB8 (MiDeleteBootRange.c)
 *     MiFreeSlabEntry @ 0x1403B33B0 (MiFreeSlabEntry.c)
 *     MiFindContiguousPagesEx @ 0x1403B5CF8 (MiFindContiguousPagesEx.c)
 *     MiFreeContiguousPages @ 0x1403BDABC (MiFreeContiguousPages.c)
 *     MiRebuildLargePage @ 0x140466288 (MiRebuildLargePage.c)
 *     MiManageUltraSpacePageTable @ 0x14046673C (MiManageUltraSpacePageTable.c)
 *     MiReleaseCommitForResetPages @ 0x140616CA8 (MiReleaseCommitForResetPages.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x140616E38 (MiReleaseOutSwappedProcessCommit.c)
 *     MiEnableNewPfns @ 0x140618520 (MiEnableNewPfns.c)
 *     MiFreeSmallPageFromMdl @ 0x140620DF0 (MiFreeSmallPageFromMdl.c)
 *     MiReturnMdlCharges @ 0x140621210 (MiReturnMdlCharges.c)
 *     MiSetPagesModified @ 0x1406264CC (MiSetPagesModified.c)
 *     MiUnlinkBadPages @ 0x1406288F4 (MiUnlinkBadPages.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x1406291A0 (MmMarkPhysicalMemoryAsBad.c)
 *     MiPrefetchReleasePreallocatedPages @ 0x14063008C (MiPrefetchReleasePreallocatedPages.c)
 *     MiAttemptPageFileReductionApc @ 0x140635960 (MiAttemptPageFileReductionApc.c)
 *     MiDeleteKernelShadowStack @ 0x140641FD4 (MiDeleteKernelShadowStack.c)
 *     MiInitializeBootShadowStackPage @ 0x140642570 (MiInitializeBootShadowStackPage.c)
 *     MmCreateKernelShadowStack @ 0x140642B98 (MmCreateKernelShadowStack.c)
 *     MiFreeContiguousLargePageRun @ 0x14064780C (MiFreeContiguousLargePageRun.c)
 *     MiMoveBadPageCrossPartition @ 0x14064B358 (MiMoveBadPageCrossPartition.c)
 *     MiDeleteSubsectionLargePages @ 0x14064C7F8 (MiDeleteSubsectionLargePages.c)
 *     MiFreeSecureKernelPage @ 0x1406543B4 (MiFreeSecureKernelPage.c)
 *     MmAllocateNonChargedSecurePages @ 0x140654ECC (MmAllocateNonChargedSecurePages.c)
 *     MmAllocateSecureKernelPages @ 0x1406551DC (MmAllocateSecureKernelPages.c)
 *     MmFreeNonChargedSecurePages @ 0x1406556E8 (MmFreeNonChargedSecurePages.c)
 *     MiInsertPartitionPages @ 0x140657EB8 (MiInsertPartitionPages.c)
 *     MiTransferPartitionPageRun @ 0x140659030 (MiTransferPartitionPageRun.c)
 *     MiProcessVaContiguityInformation @ 0x14065B3D4 (MiProcessVaContiguityInformation.c)
 *     MiReleaseNonPagedResources @ 0x14065EA8C (MiReleaseNonPagedResources.c)
 *     MiReplenishUltraPageTables @ 0x14065F59C (MiReplenishUltraPageTables.c)
 *     MiGetCrossPartitionCloneCharges @ 0x14066222C (MiGetCrossPartitionCloneCharges.c)
 *     MiGetFileHashPage @ 0x14066392C (MiGetFileHashPage.c)
 *     MiMapPageFileHash @ 0x140663D0C (MiMapPageFileHash.c)
 *     MiCreateLargePfnList @ 0x14066540C (MiCreateLargePfnList.c)
 *     MiFreeLargeProcessPagesToCache @ 0x140666064 (MiFreeLargeProcessPagesToCache.c)
 *     MiIdealClusterPage @ 0x140667EB0 (MiIdealClusterPage.c)
 *     MiGetSubsectionCharges @ 0x140668BC8 (MiGetSubsectionCharges.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x140668DD4 (MiReturnCrossPartitionSectionCharges.c)
 *     MiDereferenceSessionFinal @ 0x14067E7A0 (MiDereferenceSessionFinal.c)
 *     MiReturnFullProcessCommitment @ 0x1406B6FB4 (MiReturnFullProcessCommitment.c)
 *     MiDecommitRegion @ 0x1406EBCC0 (MiDecommitRegion.c)
 *     MiRemoveVadCharges @ 0x1406ECCF0 (MiRemoveVadCharges.c)
 *     MiDeleteVadBitmap @ 0x1407266B4 (MiDeleteVadBitmap.c)
 *     MmDeleteProcessAddressSpace @ 0x140726E8C (MmDeleteProcessAddressSpace.c)
 *     MmCreateProcessAddressSpace @ 0x1407289B8 (MmCreateProcessAddressSpace.c)
 *     MiFreeInitializationCode @ 0x14072A51C (MiFreeInitializationCode.c)
 *     MiAllocatePerSessionProtos @ 0x14075B9D4 (MiAllocatePerSessionProtos.c)
 *     MiChargeSegmentCommit @ 0x1407F1988 (MiChargeSegmentCommit.c)
 *     MiCreateImageFileMap @ 0x1407F1C28 (MiCreateImageFileMap.c)
 *     MiCreatePagingFileMap @ 0x1407F3500 (MiCreatePagingFileMap.c)
 *     MiUnloadSystemImage @ 0x1407F627C (MiUnloadSystemImage.c)
 *     MiMarkBootGuardPage @ 0x14080B0BC (MiMarkBootGuardPage.c)
 *     MiCreatePagingFile @ 0x140834F7C (MiCreatePagingFile.c)
 *     MiReturnSystemImageCommitment @ 0x14085DA60 (MiReturnSystemImageCommitment.c)
 *     MiRemovePhysicalMemory @ 0x140A29F5C (MiRemovePhysicalMemory.c)
 *     MiRotateToFrameBuffer @ 0x140A2E9E0 (MiRotateToFrameBuffer.c)
 *     MiGetLargePagesForSystemMapping @ 0x140A2F604 (MiGetLargePagesForSystemMapping.c)
 *     MiDeletePagingFiles @ 0x140A2FCE8 (MiDeletePagingFiles.c)
 *     MiCreateFileOnlyImageFixupList @ 0x140A30D1C (MiCreateFileOnlyImageFixupList.c)
 *     MiFreePartitionPhysicalPages @ 0x140A41E90 (MiFreePartitionPhysicalPages.c)
 *     MiCreateBootSlabEntries @ 0x140B3B858 (MiCreateBootSlabEntries.c)
 *     MiFreeBootDriverPages @ 0x140B3C044 (MiFreeBootDriverPages.c)
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     MiSyncCommitSignals @ 0x1403929E0 (MiSyncCommitSignals.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MiRestockOverCommit @ 0x140654060 (MiRestockOverCommit.c)
 */

void __fastcall MiReturnCommit(__int64 a1, __int64 a2, __int64 CachedCommit)
{
  __int64 v3; // rdi
  struct _KPRCB *v5; // rdx
  __int64 v6; // rcx
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rdx
  unsigned __int64 OldIrql; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v14; // eax
  bool v15; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  if ( a2 )
  {
    v3 = a2;
    memset(&LockHandle, 0, sizeof(LockHandle));
    if ( !*(_QWORD *)(a1 + 16440) )
      goto LABEL_27;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 16424), &LockHandle);
    v3 = MiRestockOverCommit(a1, v3);
    KxReleaseQueuedSpinLock(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v14 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v15 = (v14 & SchedulerAssist[5]) == 0;
        CachedCommit = (unsigned int)v14 & SchedulerAssist[5];
        SchedulerAssist[5] = CachedCommit;
        if ( v15 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(OldIrql);
    if ( v3 )
    {
LABEL_27:
      if ( (_UNKNOWN *)a1 == &MiSystemPartition
        && (v5 = KeGetCurrentPrcb(),
            _m_prefetchw((const void *)&v5->CachedCommit),
            CachedCommit = v5->CachedCommit,
            (unsigned __int64)(v3 + CachedCommit) <= 0x100) )
      {
        while ( 1 )
        {
          v6 = _InterlockedCompareExchange(
                 (volatile signed __int32 *)&v5->CachedCommit,
                 v3 + CachedCommit,
                 CachedCommit);
          if ( v6 == CachedCommit )
            break;
          CachedCommit = v6;
          if ( (unsigned __int64)(v6 + v3) > 0x100 )
            goto LABEL_7;
        }
      }
      else
      {
LABEL_7:
        v7 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 17576), -v3);
        v8 = *(_QWORD *)(a1 + 16416);
        if ( v7 >= v8 && v7 - v3 < v8 || (v9 = *(_QWORD *)(a1 + 16408), v7 >= v9) && v7 - v3 < v9 )
          MiSyncCommitSignals(a1, 0LL, CachedCommit);
      }
    }
  }
}
