/*
 * XREFs of NtUserWOWModuleUnload @ 0x1C0200870
 * Callers:
 *     <none>
 * Callees:
 *     _WOWModuleUnload @ 0x1C0221974 (_WOWModuleUnload.c)
 */

__int64 __fastcall NtUserWOWModuleUnload(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rcx

  EnterCrit(0LL, 0LL);
  v2 = (int)WOWModuleUnload(a1);
  UserSessionSwitchLeaveCrit(v3);
  return v2;
}
