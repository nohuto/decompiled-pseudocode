/*
 * XREFs of MiNotifyPageHeat @ 0x140652018
 * Callers:
 *     MiGetPageChain @ 0x14026E0E0 (MiGetPageChain.c)
 *     MiWalkEntireImage @ 0x1402862C0 (MiWalkEntireImage.c)
 *     MiGetLargePageChain @ 0x1402E98A8 (MiGetLargePageChain.c)
 *     MiUpdatePfnForPrefetchByPte @ 0x14031D5F0 (MiUpdatePfnForPrefetchByPte.c)
 *     MiAllocateLargeZeroPages @ 0x14034DCB0 (MiAllocateLargeZeroPages.c)
 *     MiReplenishPageSlist @ 0x14034E120 (MiReplenishPageSlist.c)
 *     MiDemoteLocalLargePage @ 0x14034E760 (MiDemoteLocalLargePage.c)
 *     MiGetLargePage @ 0x14034EF30 (MiGetLargePage.c)
 *     MmSetPfnListInfo @ 0x140387180 (MmSetPfnListInfo.c)
 *     MiSplitDirectMapPage @ 0x14063CE6C (MiSplitDirectMapPage.c)
 *     MiChangePageHeatImmediate @ 0x1406517FC (MiChangePageHeatImmediate.c)
 *     MiProcessTransitionHeatBatch @ 0x140652050 (MiProcessTransitionHeatBatch.c)
 *     MmPrefetchPagesEx @ 0x1406A387C (MmPrefetchPagesEx.c)
 *     MiPfPrepareSequentialReadList @ 0x1406EBE40 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x1407C42F0 (MiPfPrepareReadList.c)
 * Callees:
 *     MiLogNotifyPageHeat @ 0x14065193C (MiLogNotifyPageHeat.c)
 *     HvlNotifyPageHeat @ 0x140676D34 (HvlNotifyPageHeat.c)
 */

__int64 __fastcall MiNotifyPageHeat(unsigned int *a1)
{
  __int64 v2; // rdx
  __int64 result; // rax

  MiLogNotifyPageHeat();
  LOBYTE(v2) = KeGetCurrentIrql() < 2u;
  result = HvlNotifyPageHeat(*a1, v2, a1[1], a1 + 4);
  a1[1] = 0;
  return result;
}
