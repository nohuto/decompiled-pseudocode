/*
 * XREFs of MiNotifyPageHeat @ 0x14055FD04
 * Callers:
 *     MiGetPageChain @ 0x140212CD0 (MiGetPageChain.c)
 *     MiGetLargePage @ 0x1402840B4 (MiGetLargePage.c)
 *     MiReplenishPageSlist @ 0x140298D80 (MiReplenishPageSlist.c)
 *     MmSetPfnListInfo @ 0x1403733C4 (MmSetPfnListInfo.c)
 *     MiAddPageToHeatList @ 0x1403F7308 (MiAddPageToHeatList.c)
 *     MiMakeUnusedImageExtentsCold @ 0x140554328 (MiMakeUnusedImageExtentsCold.c)
 *     MiProcessTransitionHeatBatch @ 0x14055FD3C (MiProcessTransitionHeatBatch.c)
 * Callees:
 *     MiLogNotifyPageHeat @ 0x14055F5B8 (MiLogNotifyPageHeat.c)
 *     HvlNotifyPageHeat @ 0x1405C95C0 (HvlNotifyPageHeat.c)
 */

__int64 __fastcall MiNotifyPageHeat(unsigned int *a1)
{
  __int64 v2; // rdx
  __int64 result; // rax

  MiLogNotifyPageHeat(a1);
  LOBYTE(v2) = KeGetCurrentIrql() < 2u;
  result = HvlNotifyPageHeat(*a1, v2, a1[1], a1 + 4);
  a1[1] = 0;
  return result;
}
