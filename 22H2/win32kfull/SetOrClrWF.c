/*
 * XREFs of SetOrClrWF @ 0x1C004DF08
 * Callers:
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0003D2C (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0003FD4 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     xxxSetModernAppWindow @ 0x1C00058B0 (xxxSetModernAppWindow.c)
 *     xxxCreateDesktopEx @ 0x1C00101D4 (xxxCreateDesktopEx.c)
 *     NtUserSetCoreWindow @ 0x1C0012C70 (NtUserSetCoreWindow.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C00134E8 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     SetWindowSubtreeCoreWindowStatus @ 0x1C0013D1C (SetWindowSubtreeCoreWindowStatus.c)
 *     SfnPOWERBROADCAST @ 0x1C0021FE0 (SfnPOWERBROADCAST.c)
 *     xxxCreateWindowSmIcon @ 0x1C00250E0 (xxxCreateWindowSmIcon.c)
 *     zzzCancelJournalling @ 0x1C00292F8 (zzzCancelJournalling.c)
 *     xxxSwitchDesktop @ 0x1C0029864 (xxxSwitchDesktop.c)
 *     xxxMinMaximizeEx @ 0x1C002B69C (xxxMinMaximizeEx.c)
 *     SetMinimize @ 0x1C002C0CC (SetMinimize.c)
 *     xxxShowOwnedWindows @ 0x1C002C134 (xxxShowOwnedWindows.c)
 *     PatchThreadWindows @ 0x1C0030B80 (PatchThreadWindows.c)
 *     SetDialogPointer @ 0x1C0031720 (SetDialogPointer.c)
 *     ?xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z @ 0x1C00319A0 (-xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z.c)
 *     ?xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z @ 0x1C0031C94 (-xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z.c)
 *     ImeSetTopmost @ 0x1C00358C8 (ImeSetTopmost.c)
 *     xxxSetLayeredWindow @ 0x1C0035D20 (xxxSetLayeredWindow.c)
 *     SetWindowGroupBand @ 0x1C0036648 (SetWindowGroupBand.c)
 *     ?SetTopmost@@YAXPEAUtagWND@@HH@Z @ 0x1C00391D8 (-SetTopmost@@YAXPEAUtagWND@@HH@Z.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C0039E68 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C003A9E8 (xxxMakeWindowForegroundWithState.c)
 *     xxxEndPaint @ 0x1C00461A0 (xxxEndPaint.c)
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EK@Z @ 0x1C00491B4 (-xxxShowWindowEx@@YAHPEAUtagWND@@EK@Z.c)
 *     xxxRealDefWindowProc @ 0x1C0049E28 (xxxRealDefWindowProc.c)
 *     xxxCalcClientRect @ 0x1C004A800 (xxxCalcClientRect.c)
 *     SetVisible @ 0x1C004BCA0 (SetVisible.c)
 *     xxxDoPaint @ 0x1C0053408 (xxxDoPaint.c)
 *     xxxSetWindowStyle @ 0x1C005E140 (xxxSetWindowStyle.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C0064CA0 (xxxInitSendValidateMinMaxInfoEx.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C0068290 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     xxxDispatchMessage @ 0x1C006ADB4 (xxxDispatchMessage.c)
 *     xxxSimpleDoSyncPaint @ 0x1C006D7A0 (xxxSimpleDoSyncPaint.c)
 *     xxxEndDeferWindowPosEx @ 0x1C006ED1C (xxxEndDeferWindowPosEx.c)
 *     InternalInvalidate3 @ 0x1C00746C4 (InternalInvalidate3.c)
 *     xxxCreateWindowEx @ 0x1C0075140 (xxxCreateWindowEx.c)
 *     xxxFreeWindow @ 0x1C007A720 (xxxFreeWindow.c)
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x1C007BEF0 (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 *     DestroyWindowSmIcon @ 0x1C007C4E0 (DestroyWindowSmIcon.c)
 *     xxxCheckFullScreen @ 0x1C007C55C (xxxCheckFullScreen.c)
 *     xxxRemoveFullScreen @ 0x1C007C980 (xxxRemoveFullScreen.c)
 *     xxxBeginPaint @ 0x1C007D854 (xxxBeginPaint.c)
 *     xxxDestroyWindow @ 0x1C007DC00 (xxxDestroyWindow.c)
 *     xxxSetWindowData @ 0x1C008A1A8 (xxxSetWindowData.c)
 *     SetRedirectedWindow @ 0x1C00BCE5C (SetRedirectedWindow.c)
 *     xxxSetShellWindow @ 0x1C00D6C50 (xxxSetShellWindow.c)
 *     xxxDCETrackCaptionButton @ 0x1C00D79AC (xxxDCETrackCaptionButton.c)
 *     xxxDWP_DoNCActivate @ 0x1C00DC844 (xxxDWP_DoNCActivate.c)
 *     xxxDrawCaptionBar @ 0x1C00DCAB8 (xxxDrawCaptionBar.c)
 *     xxxDWP_UpdateUIState @ 0x1C00E0B94 (xxxDWP_UpdateUIState.c)
 *     UnsetLayeredWindow @ 0x1C00EEE28 (UnsetLayeredWindow.c)
 *     UnsetRedirectedWindow @ 0x1C00EF498 (UnsetRedirectedWindow.c)
 *     ?GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z @ 0x1C00F4EA0 (-GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z.c)
 *     ?DoQueuedSyncPaint@@YAXPEAUtagWND@@KPEAUtagTHREADINFO@@@Z @ 0x1C00F5044 (-DoQueuedSyncPaint@@YAXPEAUtagWND@@KPEAUtagTHREADINFO@@@Z.c)
 *     ClrFTrueVis @ 0x1C00F5150 (ClrFTrueVis.c)
 *     ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x1C00F5250 (-xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z.c)
 *     xxxSetScrollBar @ 0x1C00F5D08 (xxxSetScrollBar.c)
 *     _SelectPalette @ 0x1C01013B4 (_SelectPalette.c)
 *     xxxSendEraseBkgnd @ 0x1C0103FD4 (xxxSendEraseBkgnd.c)
 *     ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x1C010BE7C (-xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z.c)
 *     xxxGetUpdateRgn @ 0x1C010DC34 (xxxGetUpdateRgn.c)
 *     ?xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C010F1C0 (-xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     SelectWindowRgn @ 0x1C011172C (SelectWindowRgn.c)
 *     ?xxxSwpActivate@@YAHPEAUtagWND@@@Z @ 0x1C0111850 (-xxxSwpActivate@@YAHPEAUtagWND@@@Z.c)
 *     xxxGetUpdateRect @ 0x1C0117BC0 (xxxGetUpdateRect.c)
 *     xxxAddFullScreen @ 0x1C0122F74 (xxxAddFullScreen.c)
 *     NtUserEnableResizeLayoutSynchronization @ 0x1C0124DE0 (NtUserEnableResizeLayoutSynchronization.c)
 *     SetHungFlag @ 0x1C0125380 (SetHungFlag.c)
 *     NtUserSetChildWindowNoActivate @ 0x1C012F0C0 (NtUserSetChildWindowNoActivate.c)
 *     _RegisterShellHookWindow @ 0x1C0131510 (_RegisterShellHookWindow.c)
 *     SetWindowState @ 0x1C0131880 (SetWindowState.c)
 *     ClearWindowState @ 0x1C01318E0 (ClearWindowState.c)
 *     _DeregisterShellHookWindow @ 0x1C01321C0 (_DeregisterShellHookWindow.c)
 *     CreateSpb @ 0x1C01617C0 (CreateSpb.c)
 *     VerifyChildMenu @ 0x1C0169704 (VerifyChildMenu.c)
 *     ?xxxCloneWindowPosAndArrangement@@YAXPEAUtagWND@@AEBUWINDOWPOSANDCHECKPOINT@@@Z @ 0x1C01CFF5C (-xxxCloneWindowPosAndArrangement@@YAXPEAUtagWND@@AEBUWINDOWPOSANDCHECKPOINT@@@Z.c)
 *     _lambda_8abff167ce1c52ae97425dcc78c2cc12_::_lambda_invoker_cdecl_ @ 0x1C01D1ED0 (_lambda_8abff167ce1c52ae97425dcc78c2cc12_--_lambda_invoker_cdecl_.c)
 *     ClrWFNoDwmNotify @ 0x1C01D7174 (ClrWFNoDwmNotify.c)
 *     SetMsgBox @ 0x1C01D72B0 (SetMsgBox.c)
 *     ?xxxEstablishWebviewHostComponentRelationship@@YAXPEAUtagWND@@0@Z @ 0x1C0208A6C (-xxxEstablishWebviewHostComponentRelationship@@YAXPEAUtagWND@@0@Z.c)
 *     xxxDisableImmersiveOwner @ 0x1C0208B88 (xxxDisableImmersiveOwner.c)
 *     xxxSetBridgeWindowChild @ 0x1C0208BD8 (xxxSetBridgeWindowChild.c)
 *     ?MakeArrangedStateObservable@@YAXQEBU_MOVESIZEDATA@@@Z @ 0x1C020B294 (-MakeArrangedStateObservable@@YAXQEBU_MOVESIZEDATA@@@Z.c)
 *     ?xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z @ 0x1C020D970 (-xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C020E968 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     FreeSpb @ 0x1C0219D24 (FreeSpb.c)
 *     ?PixieHack@@YAXPEAUtagWND@@PEAUtagRECT@@@Z @ 0x1C0234CC8 (-PixieHack@@YAXPEAUtagWND@@PEAUtagRECT@@@Z.c)
 *     xxxMNOpenHierarchy @ 0x1C02394F8 (xxxMNOpenHierarchy.c)
 *     xxxUpdateShadowZorder @ 0x1C023DB48 (xxxUpdateShadowZorder.c)
 *     xxxCompositedPaint @ 0x1C023DFF0 (xxxCompositedPaint.c)
 *     xxxRedrawHungWindow @ 0x1C0240D14 (xxxRedrawHungWindow.c)
 *     ?xxxSendSysCommandToWindow@CMoveSizeRequest@@AEAAXPEAUtagWND@@@Z @ 0x1C0241668 (-xxxSendSysCommandToWindow@CMoveSizeRequest@@AEAAXPEAUtagWND@@@Z.c)
 *     ?xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z @ 0x1C0244A64 (-xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z.c)
 *     ?zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z @ 0x1C0244C54 (-zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z.c)
 *     xxxEndScroll @ 0x1C0245344 (xxxEndScroll.c)
 *     xxxSBWndProc @ 0x1C0245BA0 (xxxSBWndProc.c)
 *     xxxTrackCaptionButton @ 0x1C0247450 (xxxTrackCaptionButton.c)
 *     xxxTrackPopupMenuEx @ 0x1C024A5F0 (xxxTrackPopupMenuEx.c)
 *     xxxHelpLoop @ 0x1C024FBDC (xxxHelpLoop.c)
 * Callees:
 *     DwmAsyncChildStyleChange @ 0x1C004E050 (DwmAsyncChildStyleChange.c)
 *     DirtyVisRgnTrackers @ 0x1C004E4D0 (DirtyVisRgnTrackers.c)
 */

