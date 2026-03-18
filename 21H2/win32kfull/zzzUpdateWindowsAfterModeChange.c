/*
 * XREFs of zzzUpdateWindowsAfterModeChange @ 0x1C00B7E98
 * Callers:
 *     zzzResetSharedDesktops @ 0x1C00999A0 (zzzResetSharedDesktops.c)
 * Callees:
 *     IsDesktopWindow @ 0x1C00205C0 (IsDesktopWindow.c)
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     zzzEndDeferWinEventNotify @ 0x1C0048944 (zzzEndDeferWinEventNotify.c)
 *     GetRedirectionBitmap @ 0x1C0049330 (GetRedirectionBitmap.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C0049764 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     xxxInternalInvalidate @ 0x1C004A420 (xxxInternalInvalidate.c)
 *     UpdateMonitorForWindowAndChildren @ 0x1C006A424 (UpdateMonitorForWindowAndChildren.c)
 *     _IsTopLevelWindow @ 0x1C006D904 (_IsTopLevelWindow.c)
 *     GetNewMonitor @ 0x1C006F304 (GetNewMonitor.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C00705E0 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     RecreateRedirectionBitmap @ 0x1C008F778 (RecreateRedirectionBitmap.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A2750 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     DeleteOrSetRedirectionBitmap @ 0x1C00B4214 (DeleteOrSetRedirectionBitmap.c)
 *     GreIsReusedDeviceDependentBitmap @ 0x1C00B8138 (GreIsReusedDeviceDependentBitmap.c)
 *     ?RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z @ 0x1C01E216C (-RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z.c)
 *     GreGetBitmapDpiScaleValue @ 0x1C029D640 (GreGetBitmapDpiScaleValue.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall zzzUpdateWindowsAfterModeChange(int a1, int a2)
{
  int v2; // ebx
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // rbp
  __int64 *v6; // r12
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 NewMonitor; // rax
  __int64 v11; // rcx
  int v12; // r15d
  HSURF RedirectionBitmap; // rax
  int v14; // eax
  int v15; // r9d
  int v16; // r13d
  int v17; // ecx
  HBITMAP v18; // r14
  __int64 v19; // rdx
  __int64 v20; // r8
  __int16 v21; // bx
  bool v22; // zf
  int v24; // [rsp+88h] [rbp+10h]
  char v25; // [rsp+90h] [rbp+18h] BYREF
  HBITMAP v26; // [rsp+98h] [rbp+20h] BYREF

  v2 = a1;
  ++gdwDeferWinEvent;
  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  v4 = gSharedInfo[1];
  v5 = v4 + 32LL * giheLast;
  v6 = (__int64 *)gpKernelHandleTable;
  while ( v4 <= v5 )
  {
    v26 = 0LL;
    if ( *(_BYTE *)(v4 + 24) == 1 )
    {
      v7 = *v6;
      if ( IsTopLevelWindow(*v6) )
        goto LABEL_9;
      v8 = *(_QWORD *)(v7 + 24);
      v9 = 0LL;
      if ( v8 )
        v9 = *(_QWORD *)(v8 + 104);
      if ( *(_QWORD *)(v7 + 104) == v9 )
      {
LABEL_9:
        NewMonitor = ValidateHmonitorNoRip(*(_QWORD *)(*(_QWORD *)(v7 + 40) + 256LL));
        if ( !NewMonitor )
          NewMonitor = GetNewMonitor((struct tagWND *)v7, 0LL, 0LL);
        UpdateMonitorForWindowAndChildren((struct tagWND **)v7, NewMonitor, 0LL, 0);
      }
      v11 = *(_QWORD *)(v7 + 40);
      if ( (*(_BYTE *)(v11 + 27) & 0x20) != 0
        && (*(_BYTE *)(v11 + 26) & 0x20) == 0
        && (v2 || (unsigned int)IsWindowDesktopComposed(v7)) )
      {
        *(_DWORD *)(v7 + 320) &= ~0x20000u;
        v12 = GetRedirectionBitmap(v7) == 0;
        RedirectionBitmap = (HSURF)GetRedirectionBitmap(v7);
        if ( (unsigned int)GreIsReusedDeviceDependentBitmap(RedirectionBitmap) )
          a2 = 1;
        v24 = a2;
        RecreateRedirectionBitmap((struct tagWND *)v7, 0, 0, a2, 0, (HSURF *)&v26);
        LOBYTE(v14) = IsDesktopWindow(v7);
        v16 = v14;
        if ( v26 )
        {
          if ( v14
            || v15 >= 0
            || (*(_DWORD *)(*(_QWORD *)(v7 + 40) + 232LL) & 2) == 0
            || !(unsigned int)RestoreOldRedirectionBitmap((struct tagWND *)v7, v26) )
          {
            if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
              && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 456)
              && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 456)
                                          + 8LL)
                            + 64LL) & 1) != 0
              && (v17 = *(_DWORD *)(*(_QWORD *)(v7 + 40) + 288LL), (v17 & 0xF) == 0)
              && (v17 & 0x40000000) != 0 )
            {
              v18 = v26;
              v21 = 96 * GreGetBitmapDpiScaleValue((HSURF)v26);
              v22 = v21 == (__int16)GreGetScaledLogPixels(*(unsigned __int16 *)(*(_QWORD *)(v7 + 40) + 284LL));
              v2 = a1;
              v12 |= !v22;
            }
            else
            {
              v18 = v26;
            }
            DeleteOrSetRedirectionBitmap(v7, (HSURF)v18, 1);
            a2 = v24;
            goto LABEL_19;
          }
LABEL_20:
          if ( !v12 )
            goto LABEL_4;
        }
        else
        {
LABEL_19:
          if ( !v16 )
            goto LABEL_20;
        }
        AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v25);
        zzzLockDisplayAreaAndInvalidateDCCache(v7, 0, 0LL);
        if ( v12 )
          xxxInternalInvalidate((struct tagWND *)v7, (HRGN)1, 0x401u);
        AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v25, v19, v20);
      }
    }
LABEL_4:
    v4 += 32LL;
    v6 += 3;
  }
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  zzzEndDeferWinEventNotify();
}
