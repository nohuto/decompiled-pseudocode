/*
 * XREFs of NtUserRegisterGhostWindow @ 0x1C01447F0
 * Callers:
 *     <none>
 * Callees:
 *     xxxRegisterGhostWindow @ 0x1C0144AD4 (xxxRegisterGhostWindow.c)
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
