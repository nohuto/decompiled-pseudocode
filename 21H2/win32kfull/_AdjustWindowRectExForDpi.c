/*
 * XREFs of _AdjustWindowRectExForDpi @ 0x1C006DA8C
 * Callers:
 *     DwmChildRectChange @ 0x1C006BCDC (DwmChildRectChange.c)
 * Callees:
 *     GetDpiDependentMetric @ 0x1C006718C (GetDpiDependentMetric.c)
 *     GetDpiCacheSlot @ 0x1C00671E0 (GetDpiCacheSlot.c)
 *     NeedsWindowEdge @ 0x1C006DC54 (NeedsWindowEdge.c)
 *     ?GetResizeBorderWidthForDpiWithAppCompat2@@YAHIK@Z @ 0x1C00BBD80 (-GetResizeBorderWidthForDpiWithAppCompat2@@YAHIK@Z.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1C01E4D60 (_ScaleSystemMetricForDPIWithoutCache.c)
 */

__int64 __fastcall AdjustWindowRectExForDpi(_DWORD *a1, unsigned int a2, __int64 a3, unsigned int a4, unsigned int a5)
{
  int v8; // eax
  unsigned int v9; // r8d
  int v10; // r15d
  int v11; // esi
  __int64 v12; // rbp
  __int64 *ThreadWin32Thread; // rax
  unsigned int v14; // r14d
  unsigned int v15; // ebp
  int v16; // esi
  __int64 result; // rax
  int v18; // ecx
  int v19; // eax
  int DpiDependentMetric; // eax
  int DpiCacheSlot; // eax
  __int64 v22; // rcx
  int v23; // eax

  v8 = NeedsWindowEdge(a2, a4, *(_DWORD *)(gptiCurrent + 632LL) >= 0x400u);
  v9 = a4 & 0xFFFFFEFF;
  v10 = a4 | 0x100;
  v11 = 2;
  if ( !v8 )
    v10 = v9;
  if ( (BYTE2(a2) & 0xC0) == 0xC0 )
  {
    v19 = *(unsigned __int16 *)(gpsi + 6998LL);
    if ( (v10 & 0x80u) != 0 )
    {
      if ( a5 == v19 )
      {
        DpiDependentMetric = *(_DWORD *)(gpsi + 2372LL);
        goto LABEL_28;
      }
      if ( a5 == 96 )
      {
        DpiDependentMetric = *(_DWORD *)(gpsi + 2492LL);
        goto LABEL_28;
      }
      DpiCacheSlot = GetDpiCacheSlot(a5);
      v22 = 22LL;
    }
    else
    {
      if ( a5 == v19 )
      {
        DpiDependentMetric = *(_DWORD *)(gpsi + 2292LL);
LABEL_28:
        a1[1] -= DpiDependentMetric;
        goto LABEL_4;
      }
      if ( a5 == 96 )
      {
        DpiDependentMetric = *(_DWORD *)(gpsi + 2412LL);
        goto LABEL_28;
      }
      DpiCacheSlot = GetDpiCacheSlot(a5);
      v22 = 2LL;
    }
    if ( DpiCacheSlot == -1 )
      DpiDependentMetric = ScaleSystemMetricForDPIWithoutCache(v22, a5);
    else
      DpiDependentMetric = GetDpiDependentMetric(v22, a5);
    goto LABEL_28;
  }
LABEL_4:
  v12 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v12 = *ThreadWin32Thread;
  if ( *(_DWORD *)(v12 + 632) > 0x9900u )
    v14 = 0;
  else
    v14 = *(_DWORD *)(v12 + 648);
  if ( (v10 & 0x100) == 0 )
    v11 = (v10 & 0x20000) != 0;
  v15 = v11 + 1;
  if ( (a2 & 0xC00000) == 0 && (v10 & 1) == 0 )
    v15 = v11;
  if ( (v14 & 0x10000000) != 0 || (v14 & 0x20000000) != 0 )
  {
    v16 = 0;
  }
  else if ( a5 == *(unsigned __int16 *)(gpsi + 6998LL) )
  {
    v16 = *(_DWORD *)(gpsi + 2400LL);
  }
  else if ( a5 == 96 )
  {
    v16 = *(_DWORD *)(gpsi + 2520LL);
  }
  else
  {
    if ( (unsigned int)GetDpiCacheSlot(a5) == -1 )
      v23 = ScaleSystemMetricForDPIWithoutCache(29LL, a5);
    else
      v23 = GetDpiDependentMetric(29LL, a5);
    v16 = v23;
  }
  if ( (a2 & 0x40000) != 0 || (result = v15, v16 > 0) && (a2 & 0xC00000) == 0xC00000 && (v14 & 0x30000000) == 0 )
    result = v16 + v15 + (unsigned int)GetResizeBorderWidthForDpiWithAppCompat2(a5, v14);
  v18 = result + 2;
  if ( (v10 & 0x200) == 0 )
    v18 = result;
  if ( v18 )
  {
    *a1 -= v18;
    a1[2] += v18;
    a1[1] -= v18;
    a1[3] += v18;
  }
  return result;
}
