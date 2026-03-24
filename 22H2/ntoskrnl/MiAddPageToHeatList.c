/*
 * XREFs of MiAddPageToHeatList @ 0x1403F7308
 * Callers:
 *     MiDemoteLocalLargePage @ 0x140231A80 (MiDemoteLocalLargePage.c)
 *     MiGetLargePage @ 0x1402840B4 (MiGetLargePage.c)
 *     MmSetPfnListInfo @ 0x1403733C4 (MmSetPfnListInfo.c)
 *     MiChangePageHeatImmediate @ 0x1403F7330 (MiChangePageHeatImmediate.c)
 *     MiMakeUnusedImageExtentsCold @ 0x140554328 (MiMakeUnusedImageExtentsCold.c)
 * Callees:
 *     MiAddPageToHeatRanges @ 0x14055F43C (MiAddPageToHeatRanges.c)
 *     MiNotifyPageHeat @ 0x14055FD04 (MiNotifyPageHeat.c)
 */

__int64 __fastcall MiAddPageToHeatList(__int64 a1)
{
  __int64 result; // rax

  result = MiAddPageToHeatRanges();
  if ( (_DWORD)result )
    return MiNotifyPageHeat(a1);
  return result;
}
