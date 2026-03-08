/*
 * XREFs of GetWindowFrameMetricForDpi @ 0x1C00E2334
 * Callers:
 *     xxxDrawCaptionBar @ 0x1C0021730 (xxxDrawCaptionBar.c)
 *     GetWindowNCMetrics @ 0x1C00A40A8 (GetWindowNCMetrics.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0050938 (W32GetThreadWin32Thread.c)
 *     ?GetWindowFrameMetricForDpiWithCompatFlags2@@YAHHIK@Z @ 0x1C00E2378 (-GetWindowFrameMetricForDpiWithCompatFlags2@@YAHHIK@Z.c)
 */

__int64 __fastcall GetWindowFrameMetricForDpi(__int64 a1, unsigned int a2)
{
  __int64 ThreadWin32Thread; // rax
  int v4; // ecx
  unsigned int v5; // r8d

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( *(_DWORD *)(ThreadWin32Thread + 632) > 0x9900u )
    v5 = 0;
  else
    v5 = *(_DWORD *)(ThreadWin32Thread + 648);
  return GetWindowFrameMetricForDpiWithCompatFlags2(v4, a2, v5);
}
