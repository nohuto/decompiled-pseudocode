/*
 * XREFs of RtlpTpRevertCapture @ 0x18000BD78
 * Callers:
 *     RtlDeleteTimer @ 0x180009C00 (RtlDeleteTimer.c)
 *     RtlCreateTimer @ 0x180009D50 (RtlCreateTimer.c)
 *     RtlDeregisterWaitEx @ 0x18000B5B0 (RtlDeregisterWaitEx.c)
 *     RtlQueueWorkItem @ 0x18000B780 (RtlQueueWorkItem.c)
 *     RtlRegisterWait @ 0x18000BE70 (RtlRegisterWait.c)
 *     RtlUpdateTimer @ 0x1800823D0 (RtlUpdateTimer.c)
 *     RtlCreateTimerQueue @ 0x180083010 (RtlCreateTimerQueue.c)
 *     RtlDeleteTimerQueueEx @ 0x180084D30 (RtlDeleteTimerQueueEx.c)
 *     RtlSetIoCompletionCallback @ 0x180112E40 (RtlSetIoCompletionCallback.c)
 * Callees:
 *     NtSetInformationThread @ 0x18009D680 (NtSetInformationThread.c)
 *     NtClose @ 0x18009D6C0 (NtClose.c)
 *     NtOpenThreadToken @ 0x18009D960 (NtOpenThreadToken.c)
 */

__int64 __fastcall RtlpTpRevertCapture(HANDLE *a1, int a2, __int64 a3)
{
  __int64 result; // rax
  int v5; // edi
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  if ( !NtCurrentTeb()->IsImpersonating )
    return 0LL;
  LOBYTE(a3) = 1;
  result = NtOpenThreadToken(-2LL, a2 != 0 ? 6 : 4, a3, a1);
  if ( (int)result >= 0 )
  {
    v6 = 0LL;
    v5 = NtSetInformationThread(-2LL, 5LL, &v6, 8LL);
    if ( v5 < 0 )
    {
      NtClose(*a1);
      *a1 = 0LL;
      return (unsigned int)v5;
    }
    return 0LL;
  }
  return result;
}
