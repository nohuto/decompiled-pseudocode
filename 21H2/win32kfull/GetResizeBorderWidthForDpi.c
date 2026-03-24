/*
 * XREFs of GetResizeBorderWidthForDpi @ 0x1C00E0E90
 * Callers:
 *     xxxDrawCaptionBar @ 0x1C00DCE08 (xxxDrawCaptionBar.c)
 *     GetWindowNCMetrics @ 0x1C00E0CB0 (GetWindowNCMetrics.c)
 * Callees:
 *     ?GetResizeBorderWidthForDpiWithAppCompat2@@YAHIK@Z @ 0x1C004BA58 (-GetResizeBorderWidthForDpiWithAppCompat2@@YAHIK@Z.c)
 *     GetAppCompatFlags2 @ 0x1C00E1310 (GetAppCompatFlags2.c)
 */

__int64 __fastcall GetResizeBorderWidthForDpi(unsigned int a1)
{
  int AppCompatFlags2; // eax

  AppCompatFlags2 = GetAppCompatFlags2(39168LL);
  return GetResizeBorderWidthForDpiWithAppCompat2(a1, AppCompatFlags2);
}
