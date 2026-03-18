/*
 * XREFs of UserGetMiniWinInfo @ 0x1C00179A4
 * Callers:
 *     GreTransferSpriteStateToDwmState @ 0x1C00597AC (GreTransferSpriteStateToDwmState.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00F212C (HMValidateHandleNoSecure.c)
 *     ?InitializeMiniWinInfo@@YAXQEBUtagWND@@PEAUtagMINIWINDOWINFO@@@Z @ 0x1C011B17C (-InitializeMiniWinInfo@@YAXQEBUtagWND@@PEAUtagMINIWINDOWINFO@@@Z.c)
 */

__int64 __fastcall UserGetMiniWinInfo(__int64 a1, struct tagMINIWINDOWINFO *a2, _DWORD *a3)
{
  struct tagMINIWINDOWINFO *v3; // rbp
  unsigned int v5; // ebx
  const struct tagWND *v6; // rax
  const struct tagWND *v7; // rdi

  v3 = a2;
  LOBYTE(a2) = 1;
  v5 = 0;
  v6 = (const struct tagWND *)HMValidateHandleNoSecure(a1, a2);
  v7 = v6;
  if ( v6 )
  {
    InitializeMiniWinInfo(v6, v3);
    v5 = 1;
    *a3 = *((_DWORD *)v7 + 64);
  }
  return v5;
}
