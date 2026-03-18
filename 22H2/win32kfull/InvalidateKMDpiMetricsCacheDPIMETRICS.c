/*
 * XREFs of InvalidateKMDpiMetricsCacheDPIMETRICS @ 0x1C0076194
 * Callers:
 *     SetIconMetrics @ 0x1C00761C4 (SetIconMetrics.c)
 *     xxxSetNCFonts @ 0x1C0078690 (xxxSetNCFonts.c)
 *     DestroyDpiMetricsCache @ 0x1C008A110 (DestroyDpiMetricsCache.c)
 *     ?SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z @ 0x1C01C7A54 (-SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z.c)
 * Callees:
 *     DeleteMetricsFont @ 0x1C008A250 (DeleteMetricsFont.c)
 *     memset_0 @ 0x1C0141600 (memset_0.c)
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
    memset_0((void *)(i + 16), 0, 0x48uLL);
    result = 1LL;
    *(_WORD *)(i + 2) = 1;
  }
  return result;
}
