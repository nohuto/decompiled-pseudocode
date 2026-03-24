/*
 * XREFs of ?GetResizeBorderWidthForDpiWithAppCompat2@@YAHIK@Z @ 0x1C004BA58
 * Callers:
 *     GetWindowBordersWithDpiAwareness @ 0x1C004AEAC (GetWindowBordersWithDpiAwareness.c)
 *     _AdjustWindowRectExForDpi @ 0x1C004E77C (_AdjustWindowRectExForDpi.c)
 *     GetResizeBorderWidthForDpi @ 0x1C00E0E90 (GetResizeBorderWidthForDpi.c)
 *     GetWindowBordersForDpiWithCompatFlags2 @ 0x1C00E11E4 (GetWindowBordersForDpiWithCompatFlags2.c)
 * Callees:
 *     GetDpiDependentMetric @ 0x1C00614D0 (GetDpiDependentMetric.c)
 *     GetDpiCacheSlot @ 0x1C006152C (GetDpiCacheSlot.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1C01EA5E0 (_ScaleSystemMetricForDPIWithoutCache.c)
 */

__int64 __fastcall GetResizeBorderWidthForDpiWithAppCompat2(unsigned int a1, int a2)
{
  unsigned int v4; // ebx
  int DpiDependentMetric; // eax

  if ( (a2 & 0x10000000) != 0 )
  {
    return 1;
  }
  else
  {
    v4 = (int)(a1 * *(_DWORD *)(Get96DpiServerInfo() + 4) + 48) / 96;
    if ( (a2 & 0x20000000) != 0 )
    {
      if ( a1 == *(unsigned __int16 *)(gpsi + 6998LL) )
      {
        DpiDependentMetric = *(_DWORD *)(gpsi + 2400LL);
      }
      else if ( a1 == 96 )
      {
        DpiDependentMetric = *(_DWORD *)(gpsi + 2520LL);
      }
      else if ( (unsigned int)GetDpiCacheSlot(a1) == -1 )
      {
        DpiDependentMetric = ScaleSystemMetricForDPIWithoutCache(29LL, a1);
      }
      else
      {
        DpiDependentMetric = GetDpiDependentMetric(29LL, a1);
      }
      v4 += DpiDependentMetric;
    }
  }
  return v4;
}
