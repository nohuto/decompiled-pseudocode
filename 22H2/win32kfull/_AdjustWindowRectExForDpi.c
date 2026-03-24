/*
 * XREFs of _AdjustWindowRectExForDpi @ 0x1C004E6DC
 * Callers:
 *     DwmChildRectChange @ 0x1C004E0EC (DwmChildRectChange.c)
 * Callees:
 *     ?GetResizeBorderWidthForDpiWithAppCompat2@@YAHIK@Z @ 0x1C004B9B8 (-GetResizeBorderWidthForDpiWithAppCompat2@@YAHIK@Z.c)
 *     NeedsWindowEdge @ 0x1C004E890 (NeedsWindowEdge.c)
 *     GetDpiDependentMetric @ 0x1C0061430 (GetDpiDependentMetric.c)
 *     GetDpiCacheSlot @ 0x1C006148C (GetDpiCacheSlot.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1C01EA020 (_ScaleSystemMetricForDPIWithoutCache.c)
 */

__int64 __fastcall AdjustWindowRectExForDpi(_DWORD *a1, unsigned int a2, __int64 a3, unsigned int a4, unsigned int a5)
{
  int v8; // eax
  unsigned int v9; // r8d
  int v10; // r15d
  int v11; // esi
  __int64 ThreadWin32Thread; // rax
  int v13; // r14d
  unsigned int v14; // ebp
  int v15; // esi
  __int64 result; // rax
  int v17; // ecx
  int v18; // eax
  int DpiDependentMetric; // eax
  int DpiCacheSlot; // eax
  __int64 v21; // rcx
  int v22; // eax

  v8 = NeedsWindowEdge(a2, a4, *(_DWORD *)(gptiCurrent + 632LL) >= 0x400u);
  v9 = a4 & 0xFFFFFEFF;
  v10 = a4 | 0x100;
  v11 = 2;
  if ( !v8 )
    v10 = v9;
  if ( (BYTE2(a2) & 0xC0) == 0xC0 )
  {
    v18 = *(unsigned __int16 *)(gpsi + 6998LL);
    if ( (v10 & 0x80u) != 0 )
    {
      if ( a5 == v18 )
      {
        DpiDependentMetric = *(_DWORD *)(gpsi + 2372LL);
        goto LABEL_26;
      }
      if ( a5 == 96 )
      {
        DpiDependentMetric = *(_DWORD *)(gpsi + 2492LL);
        goto LABEL_26;
      }
      DpiCacheSlot = GetDpiCacheSlot(a5);
      v21 = 22LL;
    }
    else
    {
      if ( a5 == v18 )
      {
        DpiDependentMetric = *(_DWORD *)(gpsi + 2292LL);
LABEL_26:
        a1[1] -= DpiDependentMetric;
        goto LABEL_4;
      }
      if ( a5 == 96 )
      {
        DpiDependentMetric = *(_DWORD *)(gpsi + 2412LL);
        goto LABEL_26;
      }
      DpiCacheSlot = GetDpiCacheSlot(a5);
      v21 = 2LL;
    }
    if ( DpiCacheSlot == -1 )
      DpiDependentMetric = ScaleSystemMetricForDPIWithoutCache(v21, a5);
    else
      DpiDependentMetric = GetDpiDependentMetric(v21, a5);
    goto LABEL_26;
  }
LABEL_4:
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  if ( *(_DWORD *)(ThreadWin32Thread + 632) > 0x9900u )
    v13 = 0;
  else
    v13 = *(_DWORD *)(ThreadWin32Thread + 648);
  if ( (v10 & 0x100) == 0 )
    v11 = (v10 & 0x20000) != 0;
  v14 = v11 + 1;
  if ( (a2 & 0xC00000) == 0 && (v10 & 1) == 0 )
    v14 = v11;
  if ( (v13 & 0x10000000) != 0 || (v13 & 0x20000000) != 0 )
  {
    v15 = 0;
  }
  else if ( a5 == *(unsigned __int16 *)(gpsi + 6998LL) )
  {
    v15 = *(_DWORD *)(gpsi + 2400LL);
  }
  else if ( a5 == 96 )
  {
    v15 = *(_DWORD *)(gpsi + 2520LL);
  }
  else
  {
    if ( (unsigned int)GetDpiCacheSlot(a5) == -1 )
      v22 = ScaleSystemMetricForDPIWithoutCache(29LL, a5);
    else
      v22 = GetDpiDependentMetric(29LL, a5);
    v15 = v22;
  }
  if ( (a2 & 0x40000) != 0 || (result = v14, v15 > 0) && (a2 & 0xC00000) == 0xC00000 && (v13 & 0x30000000) == 0 )
    result = v15 + v14 + (unsigned int)GetResizeBorderWidthForDpiWithAppCompat2(a5, v13);
  v17 = result + 2;
  if ( (v10 & 0x200) == 0 )
    v17 = result;
  if ( v17 )
  {
    *a1 -= v17;
    a1[2] += v17;
    a1[1] -= v17;
    a1[3] += v17;
  }
  return result;
}
