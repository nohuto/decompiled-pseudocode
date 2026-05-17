/*
 * XREFs of NtWaitForSingleObject @ 0x18009D560
 * Callers:
 *     EtwpStopUmLogger @ 0x18004BEF0 (EtwpStopUmLogger.c)
 *     EtwpLogger @ 0x18004C5E0 (EtwpLogger.c)
 *     EtwpSynchronizeWithLogger @ 0x18004F868 (EtwpSynchronizeWithLogger.c)
 *     RtlReportSilentProcessExit @ 0x18005F410 (RtlReportSilentProcessExit.c)
 *     LdrpDrainWorkQueue @ 0x18005FEC4 (LdrpDrainWorkQueue.c)
 *     RtlWaitForWnfMetaNotification @ 0x180063980 (RtlWaitForWnfMetaNotification.c)
 *     RtlpWaitOnCriticalSection @ 0x180064940 (RtlpWaitOnCriticalSection.c)
 *     RtlAcquireResourceShared @ 0x180065F80 (RtlAcquireResourceShared.c)
 *     RtlAcquireResourceExclusive @ 0x1800660A0 (RtlAcquireResourceExclusive.c)
 *     _LdrpInitialize @ 0x180075C8C (_LdrpInitialize.c)
 *     LdrpCheckComponentOnDemandEtwEvent @ 0x1800CEB60 (LdrpCheckComponentOnDemandEtwEvent.c)
 *     RtlCreateProcessReflection @ 0x1800D5A40 (RtlCreateProcessReflection.c)
 *     RtlpProcessReflectionStartup @ 0x1800D5FD0 (RtlpProcessReflectionStartup.c)
 *     RtlQueryProcessDebugInformation @ 0x1800D7740 (RtlQueryProcessDebugInformation.c)
 *     RtlSetProcessDebugInformation @ 0x1800D83A0 (RtlSetProcessDebugInformation.c)
 *     RtlWow64SuspendProcess @ 0x1800DC200 (RtlWow64SuspendProcess.c)
 *     RtlWow64SuspendThread @ 0x1800DC370 (RtlWow64SuspendThread.c)
 *     WaitForWerSvc @ 0x1800DD604 (WaitForWerSvc.c)
 *     LdrpResReadFile @ 0x1800E4548 (LdrpResReadFile.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800F4004 (RtlpHeapPerformCrossProcessQuery.c)
 *     RtlDequeueUmsCompletionListItems @ 0x1800F7080 (RtlDequeueUmsCompletionListItems.c)
 *     RtlpRtlpCtWaitForWnfQuiescentWorker @ 0x180102500 (RtlpRtlpCtWaitForWnfQuiescentWorker.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall NtWaitForSingleObject(HANDLE Handle, BOOLEAN Alertable, PLARGE_INTEGER Timeout)
{
  NTSTATUS result; // eax

  result = 4;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
