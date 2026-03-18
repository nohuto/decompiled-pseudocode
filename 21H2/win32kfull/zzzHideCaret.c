/*
 * XREFs of zzzHideCaret @ 0x1C023AA44
 * Callers:
 *     xxxSBWndProc @ 0x1C02420E0 (xxxSBWndProc.c)
 * Callees:
 *     ?UT_CaretSet@@YAHPEAUtagWND@@@Z @ 0x1C00726A8 (-UT_CaretSet@@YAHPEAUtagWND@@@Z.c)
 *     zzzInternalHideCaret @ 0x1C00C33BC (zzzInternalHideCaret.c)
 */

__int64 __fastcall zzzHideCaret(struct tagWND *a1)
{
  if ( !UT_CaretSet(a1) )
    return 0LL;
  zzzInternalHideCaret();
  return 1LL;
}
