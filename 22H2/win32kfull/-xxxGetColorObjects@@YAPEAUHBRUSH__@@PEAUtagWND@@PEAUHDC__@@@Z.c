/*
 * XREFs of ?xxxGetColorObjects@@YAPEAUHBRUSH__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x1C0014C88
 * Callers:
 *     ?xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z @ 0x1C0014A74 (-xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z.c)
 *     ?DrawCtlThumb@@YAXPEAUtagSBWND@@@Z @ 0x1C0228CC0 (-DrawCtlThumb@@YAXPEAUtagSBWND@@@Z.c)
 *     ?xxxDrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z @ 0x1C0229484 (-xxxDrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z.c)
 *     ?xxxMoveThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z @ 0x1C0229740 (-xxxMoveThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z.c)
 *     xxxSBWndProc @ 0x1C022AA50 (xxxSBWndProc.c)
 * Callees:
 *     xxxDefWindowProc @ 0x1C0020FF0 (xxxDefWindowProc.c)
 *     xxxGetControlBrush @ 0x1C0223CAC (xxxGetControlBrush.c)
 */

__int64 __fastcall xxxGetColorObjects(struct tagWND *a1, HDC a2)
{
  if ( (*(_WORD *)(*((_QWORD *)a1 + 5) + 42LL) & 0x2FFF) == 0x29A )
    return xxxGetControlBrush(a1, a2, 311LL);
  else
    return xxxDefWindowProc(a1);
}
