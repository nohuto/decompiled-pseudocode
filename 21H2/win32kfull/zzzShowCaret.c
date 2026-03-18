/*
 * XREFs of zzzShowCaret @ 0x1C023AA6C
 * Callers:
 *     xxxEndScroll @ 0x1C0241878 (xxxEndScroll.c)
 *     xxxSBTrackInit @ 0x1C0241B74 (xxxSBTrackInit.c)
 *     xxxSBWndProc @ 0x1C02420E0 (xxxSBWndProc.c)
 * Callees:
 *     ?UT_CaretSet@@YAHPEAUtagWND@@@Z @ 0x1C00726A8 (-UT_CaretSet@@YAHPEAUtagWND@@@Z.c)
 *     zzzInternalShowCaret @ 0x1C00C2D88 (zzzInternalShowCaret.c)
 */

__int64 __fastcall zzzShowCaret(struct tagWND *a1)
{
  if ( !UT_CaretSet(a1) )
    return 0LL;
  zzzInternalShowCaret();
  return 1LL;
}
