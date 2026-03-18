/*
 * XREFs of SetOrClrWF @ 0x1C00F2594
 * Callers:
 *     FreeSpb @ 0x1C000C170 (FreeSpb.c)
 *     CreateSpb @ 0x1C000DD04 (CreateSpb.c)
 *     xxxSetModernAppWindow @ 0x1C000EF44 (xxxSetModernAppWindow.c)
 *     xxxCompositedPaint @ 0x1C0016544 (xxxCompositedPaint.c)
 *     SetDialogPointer @ 0x1C001F0D4 (SetDialogPointer.c)
 *     xxxCreateWindowSmIcon @ 0x1C001FABC (xxxCreateWindowSmIcon.c)
 *     SfnPOWERBROADCAST @ 0x1C00206D0 (SfnPOWERBROADCAST.c)
 *     PatchThreadWindows @ 0x1C00211F0 (PatchThreadWindows.c)
 *     ?ImeSetTopmost@@YAXPEAUtagWND@@H0@Z @ 0x1C0025238 (-ImeSetTopmost@@YAXPEAUtagWND@@H0@Z.c)
 *     SetWindowGroupBand @ 0x1C002567C (SetWindowGroupBand.c)
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x1C002678C (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 *     InternalInvalidate3 @ 0x1C0034D50 (InternalInvalidate3.c)
 *     xxxCreateWindowEx @ 0x1C0035320 (xxxCreateWindowEx.c)
 *     xxxSetShellWindow @ 0x1C003ABAC (xxxSetShellWindow.c)
 *     xxxDWP_UpdateUIState @ 0x1C004AAD8 (xxxDWP_UpdateUIState.c)
 *     ?xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z @ 0x1C004AD48 (-xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C0065F18 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     zzzCancelJournalling @ 0x1C006EED0 (zzzCancelJournalling.c)
 *     SelectWindowRgn @ 0x1C0077C08 (SelectWindowRgn.c)
 *     ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x1C008B690 (-xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z.c)
 *     xxxGetUpdateRgn @ 0x1C008B918 (xxxGetUpdateRgn.c)
 *     xxxGetUpdateRect @ 0x1C008BB5C (xxxGetUpdateRect.c)
 *     ClrFTrueVis @ 0x1C008C27C (ClrFTrueVis.c)
 *     ?SetTopmost@@YAXPEAUtagWND@@HH@Z @ 0x1C0095224 (-SetTopmost@@YAXPEAUtagWND@@HH@Z.c)
 *     NtUserEndPaint @ 0x1C00964C0 (NtUserEndPaint.c)
 *     xxxCheckFullScreen @ 0x1C009687C (xxxCheckFullScreen.c)
 *     xxxAddFullScreen @ 0x1C0096D10 (xxxAddFullScreen.c)
 *     ?RemoveSemiMaximizedState@@YAXPEAUtagWND@@@Z @ 0x1C0096E48 (-RemoveSemiMaximizedState@@YAXPEAUtagWND@@@Z.c)
 *     NtUserSelectPalette @ 0x1C009A090 (NtUserSelectPalette.c)
 *     ?xxxSwpActivate@@YAHPEAUtagWND@@@Z @ 0x1C00A4D04 (-xxxSwpActivate@@YAHPEAUtagWND@@@Z.c)
 *     SetWindowSubtreeCoreWindowStatus @ 0x1C00AD698 (SetWindowSubtreeCoreWindowStatus.c)
 *     NtUserEnableResizeLayoutSynchronization @ 0x1C00B02E0 (NtUserEnableResizeLayoutSynchronization.c)
 *     _RegisterShellHookWindow @ 0x1C00B5594 (_RegisterShellHookWindow.c)
 *     _DeregisterShellHookWindow @ 0x1C00B76E4 (_DeregisterShellHookWindow.c)
 *     xxxShowOwnedWindows @ 0x1C00C4208 (xxxShowOwnedWindows.c)
 *     SetMinimize @ 0x1C00C4434 (SetMinimize.c)
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x1C00C4E00 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     ?xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z @ 0x1C00C5F30 (-xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z.c)
 *     xxxDrawCaptionBar @ 0x1C00C689C (xxxDrawCaptionBar.c)
 *     xxxSetScrollBar @ 0x1C00C6C68 (xxxSetScrollBar.c)
 *     UnsetRedirectedWindow @ 0x1C00C881C (UnsetRedirectedWindow.c)
 *     UnsetLayeredWindow @ 0x1C00C8C24 (UnsetLayeredWindow.c)
 *     xxxDWP_DoNCActivate @ 0x1C00C9228 (xxxDWP_DoNCActivate.c)
 *     xxxSetWindowData @ 0x1C00CA930 (xxxSetWindowData.c)
 *     xxxBeginPaint @ 0x1C00CDA00 (xxxBeginPaint.c)
 *     ?DoQueuedSyncPaint@@YAXPEAUtagWND@@KPEAUtagTHREADINFO@@@Z @ 0x1C00CDFB0 (-DoQueuedSyncPaint@@YAXPEAUtagWND@@KPEAUtagTHREADINFO@@@Z.c)
 *     xxxInternalDoSyncPaint @ 0x1C00CE0C0 (xxxInternalDoSyncPaint.c)
 *     ?GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z @ 0x1C00CE6B0 (-GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z.c)
 *     xxxSendEraseBkgnd @ 0x1C00CE7E4 (xxxSendEraseBkgnd.c)
 *     ?xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C00CE8F8 (-xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     xxxEndPaint @ 0x1C00CEAA0 (xxxEndPaint.c)
 *     xxxSetLayeredWindow @ 0x1C00CEB30 (xxxSetLayeredWindow.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C00CF14C (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     SetRedirectedWindow @ 0x1C00D36F4 (SetRedirectedWindow.c)
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x1C00EA3D4 (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 *     xxxRemoveFullScreen @ 0x1C00EA564 (xxxRemoveFullScreen.c)
 *     CleanupWindowRedirection @ 0x1C00EAF48 (CleanupWindowRedirection.c)
 *     xxxSetWindowStyle @ 0x1C00EB620 (xxxSetWindowStyle.c)
 *     SetVisible @ 0x1C00EBC94 (SetVisible.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C00ED180 (xxxInitSendValidateMinMaxInfoEx.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C00F58E4 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     xxxRealDefWindowProc @ 0x1C0108B10 (xxxRealDefWindowProc.c)
 *     xxxCalcClientRect @ 0x1C010ACC0 (xxxCalcClientRect.c)
 *     xxxSimpleDoSyncPaint @ 0x1C0118654 (xxxSimpleDoSyncPaint.c)
 *     xxxEndDeferWindowPosEx @ 0x1C0122FB0 (xxxEndDeferWindowPosEx.c)
 *     _SelectPalette @ 0x1C0131050 (_SelectPalette.c)
 *     ClrWF @ 0x1C0138C5C (ClrWF.c)
 *     SetWF @ 0x1C0138D3C (SetWF.c)
 *     DestroyWindowSmIcon @ 0x1C013D1BC (DestroyWindowSmIcon.c)
 *     ?xxxRedrawHungWindow@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C0156B26 (-xxxRedrawHungWindow@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     _lambda_8abff167ce1c52ae97425dcc78c2cc12_::_lambda_invoker_cdecl_ @ 0x1C01ADCC0 (_lambda_8abff167ce1c52ae97425dcc78c2cc12_--_lambda_invoker_cdecl_.c)
 *     xxxDCETrackCaptionButton @ 0x1C01BA87C (xxxDCETrackCaptionButton.c)
 *     NtUserSetMsgBox @ 0x1C01DC470 (NtUserSetMsgBox.c)
 *     ?MakeArrangedStateObservable@@YAXPEBUMOVESIZEDATA@@@Z @ 0x1C01EA2CC (-MakeArrangedStateObservable@@YAXPEBUMOVESIZEDATA@@@Z.c)
 *     ?UpdateDwmSnapArrangedInitiated@@YAXPEAUtagWND@@@Z @ 0x1C01EB094 (-UpdateDwmSnapArrangedInitiated@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z @ 0x1C01EEA38 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxEstablishWebviewHostComponentRelationship@@YAXPEAUtagWND@@0@Z @ 0x1C01F2C68 (-xxxEstablishWebviewHostComponentRelationship@@YAXPEAUtagWND@@0@Z.c)
 *     xxxSetBridgeWindowChild @ 0x1C01F2E24 (xxxSetBridgeWindowChild.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C01F49BC (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C01F56B0 (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?PixieHack@@YAXPEAUtagWND@@PEAUtagRECT@@@Z @ 0x1C02150E8 (-PixieHack@@YAXPEAUtagWND@@PEAUtagRECT@@@Z.c)
 *     xxxMNOpenHierarchy @ 0x1C0218BF0 (xxxMNOpenHierarchy.c)
 *     xxxUpdateShadowZorder @ 0x1C02219BC (xxxUpdateShadowZorder.c)
 *     ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x1C0222580 (-xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z.c)
 *     ClearWindowState @ 0x1C0223BF8 (ClearWindowState.c)
 *     SetWindowState @ 0x1C0223C50 (SetWindowState.c)
 *     ?xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z @ 0x1C022992C (-xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z.c)
 *     ?zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z @ 0x1C0229B1C (-zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z.c)
 *     xxxEndScroll @ 0x1C022A170 (xxxEndScroll.c)
 *     xxxSBWndProc @ 0x1C022AA50 (xxxSBWndProc.c)
 *     xxxTrackCaptionButton @ 0x1C022C718 (xxxTrackCaptionButton.c)
 *     xxxTrackPopupMenuEx @ 0x1C023279C (xxxTrackPopupMenuEx.c)
 *     xxxHelpLoop @ 0x1C0239514 (xxxHelpLoop.c)
 * Callees:
 *     ?CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z @ 0x1C00EE714 (-CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z.c)
 *     DirtyVisRgnTrackers @ 0x1C00F319C (DirtyVisRgnTrackers.c)
 */

