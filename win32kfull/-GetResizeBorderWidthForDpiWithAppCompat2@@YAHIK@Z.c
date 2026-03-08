/*
 * XREFs of ?GetResizeBorderWidthForDpiWithAppCompat2@@YAHIK@Z @ 0x1C00D902C
 * Callers:
 *     xxxCalcClientRect @ 0x1C00AAA20 (xxxCalcClientRect.c)
 *     GetResizeBorderWidthForDpi @ 0x1C00D8FEC (GetResizeBorderWidthForDpi.c)
 * Callees:
 *     GetDpiCacheSlot @ 0x1C0045E2C (GetDpiCacheSlot.c)
 *     GetDpiDependentMetric @ 0x1C00A45B4 (GetDpiDependentMetric.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1C01C07C0 (_ScaleSystemMetricForDPIWithoutCache.c)
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
    v4 = (int)(*(_DWORD *)(Get96DpiServerInfo() + 4) * a1 + 48) / 96;
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
        DpiDependentMetric = GetDpiDependentMetric(29, a1);
      }
      v4 += DpiDependentMetric;
    }
  }
  return v4;
}
