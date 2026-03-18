/*
 * XREFs of xxxSendNotifyMessage @ 0x1C00ACBA0
 * Callers:
 *     xxxSetModernAppWindow @ 0x1C0002004 (xxxSetModernAppWindow.c)
 *     xxxRealDefWindowProc @ 0x1C0067528 (xxxRealDefWindowProc.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C007DC84 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     _anonymous_namespace_::xxxSendNCActivateMessage @ 0x1C007FC50 (_anonymous_namespace_--xxxSendNCActivateMessage.c)
 *     xxxSystemParametersInfoWorker @ 0x1C009EBF8 (xxxSystemParametersInfoWorker.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C00A3BCC (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z @ 0x1C00A6928 (-xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z.c)
 *     _anonymous_namespace_::xxxSendFocusMessages @ 0x1C00A7DFC (_anonymous_namespace_--xxxSendFocusMessages.c)
 *     xxxBroadcastMessageEx @ 0x1C00A9E58 (xxxBroadcastMessageEx.c)
 *     ?xxxWrapSendNotifyMessage@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C00ACAD0 (-xxxWrapSendNotifyMessage@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 *     xxxDesktopsRecalcAndBroadcastDisplayChange @ 0x1C00F2300 (xxxDesktopsRecalcAndBroadcastDisplayChange.c)
 *     xxxDWP_UpdateUIState @ 0x1C00FB224 (xxxDWP_UpdateUIState.c)
 *     xxxSetDeskWallpaper @ 0x1C011A1CC (xxxSetDeskWallpaper.c)
 *     ?xxxNotifyShellOfWallpaperChange@@YAHXZ @ 0x1C011A340 (-xxxNotifyShellOfWallpaperChange@@YAHXZ.c)
 *     ?xxxSendClipboardMessage@@YAXPEAUtagWINDOWSTATION@@I@Z @ 0x1C0145B10 (-xxxSendClipboardMessage@@YAXPEAUtagWINDOWSTATION@@I@Z.c)
 *     ?xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C014664C (-xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     _NotifyOverlayWindow @ 0x1C01D3A0C (_NotifyOverlayWindow.c)
 *     NtUserNavigateFocus @ 0x1C01FA6F0 (NtUserNavigateFocus.c)
 *     xxxMNLoop @ 0x1C022E038 (xxxMNLoop.c)
 *     xxxBroadcastPaletteChanged @ 0x1C022E790 (xxxBroadcastPaletteChanged.c)
 *     xxxSendMenuSelect @ 0x1C024E3F8 (xxxSendMenuSelect.c)
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0061D10 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C007F6F0 (PushW32ThreadLock.c)
 *     ?xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z @ 0x1C00A2A6C (-xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z.c)
 *     xxxSendMessageCallback @ 0x1C00ACE14 (xxxSendMessageCallback.c)
 *     ?CaptureBroadcastString@@YAHPEAU_LARGE_UNICODE_STRING@@PEAU_LARGE_STRING@@@Z @ 0x1C0113118 (-CaptureBroadcastString@@YAHPEAU_LARGE_UNICODE_STRING@@PEAU_LARGE_STRING@@@Z.c)
 */

__int64 __fastcall xxxSendNotifyMessage(
        struct tagWND *a1,
        unsigned int a2,
        __int64 a3,
        struct _LARGE_STRING *a4,
        int a5)
{
  char v7; // di
  __int128 v8; // [rsp+50h] [rbp-38h] BYREF
  __int128 v9; // [rsp+60h] [rbp-28h] BYREF
  __int64 v10; // [rsp+70h] [rbp-18h]

  if ( a1 != (struct tagWND *)-1LL )
    return xxxSendMessageCallback(a1, a2, 0LL, 0LL, 0, a5, 0);
  v7 = 0;
  v10 = 0LL;
  v9 = 0LL;
  v8 = 0LL;
  if ( a2 < 0x1A )
    return xxxSendMessageCallback(a1, a2, 0LL, 0LL, 0, a5, 0);
  if ( a2 > 0x1B )
  {
    if ( a2 == 42 )
      goto LABEL_8;
    return xxxSendMessageCallback(a1, a2, 0LL, 0LL, 0, a5, 0);
  }
  if ( a4 )
  {
    if ( !(unsigned int)CaptureBroadcastString((struct _LARGE_UNICODE_STRING *)&v8, a4) )
      return 0LL;
    PushW32ThreadLock(*((__int64 *)&v8 + 1), &v9, (__int64)Win32FreePool);
    v7 = 1;
  }
LABEL_8:
  xxxSystemBroadcastMessage(a2);
  if ( v7 )
    PopAndFreeAlwaysW32ThreadLock((__int64)&v9);
  return 1LL;
}
