/*
 * XREFs of xxxCheckFullScreen @ 0x1C007C55C
 * Callers:
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C0070758 (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     xxxCreateWindowEx @ 0x1C0075140 (xxxCreateWindowEx.c)
 * Callees:
 *     _MonitorFromRect @ 0x1C0042270 (_MonitorFromRect.c)
 *     GetMonitorRectForWindow @ 0x1C00427D4 (GetMonitorRectForWindow.c)
 *     GetWindowBordersWithDpiAwareness @ 0x1C004AE0C (GetWindowBordersWithDpiAwareness.c)
 *     GetWindowDpiLastNotify @ 0x1C004C618 (GetWindowDpiLastNotify.c)
 *     SetOrClrWF @ 0x1C004DF08 (SetOrClrWF.c)
 *     GetDpiDependentMetric @ 0x1C0061430 (GetDpiDependentMetric.c)
 *     ?IsMaxedRect@@YAHPEAUtagRECT@@PEBUtagSIZERECT@@@Z @ 0x1C007C824 (-IsMaxedRect@@YAHPEAUtagRECT@@PEBUtagSIZERECT@@@Z.c)
 *     GetMonitorWorkRectForDpiContext @ 0x1C007C860 (GetMonitorWorkRectForDpiContext.c)
 *     ?GetWindowCompositedDpiContext@@YAKPEBUtagWND@@@Z @ 0x1C007C944 (-GetWindowCompositedDpiContext@@YAKPEBUtagWND@@@Z.c)
 *     xxxRemoveFullScreen @ 0x1C007C980 (xxxRemoveFullScreen.c)
 *     RECTFromSIZERECT @ 0x1C0102CAC (RECTFromSIZERECT.c)
 *     xxxAddFullScreen @ 0x1C0122F74 (xxxAddFullScreen.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     ?ExtendRectByWindowMargin@@YAXPEBUtagWND@@AEBUtagRECT@@PEAU2@@Z @ 0x1C023ED18 (-ExtendRectByWindowMargin@@YAXPEBUtagWND@@AEBUtagRECT@@PEAU2@@Z.c)
 *     GetScreenRectForWindow @ 0x1C025D46C (GetScreenRectForWindow.c)
 */

