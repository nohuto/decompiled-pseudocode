/*
 * XREFs of ?GetWindowFrameMetricForDpiWithCompatFlags2@@YAHHIK@Z @ 0x1C00E2378
 * Callers:
 *     GetWindowFrameMetricForDpi @ 0x1C00E2334 (GetWindowFrameMetricForDpi.c)
 * Callees:
 *     GetDpiCacheSlot @ 0x1C0045E2C (GetDpiCacheSlot.c)
 *     GetDpiDependentMetric @ 0x1C00A45B4 (GetDpiDependentMetric.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1C01C07C0 (_ScaleSystemMetricForDPIWithoutCache.c)
 */

__int64 __fastcall GetWindowFrameMetricForDpiWithCompatFlags2(__int64 a1, int a2, int a3)
{
  unsigned int v4; // r10d

  if ( (a3 & 0x10000000) != 0 || (a3 & 0x20000000) != 0 )
    return 0LL;
  if ( a2 == *(unsigned __int16 *)(gpsi + 6998LL) )
    return *(unsigned int *)(gpsi + 2400LL);
  if ( a2 == 96 )
    return *(unsigned int *)(gpsi + 2520LL);
  if ( (unsigned int)GetDpiCacheSlot(a2) == -1 )
    return ScaleSystemMetricForDPIWithoutCache(29LL, v4);
  return GetDpiDependentMetric(29, v4);
}
