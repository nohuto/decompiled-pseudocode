/*
 * XREFs of GetResizeBorderWidthForDpi @ 0x1C00BB5D8
 * Callers:
 *     GetWindowNCMetrics @ 0x1C006492C (GetWindowNCMetrics.c)
 *     xxxDrawCaptionBar @ 0x1C00BAE5C (xxxDrawCaptionBar.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     ?GetResizeBorderWidthForDpiWithAppCompat2@@YAHIK@Z @ 0x1C00BBD80 (-GetResizeBorderWidthForDpiWithAppCompat2@@YAHIK@Z.c)
 */

__int64 __fastcall GetResizeBorderWidthForDpi(unsigned int a1)
{
  __int64 ThreadWin32Thread; // rax
  unsigned int v3; // edx

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( *(_DWORD *)(ThreadWin32Thread + 632) > 0x9900u )
    v3 = 0;
  else
    v3 = *(_DWORD *)(ThreadWin32Thread + 648);
  return GetResizeBorderWidthForDpiWithAppCompat2(a1, v3);
}