__int64 __fastcall xxxCheckFullScreen(struct tagWND *a1, struct tagSIZERECT *a2)
{
  unsigned int v2; // r14d
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r12
  struct _KTHREAD *CurrentThread; // r13
  __int64 v9; // r15
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 *ThreadWin32Thread; // rax
  unsigned int WindowCompositedDpiContext; // eax
  struct tagRECT v15; // xmm6
  unsigned int v16; // eax
  __int64 left; // rcx
  struct tagRECT *MonitorRectForWindow; // rax
  __int64 v20; // rdx
  __int64 v21; // rdx
  int v22; // ecx
  unsigned int WindowDpiLastNotify; // eax
  int DpiDependentMetric; // eax
  int v25; // edx
  int WindowBordersWithDpiAwareness; // eax
  LONG bottom; // edx
  int v28; // edx
  __int64 v29; // rdx
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v32; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v34; // rax
  LONG top; // edx
  int v36; // eax
  int v37; // eax
  struct tagRECT v38; // [rsp+28h] [rbp-99h] BYREF
  struct tagRECT v39; // [rsp+38h] [rbp-89h] BYREF
  struct tagRECT v40; // [rsp+48h] [rbp-79h] BYREF
  __int64 v41; // [rsp+58h] [rbp-69h]
  _QWORD v42[3]; // [rsp+60h] [rbp-61h] BYREF
  struct tagRECT v43; // [rsp+78h] [rbp-49h] BYREF
  char v44[16]; // [rsp+88h] [rbp-39h] BYREF
  char v45[16]; // [rsp+98h] [rbp-29h] BYREF
  __int128 v46; // [rsp+A8h] [rbp-19h] BYREF
  struct tagRECT v47; // [rsp+B8h] [rbp-9h] BYREF

  v2 = 0;
  v42[2] = 0LL;
  v47 = 0LL;
  v5 = *(_QWORD *)(GetDispInfo(a1, a2) + 96);
  v41 = v5;
  v6 = gpDispInfo;
  if ( *(_DWORD *)*gpDispInfo <= 1u )
  {
    v7 = v5;
    goto LABEL_3;
  }
  v43 = *(struct tagRECT *)GetScreenRectForWindow(v44, a1);
  if ( !(unsigned int)IsMaxedRect(&v43, a2) )
  {
    RECTFromSIZERECT(&v47, v29);
    v7 = MonitorFromRect(&v47, 1u, *(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL));
LABEL_3:
    CurrentThread = KeGetCurrentThread();
    v9 = 0LL;
    if ( !(unsigned __int8)KeIsAttachedProcess(v6)
      || (CurrentProcess = PsGetCurrentProcess(v11, v10, v12),
          ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
          CurrentThreadProcess = PsGetCurrentThreadProcess(v32),
          ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v9 = *ThreadWin32Thread;
    }
    v42[0] = *(_QWORD *)(v9 + 416);
    *(_QWORD *)(v9 + 416) = v42;
    v42[1] = v7;
    HMLockObject(v7);
    WindowCompositedDpiContext = GetWindowCompositedDpiContext(a1);
    v15 = *(struct tagRECT *)GetMonitorWorkRectForDpiContext(v45, v7, WindowCompositedDpiContext);
    v38 = v15;
    if ( (unsigned int)IsMaxedRect(&v38, a2) )
    {
      MonitorRectForWindow = (struct tagRECT *)GetMonitorRectForWindow(&v46, v7, a1);
      v20 = *((_QWORD *)a1 + 5);
      v40 = *MonitorRectForWindow;
      if ( (*(_BYTE *)(v20 + 31) & 1) != 0
        && (SetOrClrWF(1, (__int64)a1, 0x340u, 1), v21 = *((_QWORD *)a1 + 5), (*(_BYTE *)(v21 + 31) & 1) != 0)
        && (((*(_BYTE *)(v21 + 30) & 0xC0) == 0xC0) & *(_BYTE *)(v21 + 30)) != 0 )
      {
        v22 = *(_DWORD *)(v21 + 288) & 0xF;
        if ( v22 == 3 )
        {
          WindowDpiLastNotify = (*(_DWORD *)(v21 + 288) >> 8) & 0x1FF;
        }
        else if ( (*(_DWORD *)(v21 + 232) & 0x8000000) != 0 )
        {
          WindowDpiLastNotify = GetWindowDpiLastNotify((__int64)a1);
        }
        else if ( !v22
               && (v34 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL)) != 0
               && (*(_DWORD *)(**(_QWORD **)(v34 + 8) + 64LL) & 1) != 0 )
        {
          WindowDpiLastNotify = 96;
        }
        else
        {
          WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) + 284LL);
        }
        DpiDependentMetric = GetDpiDependentMetric(2LL, WindowDpiLastNotify);
        if ( *(_DWORD *)a2 + DpiDependentMetric > v40.right
          || (left = (unsigned int)(*((_DWORD *)a2 + 2) + *(_DWORD *)a2), (int)left < v40.right)
          || (v25 = *((_DWORD *)a2 + 1), v25 + DpiDependentMetric > v40.top)
          || *((_DWORD *)a2 + 3) + v25 < v40.bottom )
        {
          if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 20LL) & 0x40) != 0 )
            v2 = xxxRemoveFullScreen(a1);
          if ( *((_DWORD *)a1 + 77) )
          {
            v39 = v15;
            ExtendRectByWindowMargin(a1, &v39, &v39);
            left = (unsigned int)v39.left;
            top = v39.top;
            v36 = v39.right - v39.left;
            *(_DWORD *)a2 = v39.left;
            *((_DWORD *)a2 + 2) = v36;
            v37 = v39.bottom - top;
            *((_DWORD *)a2 + 1) = top;
            *((_DWORD *)a2 + 3) = v37;
          }
          else
          {
            WindowBordersWithDpiAwareness = GetWindowBordersWithDpiAwareness((__int64)a1);
            bottom = v38.bottom;
            *(_DWORD *)a2 = v38.left - WindowBordersWithDpiAwareness;
            *((_DWORD *)a2 + 1) = v38.top - WindowBordersWithDpiAwareness;
            WindowBordersWithDpiAwareness *= 2;
            left = (unsigned int)(WindowBordersWithDpiAwareness - v38.top);
            v28 = left + bottom;
            *((_DWORD *)a2 + 2) = v38.right + WindowBordersWithDpiAwareness - v38.left;
            if ( v7 == v41 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 2) == 0 && v28 >= *((_DWORD *)a2 + 3) )
              v28 = *((_DWORD *)a2 + 3);
            *((_DWORD *)a2 + 3) = v28;
          }
          goto LABEL_11;
        }
        if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 20LL) & 0x40) != 0 )
        {
LABEL_11:
          ThreadUnlock1(left);
          return v2;
        }
      }
      else if ( !(unsigned int)IsMaxedRect(&v40, a2) )
      {
        goto LABEL_11;
      }
      v16 = xxxAddFullScreen(a1);
    }
    else
    {
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 1) != 0 )
        SetOrClrWF(0, (__int64)a1, 0x340u, 1);
      v16 = xxxRemoveFullScreen(a1);
    }
    v2 = v16;
    goto LABEL_11;
  }
  return 0LL;
}
