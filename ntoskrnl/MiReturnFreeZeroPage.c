/*
 * XREFs of MiReturnFreeZeroPage @ 0x14034E5C4
 * Callers:
 *     MiGetPerfectColorHeadPage @ 0x140270750 (MiGetPerfectColorHeadPage.c)
 *     MiMigratePfn @ 0x140272370 (MiMigratePfn.c)
 *     MiCoalesceFreePages @ 0x140278FE0 (MiCoalesceFreePages.c)
 *     MiWalkEntireImage @ 0x1402862C0 (MiWalkEntireImage.c)
 *     MiReleaseFreshPage @ 0x14034E570 (MiReleaseFreshPage.c)
 *     MiFreeLargeInitializationCodePages @ 0x140391BEC (MiFreeLargeInitializationCodePages.c)
 *     MiTradePage @ 0x1403B5640 (MiTradePage.c)
 *     MiDemoteSlabEntry @ 0x1403C826C (MiDemoteSlabEntry.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x14064F264 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x14065B0E0 (MiMakeVaRangePhysicallyContiguous.c)
 *     MiHandleSpecialPurposeMemoryCachedFault @ 0x14065DE28 (MiHandleSpecialPurposeMemoryCachedFault.c)
 *     MiLockSpecialPurposeMemoryCachedPage @ 0x14065E278 (MiLockSpecialPurposeMemoryCachedPage.c)
 * Callees:
 *     MiInsertPageInFreeOrZeroedList @ 0x140277CE0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiIsFreeZeroPfnCold @ 0x140350240 (MiIsFreeZeroPfnCold.c)
 */

__int64 __fastcall MiReturnFreeZeroPage(__int64 a1)
{
  char v1; // al
  int IsFreeZeroPfnCold; // eax
  __int16 v3; // r8
  ULONG_PTR v4; // r9
  __int16 v5; // r10
  __int16 v6; // dx

  if ( (*(_BYTE *)(a1 + 34) & 7) == 6 )
    *(_BYTE *)(a1 + 34) = *(_BYTE *)(a1 + 34) & 0xF8 | 5;
  *(_QWORD *)(a1 + 40) &= ~0x8000000000000000uLL;
  v1 = *(_BYTE *)(a1 + 34) & 0xC7;
  *(_WORD *)(a1 + 32) = 0;
  *(_BYTE *)(a1 + 34) = v1;
  *(_BYTE *)(a1 + 35) &= ~0x20u;
  *(_BYTE *)(a1 + 35) &= ~0x10u;
  *(_QWORD *)(a1 + 24) &= 0xC000000000000000uLL;
  IsFreeZeroPfnCold = MiIsFreeZeroPfnCold(a1);
  v6 = v3 | 0x400;
  if ( !IsFreeZeroPfnCold )
    v6 = v3;
  return MiInsertPageInFreeOrZeroedList(v4, v5 | v6);
}