char __fastcall SetOrClrWF(int a1, __int64 a2, unsigned __int16 a3, int a4)
{
  int v4; // ebp
  int v5; // edi
  int v6; // r14d
  _DWORD *v8; // rdx
  unsigned __int64 v10; // rcx
  _DWORD *v11; // rax
  char v12; // r8
  int v13; // r8d
  int v14; // edx
  int v15; // ebx
  unsigned int v16; // ecx
  __int64 v17; // rdx
  __int64 v18; // rcx
  void *v19; // rax

  v4 = 0;
  v5 = 0;
  v6 = 0;
  v8 = *(_DWORD **)(a2 + 40);
  if ( a4 )
  {
    v4 = v8[7];
    v5 = v8[6];
    v6 = v8[58];
  }
  v10 = (unsigned __int64)a3 >> 8;
  LOBYTE(v11) = *((_BYTE *)v8 + v10 + 16);
  if ( a1 )
    v12 = (unsigned __int8)v11 | a3;
  else
    v12 = (unsigned __int8)v11 & ~(_BYTE)a3;
  *((_BYTE *)v8 + v10 + 16) = v12;
  if ( a4 )
  {
    LODWORD(v11) = IsWindowDesktopComposed(a2);
    if ( (_DWORD)v11 )
    {
      v11 = *(_DWORD **)(a2 + 40);
      v13 = v11[7];
      v14 = v11[6];
      v15 = v11[58];
      if ( v4 != v13 )
        goto LABEL_12;
      if ( v5 == v14 && v6 == v15 )
        return (char)v11;
      if ( v4 == v13 )
      {
        if ( v5 == v14 )
        {
          LOBYTE(v11) = v6 ^ v15;
          if ( ((v6 ^ v15) & 0x2E00300) == 0 )
            return (char)v11;
          LODWORD(v11) = 1;
          goto LABEL_14;
        }
        v16 = (v5 ^ v14) & 0x4E27A9;
      }
      else
      {
LABEL_12:
        v16 = (v4 ^ v13) & 0xB1CF0000;
      }
      LODWORD(v11) = v16 != 0;
LABEL_14:
      if ( (_DWORD)v11 )
      {
        DirtyVisRgnTrackers(a2);
        v19 = (void *)ReferenceDwmApiPort(v18, v17);
        LOBYTE(v11) = DwmAsyncChildStyleChange(v19);
      }
    }
  }
  return (char)v11;
}
