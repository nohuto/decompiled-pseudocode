/*
 * XREFs of BuildHwndList @ 0x1C00D2540
 * Callers:
 *     xxxClientShutdown @ 0x1C003BB74 (xxxClientShutdown.c)
 *     xxxDWP_UpdateUIState @ 0x1C004AAD8 (xxxDWP_UpdateUIState.c)
 *     xxxBroadcastMessageEx @ 0x1C004C8D0 (xxxBroadcastMessageEx.c)
 *     ?DwmNotifyChildrenLinkUnlink@@YAHPEBUtagDESKTOP@@H@Z @ 0x1C0059F80 (-DwmNotifyChildrenLinkUnlink@@YAHPEBUtagDESKTOP@@H@Z.c)
 *     ?xxxSendActivateAppMessage@@YAXAEBUtagAAS@@@Z @ 0x1C0066CF0 (-xxxSendActivateAppMessage@@YAXAEBUtagAAS@@@Z.c)
 *     UpdateMonitorForWindowAndChildren @ 0x1C008E52C (UpdateMonitorForWindowAndChildren.c)
 *     ?BuildWindowListWithDpiBoundaryInfo@@YAPEAUtagWLDBI@@PEAUtagWND@@0PEAUtagBWL@@PEAH@Z @ 0x1C008E62C (-BuildWindowListWithDpiBoundaryInfo@@YAPEAUtagWLDBI@@PEAUtagWND@@0PEAUtagBWL@@PEAH@Z.c)
 *     ?xxxCheckImeShowStatus@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x1C00903C0 (-xxxCheckImeShowStatus@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@@Z.c)
 *     ?StartRecalcForDesktop@DesktopRecalc@@YAXPEAUtagDESKTOP@@PEAVCMonitorTopology@@W4StartRecalcOption@@@Z @ 0x1C00C21FC (-StartRecalcForDesktop@DesktopRecalc@@YAXPEAUtagDESKTOP@@PEAVCMonitorTopology@@W4StartRecalcOpti.c)
 *     ?xxxProcessRecalcForThread@DesktopRecalc@@YAXXZ @ 0x1C00C2734 (-xxxProcessRecalcForThread@DesktopRecalc@@YAXXZ.c)
 *     xxxShowOwnedWindows @ 0x1C00C4208 (xxxShowOwnedWindows.c)
 *     ?xxxSendDpiChangedMsgs@@YA_NPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z @ 0x1C00D1ABC (-xxxSendDpiChangedMsgs@@YA_NPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z.c)
 *     NtUserBuildHwndList @ 0x1C00D1F70 (NtUserBuildHwndList.c)
 *     ?xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z @ 0x1C00F1BB8 (-xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z.c)
 *     xxxRealDefWindowProc @ 0x1C0108B10 (xxxRealDefWindowProc.c)
 *     xxxInternalEnumWindow @ 0x1C01A7E14 (xxxInternalEnumWindow.c)
 *     ?AssociateInputContextEx@@YA?AW4_AIC_STATUS@@PEAUtagWND@@PEAUtagIMC@@K@Z @ 0x1C01B75AC (-AssociateInputContextEx@@YA-AW4_AIC_STATUS@@PEAUtagWND@@PEAUtagIMC@@K@Z.c)
 *     ?DestroyInputContext@@YAHPEAUtagIMC@@@Z @ 0x1C01B7754 (-DestroyInputContext@@YAHPEAUtagIMC@@@Z.c)
 *     ?xxxSendGDIScaledDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagBWL@@@Z @ 0x1C01B974C (-xxxSendGDIScaledDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagBWL@@@Z.c)
 *     xxxForceWindowToDpiForTest @ 0x1C01BAC28 (xxxForceWindowToDpiForTest.c)
 *     ?FixupOverlayWindowAttributes@@YAHPEAUtagWND@@@Z @ 0x1C01C73E8 (-FixupOverlayWindowAttributes@@YAHPEAUtagWND@@@Z.c)
 *     xxxMetricsRecalc @ 0x1C01C88FC (xxxMetricsRecalc.c)
 *     ?InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z @ 0x1C01C9060 (-InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z.c)
 *     ?xxxProcessPositionEvent@ShellWindowPos@@YAXPEAUtagQMSG@@@Z @ 0x1C021EBEC (-xxxProcessPositionEvent@ShellWindowPos@@YAXPEAUtagQMSG@@@Z.c)
 *     ?xxxForceUpdateProcessDpiAwarenessContext@@YAXPEAUtagWND@@K@Z @ 0x1C021F904 (-xxxForceUpdateProcessDpiAwarenessContext@@YAXPEAUtagWND@@K@Z.c)
 *     ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x1C0222580 (-xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z.c)
 *     ?ChangeWindowTreeProtection@@YAHPEAUtagWND@@K@Z @ 0x1C022CB18 (-ChangeWindowTreeProtection@@YAHPEAUtagWND@@K@Z.c)
 *     xxxArrangeIconicWindows @ 0x1C0239A1C (xxxArrangeIconicWindows.c)
 * Callees:
 *     ?EligibleWindow@ShellWindowManagement@@YA_NPEBUtagWND@@@Z @ 0x1C00AE708 (-EligibleWindow@ShellWindowManagement@@YA_NPEBUtagWND@@@Z.c)
 *     ?InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z @ 0x1C00D27A0 (-InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z.c)
 *     ?InternalRebuildHwndListForIMEClass@@YAPEAUtagBWL@@PEAU1@@Z @ 0x1C00D2EE0 (-InternalRebuildHwndListForIMEClass@@YAPEAUtagBWL@@PEAU1@@Z.c)
 *     ??B?$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ @ 0x1C0138C00 (--B-$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C01410D8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

// write access to const memory has been detected, the output may be wrong!
struct tagBWL *__fastcall BuildHwndList(ShellWindowManagement *this, const struct tagWND *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r15
  int v5; // r12d
  char v7; // bp
  ShellWindowManagement *v8; // rdi
  struct tagBWL *v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rsi
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rsi
  _QWORD *v16; // rax
  PERESOURCE *v18; // rax
  __int64 *ThreadWin32Thread; // rax

  v4 = 0LL;
  v5 = a4;
  v7 = (char)a2;
  v8 = this;
  if ( (_DWORD)a4 == 1 && (v9 = pbwlCache) != 0LL )
  {
    pbwlCache = 0LL;
  }
  else
  {
    v10 = Win32AllocPoolZInit(296LL, 1819767637LL);
    v9 = (struct tagBWL *)v10;
    if ( !v10 )
      return 0LL;
    *(_QWORD *)(v10 + 16) = v10 + 280;
  }
  *((_QWORD *)v9 + 3) = a3;
  for ( *((_QWORD *)v9 + 1) = (char *)v9 + 32; v8; v8 = (ShellWindowManagement *)*((_QWORD *)v8 + 11) )
  {
    v11 = *((_QWORD *)v9 + 3);
    if ( (v7 & 0x10) == 0
      || (a2 = (const struct tagWND *)*(unsigned int *)(*((_QWORD *)v8 + 5) + 236LL), (unsigned int)((_DWORD)a2 - 1) <= 1)
      || (_DWORD)a2 == 16 )
    {
      if ( (v7 & 0x20) == 0
        || (a2 = (const struct tagWND *)*((_QWORD *)v8 + 5), (*((_BYTE *)a2 + 31) & 0x11) != 0x10)
        || (*((_BYTE *)a2 + 20) & 0x40) != 0
        || !ShellWindowManagement::EligibleWindow((ShellWindowManagement **)v8, a2, a3) )
      {
        if ( !v11 || v11 == *((_QWORD *)v8 + 2) )
        {
          this = (ShellWindowManagement *)*((_QWORD *)v9 + 1);
          *(_QWORD *)this = *(_QWORD *)v8;
          v12 = *((_QWORD *)v9 + 1) + 8LL;
          *((_QWORD *)v9 + 1) = v12;
          if ( v12 == *((_QWORD *)v9 + 2) )
          {
            v13 = v12 - (_QWORD)v9;
            v14 = UserReAllocPool(v9, (unsigned int)v13 + 8LL, (unsigned int)v13 + 72LL, 1819767637LL);
            if ( !v14 )
              break;
            v15 = v14 + v13;
            v9 = (struct tagBWL *)v14;
            *(_QWORD *)(v14 + 8) = v15;
            this = (ShellWindowManagement *)(v15 + 64);
            *(_QWORD *)(v14 + 16) = v15 + 64;
          }
        }
      }
    }
    if ( (v7 & 1) != 0 )
    {
      a2 = (const struct tagWND *)*((_QWORD *)v8 + 14);
      if ( a2 )
      {
        v9 = InternalBuildHwndList(v9, a2, 3u);
        if ( *((_QWORD *)v9 + 1) >= *((_QWORD *)v9 + 2) )
          break;
      }
    }
    if ( (v7 & 2) == 0 )
      break;
  }
  v16 = (_QWORD *)*((_QWORD *)v9 + 1);
  if ( (unsigned __int64)v16 >= *((_QWORD *)v9 + 2) )
  {
    Win32FreePool(v9);
    return 0LL;
  }
  *v16 = 1LL;
  if ( (v7 & 8) != 0 )
    v9 = InternalRebuildHwndListForIMEClass(v9);
  v18 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(this, a2, a3, a4);
  if ( !ExIsResourceAcquiredSharedLite(*v18) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 151LL);
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v4 = *ThreadWin32Thread;
  *((_QWORD *)v9 + 3) = v4;
  if ( v5 )
  {
    *((_QWORD *)v9 + 3) = gptiCurrent;
    *(_QWORD *)v9 = gpbwlList;
    gpbwlList = v9;
  }
  else
  {
    *(_QWORD *)v9 = 3LL;
  }
  return v9;
}
