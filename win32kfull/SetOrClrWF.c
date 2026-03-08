/*
 * XREFs of SetOrClrWF @ 0x1C0097844
 * Callers:
 *     FreeSpb @ 0x1C000B520 (FreeSpb.c)
 *     CreateSpb @ 0x1C000D094 (CreateSpb.c)
 *     xxxSetModernAppWindow @ 0x1C000E204 (xxxSetModernAppWindow.c)
 *     xxxCompositedPaint @ 0x1C0015794 (xxxCompositedPaint.c)
 *     zzzCancelJournalling @ 0x1C001D3F4 (zzzCancelJournalling.c)
 *     ?SetTopmost@@YAXPEAUtagWND@@HH@Z @ 0x1C0021340 (-SetTopmost@@YAXPEAUtagWND@@HH@Z.c)
 *     xxxDrawCaptionBar @ 0x1C0021730 (xxxDrawCaptionBar.c)
 *     UnsetRedirectedWindow @ 0x1C0022ADC (UnsetRedirectedWindow.c)
 *     UnsetLayeredWindow @ 0x1C00240E0 (UnsetLayeredWindow.c)
 *     xxxDWP_DoNCActivate @ 0x1C00245B8 (xxxDWP_DoNCActivate.c)
 *     SetWindowGroupBand @ 0x1C0025CE4 (SetWindowGroupBand.c)
 *     ?ImeSetTopmost@@YAXPEAUtagWND@@H0@Z @ 0x1C0026C68 (-ImeSetTopmost@@YAXPEAUtagWND@@H0@Z.c)
 *     SelectWindowRgn @ 0x1C00275FC (SelectWindowRgn.c)
 *     xxxSetLayeredWindow @ 0x1C0028C1C (xxxSetLayeredWindow.c)
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x1C002AE4C (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 *     SetRedirectedWindow @ 0x1C002BE1C (SetRedirectedWindow.c)
 *     SetVisible @ 0x1C002DB8C (SetVisible.c)
 *     xxxSetWindowStyle @ 0x1C002DD90 (xxxSetWindowStyle.c)
 *     xxxSetWindowData @ 0x1C002F9C8 (xxxSetWindowData.c)
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x1C00331B0 (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 *     xxxCheckFullScreen @ 0x1C0033340 (xxxCheckFullScreen.c)
 *     xxxRemoveFullScreen @ 0x1C0033708 (xxxRemoveFullScreen.c)
 *     CleanupWindowRedirection @ 0x1C00340EC (CleanupWindowRedirection.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C0036908 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     xxxSimpleDoSyncPaint @ 0x1C0038E64 (xxxSimpleDoSyncPaint.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C004524C (xxxInitSendValidateMinMaxInfoEx.c)
 *     InternalInvalidate3 @ 0x1C0054B50 (InternalInvalidate3.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C00669E0 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     xxxEndDeferWindowPosEx @ 0x1C00698F0 (xxxEndDeferWindowPosEx.c)
 *     xxxSetShellWindow @ 0x1C0092CAC (xxxSetShellWindow.c)
 *     SetWindowSubtreeCoreWindowStatus @ 0x1C0097A0C (SetWindowSubtreeCoreWindowStatus.c)
 *     ?xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z @ 0x1C009BD38 (-xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C009E0E4 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     xxxDWP_UpdateUIState @ 0x1C00A2360 (xxxDWP_UpdateUIState.c)
 *     xxxSetScrollBar @ 0x1C00A60D8 (xxxSetScrollBar.c)
 *     xxxRealDefWindowProc @ 0x1C00A8800 (xxxRealDefWindowProc.c)
 *     xxxCalcClientRect @ 0x1C00AAA20 (xxxCalcClientRect.c)
 *     xxxCreateWindowEx @ 0x1C00AF050 (xxxCreateWindowEx.c)
 *     NtUserEndPaint @ 0x1C00CC490 (NtUserEndPaint.c)
 *     NtUserSelectPalette @ 0x1C00D0140 (NtUserSelectPalette.c)
 *     SfnPOWERBROADCAST @ 0x1C00DA380 (SfnPOWERBROADCAST.c)
 *     ?xxxSwpActivate@@YAHPEAUtagWND@@@Z @ 0x1C00DBEA4 (-xxxSwpActivate@@YAHPEAUtagWND@@@Z.c)
 *     xxxAddFullScreen @ 0x1C00E6AF8 (xxxAddFullScreen.c)
 *     ?RemoveSemiMaximizedState@@YAXPEAUtagWND@@@Z @ 0x1C00E6C30 (-RemoveSemiMaximizedState@@YAXPEAUtagWND@@@Z.c)
 *     NtUserEnableResizeLayoutSynchronization @ 0x1C00E8EA0 (NtUserEnableResizeLayoutSynchronization.c)
 *     _RegisterShellHookWindow @ 0x1C00ED7F4 (_RegisterShellHookWindow.c)
 *     _DeregisterShellHookWindow @ 0x1C00EFC04 (_DeregisterShellHookWindow.c)
 *     SetDialogPointer @ 0x1C00F9E74 (SetDialogPointer.c)
 *     PatchThreadWindows @ 0x1C00FA530 (PatchThreadWindows.c)
 *     xxxGetUpdateRgn @ 0x1C00FC22C (xxxGetUpdateRgn.c)
 *     xxxBeginPaint @ 0x1C00FD4C0 (xxxBeginPaint.c)
 *     ?DoQueuedSyncPaint@@YAXPEAUtagWND@@KPEAUtagTHREADINFO@@@Z @ 0x1C00FDA70 (-DoQueuedSyncPaint@@YAXPEAUtagWND@@KPEAUtagTHREADINFO@@@Z.c)
 *     xxxInternalDoSyncPaint @ 0x1C00FDB80 (xxxInternalDoSyncPaint.c)
 *     ?GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z @ 0x1C00FE114 (-GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z.c)
 *     xxxSendEraseBkgnd @ 0x1C00FE248 (xxxSendEraseBkgnd.c)
 *     ?xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C00FE35C (-xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     xxxEndPaint @ 0x1C00FE504 (xxxEndPaint.c)
 *     xxxGetUpdateRect @ 0x1C00FE78C (xxxGetUpdateRect.c)
 *     ClrFTrueVis @ 0x1C00FED00 (ClrFTrueVis.c)
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x1C00FFAF8 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     ?xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z @ 0x1C0100930 (-xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z.c)
 *     SetMinimize @ 0x1C010182C (SetMinimize.c)
 *     xxxShowOwnedWindows @ 0x1C010189C (xxxShowOwnedWindows.c)
 *     ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x1C0102024 (-xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z.c)
 *     xxxCreateWindowSmIcon @ 0x1C010A268 (xxxCreateWindowSmIcon.c)
 *     _SelectPalette @ 0x1C0125A20 (_SelectPalette.c)
 *     ClrWF @ 0x1C012C660 (ClrWF.c)
 *     SetWF @ 0x1C012C6AC (SetWF.c)
 *     DestroyWindowSmIcon @ 0x1C012F204 (DestroyWindowSmIcon.c)
 *     ?xxxRedrawHungWindow@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C0149E06 (-xxxRedrawHungWindow@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     _lambda_8abff167ce1c52ae97425dcc78c2cc12_::_lambda_invoker_cdecl_ @ 0x1C01AEEB0 (_lambda_8abff167ce1c52ae97425dcc78c2cc12_--_lambda_invoker_cdecl_.c)
 *     xxxDCETrackCaptionButton @ 0x1C01BBA1C (xxxDCETrackCaptionButton.c)
 *     NtUserSetMsgBox @ 0x1C01DD4A0 (NtUserSetMsgBox.c)
 *     ?MakeArrangedStateObservable@@YAXPEBUMOVESIZEDATA@@@Z @ 0x1C01EB47C (-MakeArrangedStateObservable@@YAXPEBUMOVESIZEDATA@@@Z.c)
 *     ?UpdateDwmSnapArrangedInitiated@@YAXPEAUtagWND@@@Z @ 0x1C01EC244 (-UpdateDwmSnapArrangedInitiated@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z @ 0x1C01EFBFC (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxEstablishWebviewHostComponentRelationship@@YAXPEAUtagWND@@0@Z @ 0x1C01F3E58 (-xxxEstablishWebviewHostComponentRelationship@@YAXPEAUtagWND@@0@Z.c)
 *     xxxSetBridgeWindowChild @ 0x1C01F4014 (xxxSetBridgeWindowChild.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C01F5BBC (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C01F687C (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?PixieHack@@YAXPEAUtagWND@@PEAUtagRECT@@@Z @ 0x1C0217CA8 (-PixieHack@@YAXPEAUtagWND@@PEAUtagRECT@@@Z.c)
 *     xxxMNOpenHierarchy @ 0x1C021B7B0 (xxxMNOpenHierarchy.c)
 *     xxxUpdateShadowZorder @ 0x1C02246CC (xxxUpdateShadowZorder.c)
 *     ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x1C0225290 (-xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z.c)
 *     ClearWindowState @ 0x1C0226908 (ClearWindowState.c)
 *     SetWindowState @ 0x1C0226960 (SetWindowState.c)
 *     ?xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z @ 0x1C022C64C (-xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z.c)
 *     ?zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z @ 0x1C022C83C (-zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z.c)
 *     xxxEndScroll @ 0x1C022CE90 (xxxEndScroll.c)
 *     xxxSBWndProc @ 0x1C022D770 (xxxSBWndProc.c)
 *     xxxTrackCaptionButton @ 0x1C022F438 (xxxTrackCaptionButton.c)
 *     xxxTrackPopupMenuEx @ 0x1C02353CC (xxxTrackPopupMenuEx.c)
 *     xxxHelpLoop @ 0x1C023C17C (xxxHelpLoop.c)
 * Callees:
 *     ?CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z @ 0x1C00AD734 (-CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z.c)
 *     DirtyVisRgnTrackers @ 0x1C00AEA8C (DirtyVisRgnTrackers.c)
 */

char __fastcall SetOrClrWF(int a1, __int64 *a2, unsigned __int16 a3, int a4)
{
  int v4; // edi
  _QWORD *v5; // rbx
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
  v5 = a2 + 5;
  v6 = 0;
  v7 = 0;
  if ( a4 )
  {
    v4 = *(_DWORD *)(*v5 + 28LL);
    v6 = *(_DWORD *)(*v5 + 24LL);
    v7 = *(_DWORD *)(*v5 + 232LL);
  }
  v9 = *v5 + ((unsigned __int64)a3 >> 8);
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
      v12 = *(_DWORD *)(*v5 + 28LL);
      v13 = *(_DWORD *)(*v5 + 24LL);
      v14 = v4 ^ v12;
      v15 = *(_DWORD *)(*v5 + 232LL);
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
            LOBYTE(v10) = WindowMargins::CheckForChanges(a2, 1LL);
          return v10;
        }
        v17 = -268435456;
        v12 = v15;
      }
LABEL_18:
      DirtyVisRgnTrackers(a2);
      v18 = *a2;
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
