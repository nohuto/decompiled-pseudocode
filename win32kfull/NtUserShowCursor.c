/*
 * XREFs of NtUserShowCursor @ 0x1C00F2A20
 * Callers:
 *     <none>
 * Callees:
 *     ?zzzShowCursor@@YAH_N@Z @ 0x1C00F2A60 (-zzzShowCursor@@YAH_N@Z.c)
 */

__int64 __fastcall NtUserShowCursor(int a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx

  EnterCrit(0LL, 0LL);
  v2 = zzzShowCursor(a1 != 0);
  UserSessionSwitchLeaveCrit(v3);
  return v2;
}
