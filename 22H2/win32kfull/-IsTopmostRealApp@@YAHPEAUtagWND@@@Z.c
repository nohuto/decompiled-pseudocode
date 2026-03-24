/*
 * XREFs of ?IsTopmostRealApp@@YAHPEAUtagWND@@@Z @ 0x1C0234B78
 * Callers:
 *     _SelectPalette @ 0x1C01013B4 (_SelectPalette.c)
 * Callees:
 *     ?NextTopWindow@FindNextTopWindow@@YAPEAUtagWND@@PEBU2@0W4FindOption@1@@Z @ 0x1C0027EC8 (-NextTopWindow@FindNextTopWindow@@YAPEAUtagWND@@PEBU2@0W4FindOption@1@@Z.c)
 */

__int64 __fastcall IsTopmostRealApp(struct tagWND *a1)
{
  unsigned int v1; // ebx
  __int64 v2; // r9

  v1 = 0;
  v2 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL) + 168LL);
  if ( !v2 || *(_QWORD *)(*(_QWORD *)(v2 + 16) + 432LL) != gpqForeground )
    return 0LL;
  LOBYTE(v1) = a1 == (struct tagWND *)FindNextTopWindow::NextTopWindow(0LL, 0LL, 2);
  return v1;
}
