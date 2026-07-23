/*
 * XREFs of NtSetInformationThread @ 0x18009D680
 * Callers:
 *     RtlpTpRevertCapture @ 0x18000BD78 (RtlpTpRevertCapture.c)
 *     RtlpTpResumeImpersonation @ 0x18000C0E4 (RtlpTpResumeImpersonation.c)
 *     RtlSetThreadWorkOnBehalfTicket @ 0x180020500 (RtlSetThreadWorkOnBehalfTicket.c)
 *     EtwpLogger @ 0x18004C5E0 (EtwpLogger.c)
 *     TppWorkerThread @ 0x18004D110 (TppWorkerThread.c)
 *     TppCallbackCheckThreadAfterCallback @ 0x18004E04C (TppCallbackCheckThreadAfterCallback.c)
 *     TppWorkerSwitchNode @ 0x18004E904 (TppWorkerSwitchNode.c)
 *     TppCritSetThread @ 0x18004EA64 (TppCritSetThread.c)
 *     TppCritResetThread @ 0x18004EDB4 (TppCritResetThread.c)
 *     RtlClearThreadWorkOnBehalfTicket @ 0x180068A70 (RtlClearThreadWorkOnBehalfTicket.c)
 *     RtlpTpWorkCallback @ 0x180070B60 (RtlpTpWorkCallback.c)
 *     RtlpTpImpersonate @ 0x180071130 (RtlpTpImpersonate.c)
 *     RtlpTpTimerCallback @ 0x1800771B0 (RtlpTpTimerCallback.c)
 *     RtlAcquirePrivilege @ 0x180078180 (RtlAcquirePrivilege.c)
 *     RtlImpersonateSelfEx @ 0x180078400 (RtlImpersonateSelfEx.c)
 *     RtlpTpWaitCallback @ 0x1800795F0 (RtlpTpWaitCallback.c)
 *     RtlReleasePrivilege @ 0x180081470 (RtlReleasePrivilege.c)
 *     RtlSetThreadIsCritical @ 0x1800896A0 (RtlSetThreadIsCritical.c)
 *     RtlDisableThreadProfiling @ 0x1800CBDA0 (RtlDisableThreadProfiling.c)
 *     RtlEnableThreadProfiling @ 0x1800CBE10 (RtlEnableThreadProfiling.c)
 *     RtlWow64SetThreadContext @ 0x1800DC1E0 (RtlWow64SetThreadContext.c)
 *     WerReportExceptionWorker @ 0x1800DD6C0 (WerReportExceptionWorker.c)
 *     RtlpAttachThreadToUmsCompletionList @ 0x1800F75F0 (RtlpAttachThreadToUmsCompletionList.c)
 *     RtlpDetachThreadFromUmsCompletionList @ 0x1800F76B8 (RtlpDetachThreadFromUmsCompletionList.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtSetInformationThread(
        HANDLE ThreadHandle,
        THREADINFOCLASS ThreadInformationClass,
        PVOID ThreadInformation,
        ULONG ThreadInformationLength)
{
  NTSTATUS result; // eax

  result = 13;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
