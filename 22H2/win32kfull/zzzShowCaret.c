/*
 * XREFs of zzzShowCaret @ 0x1C00061F8
 * Callers:
 *     NtUserShowCaret @ 0x1C0006190 (NtUserShowCaret.c)
 *     xxxEndScroll @ 0x1C022A170 (xxxEndScroll.c)
 *     xxxSBTrackInit @ 0x1C022A46C (xxxSBTrackInit.c)
 *     xxxSBWndProc @ 0x1C022AA50 (xxxSBWndProc.c)
 * Callees:
 *     ?UT_CaretSet@@YAHPEAUtagWND@@@Z @ 0x1C0006220 (-UT_CaretSet@@YAHPEAUtagWND@@@Z.c)
 *     zzzInternalShowCaret @ 0x1C00062D4 (zzzInternalShowCaret.c)
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
