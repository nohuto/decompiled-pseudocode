/*
 * XREFs of FindTimer @ 0x1C00DEEDC
 * Callers:
 *     xxxSystemTimerProc @ 0x1C0005A50 (xxxSystemTimerProc.c)
 *     xxxFlashWindow @ 0x1C0005B74 (xxxFlashWindow.c)
 *     ?KillTooltipTimer@@YAXPEAUtagTOOLTIPWND@@@Z @ 0x1C0016540 (-KillTooltipTimer@@YAXPEAUtagTOOLTIPWND@@@Z.c)
 *     DecrementCompositedCount @ 0x1C0016BB4 (DecrementCompositedCount.c)
 *     SetMouseTrails @ 0x1C0020418 (SetMouseTrails.c)
 *     zzzUpdateCursorImage @ 0x1C0061E20 (zzzUpdateCursorImage.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00725D0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     TrackMouseEvent @ 0x1C00E01E4 (TrackMouseEvent.c)
 *     zzzInternalDestroyCaret @ 0x1C00E8694 (zzzInternalDestroyCaret.c)
 *     ?RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x1C00E8804 (-RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z.c)
 *     xxxCancelMouseMoveTracking @ 0x1C00EF010 (xxxCancelMouseMoveTracking.c)
 *     ?RefreshMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z @ 0x1C01439F8 (-RefreshMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z.c)
 *     HideAutorunCursor @ 0x1C01AA230 (HideAutorunCursor.c)
 *     ?MiPIdleTimerFunc@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01B66A0 (-MiPIdleTimerFunc@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?StopMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z @ 0x1C01B6DDC (-StopMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z.c)
 *     StopFade @ 0x1C01BDEF0 (StopFade.c)
 *     NtUserKillSystemTimer @ 0x1C01D6F30 (NtUserKillSystemTimer.c)
 *     ?ResizeTimerFunc@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01EB7C0 (-ResizeTimerFunc@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z @ 0x1C01ED7C0 (-xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z.c)
 *     HandleAsyncResizeComplete @ 0x1C01F3408 (HandleAsyncResizeComplete.c)
 *     ?xxxSoundSentryTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01F7190 (-xxxSoundSentryTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     EditionKillAccessibilityTimer @ 0x1C01F72B0 (EditionKillAccessibilityTimer.c)
 *     ?xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z @ 0x1C021876C (-xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z.c)
 *     ?xxxMNDoScroll@@YAHAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z @ 0x1C0218B30 (-xxxMNDoScroll@@YAHAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z.c)
 *     xxxMNCloseHierarchy @ 0x1C021A0D0 (xxxMNCloseHierarchy.c)
 *     xxxMNOpenHierarchy @ 0x1C021B7B0 (xxxMNOpenHierarchy.c)
 *     xxxMNSelectItem @ 0x1C021C660 (xxxMNSelectItem.c)
 *     xxxMenuWindowProc @ 0x1C021D3D0 (xxxMenuWindowProc.c)
 *     xxxEndScroll @ 0x1C022CE90 (xxxEndScroll.c)
 *     xxxTrackPopupMenuEx @ 0x1C02353CC (xxxTrackPopupMenuEx.c)
 *     MNAnimate @ 0x1C0237090 (MNAnimate.c)
 *     ?Deinitialize@InteractiveControlDevice@@QEAAXXZ @ 0x1C0247EA8 (-Deinitialize@InteractiveControlDevice@@QEAAXXZ.c)
 *     ?DetectPressAndHoldGesture@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z @ 0x1C0248044 (-DetectPressAndHoldGesture@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z.c)
 * Callees:
 *     FreeTimer @ 0x1C003A800 (FreeTimer.c)
 */

__int64 __fastcall FindTimer(void *a1, void *a2, unsigned __int8 a3, int a4, void ***a5)
{
  void **v5; // rbx
  void *v8; // rax
  void ***v10; // rsi
  void **v11; // rdi
  unsigned int v12; // ebp
  void **i; // r14
  __int64 v14; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v16; // rdx

  v5 = 0LL;
  v8 = a2;
  v10 = (void ***)((char *)&gTimerHashTable + 16 * (((unsigned __int8)a2 + BYTE1(a1)) & 0x3F));
  v11 = 0LL;
  v12 = 0;
  for ( i = *v10; i != (void **)v10; i = (void **)*i )
  {
    v11 = i - 14;
    if ( *(i - 3) == a1 && v11[12] == v8 )
    {
      v14 = *((unsigned int *)v11 + 12);
      if ( ((a3 ^ *((_BYTE *)v11 + 48)) & 6) == 0 )
      {
        if ( (v14 & 0x40) != 0 )
          goto LABEL_12;
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v14);
        v16 = CurrentProcessWin32Process;
        if ( CurrentProcessWin32Process )
          v16 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
        if ( v16 == *((_QWORD *)v11[3] + 53) || !a1 && ((*((_BYTE *)v11 + 48) ^ a3) & 4) == 0 )
        {
LABEL_12:
          if ( a4 )
          {
            FreeTimer((void ***)i - 14);
            v11 = 0LL;
          }
          v12 = 1;
          break;
        }
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
