/*
 * XREFs of ?RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z @ 0x1C01E79BC
 * Callers:
 *     zzzUpdateWindowsAfterModeChange @ 0x1C00F1368 (zzzUpdateWindowsAfterModeChange.c)
 *     zzzUpdateLayeredWindow @ 0x1C00F1FE4 (zzzUpdateLayeredWindow.c)
 * Callees:
 *     ChangeRedirectionParentInDCEs @ 0x1C004C6DC (ChangeRedirectionParentInDCEs.c)
 *     HintSpriteShape @ 0x1C00BD898 (HintSpriteShape.c)
 *     ?SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z @ 0x1C00BEFA8 (-SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z.c)
 *     GetRedirectionFlags @ 0x1C00F2430 (GetRedirectionFlags.c)
 */

__int64 __fastcall RestoreOldRedirectionBitmap(void **a1, HBITMAP a2)
{
  unsigned int v4; // edi

  v4 = SetRedirectionBitmap(a1, a2, 0);
  if ( v4 )
  {
    if ( (GetRedirectionFlags((__int64)a1) & 1) != 0 )
      HintSpriteShape(*(HDEV *)(gpDispInfo + 40LL), (struct tagWND *)a1, a2, 1);
    ChangeRedirectionParentInDCEs((struct tagWND *)a1, 1u);
  }
  return v4;
}
