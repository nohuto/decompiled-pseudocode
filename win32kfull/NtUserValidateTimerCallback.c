/*
 * XREFs of NtUserValidateTimerCallback @ 0x1C00D1AA0
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ValidateTimerCallback @ 0x1C00D1AE4 (ValidateTimerCallback.c)
 */

__int64 __fastcall NtUserValidateTimerCallback(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  struct tagTHREADINFO *v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rcx

  EnterSharedCrit(a1, a2, a3);
  v5 = PtiCurrentShared(v4);
  v6 = (int)ValidateTimerCallback(v5, a1);
  UserSessionSwitchLeaveCrit(v7);
  return v6;
}
