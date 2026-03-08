/*
 * XREFs of zzzHideCaret @ 0x1C0006078
 * Callers:
 *     NtUserHideCaret @ 0x1C0006010 (NtUserHideCaret.c)
 *     xxxSBWndProc @ 0x1C022D770 (xxxSBWndProc.c)
 * Callees:
 *     ?UT_CaretSet@@YAHPEAUtagWND@@@Z @ 0x1C0006130 (-UT_CaretSet@@YAHPEAUtagWND@@@Z.c)
 *     zzzInternalHideCaret @ 0x1C00E877C (zzzInternalHideCaret.c)
 */

__int64 __fastcall zzzHideCaret(struct tagWND *a1)
{
  __int64 result; // rax

  result = UT_CaretSet(a1);
  if ( (_DWORD)result )
  {
    zzzInternalHideCaret();
    return 1LL;
  }
  return result;
}
