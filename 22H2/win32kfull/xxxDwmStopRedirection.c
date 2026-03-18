/*
 * XREFs of xxxDwmStopRedirection @ 0x1C0057060
 * Callers:
 *     NtUserDwmKernelShutdown @ 0x1C01CF210 (NtUserDwmKernelShutdown.c)
 * Callees:
 *     zzzEndDeferWinEventNotify @ 0x1C0025058 (zzzEndDeferWinEventNotify.c)
 *     xxxRedrawWindow @ 0x1C0031604 (xxxRedrawWindow.c)
 *     GreDwmShutdown @ 0x1C0054344 (GreDwmShutdown.c)
 *     GreDwmUseDeviceBitmaps @ 0x1C0058454 (GreDwmUseDeviceBitmaps.c)
 *     DwmAsyncDesktopFree @ 0x1C005857C (DwmAsyncDesktopFree.c)
 *     zzzDecomposeDesktop @ 0x1C005861C (zzzDecomposeDesktop.c)
 *     DwmNotifyChildrenAddRemove @ 0x1C0059F3C (DwmNotifyChildrenAddRemove.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C0066EB8 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     _GetProcessWindowStation @ 0x1C006B240 (_GetProcessWindowStation.c)
 *     bSetDevDragRect @ 0x1C006EAD0 (bSetDevDragRect.c)
 *     DeleteOrSetRedirectionBitmap @ 0x1C00C825C (DeleteOrSetRedirectionBitmap.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C011BB80 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ChangeComposableCursor @ 0x1C01A8FC0 (ChangeComposableCursor.c)
 *     StopFade @ 0x1C01BCD50 (StopFade.c)
 *     GreDxDwmShutdown @ 0x1C026FEB0 (GreDxDwmShutdown.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 xxxDwmStopRedirection()
{
  __int64 ProcessWindowStation; // rbp
  unsigned int v1; // edi
  __int64 i; // rsi
  void *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 j; // rsi
  struct tagWND *v10; // rbp
  int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  _QWORD v16[7]; // [rsp+20h] [rbp-38h] BYREF
  char v17; // [rsp+68h] [rbp+10h] BYREF

  ProcessWindowStation = GetProcessWindowStation(0LL);
  v1 = 0;
  if ( (unsigned int)IsDwmApiPortRegistered() && (*(_DWORD *)(ProcessWindowStation + 64) & 0x204) == 0x200 )
  {
    ++gdwDeferWinEvent;
    AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v17);
    if ( gfade[2] )
      StopFade();
    bSetDevDragRect(*(HDEV *)(gpDispInfo + 40LL));
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
          v3 = (void *)ReferenceDwmApiPort(**(_QWORD **)(i + 8));
          DwmAsyncDesktopFree(v3);
        }
      }
      v4 = *(_QWORD *)(ProcessWindowStation + 120);
      if ( v4 )
        DeleteOrSetRedirectionBitmap(*(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL), v4, 1LL);
    }
    GreDwmShutdown(*(_QWORD *)(gpDispInfo + 40LL));
    *(_DWORD *)(ProcessWindowStation + 64) &= ~0x200u;
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v17);
    zzzEndDeferWinEventNotify();
    if ( (unsigned int)UserIsWddmConnectedSession() )
    {
      UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
      GreDxDwmShutdown();
      EnterCrit(1LL, 0LL);
    }
    if ( grpdeskRitInput )
    {
      for ( j = *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 40LL) + 16LL); j; j = *(_QWORD *)(j + 32) )
      {
        if ( (*(_DWORD *)(j + 48) & 8) == 0 )
        {
          v10 = *(struct tagWND **)(*(_QWORD *)(j + 8) + 24LL);
          if ( v10 )
          {
            v16[2] = 0LL;
            v16[0] = *(_QWORD *)(gptiCurrent + 416LL);
            *(_QWORD *)(gptiCurrent + 416LL) = v16;
            v16[1] = v10;
            HMLockObject(v10);
            v11 = 645;
            if ( !(unsigned int)GreDwmUseDeviceBitmaps() )
              v11 = 66181;
            xxxRedrawWindow(v10, 0LL, 0LL, v11);
            ThreadUnlock1(v13, v12, v14);
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
