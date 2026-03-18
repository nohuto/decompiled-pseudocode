/*
 * XREFs of BuildHwndList @ 0x1C0071A90
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0067528 (xxxRealDefWindowProc.c)
 *     ?BuildWindowListWithDpiBoundaryInfo@@YAPEAUtagWLDBI@@PEAUtagWND@@0PEAUtagBWL@@PEAH@Z @ 0x1C006A228 (-BuildWindowListWithDpiBoundaryInfo@@YAPEAUtagWLDBI@@PEAUtagWND@@0PEAUtagBWL@@PEAH@Z.c)
 *     UpdateMonitorForWindowAndChildren @ 0x1C006A424 (UpdateMonitorForWindowAndChildren.c)
 *     NtUserBuildHwndList @ 0x1C0070A10 (NtUserBuildHwndList.c)
 *     ?xxxSendDpiChangedMsgs@@YA_NPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z @ 0x1C0078980 (-xxxSendDpiChangedMsgs@@YA_NPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z.c)
 *     ?DwmNotifyChildrenLinkUnlink@@YAHPEBUtagDESKTOP@@H@Z @ 0x1C0098738 (-DwmNotifyChildrenLinkUnlink@@YAHPEBUtagDESKTOP@@H@Z.c)
 *     _SetDeferredDpiStateForWindowAndChildren @ 0x1C009C90C (_SetDeferredDpiStateForWindowAndChildren.c)
 *     ?xxxSendActivateAppMessage@@YAXAEBUtagAAS@@@Z @ 0x1C00A25A8 (-xxxSendActivateAppMessage@@YAXAEBUtagAAS@@@Z.c)
 *     ?xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z @ 0x1C00A6928 (-xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z.c)
 *     xxxBroadcastMessageEx @ 0x1C00A9E58 (xxxBroadcastMessageEx.c)
 *     ?xxxProcessRecalcForThread@DesktopRecalc@@YAXXZ @ 0x1C00AEE98 (-xxxProcessRecalcForThread@DesktopRecalc@@YAXXZ.c)
 *     xxxShowOwnedWindows @ 0x1C00CB710 (xxxShowOwnedWindows.c)
 *     ?xxxCheckImeShowStatus@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x1C00DFE44 (-xxxCheckImeShowStatus@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@@Z.c)
 *     xxxDWP_UpdateUIState @ 0x1C00FB224 (xxxDWP_UpdateUIState.c)
 *     ?AssociateInputContextEx@@YA?AW4_AIC_STATUS@@PEAUtagWND@@PEAUtagIMC@@K@Z @ 0x1C0106DEC (-AssociateInputContextEx@@YA-AW4_AIC_STATUS@@PEAUtagWND@@PEAUtagIMC@@K@Z.c)
 *     xxxClientShutdown @ 0x1C01093D0 (xxxClientShutdown.c)
 *     ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x1C013F388 (-xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z.c)
 *     ?DestroyInputContext@@YAHPEAUtagIMC@@@Z @ 0x1C01498D8 (-DestroyInputContext@@YAHPEAUtagIMC@@@Z.c)
 *     xxxArrangeIconicWindows @ 0x1C014E0E4 (xxxArrangeIconicWindows.c)
 *     xxxMetricsRecalc @ 0x1C015823C (xxxMetricsRecalc.c)
 *     ?StartRecalcForDesktop@DesktopRecalc@@YAXPEAUtagDESKTOP@@PEAVCMonitorTopology@@W4StartRecalcOption@@@Z @ 0x1C015CF00 (-StartRecalcForDesktop@DesktopRecalc@@YAXPEAUtagDESKTOP@@PEAVCMonitorTopology@@W4StartRecalcOpti.c)
 *     xxxInternalEnumWindow @ 0x1C01CE524 (xxxInternalEnumWindow.c)
 *     ?FixupOverlayWindowAttributes@@YAHPEAUtagWND@@@Z @ 0x1C01D2150 (-FixupOverlayWindowAttributes@@YAHPEAUtagWND@@@Z.c)
 *     SnapshotWindowRects @ 0x1C01D31E8 (SnapshotWindowRects.c)
 *     ?xxxSendGDIScaledDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagBWL@@@Z @ 0x1C01DF164 (-xxxSendGDIScaledDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagBWL@@@Z.c)
 *     xxxForceWindowToDpiForTest @ 0x1C01E0AE0 (xxxForceWindowToDpiForTest.c)
 *     ?InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z @ 0x1C01ED4B8 (-InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z.c)
 *     ?xxxProcessPositionEvent@ShellWindowPos@@YAXPEAUtagQMSG@@@Z @ 0x1C02377B8 (-xxxProcessPositionEvent@ShellWindowPos@@YAXPEAUtagQMSG@@@Z.c)
 *     ?xxxForceUpdateProcessDpiAwarenessContext@@YAXPEAUtagWND@@K@Z @ 0x1C0238468 (-xxxForceUpdateProcessDpiAwarenessContext@@YAXPEAUtagWND@@K@Z.c)
 *     ?ChangeWindowTreeProtection@@YAHPEAUtagWND@@K@Z @ 0x1C0243670 (-ChangeWindowTreeProtection@@YAHPEAUtagWND@@K@Z.c)
 * Callees:
 *     ?InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z @ 0x1C0071CD0 (-InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z.c)
 *     ?InternalRebuildHwndListForIMEClass@@YAPEAUtagBWL@@PEAU1@@Z @ 0x1C0072370 (-InternalRebuildHwndListForIMEClass@@YAPEAUtagBWL@@PEAU1@@Z.c)
 *     ?EligibleWindow@ShellWindowManagement@@YA_NPEBUtagWND@@@Z @ 0x1C0109B50 (-EligibleWindow@ShellWindowManagement@@YA_NPEBUtagWND@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
struct tagBWL *__fastcall BuildHwndList(ShellWindowManagement *this, const struct tagWND *a2, __int64 a3, int a4)
{
  __int64 v4; // r12
  char v7; // di
  __int64 v9; // rax
  struct tagBWL *v10; // r14
  __int64 v11; // rsi
  int v12; // ecx
  __int64 v13; // rsi
  _QWORD *v14; // rax
  __int64 *ThreadWin32Thread; // rax
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rsi
  __int64 v20; // rcx

  v4 = 0LL;
  v7 = (char)a2;
  if ( a4 == 1 && (v10 = pbwlCache) != 0LL )
  {
    pbwlCache = 0LL;
  }
  else
  {
    v9 = Win32AllocPoolZInit(296LL, 1819767637LL);
    v10 = (struct tagBWL *)v9;
    if ( !v9 )
      return 0LL;
    *(_QWORD *)(v9 + 16) = v9 + 280;
  }
  *((_QWORD *)v10 + 3) = a3;
  for ( *((_QWORD *)v10 + 1) = (char *)v10 + 32; this; this = (ShellWindowManagement *)*((_QWORD *)this + 11) )
  {
    v11 = *((_QWORD *)v10 + 3);
    if ( (v7 & 0x10) == 0
      || (v12 = *(_DWORD *)(*((_QWORD *)this + 5) + 236LL), (unsigned int)(v12 - 1) <= 1)
      || v12 == 16 )
    {
      if ( (v7 & 0x20) == 0
        || (v20 = *((_QWORD *)this + 5), (*(_BYTE *)(v20 + 31) & 0x11) != 0x10)
        || (*(_BYTE *)(v20 + 20) & 0x40) != 0
        || !ShellWindowManagement::EligibleWindow(this, a2) )
      {
        if ( !v11 || v11 == *((_QWORD *)this + 2) )
        {
          **((_QWORD **)v10 + 1) = *(_QWORD *)this;
          *((_QWORD *)v10 + 1) += 8LL;
          v13 = *((_QWORD *)v10 + 1);
          if ( v13 == *((_QWORD *)v10 + 2) )
          {
            v17 = v13 - (_QWORD)v10;
            v18 = UserReAllocPool(v10, (unsigned int)v17 + 8LL, (unsigned int)v17 + 72LL, 1819767637LL);
            if ( !v18 )
              break;
            v19 = v18 + v17;
            v10 = (struct tagBWL *)v18;
            *(_QWORD *)(v18 + 8) = v19;
            *(_QWORD *)(v18 + 16) = v19 + 64;
          }
        }
      }
    }
    if ( (v7 & 1) != 0 )
    {
      a2 = (const struct tagWND *)*((_QWORD *)this + 14);
      if ( a2 )
      {
        v10 = InternalBuildHwndList(v10, a2, 3u);
        if ( *((_QWORD *)v10 + 1) >= *((_QWORD *)v10 + 2) )
          break;
      }
    }
    if ( (v7 & 2) == 0 )
      break;
  }
  v14 = (_QWORD *)*((_QWORD *)v10 + 1);
  if ( (unsigned __int64)v14 >= *((_QWORD *)v10 + 2) )
  {
    Win32FreePool(v10);
    return 0LL;
  }
  *v14 = 1LL;
  if ( (v7 & 8) != 0 )
    v10 = InternalRebuildHwndListForIMEClass(v10);
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v4 = *ThreadWin32Thread;
  *((_QWORD *)v10 + 3) = v4;
  if ( a4 )
  {
    *((_QWORD *)v10 + 3) = gptiCurrent;
    *(_QWORD *)v10 = gpbwlList;
    gpbwlList = v10;
  }
  else
  {
    *(_QWORD *)v10 = 3LL;
  }
  return v10;
}
