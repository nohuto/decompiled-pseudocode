/*
 * XREFs of xxxCheckFullScreen @ 0x1C0061F88
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0043E80 (xxxCreateWindowEx.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C004DF70 (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     ?GetWindowBordersWithDpiAwareness@@YAHPEBUtagWND@@_N1I@Z @ 0x1C004CE04 (-GetWindowBordersWithDpiAwareness@@YAHPEBUtagWND@@_N1I@Z.c)
 *     xxxRemoveFullScreen @ 0x1C0060E84 (xxxRemoveFullScreen.c)
 *     ?IsMaxedRect@@YAHPEAUtagRECT@@PEBUtagSIZERECT@@@Z @ 0x1C0062208 (-IsMaxedRect@@YAHPEAUtagRECT@@PEBUtagSIZERECT@@@Z.c)
 *     GetMonitorWorkRectForWindow @ 0x1C0062244 (GetMonitorWorkRectForWindow.c)
 *     GetMonitorRectForWindow @ 0x1C0063604 (GetMonitorRectForWindow.c)
 *     GetDpiDependentMetric @ 0x1C006718C (GetDpiDependentMetric.c)
 *     SetOrClrWF @ 0x1C0069680 (SetOrClrWF.c)
 *     _MonitorFromRect @ 0x1C007B570 (_MonitorFromRect.c)
 *     GetWindowDpiLastNotify @ 0x1C00BBEF0 (GetWindowDpiLastNotify.c)
 *     xxxAddFullScreen @ 0x1C00C9EF4 (xxxAddFullScreen.c)
 *     RECTFromSIZERECT @ 0x1C00F512C (RECTFromSIZERECT.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     GetScreenRectForWindow @ 0x1C025A608 (GetScreenRectForWindow.c)
 */

__int64 __fastcall xxxCheckFullScreen(struct tagWND *a1, struct tagSIZERECT *a2)
{
  unsigned int v2; // esi
  __int64 v5; // r15
  __int64 v6; // r14
  __int64 ThreadWin32Thread; // rax
  unsigned int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  struct tagRECT *MonitorRectForWindow; // rax
  __int64 v14; // rdx
  __int64 v15; // rdx
  int v16; // ecx
  unsigned int WindowDpiLastNotify; // eax
  int DpiDependentMetric; // eax
  int WindowBordersWithDpiAwareness; // eax
  LONG bottom; // edx
  __int64 v21; // rdx
  __int64 v22; // rax
  int v23; // eax
  struct tagRECT v24; // [rsp+20h] [rbp-50h] BYREF
  _QWORD v25[3]; // [rsp+30h] [rbp-40h] BYREF
  _BYTE v26[16]; // [rsp+48h] [rbp-28h] BYREF
  struct tagRECT v27; // [rsp+58h] [rbp-18h] BYREF

  v2 = 0;
  v25[2] = 0LL;
  v27 = 0LL;
  v5 = *(_QWORD *)(GetDispInfo() + 96);
  if ( *(_DWORD *)*gpDispInfo <= 1u )
  {
    v6 = v5;
    goto LABEL_3;
  }
  v24 = *(struct tagRECT *)GetScreenRectForWindow(&v24, a1);
  if ( !(unsigned int)IsMaxedRect(&v24, a2) )
  {
    RECTFromSIZERECT(&v27, v21);
    v6 = MonitorFromRect(&v27);
LABEL_3:
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v25[0] = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = v25;
    v25[1] = v6;
    HMLockObject(v6);
    v24 = *(struct tagRECT *)GetMonitorWorkRectForWindow(&v27, v6, a1);
    if ( (unsigned int)IsMaxedRect(&v24, a2) )
    {
      MonitorRectForWindow = (struct tagRECT *)GetMonitorRectForWindow(v26, v6, a1);
      v14 = *((_QWORD *)a1 + 5);
      v27 = *MonitorRectForWindow;
      if ( (*(_BYTE *)(v14 + 31) & 1) != 0
        && (SetOrClrWF(1LL, a1, 832LL, 1LL), v15 = *((_QWORD *)a1 + 5), (*(_BYTE *)(v15 + 31) & 1) != 0)
        && (((*(_BYTE *)(v15 + 30) & 0xC0) == 0xC0) & *(_BYTE *)(v15 + 30)) != 0 )
      {
        v16 = *(_DWORD *)(v15 + 288) & 0xF;
        if ( v16 == 3 )
        {
          WindowDpiLastNotify = (*(_DWORD *)(v15 + 288) >> 8) & 0x1FF;
        }
        else if ( (*(_DWORD *)(v15 + 232) & 0x400) != 0 )
        {
          WindowDpiLastNotify = GetWindowDpiLastNotify(a1);
        }
        else if ( !v16
               && (v22 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL)) != 0
               && (*(_DWORD *)(**(_QWORD **)(v22 + 8) + 64LL) & 1) != 0 )
        {
          WindowDpiLastNotify = 96;
        }
        else
        {
          WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) + 284LL);
        }
        DpiDependentMetric = GetDpiDependentMetric(2LL, WindowDpiLastNotify);
        v9 = *(unsigned int *)a2;
        if ( (int)v9 + DpiDependentMetric > v27.right
          || (v9 = (unsigned int)(*((_DWORD *)a2 + 2) + v9), (int)v9 < v27.right)
          || (v10 = *((unsigned int *)a2 + 1), (int)v10 + DpiDependentMetric > v27.top)
          || (v9 = (unsigned int)(v10 + *((_DWORD *)a2 + 3)), (int)v9 < v27.bottom) )
        {
          if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 20LL) & 0x40) != 0 )
            v2 = xxxRemoveFullScreen((__int64)a1);
          WindowBordersWithDpiAwareness = GetWindowBordersWithDpiAwareness(a1, v9, 0, 0);
          bottom = v24.bottom;
          *(_DWORD *)a2 = v24.left - WindowBordersWithDpiAwareness;
          *((_DWORD *)a2 + 1) = v24.top - WindowBordersWithDpiAwareness;
          WindowBordersWithDpiAwareness *= 2;
          v10 = (unsigned int)(WindowBordersWithDpiAwareness - v24.top);
          v9 = (unsigned int)(v10 + bottom);
          *((_DWORD *)a2 + 2) = v24.right + WindowBordersWithDpiAwareness - v24.left;
          if ( v6 == v5 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 2) == 0 )
          {
            v23 = *((_DWORD *)a2 + 3);
            if ( (int)v9 >= v23 )
              v9 = (unsigned int)v23;
          }
          *((_DWORD *)a2 + 3) = v9;
          goto LABEL_8;
        }
        if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 20LL) & 0x40) != 0 )
        {
LABEL_8:
          ThreadUnlock1(v10, v9, v11);
          return v2;
        }
      }
      else if ( !(unsigned int)IsMaxedRect(&v27, a2) )
      {
        goto LABEL_8;
      }
      v8 = xxxAddFullScreen(a1);
    }
    else
    {
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 1) != 0 )
        SetOrClrWF(0LL, a1, 832LL, 1LL);
      v8 = xxxRemoveFullScreen((__int64)a1);
    }
    v2 = v8;
    goto LABEL_8;
  }
  return 0LL;
}
