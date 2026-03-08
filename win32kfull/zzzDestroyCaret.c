/*
 * XREFs of zzzDestroyCaret @ 0x1C0005EAC
 * Callers:
 *     NtUserDestroyCaret @ 0x1C0005E20 (NtUserDestroyCaret.c)
 *     ?xxxMoveFocusAway@@YAXPEBUtagWND@@@Z @ 0x1C0027B98 (-xxxMoveFocusAway@@YAXPEBUtagWND@@@Z.c)
 *     xxxSBWndProc @ 0x1C022D770 (xxxSBWndProc.c)
 * Callees:
 *     ?UT_CaretSet@@YAHPEAUtagWND@@@Z @ 0x1C0006130 (-UT_CaretSet@@YAHPEAUtagWND@@@Z.c)
 *     zzzInternalDestroyCaret @ 0x1C00E8694 (zzzInternalDestroyCaret.c)
 */

__int64 zzzDestroyCaret()
{
  if ( !(unsigned int)UT_CaretSet(0LL) )
    return 0LL;
  zzzInternalDestroyCaret();
  return 1LL;
}
