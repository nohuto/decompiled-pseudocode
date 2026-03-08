/*
 * XREFs of xxxSendNotifyMessage @ 0x1C00D8320
 * Callers:
 *     xxxSetModernAppWindow @ 0x1C000E204 (xxxSetModernAppWindow.c)
 *     xxxBroadcastMessageEx @ 0x1C0045EF0 (xxxBroadcastMessageEx.c)
 *     _anonymous_namespace_::xxxSendFocusMessages @ 0x1C009A850 (_anonymous_namespace_--xxxSendFocusMessages.c)
 *     _anonymous_namespace_::xxxSendNCActivateMessage @ 0x1C009E068 (_anonymous_namespace_--xxxSendNCActivateMessage.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C009E0E4 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     xxxDWP_UpdateUIState @ 0x1C00A2360 (xxxDWP_UpdateUIState.c)
 *     ?xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z @ 0x1C00A560C (-xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z.c)
 *     xxxRealDefWindowProc @ 0x1C00A8800 (xxxRealDefWindowProc.c)
 *     xxxSetDeskWallpaper @ 0x1C00D7F38 (xxxSetDeskWallpaper.c)
 *     ?xxxNotifyShellOfWallpaperChange@@YAHXZ @ 0x1C00D80A0 (-xxxNotifyShellOfWallpaperChange@@YAHXZ.c)
 *     ?xxxWrapSendNotifyMessage@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C00D8280 (-xxxWrapSendNotifyMessage@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 *     xxxDesktopsRecalcAndBroadcastDisplayChange @ 0x1C00F7660 (xxxDesktopsRecalcAndBroadcastDisplayChange.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C00FA1BC (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     xxxSystemParametersInfoWorker @ 0x1C01032D0 (xxxSystemParametersInfoWorker.c)
 *     _NotifyOverlayWindow @ 0x1C01C9960 (_NotifyOverlayWindow.c)
 *     NtUserNavigateFocus @ 0x1C01D8BC0 (NtUserNavigateFocus.c)
 *     ?xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C01FF92C (-xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     ?xxxSendClipboardMessage@@YAXPEAUtagWINDOWSTATION@@I@Z @ 0x1C0200230 (-xxxSendClipboardMessage@@YAXPEAUtagWINDOWSTATION@@I@Z.c)
 *     xxxMNLoop @ 0x1C021726C (xxxMNLoop.c)
 *     xxxBroadcastPaletteChanged @ 0x1C021794C (xxxBroadcastPaletteChanged.c)
 *     xxxSendMenuSelect @ 0x1C0242A9C (xxxSendMenuSelect.c)
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0035F20 (PopAndFreeAlwaysW32ThreadLock.c)
 *     xxxSendMessageCallback @ 0x1C004C51C (xxxSendMessageCallback.c)
 *     ?xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z @ 0x1C009FB24 (-xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z.c)
 *     PushW32ThreadLock @ 0x1C00A1C30 (PushW32ThreadLock.c)
 *     ?CaptureBroadcastString@@YAHPEAU_LARGE_UNICODE_STRING@@PEAU_LARGE_STRING@@@Z @ 0x1C00D8430 (-CaptureBroadcastString@@YAHPEAU_LARGE_UNICODE_STRING@@PEAU_LARGE_STRING@@@Z.c)
 */

__int64 __fastcall xxxSendNotifyMessage(
        struct tagTHREADINFO **a1,
        unsigned int a2,
        unsigned __int64 a3,
        __int128 *a4,
        int a5)
{
  __int128 *v5; // r10
  char v9; // di
  __int128 v10; // [rsp+50h] [rbp-38h] BYREF
  __int128 v11; // [rsp+60h] [rbp-28h] BYREF
  __int64 v12; // [rsp+70h] [rbp-18h]

  v5 = a4;
  if ( a1 != (struct tagTHREADINFO **)-1LL )
    return xxxSendMessageCallback(a1, a2, a3, a4, 0LL, 0LL, 0, a5, 0);
  v12 = 0LL;
  v9 = 0;
  v11 = 0LL;
  v10 = 0LL;
  if ( a2 == 26 || a2 == 27 )
  {
    if ( a4 )
    {
      if ( !(unsigned int)CaptureBroadcastString((struct _LARGE_UNICODE_STRING *)&v10, (struct _LARGE_STRING *)a4) )
        return 0LL;
      PushW32ThreadLock(*((__int64 *)&v10 + 1), &v11, (__int64)Win32FreePool);
      v5 = &v10;
      v9 = 1;
    }
  }
  else if ( a2 != 42 )
  {
    return xxxSendMessageCallback(a1, a2, a3, a4, 0LL, 0LL, 0, a5, 0);
  }
  xxxSystemBroadcastMessage(a2, a3, v5, 1u, 0LL, a5, 0);
  if ( v9 )
    PopAndFreeAlwaysW32ThreadLock((__int64)&v11);
  return 1LL;
}
