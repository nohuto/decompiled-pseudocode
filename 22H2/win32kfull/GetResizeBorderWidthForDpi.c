/*
 * XREFs of GetResizeBorderWidthForDpi @ 0x1C00A2B34
 * Callers:
 *     xxxDrawCaptionBar @ 0x1C00C689C (xxxDrawCaptionBar.c)
 *     GetWindowNCMetrics @ 0x1C00F0894 (GetWindowNCMetrics.c)
 * Callees:
 *     ?GetResizeBorderWidthForDpiWithAppCompat2@@YAHIK@Z @ 0x1C00A2B74 (-GetResizeBorderWidthForDpiWithAppCompat2@@YAHIK@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C011E0CC (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall GetResizeBorderWidthForDpi(unsigned int a1)
{
  __int64 ThreadWin32Thread; // rax
  unsigned int v3; // edx

  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  if ( *(_DWORD *)(ThreadWin32Thread + 632) > 0x9900u )
    v3 = 0;
  else
    v3 = *(_DWORD *)(ThreadWin32Thread + 648);
  return GetResizeBorderWidthForDpiWithAppCompat2(a1, v3);
}
