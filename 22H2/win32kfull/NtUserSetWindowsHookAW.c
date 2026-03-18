/*
 * XREFs of NtUserSetWindowsHookAW @ 0x1C01DD940
 * Callers:
 *     <none>
 * Callees:
 *     ?NtUserSetWindowsHookAW_Body@@YAPEAUHHOOK__@@HP6A_JH_K_J@ZK@Z @ 0x1C01CC11C (-NtUserSetWindowsHookAW_Body@@YAPEAUHHOOK__@@HP6A_JH_K_J@ZK@Z.c)
 */

__int64 __fastcall NtUserSetWindowsHookAW(__int64 a1, __int64 (*a2)(int, unsigned __int64, __int64), __int64 a3)
{
  unsigned int v3; // ebx
  unsigned int v5; // esi
  __int64 v6; // r9
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9

  v3 = a3;
  v5 = a1;
  EnterSharedCrit(a1, a2, a3);
  v7 = NtUserSetWindowsHookAW_Body(v5, a2, v3, v6);
  UserSessionSwitchLeaveCrit(v9, v8, v10, v11);
  return v7;
}
