/*
 * XREFs of NtUserValidateTimerCallback @ 0x1C00E9E50
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     ValidateTimerCallback @ 0x1C00E9EA0 (ValidateTimerCallback.c)
 */

__int64 __fastcall NtUserValidateTimerCallback(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v5; // rbx
  __int64 v6; // rcx

  EnterSharedCrit(a1, a2, a3);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v5 = (int)ValidateTimerCallback(ThreadWin32Thread, a1);
  UserSessionSwitchLeaveCrit(v6);
  return v5;
}
