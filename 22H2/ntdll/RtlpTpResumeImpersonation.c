/*
 * XREFs of RtlpTpResumeImpersonation @ 0x18000C0E4
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
 */

NTSTATUS __fastcall RtlpTpResumeImpersonation(void *a1)
{
  NTSTATUS result; // eax
  HANDLE ThreadInformation; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 )
  {
    ThreadInformation = a1;
    NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadImpersonationToken, &ThreadInformation, 8u);
    return NtClose(ThreadInformation);
  }
  return result;
}
