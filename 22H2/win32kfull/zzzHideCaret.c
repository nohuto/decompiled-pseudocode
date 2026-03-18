/*
 * XREFs of zzzHideCaret @ 0x1C0006168
 * Callers:
 *     NtUserHideCaret @ 0x1C0006100 (NtUserHideCaret.c)
 *     xxxSBWndProc @ 0x1C022AA50 (xxxSBWndProc.c)
 * Callees:
 *     ?UT_CaretSet@@YAHPEAUtagWND@@@Z @ 0x1C0006220 (-UT_CaretSet@@YAHPEAUtagWND@@@Z.c)
 *     zzzInternalHideCaret @ 0x1C00B002C (zzzInternalHideCaret.c)
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
