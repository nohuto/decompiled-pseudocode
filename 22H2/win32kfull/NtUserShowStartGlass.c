/*
 * XREFs of NtUserShowStartGlass @ 0x1C01DECD0
 * Callers:
 *     <none>
 * Callees:
 *     zzzShowStartGlass @ 0x1C01B3738 (zzzShowStartGlass.c)
 */

__int64 __fastcall NtUserShowStartGlass(unsigned int a1)
{
  __int64 started; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9

  EnterCrit(0LL, 0LL);
  started = (int)zzzShowStartGlass(a1);
  UserSessionSwitchLeaveCrit(v4, v3, v5, v6);
  return started;
}
