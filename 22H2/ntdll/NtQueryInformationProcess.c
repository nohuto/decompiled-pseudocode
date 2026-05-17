/*
 * XREFs of NtQueryInformationProcess @ 0x18009D800
 * Callers:
 *     RtlpHeapGenerateRandomValue32 @ 0x18000A448 (RtlpHeapGenerateRandomValue32.c)
 *     RtlpHpLfhSubsegmentInitialize @ 0x18002F690 (RtlpHpLfhSubsegmentInitialize.c)
 *     RtlUserThreadStart @ 0x18004CC70 (RtlUserThreadStart.c)
 *     LdrpLogLoadFailureEtwEvent @ 0x18006152C (LdrpLogLoadFailureEtwEvent.c)
 *     WerpGlobalFlagsForProcess @ 0x180061C54 (WerpGlobalFlagsForProcess.c)
 *     WerpProcessId @ 0x180061E0C (WerpProcessId.c)
 *     RtlDecodePointer @ 0x18006B3E0 (RtlDecodePointer.c)
 *     RtlEncodePointer @ 0x180072F40 (RtlEncodePointer.c)
 *     RtlpCallVectoredHandlers @ 0x180079A44 (RtlpCallVectoredHandlers.c)
 *     RtlWow64GetSharedInfoProcess @ 0x18007AB40 (RtlWow64GetSharedInfoProcess.c)
 *     RtlSetUnhandledExceptionFilter @ 0x1800802D0 (RtlSetUnhandledExceptionFilter.c)
 *     RtlpAddVectoredHandler @ 0x180082080 (RtlpAddVectoredHandler.c)
 *     RtlSetProcessIsCritical @ 0x18008C080 (RtlSetProcessIsCritical.c)
 *     LdrpQueryInformationCurrentProcess @ 0x1800CE680 (LdrpQueryInformationCurrentProcess.c)
 *     LdrpLogFatalUserCallbackException @ 0x1800CF3C0 (LdrpLogFatalUserCallbackException.c)
 *     LdrpInitializeProcess @ 0x1800D1D50 (LdrpInitializeProcess.c)
 *     LdrpMapCleanModuleView @ 0x1800D514C (LdrpMapCleanModuleView.c)
 *     LdrpFatalExceptionFilter @ 0x1800D5340 (LdrpFatalExceptionFilter.c)
 *     RtlCreateProcessReflection @ 0x1800D5A40 (RtlCreateProcessReflection.c)
 *     RtlDecodeRemotePointer @ 0x1800DC720 (RtlDecodeRemotePointer.c)
 *     RtlEncodeRemotePointer @ 0x1800DC790 (RtlEncodeRemotePointer.c)
 *     RtlReportException @ 0x1800DC930 (RtlReportException.c)
 *     WerpIsDebugPortPresent @ 0x1800DDAC0 (WerpIsDebugPortPresent.c)
 *     SetAssertBufferPtrinPeb @ 0x1800DDD64 (SetAssertBufferPtrinPeb.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800E8FA0 (RtlpNotOwnerCriticalSection.c)
 *     RtlpPossibleDeadlock @ 0x1800E90F8 (RtlpPossibleDeadlock.c)
 *     RtlpInitRandomExVector @ 0x1801025A0 (RtlpInitRandomExVector.c)
 *     RtlpGetModifiedProcessCookie @ 0x180108088 (RtlpGetModifiedProcessCookie.c)
 *     RtlpCreateExecutionRequiredRequest @ 0x18010AFD4 (RtlpCreateExecutionRequiredRequest.c)
 *     TppExceptionFilter @ 0x180112214 (TppExceptionFilter.c)
 *     PsspCaptureHandleTrace @ 0x180114A18 (PsspCaptureHandleTrace.c)
 *     PsspCaptureProcessInformation @ 0x180114D6C (PsspCaptureProcessInformation.c)
 *     PsspCaptureHandleInformation @ 0x180115A34 (PsspCaptureHandleInformation.c)
 *     PsspDumpObject_Process @ 0x180115DD0 (PsspDumpObject_Process.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall NtQueryInformationProcess(
        HANDLE ProcessHandle,
        PROCESSINFOCLASS ProcessInformationClass,
        PVOID ProcessInformation,
        ULONG ProcessInformationLength,
        PULONG ReturnLength)
{
  NTSTATUS result; // eax

  result = 25;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
