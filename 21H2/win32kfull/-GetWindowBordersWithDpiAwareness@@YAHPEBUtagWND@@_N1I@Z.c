/*
 * XREFs of ?GetWindowBordersWithDpiAwareness@@YAHPEBUtagWND@@_N1I@Z @ 0x1C004CE04
 * Callers:
 *     ?CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z @ 0x1C004EC00 (-CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z.c)
 *     xxxCheckFullScreen @ 0x1C0061F88 (xxxCheckFullScreen.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C0063E00 (xxxInitSendValidateMinMaxInfoEx.c)
 *     xxxCalcClientRect @ 0x1C0066538 (xxxCalcClientRect.c)
 *     _anonymous_namespace_::xxxNormalizeRect @ 0x1C00B2264 (_anonymous_namespace_--xxxNormalizeRect.c)
 *     WindowMargins::_anonymous_namespace_::CalculateWindowMargins @ 0x1C00B2B24 (WindowMargins--_anonymous_namespace_--CalculateWindowMargins.c)
 * Callees:
 *     GetDpiDependentMetric @ 0x1C006718C (GetDpiDependentMetric.c)
 *     GetDpiCacheSlot @ 0x1C00671E0 (GetDpiCacheSlot.c)
 *     GetWindowDpiLastNotify @ 0x1C00BBEF0 (GetWindowDpiLastNotify.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1C01E4D60 (_ScaleSystemMetricForDPIWithoutCache.c)
 */

__int64 __fastcall GetWindowBordersWithDpiAwareness(const struct tagWND *a1, __int64 a2, char a3, unsigned int a4)
{
  unsigned int WindowDpiLastNotify; // ebx
  const struct tagWND *v5; // rdx
  int v6; // edi
  __int64 v7; // rax
  int v8; // ebp
  __int64 v9; // rax
  int v10; // r15d
  int v11; // r12d
  int v12; // edx
  unsigned int v13; // r14d
  int v14; // ecx
  int v15; // esi
  __int64 result; // rax
  __int64 v17; // rax
  int v18; // ecx
  __int64 v19; // rax
  int v20; // eax
  unsigned int v21; // r10d
  int DpiDependentMetric; // eax

  WindowDpiLastNotify = a4;
  v5 = a1;
  v6 = 1;
  if ( !a4 )
  {
    v17 = *((_QWORD *)a1 + 5);
    v18 = *(_DWORD *)(v17 + 288) & 0xF;
    if ( v18 == 3 )
    {
      WindowDpiLastNotify = (*(_DWORD *)(v17 + 288) >> 8) & 0x1FF;
    }
    else if ( (*(_DWORD *)(v17 + 232) & 0x400) != 0 )
    {
      WindowDpiLastNotify = GetWindowDpiLastNotify(v5);
    }
    else if ( !v18
           && (v19 = *(_QWORD *)(*((_QWORD *)v5 + 2) + 456LL)) != 0
           && (*(_DWORD *)(**(_QWORD **)(v19 + 8) + 64LL) & 1) != 0 )
    {
      WindowDpiLastNotify = 96;
    }
    else
    {
      WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)v5 + 2) + 424LL) + 284LL);
    }
  }
  v7 = *((_QWORD *)v5 + 2);
  if ( *(_DWORD *)(v7 + 632) > 0x9900u )
    v8 = 0;
  else
    v8 = *(_DWORD *)(v7 + 648);
  v9 = *((_QWORD *)v5 + 5);
  v10 = *(_DWORD *)(v9 + 24);
  v11 = *(_DWORD *)(v9 + 28);
  if ( (v10 & 0x100) != 0 )
    v12 = 2;
  else
    v12 = (v10 & 0x20000) != 0;
  v13 = v12 + 1;
  if ( (v11 & 0xC00000) == 0 && (v10 & 1) == 0 )
    v13 = v12;
  v14 = v8 & 0x10000000;
  if ( (v8 & 0x10000000) != 0 || (v8 & 0x20000000) != 0 )
  {
    v15 = 0;
  }
  else
  {
    if ( WindowDpiLastNotify == *(unsigned __int16 *)(gpsi + 6998LL) )
    {
      v15 = *(_DWORD *)(gpsi + 2400LL);
    }
    else if ( WindowDpiLastNotify == 96 )
    {
      v15 = *(_DWORD *)(gpsi + 2520LL);
    }
    else
    {
      if ( (unsigned int)GetDpiCacheSlot(WindowDpiLastNotify) == -1 )
        DpiDependentMetric = ScaleSystemMetricForDPIWithoutCache(v21, WindowDpiLastNotify);
      else
        DpiDependentMetric = GetDpiDependentMetric(v21, WindowDpiLastNotify);
      v15 = DpiDependentMetric;
    }
    v14 = 0;
  }
  if ( (v11 & 0x40000) != 0 || (result = v13, v15 > 0) && (v11 & 0xC00000) == 0xC00000 && (v8 & 0x30000000) == 0 )
  {
    if ( !v14 )
    {
      v6 = (int)(WindowDpiLastNotify * *(_DWORD *)(Get96DpiServerInfo() + 4) + 48) / 96;
      if ( (v8 & 0x20000000) != 0 )
      {
        if ( WindowDpiLastNotify == *(unsigned __int16 *)(gpsi + 6998LL) )
        {
          v20 = *(_DWORD *)(gpsi + 2400LL);
        }
        else if ( WindowDpiLastNotify == 96 )
        {
          v20 = *(_DWORD *)(gpsi + 2520LL);
        }
        else if ( (unsigned int)GetDpiCacheSlot(WindowDpiLastNotify) == -1 )
        {
          v20 = ScaleSystemMetricForDPIWithoutCache(29LL, WindowDpiLastNotify);
        }
        else
        {
          v20 = GetDpiDependentMetric(29LL, WindowDpiLastNotify);
        }
        v6 += v20;
      }
    }
    result = v6 + v13 + v15;
  }
  if ( a3 )
  {
    if ( (v10 & 0x200) != 0 )
      return (unsigned int)(result + 2);
  }
  return result;
}
