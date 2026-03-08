/*
 * XREFs of ?xxxBroadcastImeShowStatusChange@@YAHPEAUtagWND@@H@Z @ 0x1C01B8C94
 * Callers:
 *     NtUserBroadcastImeShowStatusChange @ 0x1C01CDFD0 (NtUserBroadcastImeShowStatusChange.c)
 * Callees:
 *     ?xxxNotifyImeShowStatus@@YAXPEAUtagWND@@@Z @ 0x1C01B94A8 (-xxxNotifyImeShowStatus@@YAXPEAUtagWND@@@Z.c)
 */

__int64 __fastcall xxxBroadcastImeShowStatusChange(struct tagWND *a1, int a2)
{
  if ( (*(_WORD *)(*((_QWORD *)a1 + 5) + 42LL) & 0x2FFF) == 0x2A9 )
  {
    *(_DWORD *)(SGDGetUserSessionState(a1) + 13960) = a2 != 0;
    xxxNotifyImeShowStatus(a1);
  }
  return 1LL;
}
