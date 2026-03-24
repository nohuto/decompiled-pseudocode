/*
 * XREFs of MiReleaseFreshPage @ 0x140357CD4
 * Callers:
 *     MiGetPage @ 0x1402135D0 (MiGetPage.c)
 *     MiFinishHardFault @ 0x140239200 (MiFinishHardFault.c)
 *     MiAllocateKernelStackPages @ 0x14023E170 (MiAllocateKernelStackPages.c)
 *     MiFreeLargeZeroPages @ 0x14027D9D4 (MiFreeLargeZeroPages.c)
 *     MiClaimPhysicalRun @ 0x1402810AC (MiClaimPhysicalRun.c)
 *     MmCheckCachedPageStates @ 0x1402A1C20 (MmCheckCachedPageStates.c)
 *     MiLockCode @ 0x1402A3C40 (MiLockCode.c)
 *     MiMakePageAvoidRead @ 0x1402A4700 (MiMakePageAvoidRead.c)
 *     MiResolvePageFileFault @ 0x1402E0F08 (MiResolvePageFileFault.c)
 *     MiFreePageChain @ 0x1402E1E74 (MiFreePageChain.c)
 *     MiPrivateFixup @ 0x1402E29C8 (MiPrivateFixup.c)
 *     MiSwapStackPage @ 0x14031F4BC (MiSwapStackPage.c)
 *     MiTradeTransitionPage @ 0x1403346F8 (MiTradeTransitionPage.c)
 *     MiStealPage @ 0x140334CB4 (MiStealPage.c)
 *     MiCreateUltraThreadContextHelper @ 0x1403546C4 (MiCreateUltraThreadContextHelper.c)
 *     MiGetPageTablePages @ 0x140356F00 (MiGetPageTablePages.c)
 *     MiDeleteUltraMapContext @ 0x140357B94 (MiDeleteUltraMapContext.c)
 *     MiMakeDriverPagesPrivate @ 0x140358454 (MiMakeDriverPagesPrivate.c)
 *     MiFinalizeImageHeaderPage @ 0x14035914C (MiFinalizeImageHeaderPage.c)
 *     MiAllocateMdlPagesByLists @ 0x140374EF4 (MiAllocateMdlPagesByLists.c)
 *     MiSwitchToTransition @ 0x140539E54 (MiSwitchToTransition.c)
 *     MiReplaceLockedPage @ 0x14053D6AC (MiReplaceLockedPage.c)
 *     MiCompleteSecureProcessFault @ 0x1405480C4 (MiCompleteSecureProcessFault.c)
 *     MiSwapNumaStandbyPage @ 0x140551310 (MiSwapNumaStandbyPage.c)
 *     MiIdealClusterPage @ 0x140555D54 (MiIdealClusterPage.c)
 *     MiFreeReadListPages @ 0x1406362C4 (MiFreeReadListPages.c)
 *     MiFreeReadListPageList @ 0x14063634C (MiFreeReadListPageList.c)
 *     MiInitializeCacheFlushing @ 0x140A54B0C (MiInitializeCacheFlushing.c)
 * Callees:
 *     MiLockPageInline @ 0x1402804B0 (MiLockPageInline.c)
 *     MiReturnFreeZeroPage @ 0x1402836D0 (MiReturnFreeZeroPage.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiReleaseFreshPage(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  unsigned __int64 v5; // rdi
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v9; // zf

  v5 = (unsigned __int8)MiLockPageInline(a1, a2, a3, a4);
  MiReturnFreeZeroPage(a1);
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v5 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
        v9 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v9 )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v5);
  return result;
}
