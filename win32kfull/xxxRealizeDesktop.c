/*
 * XREFs of xxxRealizeDesktop @ 0x1C01BFDAC
 * Callers:
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C00FA1BC (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     xxxBroadcastPaletteChanged @ 0x1C021794C (xxxBroadcastPaletteChanged.c)
 * Callees:
 *     xxxInternalPaintDesktop @ 0x1C00F9338 (xxxInternalPaintDesktop.c)
 */

__int64 __fastcall xxxRealizeDesktop(__int64 a1)
{
  HDC DC; // rbx

  DC = (HDC)_GetDC();
  xxxInternalPaintDesktop(a1, DC, 0);
  return _ReleaseDC(DC);
}
