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
  __int64 RedirectionBitmap; // rax
  __int64 v13; // rdx
  int v14; // eax
  int v15; // r9d
  int v16; // r12d
  __int64 v17; // rcx
  __int64 v18; // rcx
  int v19; // ecx
  __int16 v20; // bx
  bool v21; // zf
  int v22; // [rsp+78h] [rbp+10h]
  char v23; // [rsp+80h] [rbp+18h] BYREF
  HBITMAP v24; // [rsp+88h] [rbp+20h] BYREF

  ++gdwDeferWinEvent;
  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  v4 = gSharedInfo[1];
  v5 = v4 + 32LL * giheLast;
  v6 = (__int64 *)gpKernelHandleTable;
  while ( v4 <= v5 )
  {
    v24 = 0LL;
    if ( *(_BYTE *)(v4 + 24) == 1 )
    {
      v7 = *v6;
      if ( IsTopLevelWindow(*v6) )
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
        RedirectionBitmap = GetRedirectionBitmap(v7);
        if ( (unsigned int)GreIsReusedDeviceDependentBitmap(RedirectionBitmap, v13) )
          a2 = 1;
        v22 = a2;
        RecreateRedirectionBitmap((void **)v7, 0, 0, a2, 0, (HBRUSH *)&v24);
        LOBYTE(v14) = IsDesktopWindow(v7);
        v16 = v14;
        if ( v24 )
        {
          if ( !v14
            && v15 < 0
            && (*(_DWORD *)(*(_QWORD *)(v7 + 40) + 232LL) & 2) != 0
            && (unsigned int)RestoreOldRedirectionBitmap((struct tagWND *)v7, v24) )
          {
            goto LABEL_33;
          }
          if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
          {
            if ( *((_QWORD *)PtiCurrentShared(v17) + 57) )
            {
              if ( (*(_DWORD *)(**(_QWORD **)(*((_QWORD *)PtiCurrentShared(v18) + 57) + 8LL) + 64LL) & 1) != 0 )
              {
                v19 = *(_DWORD *)(*(_QWORD *)(v7 + 40) + 288LL);
                if ( (v19 & 0xF) == 0 && (v19 & 0x40000000) != 0 )
                {
                  v20 = 96 * GreGetBitmapDpiScaleValue(v24);
                  v21 = v20 == (__int16)GreGetScaledLogPixels(*(unsigned __int16 *)(*(_QWORD *)(v7 + 40) + 284LL));
                  a2 = v22;
                  v11 |= !v21;
                }
              }
            }
          }
          DeleteOrSetRedirectionBitmap(v7, (__int64)v24, 1);
        }
        if ( !v16 )
        {
LABEL_33:
          if ( !v11 )
            goto LABEL_4;
        }
        AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v23);
        zzzLockDisplayAreaAndInvalidateDCCache(v7, 0, 0LL);
        if ( v11 )
          xxxInternalInvalidate((struct tagWND *)v7, (HRGN)1, 0x401u);
        AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v23);
      }
    }
LABEL_4:
    v4 += 32LL;
    v6 += 3;
  }
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  zzzEndDeferWinEventNotify();
}
