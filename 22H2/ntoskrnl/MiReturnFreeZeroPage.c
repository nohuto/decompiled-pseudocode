/*
 * XREFs of MiReturnFreeZeroPage @ 0x1402E7F74
 * Callers:
 *     MiMigratePfn @ 0x140262FC0 (MiMigratePfn.c)
 *     MiGetPerfectColorHeadPage @ 0x14026DAF0 (MiGetPerfectColorHeadPage.c)
 *     MiCoalesceFreePages @ 0x1402D4970 (MiCoalesceFreePages.c)
 *     MiWalkEntireImage @ 0x1402DAFE0 (MiWalkEntireImage.c)
 *     MiReleaseFreshPage @ 0x1402E7F20 (MiReleaseFreshPage.c)
 *     MiFreeLargeInitializationCodePages @ 0x14039386C (MiFreeLargeInitializationCodePages.c)
 *     MiTradePage @ 0x1403BA300 (MiTradePage.c)
 *     MiDemoteSlabEntry @ 0x1403CCD8C (MiDemoteSlabEntry.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x1406518C4 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x14065D730 (MiMakeVaRangePhysicallyContiguous.c)
 *     MiHandleSpecialPurposeMemoryCachedFault @ 0x140660478 (MiHandleSpecialPurposeMemoryCachedFault.c)
 *     MiLockSpecialPurposeMemoryCachedPage @ 0x1406608C8 (MiLockSpecialPurposeMemoryCachedPage.c)
 * Callees:
 *     MiInsertPageInFreeOrZeroedList @ 0x1402D3670 (MiInsertPageInFreeOrZeroedList.c)
 *     MiIsFreeZeroPfnCold @ 0x1402E85D0 (MiIsFreeZeroPfnCold.c)
 */

void __fastcall MiReturnFreeZeroPage(__int64 a1)
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
  MiInsertPageInFreeOrZeroedList(v4, v5 | v6);
}
