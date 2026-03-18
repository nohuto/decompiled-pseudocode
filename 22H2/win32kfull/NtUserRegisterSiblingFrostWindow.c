/*
 * XREFs of NtUserRegisterSiblingFrostWindow @ 0x1C01D9910
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxRegisterSiblingFrostWindow@@YAHPEAUHWND__@@0@Z @ 0x1C01F53F8 (-xxxRegisterSiblingFrostWindow@@YAHPEAUHWND__@@0@Z.c)
 */

__int64 __fastcall NtUserRegisterSiblingFrostWindow(HWND a1, HWND a2)
{
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9

  EnterCrit(0LL, 0LL);
  v4 = (int)xxxRegisterSiblingFrostWindow(a1, a2);
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return v4;
}
