/*
 * XREFs of zzzUpdateWindowsAfterModeChange @ 0x1C008E138
 * Callers:
 *     zzzResetSharedDesktops @ 0x1C008DF60 (zzzResetSharedDesktops.c)
 * Callees:
 *     zzzEndDeferWinEventNotify @ 0x1C0025058 (zzzEndDeferWinEventNotify.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C00317F0 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     xxxInternalInvalidate @ 0x1C0032FD0 (xxxInternalInvalidate.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C0066EB8 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     UpdateMonitorForWindowAndChildren @ 0x1C008E52C (UpdateMonitorForWindowAndChildren.c)
 *     GreIsReusedDeviceDependentBitmap @ 0x1C008E90C (GreIsReusedDeviceDependentBitmap.c)
 *     RecreateRedirectionBitmap @ 0x1C008E968 (RecreateRedirectionBitmap.c)
 *     DeleteOrSetRedirectionBitmap @ 0x1C00C825C (DeleteOrSetRedirectionBitmap.c)
 *     IsDesktopWindow @ 0x1C00D3DF0 (IsDesktopWindow.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EDC14 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     GetNewMonitor @ 0x1C010B39C (GetNewMonitor.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C011BB80 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     GetRedirectionBitmap @ 0x1C011DD30 (GetRedirectionBitmap.c)
 *     W32GetThreadWin32Thread @ 0x1C011E0CC (W32GetThreadWin32Thread.c)
 *     _IsTopLevelWindow @ 0x1C0122310 (_IsTopLevelWindow.c)
 *     ?RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z @ 0x1C01BC970 (-RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z.c)
 *     GreGetBitmapDpiScaleValue @ 0x1C02A7D84 (GreGetBitmapDpiScaleValue.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall zzzUpdateWindowsAfterModeChange(int a1, int a2)
{
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // rbp
  __int64 *v6; // r15
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  int v11; // r14d
  HSURF RedirectionBitmap; // rax
  int v13; // eax
  int v14; // r9d
  int v15; // r12d
  int v16; // ecx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int16 v19; // bx
  bool v20; // zf
  int v21; // [rsp+78h] [rbp+10h]
  char v22; // [rsp+80h] [rbp+18h] BYREF
  HSURF v23; // [rsp+88h] [rbp+20h] BYREF

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
        goto LABEL_39;
      v8 = *(_QWORD *)(v7 + 24);
      v9 = 0LL;
      if ( v8 )
        v9 = *(_QWORD *)(v8 + 104);
      if ( *(_QWORD *)(v7 + 104) == v9 )
      {
LABEL_39:
        if ( !ValidateHmonitorNoRip(*(_QWORD *)(*(_QWORD *)(v7 + 40) + 256LL)) )
          GetNewMonitor((struct tagWND *)v7);
        UpdateMonitorForWindowAndChildren((struct tagWND *)v7);
      }
      v10 = *(_QWORD *)(v7 + 40);
      if ( (*(_BYTE *)(v10 + 27) & 0x20) != 0
        && (*(_BYTE *)(v10 + 26) & 0x20) == 0
        && (a1 || (unsigned int)IsWindowDesktopComposed(v7)) )
      {
        *(_DWORD *)(v7 + 320) &= ~0x20000u;
        v11 = GetRedirectionBitmap(v7) == 0;
        RedirectionBitmap = (HSURF)GetRedirectionBitmap(v7);
        if ( (unsigned int)GreIsReusedDeviceDependentBitmap(RedirectionBitmap) )
          a2 = 1;
        v21 = a2;
        RecreateRedirectionBitmap((struct tagWND *)v7, 0, (__int64)&v23);
        v13 = IsDesktopWindow(v7);
        v15 = v13;
        if ( v23 )
        {
          if ( !v13
            && v14 < 0
            && (*(_DWORD *)(*(_QWORD *)(v7 + 40) + 232LL) & 2) != 0
            && (unsigned int)RestoreOldRedirectionBitmap((struct tagWND *)v7, (HBITMAP)v23) )
          {
            goto LABEL_33;
          }
          if ( W32GetThreadWin32Thread(KeGetCurrentThread()) )
          {
            if ( *((_QWORD *)PtiCurrentShared() + 57) )
            {
              if ( (*(_DWORD *)(**(_QWORD **)(*((_QWORD *)PtiCurrentShared() + 57) + 8LL) + 64LL) & 1) != 0 )
              {
                v16 = *(_DWORD *)(*(_QWORD *)(v7 + 40) + 288LL);
                if ( (v16 & 0xF) == 0 && (v16 & 0x40000000) != 0 )
                {
                  v19 = 96 * GreGetBitmapDpiScaleValue(v23);
                  v20 = v19 == (__int16)GreGetScaledLogPixels(*(unsigned __int16 *)(*(_QWORD *)(v7 + 40) + 284LL));
                  a2 = v21;
                  v11 |= !v20;
                }
              }
            }
          }
          DeleteOrSetRedirectionBitmap(v7, v23, 1LL);
        }
        if ( !v15 )
        {
LABEL_33:
          if ( !v11 )
            goto LABEL_4;
        }
        AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v22);
        zzzLockDisplayAreaAndInvalidateDCCache(v7, 0, 0LL);
        if ( v11 )
          xxxInternalInvalidate((struct tagWND *)v7, (HRGN)1, 0x401u);
        AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v22, v17, v18);
      }
    }
LABEL_4:
    v4 += 32LL;
    v6 += 3;
  }
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  zzzEndDeferWinEventNotify();
}
