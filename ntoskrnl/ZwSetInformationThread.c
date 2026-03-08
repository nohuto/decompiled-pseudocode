/*
 * XREFs of ZwSetInformationThread @ 0x1404124B0
 * Callers:
 *     ExpWorkerFactoryCreateThread @ 0x1403679CC (ExpWorkerFactoryCreateThread.c)
 *     DifZwSetInformationThreadWrapper @ 0x1405F5040 (DifZwSetInformationThreadWrapper.c)
 *     RtlAcquirePrivilege @ 0x140783964 (RtlAcquirePrivilege.c)
 *     RtlImpersonateSelfEx @ 0x140783B34 (RtlImpersonateSelfEx.c)
 *     RtlReleasePrivilege @ 0x140790154 (RtlReleasePrivilege.c)
 *     BiAcquirePrivilege @ 0x14082F784 (BiAcquirePrivilege.c)
 *     BiReleasePrivilege @ 0x14082F810 (BiReleasePrivilege.c)
 *     DbgkUserReportWorkRoutine @ 0x140936CD0 (DbgkUserReportWorkRoutine.c)
 *     EtwpCovSampCaptureContextStart @ 0x1409EDC1C (EtwpCovSampCaptureContextStart.c)
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
  return KiServiceInternal(ThreadHandle, ThreadInformationClass, ThreadInformation);
}
