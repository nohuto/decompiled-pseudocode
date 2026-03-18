/*
 * XREFs of FreeHwndList @ 0x1C00D2E50
 * Callers:
 *     xxxClientShutdown @ 0x1C003BB74 (xxxClientShutdown.c)
 *     xxxDWP_UpdateUIState @ 0x1C004AAD8 (xxxDWP_UpdateUIState.c)
 *     xxxBroadcastMessageEx @ 0x1C004C8D0 (xxxBroadcastMessageEx.c)
 *     ?DwmNotifyChildrenLinkUnlink@@YAHPEBUtagDESKTOP@@H@Z @ 0x1C0059F80 (-DwmNotifyChildrenLinkUnlink@@YAHPEBUtagDESKTOP@@H@Z.c)
 *     ?xxxSendActivateAppMessage@@YAXAEBUtagAAS@@@Z @ 0x1C0066CF0 (-xxxSendActivateAppMessage@@YAXAEBUtagAAS@@@Z.c)
 *     UpdateMonitorForWindowAndChildren @ 0x1C008E52C (UpdateMonitorForWindowAndChildren.c)
 *     ?BuildWindowListWithDpiBoundaryInfo@@YAPEAUtagWLDBI@@PEAUtagWND@@0PEAUtagBWL@@PEAH@Z @ 0x1C008E62C (-BuildWindowListWithDpiBoundaryInfo@@YAPEAUtagWLDBI@@PEAUtagWND@@0PEAUtagBWL@@PEAH@Z.c)
 *     xxxNotifyMonitorChanged @ 0x1C008E76C (xxxNotifyMonitorChanged.c)
 *     ?xxxCheckImeShowStatus@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x1C00903C0 (-xxxCheckImeShowStatus@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@@Z.c)
 *     ?StartRecalcForDesktop@DesktopRecalc@@YAXPEAUtagDESKTOP@@PEAVCMonitorTopology@@W4StartRecalcOption@@@Z @ 0x1C00C21FC (-StartRecalcForDesktop@DesktopRecalc@@YAXPEAUtagDESKTOP@@PEAVCMonitorTopology@@W4StartRecalcOpti.c)
 *     ?xxxProcessRecalcForThread@DesktopRecalc@@YAXXZ @ 0x1C00C2734 (-xxxProcessRecalcForThread@DesktopRecalc@@YAXXZ.c)
 *     xxxShowOwnedWindows @ 0x1C00C4208 (xxxShowOwnedWindows.c)
 *     ?xxxSendDpiChangedMsgs@@YA_NPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z @ 0x1C00D1ABC (-xxxSendDpiChangedMsgs@@YA_NPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z.c)
 *     NtUserBuildHwndList @ 0x1C00D1F70 (NtUserBuildHwndList.c)
 *     _SetDeferredDpiStateForWindowAndChildren @ 0x1C00D2278 (_SetDeferredDpiStateForWindowAndChildren.c)
 *     ?xxxImeWindowPosChanged@@YAXPEAUtagSMWP@@@Z @ 0x1C00D28B0 (-xxxImeWindowPosChanged@@YAXPEAUtagSMWP@@@Z.c)
 *     ?xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z @ 0x1C00F1BB8 (-xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z.c)
 *     xxxRealDefWindowProc @ 0x1C0108B10 (xxxRealDefWindowProc.c)
 *     xxxInternalEnumWindow @ 0x1C01A7E14 (xxxInternalEnumWindow.c)
 *     ?AssociateInputContextEx@@YA?AW4_AIC_STATUS@@PEAUtagWND@@PEAUtagIMC@@K@Z @ 0x1C01B75AC (-AssociateInputContextEx@@YA-AW4_AIC_STATUS@@PEAUtagWND@@PEAUtagIMC@@K@Z.c)
 *     ?DestroyInputContext@@YAHPEAUtagIMC@@@Z @ 0x1C01B7754 (-DestroyInputContext@@YAHPEAUtagIMC@@@Z.c)
 *     ?xxxSendGDIScaledDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagBWL@@@Z @ 0x1C01B974C (-xxxSendGDIScaledDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagBWL@@@Z.c)
 *     ?FixupOverlayWindowAttributes@@YAHPEAUtagWND@@@Z @ 0x1C01C73E8 (-FixupOverlayWindowAttributes@@YAHPEAUtagWND@@@Z.c)
 *     xxxMetricsRecalc @ 0x1C01C88FC (xxxMetricsRecalc.c)
 *     ?InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z @ 0x1C01C9060 (-InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z.c)
 *     ?SwitchWndCleanup@@YAXPEAPEAUtagSwitchWndInfo@@@Z @ 0x1C01C9428 (-SwitchWndCleanup@@YAXPEAPEAUtagSwitchWndInfo@@@Z.c)
 *     ?xxxProcessPositionEvent@ShellWindowPos@@YAXPEAUtagQMSG@@@Z @ 0x1C021EBEC (-xxxProcessPositionEvent@ShellWindowPos@@YAXPEAUtagQMSG@@@Z.c)
 *     ?xxxForceUpdateProcessDpiAwarenessContext@@YAXPEAUtagWND@@K@Z @ 0x1C021F904 (-xxxForceUpdateProcessDpiAwarenessContext@@YAXPEAUtagWND@@K@Z.c)
 *     ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x1C0222580 (-xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z.c)
 *     ?ChangeWindowTreeProtection@@YAHPEAUtagWND@@K@Z @ 0x1C022CB18 (-ChangeWindowTreeProtection@@YAHPEAUtagWND@@K@Z.c)
 *     xxxArrangeIconicWindows @ 0x1C0239A1C (xxxArrangeIconicWindows.c)
 * Callees:
 *     <none>
 */

void __fastcall FreeHwndList(struct tagBWL *a1)
{
  struct tagBWL *v1; // r8
  struct tagBWL *v2; // rdx
  struct tagBWL *v3; // r8

  if ( *(_QWORD *)a1 == 3LL )
    goto LABEL_9;
  v1 = (struct tagBWL *)gpbwlList;
  v2 = (struct tagBWL *)gpbwlList;
  if ( !gpbwlList )
    return;
  while ( v2 != a1 )
  {
    v1 = v2;
    v2 = *(struct tagBWL **)v2;
    if ( !v2 )
      return;
  }
  *(_QWORD *)v1 = *(_QWORD *)a1;
  v3 = pbwlCache;
  if ( pbwlCache )
  {
    if ( (__int64)((*((_QWORD *)a1 + 2) - (_QWORD)a1 - 32LL) & 0xFFFFFFFFFFFFFFF8uLL) > (__int64)((*((_QWORD *)pbwlCache + 2)
                                                                                                 - (_QWORD)pbwlCache
                                                                                                 - 32LL) & 0xFFFFFFFFFFFFFFF8uLL) )
    {
      pbwlCache = a1;
      a1 = v3;
    }
LABEL_9:
    Win32FreePool(a1);
    return;
  }
  pbwlCache = a1;
}
