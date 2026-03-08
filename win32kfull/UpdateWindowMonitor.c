/*
 * XREFs of UpdateWindowMonitor @ 0x1C00AE6B0
 * Callers:
 *     UpdateMonitorForWindowAndChildren @ 0x1C00991CC (UpdateMonitorForWindowAndChildren.c)
 *     xxxInheritWindowMonitor @ 0x1C00ADDA0 (xxxInheritWindowMonitor.c)
 *     ?xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z @ 0x1C02228BC (-xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z.c)
 * Callees:
 *     ?IsChildWindowCoordinateSpaceBoundary@@YA_NPEBUtagWND@@@Z @ 0x1C0016AA8 (-IsChildWindowCoordinateSpaceBoundary@@YA_NPEBUtagWND@@@Z.c)
 *     ComposeWindow @ 0x1C002297C (ComposeWindow.c)
 *     ?FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z @ 0x1C0029674 (-FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z.c)
 *     UpdateWindowSpriteMonitor @ 0x1C002C598 (UpdateWindowSpriteMonitor.c)
 *     GreDwmNotifySpriteMonitorChange @ 0x1C002C60C (GreDwmNotifySpriteMonitorChange.c)
 *     InitializeMonitorInfo @ 0x1C002D4E8 (InitializeMonitorInfo.c)
 *     _GetTopLevelWindow @ 0x1C0035AF0 (_GetTopLevelWindow.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C003C2A4 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     _SetDeferredDpiStateForWindowAndChildren @ 0x1C0041748 (_SetDeferredDpiStateForWindowAndChildren.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0050938 (W32GetThreadWin32Thread.c)
 *     xxxInternalInvalidate @ 0x1C0053270 (xxxInternalInvalidate.c)
 *     RecreateRedirectionBitmap @ 0x1C0096A48 (RecreateRedirectionBitmap.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C009DC7C (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     GetMonitorRectForDpi @ 0x1C00A2698 (GetMonitorRectForDpi.c)
 *     ?GetWindowCoordinateSpaceDpi@@YAGPEBUtagWND@@@Z @ 0x1C00A3840 (-GetWindowCoordinateSpaceDpi@@YAGPEBUtagWND@@@Z.c)
 *     UpdateTopLevelWindowDPITransform @ 0x1C00D861C (UpdateTopLevelWindowDPITransform.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 */

