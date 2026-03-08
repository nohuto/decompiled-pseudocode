/*
 * XREFs of NtUserRegisterGhostWindow @ 0x1C01DA750
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxRegisterGhostWindow@@YAHPEAUHWND__@@0@Z @ 0x1C01F62F4 (-xxxRegisterGhostWindow@@YAHPEAUHWND__@@0@Z.c)
 */

__int64 __fastcall NtUserRegisterGhostWindow(HWND a1, HWND a2)
{
  __int64 v4; // rbx
  __int64 v5; // rcx

  EnterCrit(0LL, 0LL);
  v4 = (int)xxxRegisterGhostWindow(a1, a2);
  UserSessionSwitchLeaveCrit(v5);
  return v4;
}
