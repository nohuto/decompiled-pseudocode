/*
 * XREFs of NtUserInitAnsiOem @ 0x1C00B84A0
 * Callers:
 *     <none>
 * Callees:
 *     InitAnsiOem @ 0x1C00B84F0 (InitAnsiOem.c)
 */

__int64 __fastcall NtUserInitAnsiOem(__int64 a1, __int64 a2)
{
  __int64 inited; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9

  EnterCrit(0LL, 0LL);
  inited = (int)InitAnsiOem(a1, a2);
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return inited;
}
