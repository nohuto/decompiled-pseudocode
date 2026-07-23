/*
 * XREFs of ZwSetInformationThread @ 0x1403FA720
 * Callers:
 *     ExpWorkerFactoryCreateThread @ 0x140203BC8 (ExpWorkerFactoryCreateThread.c)
 *     RtlAcquirePrivilege @ 0x14061013C (RtlAcquirePrivilege.c)
 *     RtlImpersonateSelfEx @ 0x140610378 (RtlImpersonateSelfEx.c)
 *     RtlReleasePrivilege @ 0x140619EC0 (RtlReleasePrivilege.c)
 *     BiReleasePrivilege @ 0x140785DF8 (BiReleasePrivilege.c)
 *     BiAcquirePrivilege @ 0x140785E50 (BiAcquirePrivilege.c)
 *     DbgkUserReportWorkRoutine @ 0x140886EB0 (DbgkUserReportWorkRoutine.c)
 *     EtwpCovSampCaptureContextStart @ 0x140942488 (EtwpCovSampCaptureContextStart.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetInformationThread(
        HANDLE ThreadHandle,
        THREADINFOCLASS ThreadInformationClass,
        PVOID ThreadInformation,
        ULONG ThreadInformationLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ThreadHandle);
}
