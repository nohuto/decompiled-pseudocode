/*
 * XREFs of ?RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z @ 0x1C01BDB10
 * Callers:
 *     zzzUpdateWindowsAfterModeChange @ 0x1C0097D18 (zzzUpdateWindowsAfterModeChange.c)
 *     zzzUpdateLayeredWindow @ 0x1C01BE8C0 (zzzUpdateLayeredWindow.c)
 * Callees:
 *     HintSpriteShape @ 0x1C002C1B0 (HintSpriteShape.c)
 *     ?SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z @ 0x1C002D938 (-SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z.c)
 *     GetRedirectionFlags @ 0x1C0096CD0 (GetRedirectionFlags.c)
 *     ChangeRedirectionParentInDCEs @ 0x1C0096D00 (ChangeRedirectionParentInDCEs.c)
 */

__int64 __fastcall RestoreOldRedirectionBitmap(void **a1, HBITMAP a2)
{
  unsigned int v4; // edi

  v4 = SetRedirectionBitmap(a1, a2, 0);
  if ( v4 )
  {
    if ( (GetRedirectionFlags((__int64)a1) & 1) != 0 )
      HintSpriteShape(*(_QWORD *)(gpDispInfo + 40LL), (const struct tagWND *)a1, (__int64)a2, 1);
    ChangeRedirectionParentInDCEs((struct tagWND *)a1, 1u);
  }
  return v4;
}
