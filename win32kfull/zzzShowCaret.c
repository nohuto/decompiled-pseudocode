/*
 * XREFs of zzzShowCaret @ 0x1C0006108
 * Callers:
 *     NtUserShowCaret @ 0x1C00060A0 (NtUserShowCaret.c)
 *     xxxEndScroll @ 0x1C022CE90 (xxxEndScroll.c)
 *     xxxSBTrackInit @ 0x1C022D18C (xxxSBTrackInit.c)
 *     xxxSBWndProc @ 0x1C022D770 (xxxSBWndProc.c)
 * Callees:
 *     ?UT_CaretSet@@YAHPEAUtagWND@@@Z @ 0x1C0006130 (-UT_CaretSet@@YAHPEAUtagWND@@@Z.c)
 *     zzzInternalShowCaret @ 0x1C00061E4 (zzzInternalShowCaret.c)
 */

__int64 __fastcall zzzShowCaret(struct tagWND *a1)
{
  __int64 result; // rax

  result = UT_CaretSet(a1);
  if ( (_DWORD)result )
  {
    zzzInternalShowCaret();
    return 1LL;
  }
  return result;
}
