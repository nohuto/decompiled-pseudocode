/*
 * XREFs of FreeHwndList @ 0x1C006DAC0
 * Callers:
 *     xxxClientShutdown @ 0x1C000B2CC (xxxClientShutdown.c)
 *     _SetDeferredDpiStateForWindowAndChildren @ 0x1C0013BBC (_SetDeferredDpiStateForWindowAndChildren.c)
 *     xxxShowOwnedWindows @ 0x1C002C1D4 (xxxShowOwnedWindows.c)
 *     ?xxxSendActivateAppMessage@@YAXAEBUtagAAS@@@Z @ 0x1C003C920 (-xxxSendActivateAppMessage@@YAXAEBUtagAAS@@@Z.c)
 *     ?xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z @ 0x1C003ED58 (-xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z.c)
 *     xxxBroadcastMessageEx @ 0x1C003FE88 (xxxBroadcastMessageEx.c)
 *     xxxRealDefWindowProc @ 0x1C0049EC8 (xxxRealDefWindowProc.c)
 *     ?xxxSendDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z @ 0x1C006ABEC (-xxxSendDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z.c)
 *     xxxNotifyMonitorChanged @ 0x1C006C654 (xxxNotifyMonitorChanged.c)
 *     xxxInternalDoSyncPaint @ 0x1C006D560 (xxxInternalDoSyncPaint.c)
 *     ?xxxImeWindowPosChanged@@YAXPEAUtagSMWP@@@Z @ 0x1C006DB4C (-xxxImeWindowPosChanged@@YAXPEAUtagSMWP@@@Z.c)
 *     BuildWindowListWithDpiBoundaryInfo @ 0x1C006F994 (BuildWindowListWithDpiBoundaryInfo.c)
 *     xxxDWP_UpdateUIState @ 0x1C00E0EE4 (xxxDWP_UpdateUIState.c)
 *     ?DwmNotifyChildrenLinkUnlink@@YAHPEBUtagDESKTOP@@H@Z @ 0x1C00E9C98 (-DwmNotifyChildrenLinkUnlink@@YAHPEBUtagDESKTOP@@H@Z.c)
 *     UpdateMonitorForWindowAndChildren @ 0x1C00F160C (UpdateMonitorForWindowAndChildren.c)
 *     ?xxxCheckImeShowStatus@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x1C00F7808 (-xxxCheckImeShowStatus@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@@Z.c)
 *     xxxDesktopRecalc @ 0x1C00FFD6C (xxxDesktopRecalc.c)
 *     ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x1C010C1FC (-xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z.c)
 *     AssociateInputContextEx @ 0x1C0118C60 (AssociateInputContextEx.c)
 *     DestroyInputContext @ 0x1C015854C (DestroyInputContext.c)
 *     xxxArrangeIconicWindows @ 0x1C015E5A0 (xxxArrangeIconicWindows.c)
 *     xxxInternalEnumWindow @ 0x1C01D2394 (xxxInternalEnumWindow.c)
 *     ?FixupOverlayWindowAttributes@@YAHPEAUtagWND@@@Z @ 0x1C01D6500 (-FixupOverlayWindowAttributes@@YAHPEAUtagWND@@@Z.c)
 *     SnapshotWindowRects @ 0x1C01D7988 (SnapshotWindowRects.c)
 *     xxxMetricsRecalc @ 0x1C01D7C94 (xxxMetricsRecalc.c)
 *     ?xxxSendGDIScaledDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagBWL@@@Z @ 0x1C01E48EC (-xxxSendGDIScaledDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagBWL@@@Z.c)
 *     xxxForceUpdateProcessDpiAwarenessContext @ 0x1C01E646C (xxxForceUpdateProcessDpiAwarenessContext.c)
 *     ?InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z @ 0x1C01F2C38 (-InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z.c)
 *     ?SwitchWndCleanup@@YAXPEAPEAUtagSwitchWndInfo@@@Z @ 0x1C01F301C (-SwitchWndCleanup@@YAXPEAPEAUtagSwitchWndInfo@@@Z.c)
 *     ?ChangeWindowTreeProtection@@YAHPEAUtagWND@@K@Z @ 0x1C0247E10 (-ChangeWindowTreeProtection@@YAHPEAUtagWND@@K@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FreeHwndList(struct tagBWL *a1)
{
  struct tagBWL *v1; // r8
  struct tagBWL *v2; // rdx
  struct tagBWL *v3; // r8

  v1 = (struct tagBWL *)gpbwlList;
  v2 = (struct tagBWL *)gpbwlList;
  if ( gpbwlList )
  {
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
      if ( (__int64)((*((_QWORD *)a1 + 2) - (_QWORD)a1 - 32LL) & 0xFFFFFFFFFFFFFFF8uLL) > (__int64)((*((_QWORD *)pbwlCache + 2) - (_QWORD)pbwlCache - 32LL) & 0xFFFFFFFFFFFFFFF8uLL) )
      {
        pbwlCache = a1;
        a1 = v3;
      }
      Win32FreePool(a1);
    }
    else
    {
      pbwlCache = a1;
    }
  }
}
