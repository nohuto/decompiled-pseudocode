/*
 * XREFs of MiSetPfnBlink @ 0x1402987B0
 * Callers:
 *     MiGetPageChain @ 0x140212CD0 (MiGetPageChain.c)
 *     MiUnlinkPageFromList @ 0x140217870 (MiUnlinkPageFromList.c)
 *     MiBuildMdlForMappedFileFault @ 0x14023D740 (MiBuildMdlForMappedFileFault.c)
 *     MiReplenishPageSlist @ 0x140298D80 (MiReplenishPageSlist.c)
 *     MiResolvePageFileFault @ 0x1402E0F08 (MiResolvePageFileFault.c)
 *     MiReplaceTransitionPage @ 0x140336380 (MiReplaceTransitionPage.c)
 *     MiGetHardFaultPages @ 0x1403592E4 (MiGetHardFaultPages.c)
 *     MiReInitializeFreeSlabPfn @ 0x1403761CC (MiReInitializeFreeSlabPfn.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140384A30 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiDiscardTransitionPteEx @ 0x140388794 (MiDiscardTransitionPteEx.c)
 *     MiConvertEntireLargePageToSmall @ 0x1403F52A8 (MiConvertEntireLargePageToSmall.c)
 *     MiSwitchToTransition @ 0x140539E54 (MiSwitchToTransition.c)
 *     MiGetEnclavePage @ 0x14054A618 (MiGetEnclavePage.c)
 *     MiReturnEnclavePage @ 0x14054B360 (MiReturnEnclavePage.c)
 *     MiUnlinkPageFromBadList @ 0x14054F480 (MiUnlinkPageFromBadList.c)
 *     MiSwapNumaStandbyPage @ 0x140551310 (MiSwapNumaStandbyPage.c)
 *     MiPfPrepareSequentialReadList @ 0x14063B4F0 (MiPfPrepareSequentialReadList.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiSetPfnBlink(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // r9
  unsigned __int64 result; // rax
  signed __int64 v6; // rdx
  signed __int64 v7; // r8
  signed __int64 v8; // rcx

  v3 = a2 & 0xFFFFFFFFFLL;
  if ( a3 == 1 )
  {
    result = v3 | *(_QWORD *)(a1 + 24) & 0xFFFFFFF000000000uLL;
    *(_QWORD *)(a1 + 24) = result;
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 24);
    result = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 24), v3 | v6 & 0xFFFFFFF000000000uLL, v6);
    v7 = result;
    if ( v6 != result )
    {
      do
      {
        v8 = v7;
        result = _InterlockedCompareExchange64(
                   (volatile signed __int64 *)(a1 + 24),
                   v3 | v7 & 0xFFFFFFF000000000uLL,
                   v7);
        v7 = result;
      }
      while ( v8 != result );
    }
  }
  return result;
}
