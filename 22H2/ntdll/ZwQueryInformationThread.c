/*
 * XREFs of ZwQueryInformationThread @ 0x18009D980
 * Callers:
 *     EtwpAddLogHeaderToLogFile @ 0x180048BF8 (EtwpAddLogHeaderToLogFile.c)
 *     RtlExitUserThread @ 0x18004EC30 (RtlExitUserThread.c)
 *     TpCheckTerminateWorker @ 0x18004EC90 (TpCheckTerminateWorker.c)
 *     LdrpDetectDetour @ 0x18006347C (LdrpDetectDetour.c)
 *     RtlGetThreadWorkOnBehalfTicket @ 0x18006C6C0 (RtlGetThreadWorkOnBehalfTicket.c)
 *     RtlCheckHeldCriticalSections @ 0x18007E000 (RtlCheckHeldCriticalSections.c)
 *     RtlSetThreadIsCritical @ 0x1800896A0 (RtlSetThreadIsCritical.c)
 *     RtlQueryThreadProfiling @ 0x1800CBF10 (RtlQueryThreadProfiling.c)
 *     DbgUiConvertStateChangeStructureWorker @ 0x1800CC690 (DbgUiConvertStateChangeStructureWorker.c)
 *     LdrpDoDebuggerBreak @ 0x1800D0770 (LdrpDoDebuggerBreak.c)
 *     RtlQueryProcessDebugInformation @ 0x1800D7740 (RtlQueryProcessDebugInformation.c)
 *     RtlSetProcessDebugInformation @ 0x1800D83A0 (RtlSetProcessDebugInformation.c)
 *     RtlWow64GetThreadContext @ 0x1800DC010 (RtlWow64GetThreadContext.c)
 *     RtlWow64GetThreadSelectorEntry @ 0x1800DC040 (RtlWow64GetThreadSelectorEntry.c)
 *     RtlWow64SuspendProcess @ 0x1800DC200 (RtlWow64SuspendProcess.c)
 *     RtlWow64SuspendThread @ 0x1800DC370 (RtlWow64SuspendThread.c)
 *     RtlpWow64OpenThreadProcess @ 0x1800DC5B8 (RtlpWow64OpenThreadProcess.c)
 *     WerpThreadId @ 0x1800DDB48 (WerpThreadId.c)
 *     PsspSampleCounters @ 0x1801149B0 (PsspSampleCounters.c)
 *     PsspDumpObject_Thread @ 0x180115EC0 (PsspDumpObject_Thread.c)
 *     PsspDumpThread @ 0x1801167E8 (PsspDumpThread.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryInformationThread(
        HANDLE ThreadHandle,
        THREADINFOCLASS ThreadInformationClass,
        PVOID ThreadInformation,
        ULONG ThreadInformationLength,
        PULONG ReturnLength)
{
  NTSTATUS result; // eax

  result = 37;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
