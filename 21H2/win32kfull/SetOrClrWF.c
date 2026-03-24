/*
 * XREFs of SetOrClrWF @ 0x1C004DFA8
 * Callers:
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0003D2C (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0003FD4 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     xxxSetModernAppWindow @ 0x1C00058B0 (xxxSetModernAppWindow.c)
 *     xxxCreateDesktopEx @ 0x1C00101D4 (xxxCreateDesktopEx.c)
 *     NtUserSetCoreWindow @ 0x1C0012C70 (NtUserSetCoreWindow.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C00134E8 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     SetWindowSubtreeCoreWindowStatus @ 0x1C0013D1C (SetWindowSubtreeCoreWindowStatus.c)
 *     SfnPOWERBROADCAST @ 0x1C0022080 (SfnPOWERBROADCAST.c)
 *     xxxCreateWindowSmIcon @ 0x1C0025180 (xxxCreateWindowSmIcon.c)
 *     zzzCancelJournalling @ 0x1C0029398 (zzzCancelJournalling.c)
 *     xxxSwitchDesktop @ 0x1C0029904 (xxxSwitchDesktop.c)
 *     xxxMinMaximizeEx @ 0x1C002B73C (xxxMinMaximizeEx.c)
 *     SetMinimize @ 0x1C002C16C (SetMinimize.c)
 *     xxxShowOwnedWindows @ 0x1C002C1D4 (xxxShowOwnedWindows.c)
 *     PatchThreadWindows @ 0x1C0030C20 (PatchThreadWindows.c)
 *     SetDialogPointer @ 0x1C00317C0 (SetDialogPointer.c)
 *     ?xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z @ 0x1C0031A40 (-xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z.c)
 *     ?xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z @ 0x1C0031D34 (-xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z.c)
 *     ImeSetTopmost @ 0x1C0035968 (ImeSetTopmost.c)
 *     xxxSetLayeredWindow @ 0x1C0035DC0 (xxxSetLayeredWindow.c)
 *     SetWindowGroupBand @ 0x1C00366E8 (SetWindowGroupBand.c)
 *     ?SetTopmost@@YAXPEAUtagWND@@HH@Z @ 0x1C0039278 (-SetTopmost@@YAXPEAUtagWND@@HH@Z.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C0039F08 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C003AA88 (xxxMakeWindowForegroundWithState.c)
 *     xxxEndPaint @ 0x1C0046240 (xxxEndPaint.c)
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EK@Z @ 0x1C0049254 (-xxxShowWindowEx@@YAHPEAUtagWND@@EK@Z.c)
 *     xxxRealDefWindowProc @ 0x1C0049EC8 (xxxRealDefWindowProc.c)
 *     xxxCalcClientRect @ 0x1C004A8A0 (xxxCalcClientRect.c)
 *     SetVisible @ 0x1C004BD40 (SetVisible.c)
 *     xxxDoPaint @ 0x1C00534A8 (xxxDoPaint.c)
 *     xxxSetWindowStyle @ 0x1C005E1E0 (xxxSetWindowStyle.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C0064D40 (xxxInitSendValidateMinMaxInfoEx.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C0068330 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     xxxDispatchMessage @ 0x1C006AE54 (xxxDispatchMessage.c)
 *     xxxSimpleDoSyncPaint @ 0x1C006D840 (xxxSimpleDoSyncPaint.c)
 *     xxxEndDeferWindowPosEx @ 0x1C006EDBC (xxxEndDeferWindowPosEx.c)
 *     InternalInvalidate3 @ 0x1C0074764 (InternalInvalidate3.c)
 *     xxxCreateWindowEx @ 0x1C00751E0 (xxxCreateWindowEx.c)
 *     xxxFreeWindow @ 0x1C007A7C0 (xxxFreeWindow.c)
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x1C007BF90 (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 *     DestroyWindowSmIcon @ 0x1C007C580 (DestroyWindowSmIcon.c)
 *     xxxCheckFullScreen @ 0x1C007C5FC (xxxCheckFullScreen.c)
 *     xxxRemoveFullScreen @ 0x1C007CA20 (xxxRemoveFullScreen.c)
 *     xxxBeginPaint @ 0x1C007D8F4 (xxxBeginPaint.c)
 *     xxxDestroyWindow @ 0x1C007DCA0 (xxxDestroyWindow.c)
 *     xxxSetWindowData @ 0x1C008A238 (xxxSetWindowData.c)
 *     SetRedirectedWindow @ 0x1C00BD1BC (SetRedirectedWindow.c)
 *     xxxSetShellWindow @ 0x1C00D6FA0 (xxxSetShellWindow.c)
 *     xxxDCETrackCaptionButton @ 0x1C00D7CFC (xxxDCETrackCaptionButton.c)
 *     xxxDWP_DoNCActivate @ 0x1C00DCB94 (xxxDWP_DoNCActivate.c)
 *     xxxDrawCaptionBar @ 0x1C00DCE08 (xxxDrawCaptionBar.c)
 *     xxxDWP_UpdateUIState @ 0x1C00E0EE4 (xxxDWP_UpdateUIState.c)
 *     UnsetLayeredWindow @ 0x1C00EF178 (UnsetLayeredWindow.c)
 *     UnsetRedirectedWindow @ 0x1C00EF7E8 (UnsetRedirectedWindow.c)
 *     ?GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z @ 0x1C00F51F0 (-GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z.c)
 *     ?DoQueuedSyncPaint@@YAXPEAUtagWND@@KPEAUtagTHREADINFO@@@Z @ 0x1C00F5394 (-DoQueuedSyncPaint@@YAXPEAUtagWND@@KPEAUtagTHREADINFO@@@Z.c)
 *     ClrFTrueVis @ 0x1C00F54A0 (ClrFTrueVis.c)
 *     ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x1C00F55A0 (-xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z.c)
 *     xxxSetScrollBar @ 0x1C00F6058 (xxxSetScrollBar.c)
 *     _SelectPalette @ 0x1C0101704 (_SelectPalette.c)
 *     xxxSendEraseBkgnd @ 0x1C0104324 (xxxSendEraseBkgnd.c)
 *     ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x1C010C1FC (-xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z.c)
 *     xxxGetUpdateRgn @ 0x1C010DFB4 (xxxGetUpdateRgn.c)
 *     ?xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C010F540 (-xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     SelectWindowRgn @ 0x1C0111AAC (SelectWindowRgn.c)
 *     ?xxxSwpActivate@@YAHPEAUtagWND@@@Z @ 0x1C0111BD0 (-xxxSwpActivate@@YAHPEAUtagWND@@@Z.c)
 *     xxxGetUpdateRect @ 0x1C0117F40 (xxxGetUpdateRect.c)
 *     xxxAddFullScreen @ 0x1C01232F4 (xxxAddFullScreen.c)
 *     NtUserEnableResizeLayoutSynchronization @ 0x1C0125160 (NtUserEnableResizeLayoutSynchronization.c)
 *     SetHungFlag @ 0x1C0125700 (SetHungFlag.c)
 *     NtUserSetChildWindowNoActivate @ 0x1C012F470 (NtUserSetChildWindowNoActivate.c)
 *     _RegisterShellHookWindow @ 0x1C01318C0 (_RegisterShellHookWindow.c)
 *     SetWindowState @ 0x1C0131C30 (SetWindowState.c)
 *     ClearWindowState @ 0x1C0131C90 (ClearWindowState.c)
 *     _DeregisterShellHookWindow @ 0x1C0132570 (_DeregisterShellHookWindow.c)
 *     CreateSpb @ 0x1C0161F90 (CreateSpb.c)
 *     VerifyChildMenu @ 0x1C0169ED4 (VerifyChildMenu.c)
 *     ?xxxCloneWindowPosAndArrangement@@YAXPEAUtagWND@@AEBUWINDOWPOSANDCHECKPOINT@@@Z @ 0x1C01D051C (-xxxCloneWindowPosAndArrangement@@YAXPEAUtagWND@@AEBUWINDOWPOSANDCHECKPOINT@@@Z.c)
 *     _lambda_8abff167ce1c52ae97425dcc78c2cc12_::_lambda_invoker_cdecl_ @ 0x1C01D2490 (_lambda_8abff167ce1c52ae97425dcc78c2cc12_--_lambda_invoker_cdecl_.c)
 *     ClrWFNoDwmNotify @ 0x1C01D7734 (ClrWFNoDwmNotify.c)
 *     SetMsgBox @ 0x1C01D7870 (SetMsgBox.c)
 *     ?xxxEstablishWebviewHostComponentRelationship@@YAXPEAUtagWND@@0@Z @ 0x1C020902C (-xxxEstablishWebviewHostComponentRelationship@@YAXPEAUtagWND@@0@Z.c)
 *     xxxDisableImmersiveOwner @ 0x1C0209148 (xxxDisableImmersiveOwner.c)
 *     xxxSetBridgeWindowChild @ 0x1C0209198 (xxxSetBridgeWindowChild.c)
 *     ?MakeArrangedStateObservable@@YAXQEBU_MOVESIZEDATA@@@Z @ 0x1C020B854 (-MakeArrangedStateObservable@@YAXQEBU_MOVESIZEDATA@@@Z.c)
 *     ?xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z @ 0x1C020DF30 (-xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C020EF28 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     FreeSpb @ 0x1C021A2E4 (FreeSpb.c)
 *     ?PixieHack@@YAXPEAUtagWND@@PEAUtagRECT@@@Z @ 0x1C0235288 (-PixieHack@@YAXPEAUtagWND@@PEAUtagRECT@@@Z.c)
 *     xxxMNOpenHierarchy @ 0x1C0239AB8 (xxxMNOpenHierarchy.c)
 *     xxxUpdateShadowZorder @ 0x1C023E108 (xxxUpdateShadowZorder.c)
 *     xxxCompositedPaint @ 0x1C023E5B0 (xxxCompositedPaint.c)
 *     xxxRedrawHungWindow @ 0x1C02412D4 (xxxRedrawHungWindow.c)
 *     ?xxxSendSysCommandToWindow@CMoveSizeRequest@@AEAAXPEAUtagWND@@@Z @ 0x1C0241C28 (-xxxSendSysCommandToWindow@CMoveSizeRequest@@AEAAXPEAUtagWND@@@Z.c)
 *     ?xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z @ 0x1C0245024 (-xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z.c)
 *     ?zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z @ 0x1C0245214 (-zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z.c)
 *     xxxEndScroll @ 0x1C0245904 (xxxEndScroll.c)
 *     xxxSBWndProc @ 0x1C0246160 (xxxSBWndProc.c)
 *     xxxTrackCaptionButton @ 0x1C0247A10 (xxxTrackCaptionButton.c)
 *     xxxTrackPopupMenuEx @ 0x1C024ABB0 (xxxTrackPopupMenuEx.c)
 *     xxxHelpLoop @ 0x1C025019C (xxxHelpLoop.c)
 * Callees:
 *     DwmAsyncChildStyleChange @ 0x1C004E0F0 (DwmAsyncChildStyleChange.c)
 *     DirtyVisRgnTrackers @ 0x1C004E570 (DirtyVisRgnTrackers.c)
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
