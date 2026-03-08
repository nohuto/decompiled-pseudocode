/*
 * XREFs of xxxRedrawTitle @ 0x1C01097D0
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C00A8800 (xxxRealDefWindowProc.c)
 *     ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x1C0107A14 (-xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z.c)
 *     ?xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z @ 0x1C014A550 (-xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z.c)
 *     NtUserRedrawTitle @ 0x1C01DA040 (NtUserRedrawTitle.c)
 *     xxxEnableMenuItem @ 0x1C0224CA0 (xxxEnableMenuItem.c)
 *     xxxHelpLoop @ 0x1C023C17C (xxxHelpLoop.c)
 * Callees:
 *     xxxDrawCaptionBar @ 0x1C0021730 (xxxDrawCaptionBar.c)
 *     ?IsTrayWindow@@YA_NPEAUtagWND@@W4TrayCheckOption@@@Z @ 0x1C002E354 (-IsTrayWindow@@YA_NPEAUtagWND@@W4TrayCheckOption@@@Z.c)
 *     xxxSendMessage @ 0x1C006E518 (xxxSendMessage.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C01098A8 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     PostShellHookMessagesEx @ 0x1C0109A90 (PostShellHookMessagesEx.c)
 */

__int64 __fastcall xxxRedrawTitle(struct tagWND *a1, int a2)
{
  int v3; // edi
  _BYTE *v4; // rcx
  unsigned int v5; // ebp
  __int64 v7; // rbx
  HDC DCEx; // rbx

  v3 = a2;
  v4 = (_BYTE *)*((_QWORD *)a1 + 5);
  v5 = 1;
  if ( (v4[31] & 0x10) != 0 )
  {
    if ( (v4[30] & 0xC0) == 0xC0 )
    {
      if ( (v4[16] & 0x40) != 0 && *(_QWORD *)(*((_QWORD *)a1 + 2) + 432LL) == gpqForeground )
        v3 = a2 | 1;
      if ( gihmodUserApiHook < 0 )
      {
        DCEx = (HDC)_GetDCEx(a1, 0LL, 65537LL);
        xxxDrawCaptionBar(a1, DCEx, v3);
        _ReleaseDC(DCEx);
      }
      else
      {
        xxxSendMessage(a1, 0xAEu);
      }
    }
    else
    {
      v5 = 0;
    }
  }
  if ( IsTrayWindow(a1, 1) && (v3 & 0xC) != 0 )
  {
    v7 = *(_QWORD *)a1;
    xxxCallHook(6, *(_QWORD *)a1, 0LL, 10);
    PostShellHookMessagesEx(6uLL, v7, 0LL);
  }
  return v5;
}
