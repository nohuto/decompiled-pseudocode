/*
 * XREFs of SetOrClrWF @ 0x1C0069680
 * Callers:
 *     xxxSetModernAppWindow @ 0x1C0002004 (xxxSetModernAppWindow.c)
 *     SetRedirectedWindow @ 0x1C001F9FC (SetRedirectedWindow.c)
 *     SetVisible @ 0x1C001FE88 (SetVisible.c)
 *     xxxDispatchMessage @ 0x1C00429F0 (xxxDispatchMessage.c)
 *     xxxCreateWindowEx @ 0x1C0043E80 (xxxCreateWindowEx.c)
 *     xxxEndDeferWindowPosEx @ 0x1C004720C (xxxEndDeferWindowPosEx.c)
 *     ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x1C00490FC (-xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z.c)
 *     InternalInvalidate3 @ 0x1C004C894 (InternalInvalidate3.c)
 *     xxxSetWindowData @ 0x1C004F920 (xxxSetWindowData.c)
 *     xxxSetWindowStyle @ 0x1C0050020 (xxxSetWindowStyle.c)
 *     xxxDoPaint @ 0x1C005C838 (xxxDoPaint.c)
 *     xxxBeginPaint @ 0x1C005E22C (xxxBeginPaint.c)
 *     xxxFreeWindow @ 0x1C005E458 (xxxFreeWindow.c)
 *     ClearHungFlag @ 0x1C005F8F0 (ClearHungFlag.c)
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x1C005FA70 (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 *     DestroyWindowSmIcon @ 0x1C0060E08 (DestroyWindowSmIcon.c)
 *     xxxRemoveFullScreen @ 0x1C0060E84 (xxxRemoveFullScreen.c)
 *     xxxCheckFullScreen @ 0x1C0061F88 (xxxCheckFullScreen.c)
 *     xxxDestroyWindow @ 0x1C0062330 (xxxDestroyWindow.c)
 *     ?ImeSetTopmost@@YAXPEAUtagWND@@H0@Z @ 0x1C0062D18 (-ImeSetTopmost@@YAXPEAUtagWND@@H0@Z.c)
 *     xxxDW_SendDestroyMessages @ 0x1C0062F9C (xxxDW_SendDestroyMessages.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C0063E00 (xxxInitSendValidateMinMaxInfoEx.c)
 *     xxxCalcClientRect @ 0x1C0066538 (xxxCalcClientRect.c)
 *     xxxRealDefWindowProc @ 0x1C0067528 (xxxRealDefWindowProc.c)
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x1C00699A0 (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C006E60C (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     xxxSimpleDoSyncPaint @ 0x1C00720D0 (xxxSimpleDoSyncPaint.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C007DC84 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     SetWindowGroupBand @ 0x1C00810A4 (SetWindowGroupBand.c)
 *     xxxSetLayeredWindow @ 0x1C0082DD4 (xxxSetLayeredWindow.c)
 *     SelectWindowRgn @ 0x1C00847C0 (SelectWindowRgn.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C009C270 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     SetWindowSubtreeCoreWindowStatus @ 0x1C009CA7C (SetWindowSubtreeCoreWindowStatus.c)
 *     xxxCreateWindowSmIcon @ 0x1C00A1774 (xxxCreateWindowSmIcon.c)
 *     ?xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z @ 0x1C00A22D8 (-xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z.c)
 *     ?xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z @ 0x1C00AECA8 (-xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z.c)
 *     UnsetLayeredWindow @ 0x1C00B3964 (UnsetLayeredWindow.c)
 *     UnsetRedirectedWindow @ 0x1C00B40A4 (UnsetRedirectedWindow.c)
 *     xxxDWP_DoNCActivate @ 0x1C00BABE4 (xxxDWP_DoNCActivate.c)
 *     xxxDrawCaptionBar @ 0x1C00BAE5C (xxxDrawCaptionBar.c)
 *     xxxEndPaint @ 0x1C00C4E2C (xxxEndPaint.c)
 *     xxxSetScrollBar @ 0x1C00C64F8 (xxxSetScrollBar.c)
 *     xxxDCETrackCaptionButton @ 0x1C00C901C (xxxDCETrackCaptionButton.c)
 *     CreateSpb @ 0x1C00C92A0 (CreateSpb.c)
 *     ?DoQueuedSyncPaint@@YAXPEAUtagWND@@KPEAUtagTHREADINFO@@@Z @ 0x1C00C97C0 (-DoQueuedSyncPaint@@YAXPEAUtagWND@@KPEAUtagTHREADINFO@@@Z.c)
 *     ClrFTrueVis @ 0x1C00C98CC (ClrFTrueVis.c)
 *     xxxAddFullScreen @ 0x1C00C9EF4 (xxxAddFullScreen.c)
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x1C00CA7B4 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     SetMinimize @ 0x1C00CB6A0 (SetMinimize.c)
 *     xxxShowOwnedWindows @ 0x1C00CB710 (xxxShowOwnedWindows.c)
 *     ?RemoveSemiMaximizedState@@YAXPEAUtagWND@@@Z @ 0x1C00CBD00 (-RemoveSemiMaximizedState@@YAXPEAUtagWND@@@Z.c)
 *     FreeSpb @ 0x1C00DCA08 (FreeSpb.c)
 *     SetDialogPointer @ 0x1C00DD234 (SetDialogPointer.c)
 *     PatchThreadWindows @ 0x1C00DD3B0 (PatchThreadWindows.c)
 *     _SelectPalette @ 0x1C00EE130 (_SelectPalette.c)
 *     xxxSendEraseBkgnd @ 0x1C00F0318 (xxxSendEraseBkgnd.c)
 *     xxxSetShellWindow @ 0x1C00F1340 (xxxSetShellWindow.c)
 *     ?GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z @ 0x1C00F4854 (-GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z.c)
 *     ?xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C00F99D0 (-xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     xxxDWP_UpdateUIState @ 0x1C00FB224 (xxxDWP_UpdateUIState.c)
 *     ?xxxSwpActivate@@YAHPEAUtagWND@@@Z @ 0x1C00FE1F4 (-xxxSwpActivate@@YAHPEAUtagWND@@@Z.c)
 *     SfnPOWERBROADCAST @ 0x1C0104F40 (SfnPOWERBROADCAST.c)
 *     xxxGetUpdateRect @ 0x1C01071D4 (xxxGetUpdateRect.c)
 *     ?SetTopmost@@YAXPEAUtagWND@@HH@Z @ 0x1C0107ECC (-SetTopmost@@YAXPEAUtagWND@@HH@Z.c)
 *     ?xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z @ 0x1C010ADC8 (-xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z.c)
 *     NtUserEnableResizeLayoutSynchronization @ 0x1C010FD80 (NtUserEnableResizeLayoutSynchronization.c)
 *     SetHungFlag @ 0x1C0110FEC (SetHungFlag.c)
 *     _RegisterShellHookWindow @ 0x1C01187F4 (_RegisterShellHookWindow.c)
 *     zzzCancelJournalling @ 0x1C011886C (zzzCancelJournalling.c)
 *     _DeregisterShellHookWindow @ 0x1C011B194 (_DeregisterShellHookWindow.c)
 *     ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x1C013F388 (-xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z.c)
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0144D6C (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C014501C (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     xxxGetUpdateRgn @ 0x1C0149BA0 (xxxGetUpdateRgn.c)
 *     SetWindowState @ 0x1C014FC00 (SetWindowState.c)
 *     ClearWindowState @ 0x1C014FC5C (ClearWindowState.c)
 *     ?xxxRedrawHungWindow@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C0151FD0 (-xxxRedrawHungWindow@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     ?xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOptions@1@K@Z @ 0x1C015B0AC (-xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOption.c)
 *     _lambda_8abff167ce1c52ae97425dcc78c2cc12_::_lambda_invoker_cdecl_ @ 0x1C01CE630 (_lambda_8abff167ce1c52ae97425dcc78c2cc12_--_lambda_invoker_cdecl_.c)
 *     NtUserSetMsgBox @ 0x1C01FDB30 (NtUserSetMsgBox.c)
 *     ?MakeArrangedStateObservable@@YAXPEBUMOVESIZEDATA@@@Z @ 0x1C020AAD8 (-MakeArrangedStateObservable@@YAXPEBUMOVESIZEDATA@@@Z.c)
 *     ?xxxCommitMoveSize@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@@Z @ 0x1C020BFC8 (-xxxCommitMoveSize@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z @ 0x1C020E1A8 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxEstablishWebviewHostComponentRelationship@@YAXPEAUtagWND@@0@Z @ 0x1C0210694 (-xxxEstablishWebviewHostComponentRelationship@@YAXPEAUtagWND@@0@Z.c)
 *     xxxSetBridgeWindowChild @ 0x1C0210798 (xxxSetBridgeWindowChild.c)
 *     ?PixieHack@@YAXPEAUtagWND@@PEAUtagRECT@@@Z @ 0x1C022EA2C (-PixieHack@@YAXPEAUtagWND@@PEAUtagRECT@@@Z.c)
 *     xxxMNOpenHierarchy @ 0x1C02325D0 (xxxMNOpenHierarchy.c)
 *     xxxUpdateShadowZorder @ 0x1C0239848 (xxxUpdateShadowZorder.c)
 *     xxxCompositedPaint @ 0x1C0239C94 (xxxCompositedPaint.c)
 *     ?xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z @ 0x1C0240F90 (-xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z.c)
 *     ?zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z @ 0x1C0241180 (-zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z.c)
 *     xxxEndScroll @ 0x1C0241878 (xxxEndScroll.c)
 *     xxxSBWndProc @ 0x1C02420E0 (xxxSBWndProc.c)
 *     xxxTrackCaptionButton @ 0x1C0243270 (xxxTrackCaptionButton.c)
 *     xxxTrackPopupMenuEx @ 0x1C024614C (xxxTrackPopupMenuEx.c)
 *     xxxHelpLoop @ 0x1C024A384 (xxxHelpLoop.c)
 * Callees:
 *     ?CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z @ 0x1C004EC00 (-CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qDDDD @ 0x1C0069594 (WPP_RECORDER_AND_TRACE_SF_qDDDD.c)
 *     DwmAsyncChildStyleChange @ 0x1C006986C (DwmAsyncChildStyleChange.c)
 *     DirtyVisRgnTrackers @ 0x1C006C250 (DirtyVisRgnTrackers.c)
 */

