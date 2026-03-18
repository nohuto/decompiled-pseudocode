/*
 * XREFs of NtUserGetQueueIocp @ 0x1C01F5FD0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall NtUserGetQueueIocp(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // rcx

  EnterSharedCrit(a1, a2, a3);
  v3 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 1432);
  UserSessionSwitchLeaveCrit(v4);
  return v3;
}
