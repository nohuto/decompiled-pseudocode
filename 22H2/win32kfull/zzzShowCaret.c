/*
 * XREFs of zzzShowCaret @ 0x1C0241324
 * Callers:
 *     xxxEndScroll @ 0x1C0245344 (xxxEndScroll.c)
 *     xxxSBTrackInit @ 0x1C0245640 (xxxSBTrackInit.c)
 *     xxxSBWndProc @ 0x1C0245BA0 (xxxSBWndProc.c)
 * Callees:
 *     ?UT_CaretSet@@YAHPEAUtagWND@@@Z @ 0x1C0069BFC (-UT_CaretSet@@YAHPEAUtagWND@@@Z.c)
 *     zzzInternalShowCaret @ 0x1C006A08C (zzzInternalShowCaret.c)
 */

__int64 __fastcall zzzShowCaret(struct tagWND *a1)
{
  if ( !UT_CaretSet(a1) )
    return 0LL;
  zzzInternalShowCaret();
  return 1LL;
}
