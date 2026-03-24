/*
 * XREFs of MiReturnFreeZeroPage @ 0x1402836D0
 * Callers:
 *     MiGetPage @ 0x1402135D0 (MiGetPage.c)
 *     MiMigratePfn @ 0x1402185B0 (MiMigratePfn.c)
 *     MiCoalesceFreePages @ 0x140235610 (MiCoalesceFreePages.c)
 *     MiWalkEntireImage @ 0x140239E20 (MiWalkEntireImage.c)
 *     MiTradePage @ 0x140281260 (MiTradePage.c)
 *     MiGetPerfectColorHeadPage @ 0x1402EC698 (MiGetPerfectColorHeadPage.c)
 *     MiReleaseFreshPage @ 0x140357CD4 (MiReleaseFreshPage.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140384A30 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiFreeLargeInitializationCodePages @ 0x1403BCC20 (MiFreeLargeInitializationCodePages.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x140551EB4 (MiMakeVaRangePhysicallyContiguous.c)
 * Callees:
 *     MiInsertPageInFreeOrZeroedList @ 0x140234880 (MiInsertPageInFreeOrZeroedList.c)
 *     MiIsFreeZeroPfnCold @ 0x1402837A0 (MiIsFreeZeroPfnCold.c)
 */

__int64 __fastcall MiReturnFreeZeroPage(__int64 a1)
{
  char v3; // cl
  char v4; // al
  int IsFreeZeroPfnCold; // eax
  __int16 v6; // r8
  ULONG_PTR v7; // r10
  __int16 v8; // r11
  __int16 v9; // dx

  v3 = *(_BYTE *)(a1 + 34);
  if ( (v3 & 7) == 6 )
  {
    *(_BYTE *)(a1 + 34) = v3 & 0xF8 | 5;
    v3 = *(_BYTE *)(a1 + 34);
  }
  *(_QWORD *)(a1 + 40) &= ~0x8000000000000000uLL;
  v4 = *(_BYTE *)(a1 + 35) & 0xDF;
  *(_BYTE *)(a1 + 34) = v3 & 0xC7;
  *(_BYTE *)(a1 + 35) = v4;
  *(_WORD *)(a1 + 32) = 0;
  *(_BYTE *)(a1 + 35) = v4 & 0xEF;
  *(_QWORD *)(a1 + 24) &= 0xC000000000000000uLL;
  IsFreeZeroPfnCold = MiIsFreeZeroPfnCold(
                        a1,
                        (unsigned __int128)((a1 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64,
                        (unsigned int)((*(_DWORD *)(a1 + 16) & 0x3E0) != 0LL) + 1,
                        a1);
  v9 = v6 | 0x400;
  if ( !IsFreeZeroPfnCold )
    v9 = v6;
  return MiInsertPageInFreeOrZeroedList(v7, v8 | v9);
}
