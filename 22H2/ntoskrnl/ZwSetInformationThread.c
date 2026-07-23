/*
 * XREFs of ZwSetInformationThread @ 0x1403F9BC0
 * Callers:
 *     ExpWorkerFactoryCreateThread @ 0x1402DC898 (ExpWorkerFactoryCreateThread.c)
 *     RtlAcquirePrivilege @ 0x14069434C (RtlAcquirePrivilege.c)
 *     RtlImpersonateSelfEx @ 0x140694588 (RtlImpersonateSelfEx.c)
 *     RtlReleasePrivilege @ 0x14069DF2C (RtlReleasePrivilege.c)
 *     BiReleasePrivilege @ 0x140785B38 (BiReleasePrivilege.c)
 *     BiAcquirePrivilege @ 0x140785B90 (BiAcquirePrivilege.c)
 *     DbgkUserReportWorkRoutine @ 0x140886DA0 (DbgkUserReportWorkRoutine.c)
 *     EtwpCovSampCaptureContextStart @ 0x140942308 (EtwpCovSampCaptureContextStart.c)
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
