/*
 * XREFs of MiReleaseFreshPage @ 0x14034E570
 * Callers:
 *     MiFreeLargeZeroPages @ 0x14020FD6C (MiFreeLargeZeroPages.c)
 *     MmCheckCachedPageStates @ 0x1402200B0 (MmCheckCachedPageStates.c)
 *     MiSharePages @ 0x140228990 (MiSharePages.c)
 *     MiCreateUltraThreadContextHelper @ 0x1402445C4 (MiCreateUltraThreadContextHelper.c)
 *     MiAllocateMdlPagesByLists @ 0x14025B5F0 (MiAllocateMdlPagesByLists.c)
 *     MiGetPage @ 0x14026ED40 (MiGetPage.c)
 *     MiMakePageAvoidRead @ 0x140272670 (MiMakePageAvoidRead.c)
 *     MiFinishHardFault @ 0x140284200 (MiFinishHardFault.c)
 *     MiWalkEntireImage @ 0x1402862C0 (MiWalkEntireImage.c)
 *     MiPrivateFixup @ 0x1402A180C (MiPrivateFixup.c)
 *     MiMakeDriverPagesPrivate @ 0x1402A6440 (MiMakeDriverPagesPrivate.c)
 *     MiFinalizeImageHeaderPage @ 0x1402C6548 (MiFinalizeImageHeaderPage.c)
 *     MiAllocateKernelStackPages @ 0x14031D830 (MiAllocateKernelStackPages.c)
 *     MiLockCode @ 0x14032C9C0 (MiLockCode.c)
 *     MiGetPageTablePages @ 0x140348AF8 (MiGetPageTablePages.c)
 *     MiDeleteUltraMapContext @ 0x1403513B4 (MiDeleteUltraMapContext.c)
 *     MiSwapStackPage @ 0x14039604C (MiSwapStackPage.c)
 *     MiAllocateMostlyContiguousPagesForMdl @ 0x1403A796C (MiAllocateMostlyContiguousPagesForMdl.c)
 *     MiClaimPhysicalRun @ 0x1403B545C (MiClaimPhysicalRun.c)
 *     MiStealPage @ 0x1403B70BC (MiStealPage.c)
 *     MiTradeTransitionPage @ 0x1403B7C98 (MiTradeTransitionPage.c)
 *     MiFreePageChain @ 0x1404646F2 (MiFreePageChain.c)
 *     MiManageUltraSpacePageTable @ 0x14046673C (MiManageUltraSpacePageTable.c)
 *     MiProtectDriverSectionPte @ 0x140618060 (MiProtectDriverSectionPte.c)
 *     MiSwitchToTransition @ 0x140630D6C (MiSwitchToTransition.c)
 *     MiReplaceLockedPage @ 0x14063487C (MiReplaceLockedPage.c)
 *     MiSplitDirectMapPage @ 0x14063CE6C (MiSplitDirectMapPage.c)
 *     MiCompleteSecureProcessFault @ 0x1406435E4 (MiCompleteSecureProcessFault.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x14064F264 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiSwapNumaStandbyPage @ 0x14064F7E0 (MiSwapNumaStandbyPage.c)
 *     MiHandleSpecialPurposeMemoryCachedFault @ 0x14065DE28 (MiHandleSpecialPurposeMemoryCachedFault.c)
 *     MiReplenishUltraPageTables @ 0x14065F59C (MiReplenishUltraPageTables.c)
 *     MiIdealClusterPage @ 0x140667EB0 (MiIdealClusterPage.c)
 *     MiResolvePageFileFault @ 0x140668EDC (MiResolvePageFileFault.c)
 *     MiFreeReadListPages @ 0x1406A4F10 (MiFreeReadListPages.c)
 *     MiFreeReadListPageList @ 0x1406A4FAC (MiFreeReadListPageList.c)
 *     MiInitializeCacheFlushing @ 0x140B675DC (MiInitializeCacheFlushing.c)
 * Callees:
 *     MiLockPageInline @ 0x1402A33B0 (MiLockPageInline.c)
 *     MiReturnFreeZeroPage @ 0x14034E5C4 (MiReturnFreeZeroPage.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiReleaseFreshPage(__int64 a1)
{
  unsigned __int64 v2; // rdi
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v7; // zf

  v2 = (unsigned __int8)MiLockPageInline(a1);
  MiReturnFreeZeroPage(a1, 0LL);
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v2 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
      v7 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v7 )
        result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v2);
  return result;
}
