/*
 * XREFs of ZwSetInformationThread @ 0x14041B900
 * Callers:
 *     ExpWorkerFactoryCreateThread @ 0x1402D5484 (ExpWorkerFactoryCreateThread.c)
 *     DifZwSetInformationThreadWrapper @ 0x1406277D0 (DifZwSetInformationThreadWrapper.c)
 *     RtlAcquirePrivilege @ 0x1406CB6DC (RtlAcquirePrivilege.c)
 *     RtlImpersonateSelfEx @ 0x1406CB908 (RtlImpersonateSelfEx.c)
 *     RtlReleasePrivilege @ 0x1406DAE08 (RtlReleasePrivilege.c)
 *     BiReleasePrivilege @ 0x140813B50 (BiReleasePrivilege.c)
 *     BiAcquirePrivilege @ 0x140813BA8 (BiAcquirePrivilege.c)
 *     DbgkUserReportWorkRoutine @ 0x140929C60 (DbgkUserReportWorkRoutine.c)
 *     EtwpCovSampCaptureContextStart @ 0x1409EEA80 (EtwpCovSampCaptureContextStart.c)
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
