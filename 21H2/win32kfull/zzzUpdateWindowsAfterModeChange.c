/*
 * XREFs of zzzUpdateWindowsAfterModeChange @ 0x1C00F1368
 * Callers:
 *     zzzResetSharedDesktops @ 0x1C00F2D50 (zzzResetSharedDesktops.c)
 * Callees:
 *     IsDesktopWindow @ 0x1C004C5F0 (IsDesktopWindow.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0069AF0 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0069B4C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     GetNewMonitor @ 0x1C006BF5C (GetNewMonitor.c)
 *     zzzEndDeferWinEventNotify @ 0x1C006DF44 (zzzEndDeferWinEventNotify.c)
 *     _IsTopLevelWindow @ 0x1C006FC88 (_IsTopLevelWindow.c)
 *     xxxInternalInvalidate @ 0x1C0072580 (xxxInternalInvalidate.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C0072764 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     GetRedirectionBitmap @ 0x1C00BEF20 (GetRedirectionBitmap.c)
 *     DeleteOrSetRedirectionBitmap @ 0x1C00EF958 (DeleteOrSetRedirectionBitmap.c)
 *     UpdateMonitorForWindowAndChildren @ 0x1C00F160C (UpdateMonitorForWindowAndChildren.c)
 *     RecreateRedirectionBitmap @ 0x1C00F18E8 (RecreateRedirectionBitmap.c)
 *     GreIsReusedDeviceDependentBitmap @ 0x1C00F2BF0 (GreIsReusedDeviceDependentBitmap.c)
 *     ?RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z @ 0x1C01E79BC (-RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z.c)
 *     GreGetBitmapDpiScaleValue @ 0x1C029ED3C (GreGetBitmapDpiScaleValue.c)
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
  HSURF v18; // r14
  __int16 v19; // bx
  bool v20; // zf
  int v22; // [rsp+88h] [rbp+10h]
  HSURF v23; // [rsp+90h] [rbp+18h] BYREF
  char v24; // [rsp+98h] [rbp+20h] BYREF

  v2 = a1;
  ++gdwDeferWinEvent;
  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  v4 = gSharedInfo[1];
  v5 = v4 + 32LL * giheLast;
  v6 = (__int64 *)gpKernelHandleTable;
  while ( v4 <= v5 )
  {
    v23 = 0LL;
    if ( *(_BYTE *)(v4 + 24) == 1 )
    {
      v7 = *v6;
      if ( (unsigned int)IsTopLevelWindow(*v6) )
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
        UpdateMonitorForWindowAndChildren(v7, NewMonitor, 0LL, 0LL);
      }
      v11 = *(_QWORD *)(v7 + 40);
      if ( (*(_BYTE *)(v11 + 27) & 0x20) != 0
        && (*(_BYTE *)(v11 + 26) & 0x20) == 0
        && (v2 || (unsigned int)IsWindowDesktopComposed(v7)) )
      {
        *(_DWORD *)(*(_QWORD *)(v7 + 40) + 232LL) &= ~0x80000u;
        v12 = GetRedirectionBitmap(v7) == 0;
        RedirectionBitmap = (HSURF)GetRedirectionBitmap(v7);
        if ( (unsigned int)GreIsReusedDeviceDependentBitmap(RedirectionBitmap) )
          a2 = 1;
        v22 = a2;
        RecreateRedirectionBitmap((struct tagWND *)v7, 0, (__int64)&v23);
        LOBYTE(v14) = IsDesktopWindow(v7);
        v16 = v14;
        if ( v23 )
        {
          if ( v14
            || v15 >= 0
            || (*(_DWORD *)(*(_QWORD *)(v7 + 40) + 232LL) & 0x20) == 0
            || !(unsigned int)RestoreOldRedirectionBitmap((struct tagWND *)v7, (HBITMAP)v23) )
          {
            if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
              && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 456)
              && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 456)
                                          + 8LL)
                            + 64LL) & 1) != 0
              && (v17 = *(_DWORD *)(*(_QWORD *)(v7 + 40) + 288LL), (v17 & 0xF) == 0)
              && (v17 & 0x40000000) != 0 )
            {
              v18 = v23;
              v19 = 96 * GreGetBitmapDpiScaleValue(v23);
              v20 = v19 == (__int16)GreGetScaledLogPixels(*(unsigned __int16 *)(*(_QWORD *)(v7 + 40) + 284LL));
              v2 = a1;
              v12 |= !v20;
            }
            else
            {
              v18 = v23;
            }
            DeleteOrSetRedirectionBitmap(v7, v18, 1);
            a2 = v22;
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
        UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v24);
        zzzLockDisplayAreaAndInvalidateDCCache(v7, 0, 0LL);
        if ( v12 )
          xxxInternalInvalidate((struct tagWND *)v7, (HRGN)1, 0x401u);
        UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v24);
      }
    }
LABEL_4:
    v4 += 32LL;
    v6 += 3;
  }
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  zzzEndDeferWinEventNotify();
}
