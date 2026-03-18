/*
 * XREFs of UnsetRedirectedWindow @ 0x1C00C881C
 * Callers:
 *     UnsetLayeredWindow @ 0x1C00C8C24 (UnsetLayeredWindow.c)
 *     CleanupWindowRedirection @ 0x1C00EAF48 (CleanupWindowRedirection.c)
 *     xxxSetWindowStyle @ 0x1C00EB620 (xxxSetWindowStyle.c)
 *     UserRecreateRedirectionBitmap @ 0x1C01BCEF0 (UserRecreateRedirectionBitmap.c)
 *     xxxPrintWindow @ 0x1C01BCFE4 (xxxPrintWindow.c)
 *     zzzUpdateLayeredWindow @ 0x1C01BD720 (zzzUpdateLayeredWindow.c)
 * Callees:
 *     DeleteOrSetRedirectionBitmap @ 0x1C00C825C (DeleteOrSetRedirectionBitmap.c)
 *     DeleteOldRedirectionBitmap @ 0x1C00C87AC (DeleteOldRedirectionBitmap.c)
 *     HintSpriteShape @ 0x1C00D3B40 (HintSpriteShape.c)
 *     UnredirectDCEs @ 0x1C00D3C74 (UnredirectDCEs.c)
 *     ?SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z @ 0x1C00D54CC (-SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z.c)
 *     _GetProp @ 0x1C00F21FC (_GetProp.c)
 *     SetOrClrWF @ 0x1C00F2594 (SetOrClrWF.c)
 *     GetRedirectionBitmap @ 0x1C011DD30 (GetRedirectionBitmap.c)
 */

__int64 __fastcall UnsetRedirectedWindow(struct tagWND *a1, int a2)
{
  unsigned int v3; // esi
  __int64 Prop; // rbp
  HSURF RedirectionBitmap; // rbx

  v3 = 1;
  Prop = GetProp(a1, (unsigned __int16)atomLayer, 1LL);
  *(_DWORD *)(Prop + 32) &= ~a2;
  if ( (a2 & 1) != 0 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 0x20) == 0 )
    v3 = HintSpriteShape(*(_QWORD *)(gpDispInfo + 40LL), a1, 0LL, 0LL);
  if ( !*(_DWORD *)(Prop + 32) )
  {
    SetOrClrWF(0LL, a1, 2848LL, 1LL);
    DeleteOldRedirectionBitmap((__int64)a1);
    RedirectionBitmap = (HSURF)GetRedirectionBitmap(a1);
    UnredirectDCEs(a1);
    if ( RedirectionBitmap )
    {
      v3 = SetRedirectionBitmap(a1, 0LL, 1);
      DeleteOrSetRedirectionBitmap((__int64)a1, RedirectionBitmap, 0);
    }
  }
  return v3;
}
