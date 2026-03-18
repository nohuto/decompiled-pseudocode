/*
 * XREFs of NtUserPlayEventSound @ 0x1C01FB170
 * Callers:
 *     <none>
 * Callees:
 *     xxxPlayEventSound @ 0x1C01088E0 (xxxPlayEventSound.c)
 */

__int64 __fastcall NtUserPlayEventSound(unsigned int a1)
{
  __int64 v2; // rbx
  __int64 v3; // rcx

  EnterCrit(0LL, 0LL);
  v2 = (int)xxxPlayEventSound(a1);
  UserSessionSwitchLeaveCrit(v3);
  return v2;
}
