/*
 * XREFs of GetWindowBordersForDpi @ 0x1C00BBC00
 * Callers:
 *     GetWindowBorders @ 0x1C00BB5A4 (GetWindowBorders.c)
 *     xxxGetMenuBarInfo @ 0x1C00BB868 (xxxGetMenuBarInfo.c)
 *     FindNCHit @ 0x1C010C5EC (FindNCHit.c)
 *     MNPositionSysMenu @ 0x1C0146938 (MNPositionSysMenu.c)
 *     xxxMNFindWindowFromPoint @ 0x1C0231654 (xxxMNFindWindowFromPoint.c)
 *     xxxCalcCaptionButton @ 0x1C0242FA8 (xxxCalcCaptionButton.c)
 *     xxxMNRecomputeBarIfNeeded @ 0x1C024A058 (xxxMNRecomputeBarIfNeeded.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     GetWindowBordersForDpiWithCompatFlags2 @ 0x1C00BBC5C (GetWindowBordersForDpiWithCompatFlags2.c)
 */

__int64 __fastcall GetWindowBordersForDpi(int a1, int a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 ThreadWin32Thread; // rax
  int v8; // r8d
  unsigned int v9; // eax

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( *(_DWORD *)(ThreadWin32Thread + 632) > 0x9900u )
    v9 = 0;
  else
    v9 = *(_DWORD *)(ThreadWin32Thread + 648);
  return GetWindowBordersForDpiWithCompatFlags2(a1, a2, v8, 0, a5, v9);
}
