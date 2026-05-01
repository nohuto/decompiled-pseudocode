/*
 * XREFs of ?GetViewOptions@@YA?AUViewOptions@@AEBUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@@Z @ 0x1803CD400
 * Callers:
 *     ?OnInputAppRequestedShow@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedShowEventArgs@45678@@Z @ 0x1803CEFB0 (-OnInputAppRequestedShow@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@.c)
 *     ?OnPrimaryViewShowingResponse@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerPrimaryViewShowingResponseEventArgs@45678@@Z @ 0x1803CFB60 (-OnPrimaryViewShowingResponse@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetViewOptions(__int64 a1, __int64 a2)
{
  bool v3; // zf
  bool v4; // al
  bool v5; // al
  int v6; // ecx
  int v7; // eax

  v3 = *(_BYTE *)(a2 + 37) == 0;
  *(_BYTE *)a1 = *(_BYTE *)(a2 + 36) != 0;
  v4 = !v3;
  v3 = *(_BYTE *)(a2 + 38) == 0;
  *(_BYTE *)(a1 + 1) = v4;
  v5 = !v3;
  v3 = *(_BYTE *)(a2 + 39) == 0;
  *(_BYTE *)(a1 + 2) = v5;
  *(_BYTE *)(a1 + 3) = !v3;
  v6 = 1;
  if ( *(_DWORD *)(a2 + 24) == 1 )
  {
    v7 = 1;
  }
  else
  {
    v7 = 2;
    if ( *(_DWORD *)(a2 + 24) != 2 )
      v7 = 0;
  }
  v3 = *(_DWORD *)(a2 + 28) == 1;
  *(_DWORD *)(a1 + 4) = v7;
  *(_DWORD *)(a1 + 8) = v3;
  if ( *(_DWORD *)(a2 + 32) != 1 )
  {
    v6 = 2;
    if ( *(_DWORD *)(a2 + 32) != 2 )
      v6 = 0;
  }
  *(_DWORD *)(a1 + 12) = v6;
  return a1;
}
