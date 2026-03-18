/*
 * XREFs of zzzDestroyCaret @ 0x1C0005F9C
 * Callers:
 *     NtUserDestroyCaret @ 0x1C0005F10 (NtUserDestroyCaret.c)
 *     ?xxxMoveFocusAway@@YAXPEBUtagWND@@@Z @ 0x1C00EB2AC (-xxxMoveFocusAway@@YAXPEBUtagWND@@@Z.c)
 *     xxxSBWndProc @ 0x1C022AA50 (xxxSBWndProc.c)
 * Callees:
 *     ?UT_CaretSet@@YAHPEAUtagWND@@@Z @ 0x1C0006220 (-UT_CaretSet@@YAHPEAUtagWND@@@Z.c)
 *     zzzInternalDestroyCaret @ 0x1C00AFF44 (zzzInternalDestroyCaret.c)
 */

__int64 zzzDestroyCaret()
{
  if ( !(unsigned int)UT_CaretSet(0LL) )
    return 0LL;
  zzzInternalDestroyCaret();
  return 1LL;
}
