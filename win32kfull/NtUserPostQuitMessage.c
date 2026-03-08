/*
 * XREFs of NtUserPostQuitMessage @ 0x1C00786A0
 * Callers:
 *     <none>
 * Callees:
 *     IPostQuitMessage @ 0x1C00786E8 (IPostQuitMessage.c)
 */

__int64 __fastcall NtUserPostQuitMessage(unsigned int a1)
{
  __int64 v2; // rbx
  __int64 v3; // rcx

  EnterCrit(0LL, 0LL);
  v2 = (int)IPostQuitMessage(gptiCurrent, a1);
  UserSessionSwitchLeaveCrit(v3);
  return v2;
}
