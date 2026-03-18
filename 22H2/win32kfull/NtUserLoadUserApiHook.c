/*
 * XREFs of NtUserLoadUserApiHook @ 0x1C001F860
 * Callers:
 *     <none>
 * Callees:
 *     xxxLoadUserApiHook @ 0x1C0021150 (xxxLoadUserApiHook.c)
 */

__int64 NtUserLoadUserApiHook()
{
  __int64 UserApiHook; // rbx
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9

  EnterCrit(0LL, 0LL);
  UserApiHook = (int)xxxLoadUserApiHook();
  UserSessionSwitchLeaveCrit(v2, v1, v3, v4);
  return UserApiHook;
}
