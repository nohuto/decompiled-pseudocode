/*
 * XREFs of InvalidateKMDpiMetricsCacheDPIMETRICS @ 0x1C010C82C
 * Callers:
 *     DestroyDpiMetricsCache @ 0x1C00B7F10 (DestroyDpiMetricsCache.c)
 *     SetIconMetrics @ 0x1C010C85C (SetIconMetrics.c)
 *     xxxSetNCFonts @ 0x1C010E91C (xxxSetNCFonts.c)
 *     ?SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z @ 0x1C01C8BB4 (-SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z.c)
 * Callees:
 *     DeleteMetricsFont @ 0x1C00B8050 (DeleteMetricsFont.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 */

__int64 InvalidateKMDpiMetricsCacheDPIMETRICS()
{
  __int64 result; // rax
  __int64 i; // rdi

  result = gpDpiKernelModeMetricsCache;
  for ( i = gpDpiKernelModeMetricsCache; i; i = *(_QWORD *)(i + 8) )
  {
    DeleteMetricsFont(*(struct HLFONT__ **)(i + 16));
    DeleteMetricsFont(*(struct HLFONT__ **)(i + 64));
    DeleteMetricsFont(*(struct HLFONT__ **)(i + 72));
    DeleteMetricsFont(*(struct HLFONT__ **)(i + 80));
    DeleteMetricsFont(*(struct HLFONT__ **)(i + 48));
    memset_0((void *)(i + 16), 0, 0x48uLL);
    result = 1LL;
    *(_WORD *)(i + 2) = 1;
  }
  return result;
}