void __fastcall UpdateWindowMonitor(struct tagWND *a1, __int64 *a2)
{
  _QWORD *v3; // r13
  __int64 v5; // rax
  int *v6; // rbp
  char *v7; // r14
  int v8; // edx
  const struct tagWND **v9; // r12
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  _DWORD *v14; // rax
  _DWORD *v15; // rcx
  _DWORD *v16; // rax
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  struct tagWND *i; // rdx
  __int64 v22; // rax
  __int64 v23; // rax
  const struct tagWND *v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rax
  BOOL v27; // ebx
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  void *v31; // rcx
  __int64 v32; // rbx
  struct tagSHADOW *Shadow; // rax
  unsigned int v34; // ecx
  __int16 WindowCoordinateSpaceDpi; // bx
  __int64 v36; // rbp
  Gre::Base *v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // rcx
  int v41; // ebx
  __int64 v42; // [rsp+30h] [rbp-98h] BYREF
  _BYTE v43[136]; // [rsp+40h] [rbp-88h] BYREF
  char v44; // [rsp+D8h] [rbp+10h] BYREF
  char v45; // [rsp+E0h] [rbp+18h] BYREF
  int *v46; // [rsp+E8h] [rbp+20h]

  if ( a2 )
  {
    v3 = a2 + 5;
    while ( 1 )
    {
      v5 = *a2;
      v6 = (int *)((char *)a1 + 320);
      v7 = (char *)a1 + 40;
      v46 = (int *)((char *)a1 + 320);
      *(_QWORD *)(*((_QWORD *)a1 + 5) + 256LL) = v5;
      v8 = *((_DWORD *)a1 + 80);
      if ( (v8 & 0x40000) == 0 && *(_WORD *)(*v3 + 60LL) != *(_WORD *)(*(_QWORD *)v7 + 284LL) )
        *v6 = v8 | 0x40000;
      v9 = (const struct tagWND **)((char *)a1 + 104);
      v10 = *((_QWORD *)a1 + 13);
      if ( v10 )
      {
        v11 = *((_QWORD *)a1 + 3);
        v12 = 0LL;
        if ( v11 )
        {
          v13 = *(_QWORD *)(v11 + 8);
          if ( v13 )
            v12 = *(_QWORD *)(v13 + 24);
        }
        if ( v10 == v12 && (*(_DWORD *)(*(_QWORD *)v7 + 288LL) & 0xF) == 2 )
          SetDeferredDpiStateForWindowAndChildren(a1, 1, 0);
      }
      *(_WORD *)(*(_QWORD *)v7 + 284LL) = *(_WORD *)(*v3 + 60LL);
      v14 = (_DWORD *)*((_QWORD *)a1 + 36);
      if ( v14 )
      {
        --*v14;
        v15 = (_DWORD *)*((_QWORD *)a1 + 36);
        if ( !*v15 )
          Win32FreePool(v15);
        *((_QWORD *)a1 + 36) = 0LL;
      }
      v16 = (_DWORD *)a2[16];
      *((_QWORD *)a1 + 36) = v16;
      ++*v16;
      v17 = *(_DWORD *)(*(_QWORD *)v7 + 288LL) & 0xF;
      if ( v17 == 3 )
      {
        LODWORD(v18) = 1;
      }
      else
      {
        LODWORD(v18) = 0;
        if ( v17 == 2 )
        {
          if ( *v9
            && (v19 = *((_QWORD *)a1 + 3)) != 0
            && (v20 = *(_QWORD *)(v19 + 8)) != 0
            && *v9 == *(const struct tagWND **)(v20 + 24) )
          {
            v34 = (unsigned int)*v6 >> 19;
LABEL_56:
            LODWORD(v18) = v34 & 1;
          }
          else
          {
            for ( i = a1; ; i = (struct tagWND *)*((_QWORD *)i + 13) )
            {
              v18 = *((_QWORD *)i + 13);
              if ( !v18 )
                break;
              v22 = *((_QWORD *)i + 3);
              if ( v22 )
              {
                v23 = *(_QWORD *)(v22 + 8);
                if ( v23 )
                {
                  if ( v18 == *(_QWORD *)(v23 + 24) )
                  {
                    LODWORD(v18) = 0;
                    if ( !i )
                      break;
                    v34 = *((_DWORD *)i + 80) >> 20;
                    goto LABEL_56;
                  }
                }
              }
            }
          }
        }
      }
      if ( (*(_DWORD *)(*(_QWORD *)v7 + 232LL) = ((_DWORD)v18 << 10) | *(_DWORD *)(*(_QWORD *)v7 + 232LL) & 0xFFFFFBFF,
            (v24 = *v9) == 0LL)
        || (v25 = *((_QWORD *)a1 + 3)) != 0
        && (v26 = *(_QWORD *)(v25 + 8)) != 0
        && v24 == *(const struct tagWND **)(v26 + 24)
        || (((unsigned __int16)(*(_DWORD *)(*(_QWORD *)v7 + 288LL) >> 8) ^ (unsigned __int16)(*(_DWORD *)(*((_QWORD *)v24 + 5) + 288LL) >> 8)) & 0x1FF) == 0 )
      {
        v27 = 0;
      }
      else
      {
        WindowCoordinateSpaceDpi = GetWindowCoordinateSpaceDpi(a1);
        if ( WindowCoordinateSpaceDpi == (unsigned __int16)GetWindowCoordinateSpaceDpi(*v9) )
        {
          v27 = 0;
          v36 = ValidateHmonitorNoRip(*(_QWORD *)(*(_QWORD *)v7 + 256LL));
          if ( v36 )
          {
            GetMonitorRectForDpi(&v42, v36, (*(_DWORD *)(*(_QWORD *)v7 + 288LL) >> 8) & 0x1FF);
            v27 = *(_QWORD *)(*(_QWORD *)(v36 + 40) + 28LL) != v42;
          }
          v6 = v46;
        }
        else
        {
          v27 = 1;
        }
      }
      v28 = *(_QWORD *)v7;
      if ( v27 )
      {
        if ( (*(_BYTE *)(v28 + 26) & 8) == 0 )
          ComposeWindow(a1, 1);
      }
      else if ( (*(_DWORD *)(v28 + 232) & 2) != 0 )
      {
        if ( IsChildWindowCoordinateSpaceBoundary(a1) )
        {
          ComposeWindow(a1, 2);
          if ( GetTopLevelWindow((__int64)a1) )
          {
            AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v44);
            xxxInternalInvalidate(*v9, (HRGN)1, 0x485u);
            AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v44);
          }
        }
      }
      if ( (!*v9
         || (v29 = *((_QWORD *)a1 + 3)) == 0
         || (v30 = *(_QWORD *)(v29 + 8)) == 0
         || *v9 != *(const struct tagWND **)(v30 + 24))
        && !v27 )
      {
        break;
      }
      if ( (*v6 & 0x40000) != 0 )
      {
        if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
        {
          if ( *((_QWORD *)PtiCurrentShared(v38) + 57) )
          {
            if ( (*(_DWORD *)(**(_QWORD **)(*((_QWORD *)PtiCurrentShared(v39) + 57) + 8LL) + 64LL) & 1) != 0 )
            {
              v40 = *(_QWORD *)v7;
              if ( (*(_DWORD *)(*(_QWORD *)v7 + 288LL) & 0x4000000F) == 0x40000000
                && (*(_BYTE *)(v40 + 27) & 0x20) != 0
                && (*(_BYTE *)(v40 + 26) & 0x20) == 0 )
              {
                GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
                v41 = RecreateRedirectionBitmap((void **)a1, 0, 0, 0, 0, 0LL);
                GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
                if ( v41 >= 0 )
                {
                  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v45);
                  xxxInternalInvalidate(a1, (HRGN)1, 0x85u);
                  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v45);
                }
              }
            }
          }
        }
      }
      v32 = *(_QWORD *)v7;
      if ( (*(_BYTE *)(*(_QWORD *)v7 + 26LL) & 8) != 0 )
      {
        memset_0(v43, 0, 0x48uLL);
        InitializeMonitorInfo((__int64)v43, *(_DWORD *)(v32 + 288), a2, (__int64)a1);
        GreDwmNotifySpriteMonitorChange(v37, *(HWND *)a1, 0LL);
      }
      UpdateTopLevelWindowDPITransform(a1, a2);
      if ( (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)a1 + 17) + 8LL) + 10LL) & 2) != 0 )
      {
        Shadow = FindShadow(a1);
        if ( Shadow )
        {
          a1 = (struct tagWND *)*((_QWORD *)Shadow + 1);
          if ( a1 )
            continue;
        }
      }
      return;
    }
    v31 = (void *)*((_QWORD *)a1 + 27);
    if ( v31 )
    {
      Win32FreePool(v31);
      *((_QWORD *)a1 + 27) = 0LL;
    }
    if ( (*(_BYTE *)(*(_QWORD *)v7 + 26LL) & 8) != 0 )
      UpdateWindowSpriteMonitor(a1, (__int64)a2);
  }
}
