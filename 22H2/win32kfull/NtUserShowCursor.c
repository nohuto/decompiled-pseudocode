/*
 * XREFs of NtUserShowCursor @ 0x1C01256B0
 * Callers:
 *     <none>
 * Callees:
 *     ?zzzShowCursor@@YAH_N@Z @ 0x1C01256F4 (-zzzShowCursor@@YAH_N@Z.c)
 */

__int64 __fastcall NtUserShowCursor(int a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx

  EnterCrit(0LL, 1LL);
  v2 = zzzShowCursor(a1 != 0);
  UserSessionSwitchLeaveCrit(v3);
  return v2;
}