char __fastcall SetOrClrWF(int a1, struct tagWND *a2, unsigned __int16 a3, int a4)
{
  int v4; // edi
  char *v5; // rbx
  int v6; // r12d
  int v7; // r13d
  unsigned __int64 v9; // rdx
  int v10; // eax
  char v11; // r8
  int v12; // esi
  int v13; // ecx
  int v14; // r15d
  int v15; // edx
  int v16; // edi
  int v17; // ebx
  __int64 v18; // r13
  __int64 v19; // rcx
  void *v20; // r12
  __int64 v21; // rcx
  _OWORD v23[2]; // [rsp+20h] [rbp-40h] BYREF
  __int64 v24; // [rsp+40h] [rbp-20h]
  int v25; // [rsp+48h] [rbp-18h]
  __int64 v26; // [rsp+4Ch] [rbp-14h]
  int v27; // [rsp+54h] [rbp-Ch]
  int v28; // [rsp+58h] [rbp-8h]

  v4 = 0;
  v5 = (char *)a2 + 40;
  v6 = 0;
  v7 = 0;
  if ( a4 )
  {
    v4 = *(_DWORD *)(*(_QWORD *)v5 + 28LL);
    v6 = *(_DWORD *)(*(_QWORD *)v5 + 24LL);
    v7 = *(_DWORD *)(*(_QWORD *)v5 + 232LL);
  }
  v9 = *(_QWORD *)v5 + ((unsigned __int64)a3 >> 8);
  LOBYTE(v10) = *(_BYTE *)(v9 + 16);
  if ( a1 )
    v11 = v10 | a3;
  else
    v11 = v10 & ~(_BYTE)a3;
  *(_BYTE *)(v9 + 16) = v11;
  if ( a4 )
  {
    v10 = IsWindowDesktopComposed(a2);
    if ( v10 )
    {
      v12 = *(_DWORD *)(*(_QWORD *)v5 + 28LL);
      v13 = *(_DWORD *)(*(_QWORD *)v5 + 24LL);
      v14 = v4 ^ v12;
      v15 = *(_DWORD *)(*(_QWORD *)v5 + 232LL);
      v16 = v6 ^ v13;
      v10 = v7 ^ v15;
      if ( !v14 )
      {
        if ( v16 )
          goto LABEL_13;
        if ( !v10 )
          return v10;
      }
      if ( (v14 & 0xB1CF0000) != 0 )
      {
        v17 = -16;
        goto LABEL_18;
      }
LABEL_13:
      if ( (v16 & 0x4E27A9) != 0 )
      {
        v17 = -20;
        v12 = v13;
      }
      else
      {
        if ( (v10 & 0x12C0) == 0 )
        {
LABEL_15:
          LOBYTE(v10) = (v14 & 0xC40000) == 0;
          if ( (((v16 & 0x200A0381) == 0) & (unsigned __int8)v10) == 0 )
            LOBYTE(v10) = WindowMargins::CheckForChanges(a2, 1);
          return v10;
        }
        v17 = -268435456;
        v12 = v15;
      }
LABEL_18:
      DirtyVisRgnTrackers(a2);
      v18 = *(_QWORD *)a2;
      v20 = (void *)ReferenceDwmApiPort(v19);
      _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(SGDGetSessionState(v21) + 32) + 13248LL));
      if ( v20 )
      {
        v28 = v12;
        memset(v23, 0, sizeof(v23));
        LODWORD(v23[0]) = 3932180;
        v24 = 0LL;
        WORD2(v23[0]) = 0x8000;
        v25 = 1073741846;
        v26 = v18;
        v27 = v17;
        LpcRequestPort(v20, v23);
        ObfDereferenceObject(v20);
      }
      goto LABEL_15;
    }
  }
  return v10;
}
