/*
 * XREFs of xxxRealizeDesktop @ 0x1C01E43AC
 * Callers:
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C00A3BCC (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     xxxBroadcastPaletteChanged @ 0x1C022E790 (xxxBroadcastPaletteChanged.c)
 * Callees:
 *     xxxInternalPaintDesktop @ 0x1C0110D3C (xxxInternalPaintDesktop.c)
 */

__int64 __fastcall xxxRealizeDesktop(__int64 a1)
{
  HDC DC; // rbx

  DC = (HDC)_GetDC();
  xxxInternalPaintDesktop(a1, DC, 0);
  return _ReleaseDC(DC);
}
