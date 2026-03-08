/*
 * XREFs of GetWindowBordersForDpi @ 0x1C0021944
 * Callers:
 *     GetWindowBorders @ 0x1C0021910 (GetWindowBorders.c)
 *     FindNCHit @ 0x1C00E609C (FindNCHit.c)
 *     MNPositionSysMenu @ 0x1C0202174 (MNPositionSysMenu.c)
 *     xxxMNFindWindowFromPoint @ 0x1C021A850 (xxxMNFindWindowFromPoint.c)
 *     xxxCalcCaptionButton @ 0x1C022EAF0 (xxxCalcCaptionButton.c)
 *     xxxGetMenuBarInfo @ 0x1C0233A80 (xxxGetMenuBarInfo.c)
 *     xxxMNRecomputeBarIfNeeded @ 0x1C023BD88 (xxxMNRecomputeBarIfNeeded.c)
 * Callees:
 *     GetWindowBordersForDpiWithCompatFlags2 @ 0x1C00448E4 (GetWindowBordersForDpiWithCompatFlags2.c)
 *     W32GetThreadWin32Thread @ 0x1C0050938 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall GetWindowBordersForDpi(int a1, int a2, __int64 a3, __int64 a4, int a5)
{
  __int64 ThreadWin32Thread; // rax
  int v8; // r8d
  int v9; // eax

  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  if ( *(_DWORD *)(ThreadWin32Thread + 632) > 0x9900u )
    v9 = 0;
  else
    v9 = *(_DWORD *)(ThreadWin32Thread + 648);
  return GetWindowBordersForDpiWithCompatFlags2(a1, a2, v8, 0, a5, v9);
}
