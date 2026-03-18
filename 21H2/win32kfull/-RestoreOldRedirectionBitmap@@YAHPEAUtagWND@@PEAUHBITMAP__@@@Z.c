/*
 * XREFs of ?RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z @ 0x1C01E216C
 * Callers:
 *     zzzUpdateLayeredWindow @ 0x1C008FE60 (zzzUpdateLayeredWindow.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1C00B7E98 (zzzUpdateWindowsAfterModeChange.c)
 * Callees:
 *     ?SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z @ 0x1C001F87C (-SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z.c)
 *     ChangeRedirectionParentInDCEs @ 0x1C001FCCC (ChangeRedirectionParentInDCEs.c)
 *     HintSpriteShape @ 0x1C00210C4 (HintSpriteShape.c)
 *     GetRedirectionFlags @ 0x1C0090390 (GetRedirectionFlags.c)
 */

__int64 __fastcall RestoreOldRedirectionBitmap(struct tagWND *a1, HBITMAP a2)
{
  unsigned int v4; // edi

  v4 = SetRedirectionBitmap(a1, a2, 0);
  if ( v4 )
  {
    if ( (GetRedirectionFlags((__int64)a1) & 1) != 0 )
      HintSpriteShape(*(HDEV *)(gpDispInfo + 40LL), a1, (__int64)a2, 1);
    ChangeRedirectionParentInDCEs(a1, 1u);
  }
  return v4;
}
