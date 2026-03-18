/*
 * XREFs of NtUserPostQuitMessage @ 0x1C003C2C0
 * Callers:
 *     <none>
 * Callees:
 *     IPostQuitMessage @ 0x1C003C308 (IPostQuitMessage.c)
 */

__int64 __fastcall NtUserPostQuitMessage(unsigned int a1)
{
  __int64 v2; // r8
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9

  EnterCrit(0LL, 0LL);
  v3 = (int)IPostQuitMessage(gptiCurrent, a1, v2);
  UserSessionSwitchLeaveCrit(v5, v4, v6, v7);
  return v3;
}
