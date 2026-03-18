/*
 * XREFs of NtUserRegisterSystemThread @ 0x1C01FBC10
 * Callers:
 *     <none>
 * Callees:
 *     zzzRegisterSystemThread @ 0x1C01E147C (zzzRegisterSystemThread.c)
 */

__int64 __fastcall NtUserRegisterSystemThread(char a1)
{
  __int64 v2; // rbx
  __int64 v3; // rcx

  EnterCrit(0LL, 0LL);
  v2 = (int)zzzRegisterSystemThread(a1);
  UserSessionSwitchLeaveCrit(v3);
  return v2;
}
