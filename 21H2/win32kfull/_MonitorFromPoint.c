/*
 * XREFs of _MonitorFromPoint @ 0x1C007B350
 * Callers:
 *     _MonitorFromRect @ 0x1C007B570 (_MonitorFromRect.c)
 *     ?zzzUpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z @ 0x1C009C088 (-zzzUpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z.c)
 *     GetDPITransformationMonitor @ 0x1C01DF820 (GetDPITransformationMonitor.c)
 *     NtUserCalculatePopupWindowPosition @ 0x1C01F17C0 (NtUserCalculatePopupWindowPosition.c)
 *     NtUserGetHimetricScaleFactorFromPixelLocation @ 0x1C01F4690 (NtUserGetHimetricScaleFactorFromPixelLocation.c)
 *     ?ComputeSourceRectAndMonitorWithPrecision@@YAXQEBUMOVESIZEDATA@@PEAUtagPOINT@@PEAPEAUtagMONITOR@@PEAUtagRECT@@@Z @ 0x1C02098AC (-ComputeSourceRectAndMonitorWithPrecision@@YAXQEBUMOVESIZEDATA@@PEAUtagPOINT@@PEAPEAUtagMONITOR@.c)
 *     ?xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z @ 0x1C020D6AC (-xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z.c)
 *     ?xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z @ 0x1C023E868 (-xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z.c)
 *     xxxTrackPopupMenuEx @ 0x1C024614C (xxxTrackPopupMenuEx.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     PtInRect @ 0x1C0077984 (PtInRect.c)
 *     GetMonitorRectForDpi @ 0x1C00B0924 (GetMonitorRectForDpi.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

__int64 __fastcall MonitorFromPoint(
        unsigned __int64 a1,
        unsigned int a2,
        unsigned int CurrentThreadDpiAwarenessContext)
{
  __int64 v6; // r12
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 DispInfo; // rdi
  __int64 i; // rdi
  __int64 v12; // r8
  unsigned int k; // esi
  __int64 v14; // r8
  unsigned int v15; // ecx
  int v16; // edx
  unsigned int v17; // ecx
  unsigned int v18; // ecx
  unsigned __int64 j; // rsi
  __int64 v20; // r8
  int v21; // eax
  int v22; // edx
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rcx
  __int128 v25; // [rsp+20h] [rbp-58h] BYREF
  __int128 v26; // [rsp+30h] [rbp-48h] BYREF
  int v27; // [rsp+84h] [rbp+Ch]

  v27 = HIDWORD(a1);
  v6 = 0LL;
  DispInfo = GetDispInfo();
  if ( **(_DWORD **)DispInfo == 1 && a2 )
    return *(_QWORD *)(GetDispInfo() + 96);
  if ( !CurrentThreadDpiAwarenessContext )
  {
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v8, v7);
    if ( (CurrentThreadDpiAwarenessContext & 0xF) != 2
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 456)
       || (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 456) + 8LL)
                     + 64LL) & 1) == 0) )
    {
      CurrentThreadDpiAwarenessContext = 18;
    }
  }
  if ( a2 <= 1 )
  {
    for ( i = *(_QWORD *)(DispInfo + 104); i; i = *(_QWORD *)(i + 56) )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(i + 40) + 24LL) & 1) != 0 )
      {
        v12 = CurrentThreadDpiAwarenessContext >> 8;
        LOWORD(v12) = v12 & 0x1FF;
        GetMonitorRectForDpi(&v25, i, v12);
        v26 = v25;
        if ( PtInRect(&v26, a1) )
          return i;
      }
    }
    if ( a2 )
      return *(_QWORD *)(GetDispInfo() + 96);
    return 0LL;
  }
  if ( a2 != 2 )
    return 0LL;
  if ( (unsigned int)(a1 + 0x8000) > 0xFFFF || (unsigned int)(v27 + 0x8000) > 0xFFFF )
  {
    i = *(_QWORD *)(DispInfo + 104);
    for ( j = -1LL; i; i = *(_QWORD *)(i + 56) )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(i + 40) + 24LL) & 1) != 0 )
      {
        v20 = CurrentThreadDpiAwarenessContext >> 8;
        LOWORD(v20) = v20 & 0x1FF;
        GetMonitorRectForDpi(&v25, i, v20);
        if ( (int)a1 >= (int)v25 )
          v21 = (int)a1 >= SDWORD2(v25) ? a1 - DWORD2(v25) + 1 : 0;
        else
          v21 = v25 - a1;
        if ( v21 < j )
        {
          if ( v27 >= SDWORD1(v25) )
          {
            if ( v27 >= SHIDWORD(v25) )
            {
              v22 = v27 - HIDWORD(v25) + 1;
            }
            else
            {
              if ( !v21 )
                return i;
              v22 = 0;
            }
          }
          else
          {
            v22 = DWORD1(v25) - v27;
          }
          v23 = v21 * (__int64)v21;
          if ( v23 < j && v22 + v23 < j )
          {
            v24 = v22 * (__int64)v22 + v23;
            if ( v24 < j )
            {
              j = v24;
              v6 = i;
            }
          }
        }
      }
    }
  }
  else
  {
    i = *(_QWORD *)(DispInfo + 104);
    for ( k = -1; i; i = *(_QWORD *)(i + 56) )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(i + 40) + 24LL) & 1) != 0 )
      {
        v14 = CurrentThreadDpiAwarenessContext >> 8;
        LOWORD(v14) = v14 & 0x1FF;
        GetMonitorRectForDpi(&v25, i, v14);
        if ( (int)a1 >= (int)v25 )
          v15 = (int)a1 >= SDWORD2(v25) ? a1 - DWORD2(v25) + 1 : 0;
        else
          v15 = v25 - a1;
        if ( v15 < k )
        {
          if ( v27 >= SDWORD1(v25) )
          {
            if ( v27 >= SHIDWORD(v25) )
            {
              v16 = v27 - HIDWORD(v25) + 1;
            }
            else
            {
              if ( !v15 )
                return i;
              v16 = 0;
            }
          }
          else
          {
            v16 = DWORD1(v25) - v27;
          }
          v17 = v15 * v15;
          if ( v17 < k && v17 + v16 < k )
          {
            v18 = v16 * v16 + v17;
            if ( v18 < k )
            {
              k = v18;
              v6 = i;
            }
          }
        }
      }
    }
  }
  return v6;
}