__int64 __fastcall SetOrClrWF(int a1, struct tagWND *a2, unsigned __int16 a3, int a4)
{
  int v6; // ebp
  int v7; // esi
  int v8; // ebx
  __int64 result; // rax
  unsigned __int64 v10; // rcx
  int v11; // r14d
  int v12; // edx
  unsigned int v13; // ecx
  unsigned int v14; // ecx
  unsigned int v15; // r15d
  void *v16; // rax
  char v17; // dl
  int v18; // [rsp+20h] [rbp-68h]
  int v19; // [rsp+28h] [rbp-60h]
  int v20; // [rsp+30h] [rbp-58h]
  int v21; // [rsp+38h] [rbp-50h]

  v6 = 0;
  v7 = 0;
  v8 = 0;
  result = *((_QWORD *)a2 + 5);
  if ( a4 )
  {
    v6 = *(_DWORD *)(result + 28);
    v7 = *(_DWORD *)(result + 24);
    v8 = *(_DWORD *)(result + 232);
  }
  v10 = (unsigned __int64)a3 >> 8;
  if ( a1 )
    *(_BYTE *)(v10 + result + 16) |= a3;
  else
    *(_BYTE *)(v10 + result + 16) &= ~(_BYTE)a3;
  if ( a4 )
  {
    result = IsWindowDesktopComposed(a2);
    if ( (_DWORD)result )
    {
      result = *((_QWORD *)a2 + 5);
      v11 = *(_DWORD *)(result + 28);
      v12 = *(_DWORD *)(result + 24);
      v13 = *(_DWORD *)(result + 232);
      if ( v6 == v11 )
      {
        if ( v7 != v12 )
        {
LABEL_15:
          v14 = (v7 ^ v12) & 0x4E27A9;
          v15 = v14 != 0 ? 0xFFFFFFEC : 0;
LABEL_13:
          result = v14 != 0;
          if ( !v14 )
            return result;
LABEL_20:
          DirtyVisRgnTrackers(a2);
          v16 = (void *)ReferenceDwmApiPort();
          DwmAsyncChildStyleChange(v16);
          result = v15 + 20;
          if ( (result & 0xFFFFFFFB) == 0 )
          {
            v17 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000000) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
            if ( v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_AND_TRACE_SF_qDDDD(
                (__int64)WPP_GLOBAL_Control->AttachedDevice,
                v17,
                WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
                (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
                v18,
                v19,
                v20,
                v21);
            return WindowMargins::CheckForChanges(a2, 2);
          }
          return result;
        }
        if ( v8 == v13 )
          return result;
        if ( v6 == v11 )
        {
          if ( v7 == v12 )
          {
            result = v8 ^ v13;
            if ( (((unsigned __int16)v8 ^ (unsigned __int16)v13) & 0x12C0) == 0 )
              return result;
            v15 = -268435456;
            goto LABEL_20;
          }
          goto LABEL_15;
        }
      }
      v14 = (v6 ^ v11) & 0xB1CF0000;
      v15 = v14 != 0 ? 0xFFFFFFF0 : 0;
      goto LABEL_13;
    }
  }
  return result;
}
