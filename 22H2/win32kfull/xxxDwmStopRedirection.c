/*
 * XREFs of xxxDwmStopRedirection @ 0x1C00E9620
 * Callers:
 *     NtUserDwmKernelShutdown @ 0x1C01F8060 (NtUserDwmKernelShutdown.c)
 * Callees:
 *     _GetProcessWindowStation @ 0x1C000EED0 (_GetProcessWindowStation.c)
 *     bSetDevDragRect @ 0x1C0029460 (bSetDevDragRect.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0069A50 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0069AAC (--1UserAtomicCheck@@QEAA@XZ.c)
 *     zzzEndDeferWinEventNotify @ 0x1C006DEA4 (zzzEndDeferWinEventNotify.c)
 *     xxxRedrawWindow @ 0x1C00722B4 (xxxRedrawWindow.c)
 *     DwmAsyncDesktopFree @ 0x1C00E9864 (DwmAsyncDesktopFree.c)
 *     DwmNotifyChildrenAddRemove @ 0x1C00E9904 (DwmNotifyChildrenAddRemove.c)
 *     zzzDecomposeDesktop @ 0x1C00EAA3C (zzzDecomposeDesktop.c)
 *     DeleteOrSetRedirectionBitmap @ 0x1C00EF608 (DeleteOrSetRedirectionBitmap.c)
 *     GreDwmShutdown @ 0x1C0134054 (GreDwmShutdown.c)
 *     ChangeComposableCursor @ 0x1C01D3CFC (ChangeComposableCursor.c)
 *     StopFade @ 0x1C01E7A90 (StopFade.c)
 *     GreDxDwmShutdown @ 0x1C0277860 (GreDxDwmShutdown.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 xxxDwmStopRedirection()
{
  __int64 ProcessWindowStation; // rbp
  unsigned int v1; // edi
  __int64 v2; // r9
  __int64 i; // rsi
  __int64 v4; // rdx
  void *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 j; // rbx
  struct tagWND *v9; // rsi
  int v10; // r8d
  __int64 v11; // rcx
  _QWORD v13[4]; // [rsp+30h] [rbp-38h] BYREF
  char v14; // [rsp+78h] [rbp+10h] BYREF

  ProcessWindowStation = GetProcessWindowStation(0LL);
  v1 = 0;
  if ( (unsigned int)IsDwmApiPortRegistered() && (*(_DWORD *)(ProcessWindowStation + 64) & 0x204) == 0x200 )
  {
    ++gdwDeferWinEvent;
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v14);
    if ( gfade[2] )
      StopFade();
    bSetDevDragRect(*(HDEV *)(gpDispInfo + 40LL), 0LL, 0LL, 0);
    if ( gbScreenCaptureSoftwareCursorEnabled )
    {
      ChangeComposableCursor(0LL);
      gbScreenCaptureSoftwareCursorEnabled = 0;
    }
    if ( grpdeskRitInput )
    {
      for ( i = *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 40LL) + 16LL); i; i = *(_QWORD *)(i + 32) )
      {
        if ( (*(_DWORD *)(**(_QWORD **)(i + 8) + 64LL) & 1) != 0 )
        {
          zzzDecomposeDesktop((struct tagDESKTOP *)i);
          DwmNotifyChildrenAddRemove((struct tagDESKTOP *)i);
          v5 = (void *)ReferenceDwmApiPort(**(_QWORD **)(i + 8), v4);
          DwmAsyncDesktopFree(v5);
        }
      }
      v6 = *(_QWORD *)(ProcessWindowStation + 120);
      if ( v6 )
        DeleteOrSetRedirectionBitmap(*(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL), v6, 1LL, v2);
    }
    GreDwmShutdown(*(_QWORD *)(gpDispInfo + 40LL));
    *(_DWORD *)(ProcessWindowStation + 64) &= ~0x200u;
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v14);
    zzzEndDeferWinEventNotify();
    if ( (unsigned int)UserIsWddmConnectedSession() )
    {
      if ( gdwInAtomicOperation )
      {
        v7 = gdwExtraInstrumentations;
        if ( (gdwExtraInstrumentations & 1) != 0 )
          KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
      }
      UserSessionSwitchLeaveCrit(v7);
      GreDxDwmShutdown();
      EnterCrit(0LL, 1LL);
    }
    if ( grpdeskRitInput )
    {
      for ( j = *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 40LL) + 16LL); j; j = *(_QWORD *)(j + 32) )
      {
        if ( (*(_DWORD *)(j + 48) & 8) == 0 )
        {
          v9 = *(struct tagWND **)(*(_QWORD *)(j + 8) + 24LL);
          if ( v9 )
          {
            v13[2] = 0LL;
            v13[0] = *(_QWORD *)(gptiCurrent + 416LL);
            *(_QWORD *)(gptiCurrent + 416LL) = v13;
            v13[1] = v9;
            HMLockObject(v9);
            v10 = 0;
            if ( g_pDwmState )
              v10 = gfDwmDeviceBitmapsEnabled;
            xxxRedrawWindow(v9, 0LL, 0LL, v10 != 0 ? 645 : 66181);
            ThreadUnlock1(v11);
          }
        }
      }
    }
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return v1;
}
