/*
 * XREFs of NtUserPlayEventSound @ 0x1C01D9890
 * Callers:
 *     <none>
 * Callees:
 *     xxxPlayEventSound @ 0x1C00DE8D0 (xxxPlayEventSound.c)
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
