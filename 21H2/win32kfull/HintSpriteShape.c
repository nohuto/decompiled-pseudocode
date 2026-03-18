/*
 * XREFs of HintSpriteShape @ 0x1C00210C4
 * Callers:
 *     SetRedirectedWindow @ 0x1C001F9FC (SetRedirectedWindow.c)
 *     RecreateRedirectionBitmap @ 0x1C008F778 (RecreateRedirectionBitmap.c)
 *     UnsetRedirectedWindow @ 0x1C00B40A4 (UnsetRedirectedWindow.c)
 *     ?RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z @ 0x1C01E216C (-RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z.c)
 *     UserRecreateRedirectionBitmap @ 0x1C01E2880 (UserRecreateRedirectionBitmap.c)
 * Callees:
 *     ?InitializeMiniWinInfo@@YAXQEBUtagWND@@PEAUtagMINIWINDOWINFO@@@Z @ 0x1C0020F78 (-InitializeMiniWinInfo@@YAXQEBUtagWND@@PEAUtagMINIWINDOWINFO@@@Z.c)
 *     GreHintSpriteShape @ 0x1C002198C (GreHintSpriteShape.c)
 *     memset @ 0x1C0160540 (memset.c)
 */

_BOOL8 __fastcall HintSpriteShape(HDEV a1, struct tagWND *a2, __int64 a3, int a4)
{
  int v7; // eax
  _BYTE v9[144]; // [rsp+40h] [rbp-98h] BYREF

  memset(v9, 0, 0x88uLL);
  InitializeMiniWinInfo(a2, (struct tagMINIWINDOWINFO *)v9);
  v7 = IsWindowDesktopComposed(a2);
  return (unsigned int)GreHintSpriteShape(a1, a4, v7, 1) != 0;
}
