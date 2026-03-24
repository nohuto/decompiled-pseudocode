/*
 * XREFs of ZwSetInformationThread @ 0x1403FA540
 * Callers:
 *     ExpWorkerFactoryCreateThread @ 0x140286A28 (ExpWorkerFactoryCreateThread.c)
 *     RtlAcquirePrivilege @ 0x1406B118C (RtlAcquirePrivilege.c)
 *     RtlImpersonateSelfEx @ 0x1406B13C8 (RtlImpersonateSelfEx.c)
 *     RtlReleasePrivilege @ 0x1406BABEC (RtlReleasePrivilege.c)
 *     BiReleasePrivilege @ 0x140785C38 (BiReleasePrivilege.c)
 *     BiAcquirePrivilege @ 0x140785C90 (BiAcquirePrivilege.c)
 *     DbgkUserReportWorkRoutine @ 0x140886D50 (DbgkUserReportWorkRoutine.c)
 *     EtwpCovSampCaptureContextStart @ 0x1409422B8 (EtwpCovSampCaptureContextStart.c)
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
