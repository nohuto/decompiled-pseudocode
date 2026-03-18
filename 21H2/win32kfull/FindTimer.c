/*
 * XREFs of FindTimer @ 0x1C01041A4
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0058FB0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     zzzUpdateCursorImage @ 0x1C00734A0 (zzzUpdateCursorImage.c)
 *     xxxCancelMouseMoveTracking @ 0x1C00A184C (xxxCancelMouseMoveTracking.c)
 *     SetMouseTrails @ 0x1C00B537C (SetMouseTrails.c)
 *     zzzInternalDestroyCaret @ 0x1C00C32D8 (zzzInternalDestroyCaret.c)
 *     ?RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x1C00C344C (-RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z.c)
 *     TrackMouseEvent @ 0x1C00F8E74 (TrackMouseEvent.c)
 *     xxxSystemTimerProc @ 0x1C010B7C0 (xxxSystemTimerProc.c)
 *     xxxFlashWindow @ 0x1C010B918 (xxxFlashWindow.c)
 *     ?KillTooltipTimer@@YAXPEAUtagTOOLTIPWND@@@Z @ 0x1C0118BBC (-KillTooltipTimer@@YAXPEAUtagTOOLTIPWND@@@Z.c)
 *     HideAutorunCursor @ 0x1C01CFB60 (HideAutorunCursor.c)
 *     ?MiPIdleTimerFunc@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01DBD50 (-MiPIdleTimerFunc@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?RefreshMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z @ 0x1C01DC2FC (-RefreshMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z.c)
 *     ?StopMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z @ 0x1C01DC55C (-StopMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z.c)
 *     DecrementCompositedCount @ 0x1C01E2470 (DecrementCompositedCount.c)
 *     StopFade @ 0x1C01E26E0 (StopFade.c)
 *     NtUserKillSystemTimer @ 0x1C01F8BE0 (NtUserKillSystemTimer.c)
 *     ?ResizeTimerFunc@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C020AEC0 (-ResizeTimerFunc@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z @ 0x1C020C464 (-xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z.c)
 *     HandleAsyncResizeComplete @ 0x1C0210238 (HandleAsyncResizeComplete.c)
 *     ?SoundSentryTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C0211EA0 (-SoundSentryTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     EditionKillAccessibilityTimer @ 0x1C0211FB0 (EditionKillAccessibilityTimer.c)
 *     ?xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z @ 0x1C022F478 (-xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z.c)
 *     ?xxxMNDoScroll@@YAHAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z @ 0x1C022F878 (-xxxMNDoScroll@@YAHAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z.c)
 *     xxxMNCloseHierarchy @ 0x1C0230E00 (xxxMNCloseHierarchy.c)
 *     xxxMNOpenHierarchy @ 0x1C02325D0 (xxxMNOpenHierarchy.c)
 *     xxxMNSelectItem @ 0x1C02334EC (xxxMNSelectItem.c)
 *     xxxMenuWindowProc @ 0x1C0234200 (xxxMenuWindowProc.c)
 *     xxxEndScroll @ 0x1C0241878 (xxxEndScroll.c)
 *     UserKillTimer @ 0x1C0243A90 (UserKillTimer.c)
 *     xxxTrackPopupMenuEx @ 0x1C024614C (xxxTrackPopupMenuEx.c)
 *     MNAnimate @ 0x1C0247828 (MNAnimate.c)
 *     ?Deinitialize@InteractiveControlDevice@@QEAAXXZ @ 0x1C0253B4C (-Deinitialize@InteractiveControlDevice@@QEAAXXZ.c)
 *     ?DetectPressAndHoldGesture@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z @ 0x1C0253CE8 (-DetectPressAndHoldGesture@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z.c)
 * Callees:
 *     FreeTimer @ 0x1C0070D80 (FreeTimer.c)
 */

__int64 __fastcall FindTimer(__int64 a1, __int64 a2, unsigned __int8 a3, int a4, _QWORD *a5)
{
  _QWORD *v5; // rdi
  __int64 v8; // rax
  _QWORD **v10; // rsi
  _QWORD *v11; // rbx
  unsigned int v12; // ebp
  _QWORD *i; // r14
  __int64 v14; // rcx

  v5 = 0LL;
  v8 = a2;
  v10 = (_QWORD **)((char *)&gTimerHashTable + 16 * (((unsigned __int8)a2 + BYTE1(a1)) & 0x3F));
  v11 = 0LL;
  v12 = 0;
  for ( i = *v10; i != v10; i = (_QWORD *)*i )
  {
    v11 = i - 14;
    if ( *(i - 3) == a1 && v11[12] == v8 )
    {
      v14 = *((unsigned int *)v11 + 12);
      if ( ((a3 ^ *((_BYTE *)v11 + 48)) & 6) == 0
        && ((v14 & 0x40) != 0
         || PsGetCurrentProcessWin32Process(v14) == *(_QWORD *)(v11[3] + 424LL)
         || !a1 && ((a3 ^ *((_BYTE *)v11 + 48)) & 4) == 0) )
      {
        if ( a4 )
        {
          FreeTimer((struct tagTIMER *)(i - 14));
          v11 = 0LL;
        }
        v12 = 1;
        break;
      }
      v8 = a2;
    }
  }
  if ( a5 )
  {
    if ( v12 == 1 )
      v5 = v11;
    *a5 = v5;
  }
  return v12;
}
