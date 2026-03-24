/*
 * XREFs of xxxRedrawTitle @ 0x1C0046940
 * Callers:
 *     ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x1C00234E4 (-xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z.c)
 *     xxxEnableMenuItem @ 0x1C0046F10 (xxxEnableMenuItem.c)
 *     xxxRealDefWindowProc @ 0x1C0049E28 (xxxRealDefWindowProc.c)
 *     ?xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z @ 0x1C023D6D0 (-xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z.c)
 *     xxxHelpLoop @ 0x1C024FBDC (xxxHelpLoop.c)
 * Callees:
 *     PostShellHookMessages @ 0x1C0043540 (PostShellHookMessages.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C005B860 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     xxxSendMessage @ 0x1C005D594 (xxxSendMessage.c)
 *     IsTrayWindow @ 0x1C005EA90 (IsTrayWindow.c)
 *     xxxDrawCaptionBar @ 0x1C00DCAB8 (xxxDrawCaptionBar.c)
 */

__int64 __fastcall xxxRedrawTitle(unsigned __int64 *a1, unsigned int a2)
{
  unsigned int v3; // esi
  _BYTE *v4; // rcx
  unsigned int v5; // ebp
  __int64 v7; // rbx
  __int64 DCEx; // rbx

  v3 = a2;
  v4 = (_BYTE *)a1[5];
  v5 = 1;
  if ( (v4[31] & 0x10) != 0 )
  {
    if ( (v4[30] & 0xC0) == 0xC0 )
    {
      if ( (v4[16] & 0x40) != 0 && *(_QWORD *)(a1[2] + 432) == gpqForeground )
        v3 = a2 | 1;
      if ( gihmodUserApiHook < 0 )
      {
        DCEx = _GetDCEx(a1, 0LL, 65537LL);
        xxxDrawCaptionBar(a1, DCEx, v3);
        _ReleaseDC(DCEx);
      }
      else
      {
        xxxSendMessage(a1, 174LL, v3, 0LL);
      }
    }
    else
    {
      v5 = 0;
    }
  }
  if ( (unsigned int)IsTrayWindow(a1) && (v3 & 0xC) != 0 )
  {
    v7 = *a1;
    xxxCallHook(6, *a1, 0LL, 10);
    PostShellHookMessages(6uLL, v7);
  }
  return v5;
}
