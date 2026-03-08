/*
 * XREFs of ?IsWindowGhosted@@YA_NPEBUtagWND@@@Z @ 0x1C00254FC
 * Callers:
 *     xxxSetWindowPosAndBand @ 0x1C0028FFC (xxxSetWindowPosAndBand.c)
 *     NtUserSetWindowPos @ 0x1C0067A30 (NtUserSetWindowPos.c)
 *     ?xxxUpdateInputHangInfo@@YAXPEAUtagWND@@W4INPUTHANGTIME@@@Z @ 0x1C00719A0 (-xxxUpdateInputHangInfo@@YAXPEAUtagWND@@W4INPUTHANGTIME@@@Z.c)
 *     ?xxxHandleGhostRelatedWindowDestruction@@YAXPEAUtagWND@@@Z @ 0x1C012EBFC (-xxxHandleGhostRelatedWindowDestruction@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxHandleHealthyThread@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C01F5AA4 (-xxxHandleHealthyThread@@YAXPEAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     _GetProp @ 0x1C002ED8C (_GetProp.c)
 */

char __fastcall IsWindowGhosted(const struct tagWND *a1)
{
  char v2; // bl

  if ( **(_WORD **)(*((_QWORD *)a1 + 17) + 8LL) == *(_WORD *)(gpsi + 900LL) )
    return 0;
  v2 = 1;
  if ( !GetProp(a1, *(unsigned __int16 *)(gpsi + 900LL), 1LL) && !GetProp(a1, *(unsigned __int16 *)(gpsi + 1378LL), 1LL) )
    return 0;
  return v2;
}
