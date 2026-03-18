/*
 * XREFs of NtUserRegisterSiblingFrostWindow @ 0x1C01FBBC0
 * Callers:
 *     <none>
 * Callees:
 *     xxxRegisterSiblingFrostWindow @ 0x1C0211880 (xxxRegisterSiblingFrostWindow.c)
 */

__int64 __fastcall NtUserRegisterSiblingFrostWindow(HWND a1, HWND a2)
{
  __int64 v4; // rbx
  __int64 v5; // rcx

  EnterCrit(0LL, 0LL);
  v4 = (int)xxxRegisterSiblingFrostWindow(a1, a2);
  UserSessionSwitchLeaveCrit(v5);
  return v4;
}
