/*
 * XREFs of UnsetRedirectedWindow @ 0x1C0022ADC
 * Callers:
 *     UnsetLayeredWindow @ 0x1C00240E0 (UnsetLayeredWindow.c)
 *     xxxSetWindowStyle @ 0x1C002DD90 (xxxSetWindowStyle.c)
 *     CleanupWindowRedirection @ 0x1C00340EC (CleanupWindowRedirection.c)
 *     UserRecreateRedirectionBitmap @ 0x1C01BE090 (UserRecreateRedirectionBitmap.c)
 *     xxxPrintWindow @ 0x1C01BE184 (xxxPrintWindow.c)
 *     zzzUpdateLayeredWindow @ 0x1C01BE8C0 (zzzUpdateLayeredWindow.c)
 * Callees:
 *     DeleteOrSetRedirectionBitmap @ 0x1C0021D34 (DeleteOrSetRedirectionBitmap.c)
 *     HintSpriteShape @ 0x1C002C1B0 (HintSpriteShape.c)
 *     UnredirectDCEs @ 0x1C002C2E4 (UnredirectDCEs.c)
 *     ?SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z @ 0x1C002D938 (-SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z.c)
 *     DeleteOldRedirectionBitmap @ 0x1C002E738 (DeleteOldRedirectionBitmap.c)
 *     _GetProp @ 0x1C002ED8C (_GetProp.c)
 *     GetRedirectionBitmap @ 0x1C0043F00 (GetRedirectionBitmap.c)
 *     SetOrClrWF @ 0x1C0097844 (SetOrClrWF.c)
 */

__int64 __fastcall UnsetRedirectedWindow(struct tagWND *a1, int a2)
{
  unsigned int v3; // esi
  __int64 Prop; // rbp
  __int64 RedirectionBitmap; // rbx

  v3 = 1;
  Prop = GetProp(a1, (unsigned __int16)atomLayer, 1LL);
  *(_DWORD *)(Prop + 32) &= ~a2;
  if ( (a2 & 1) != 0 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 0x20) == 0 )
    v3 = HintSpriteShape(*(_QWORD *)(gpDispInfo + 40LL), a1, 0LL, 0LL);
  if ( !*(_DWORD *)(Prop + 32) )
  {
    SetOrClrWF(0LL, a1, 2848LL, 1LL);
    DeleteOldRedirectionBitmap(a1);
    RedirectionBitmap = GetRedirectionBitmap(a1);
    UnredirectDCEs(a1);
    if ( RedirectionBitmap )
    {
      v3 = SetRedirectionBitmap(a1, 0LL, 1);
      DeleteOrSetRedirectionBitmap((__int64)a1, RedirectionBitmap, 0);
    }
  }
  return v3;
}
