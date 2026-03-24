/*
 * XREFs of GetWindowBordersForDpi @ 0x1C00E11A0
 * Callers:
 *     xxxGetMenuBarInfo @ 0x1C008AAD8 (xxxGetMenuBarInfo.c)
 *     GetWindowBorders @ 0x1C00DD2EC (GetWindowBorders.c)
 *     FindNCHit @ 0x1C0122508 (FindNCHit.c)
 *     MNPositionSysMenu @ 0x1C0155B08 (MNPositionSysMenu.c)
 *     xxxMNFindWindowFromPoint @ 0x1C02386D0 (xxxMNFindWindowFromPoint.c)
 *     xxxCalcCaptionButton @ 0x1C0247748 (xxxCalcCaptionButton.c)
 *     xxxMNRecomputeBarIfNeeded @ 0x1C024ED74 (xxxMNRecomputeBarIfNeeded.c)
 * Callees:
 *     GetWindowBordersForDpiWithCompatFlags2 @ 0x1C00E11E4 (GetWindowBordersForDpiWithCompatFlags2.c)
 *     GetAppCompatFlags2 @ 0x1C00E1310 (GetAppCompatFlags2.c)
 */

__int64 __fastcall GetWindowBordersForDpi(int a1, int a2, __int64 a3, __int64 a4, unsigned int a5)
{
  unsigned int AppCompatFlags2; // eax
  int v8; // r8d

  AppCompatFlags2 = GetAppCompatFlags2(39168LL);
  return GetWindowBordersForDpiWithCompatFlags2(a1, a2, v8, 0, a5, AppCompatFlags2);
}
