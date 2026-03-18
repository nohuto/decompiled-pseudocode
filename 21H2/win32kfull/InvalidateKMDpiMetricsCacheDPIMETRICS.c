/*
 * XREFs of InvalidateKMDpiMetricsCacheDPIMETRICS @ 0x1C00C6CC4
 * Callers:
 *     xxxSetNCFonts @ 0x1C00C3874 (xxxSetNCFonts.c)
 *     SetIconMetrics @ 0x1C00C6CF4 (SetIconMetrics.c)
 *     DestroyDpiMetricsCache @ 0x1C00C73E0 (DestroyDpiMetricsCache.c)
 *     ?SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z @ 0x1C0158F68 (-SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z.c)
 * Callees:
 *     DeleteMetricsFont @ 0x1C00C7520 (DeleteMetricsFont.c)
 *     memset @ 0x1C0160540 (memset.c)
 */

__int64 InvalidateKMDpiMetricsCacheDPIMETRICS()
{
  __int64 result; // rax
  __int64 i; // rdi

  result = gpDpiKernelModeMetricsCache;
  for ( i = gpDpiKernelModeMetricsCache; i; i = *(_QWORD *)(i + 8) )
  {
    DeleteMetricsFont(*(_QWORD *)(i + 16));
    DeleteMetricsFont(*(_QWORD *)(i + 64));
    DeleteMetricsFont(*(_QWORD *)(i + 72));
    DeleteMetricsFont(*(_QWORD *)(i + 80));
    DeleteMetricsFont(*(_QWORD *)(i + 48));
    memset((void *)(i + 16), 0, 0x48uLL);
    result = 1LL;
    *(_WORD *)(i + 2) = 1;
  }
  return result;
}
