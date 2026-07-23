/*
 * XREFs of RtlExitUserThread @ 0x18004EC30
 * Callers:
 *     EtwpLogger @ 0x18004C5E0 (EtwpLogger.c)
 *     RtlUserThreadStart @ 0x18004CC70 (RtlUserThreadStart.c)
 *     TppWorkerThread @ 0x18004D110 (TppWorkerThread.c)
 *     RtlUserFiberStart @ 0x1800808F0 (RtlUserFiberStart.c)
 *     DbgUiRemoteBreakin @ 0x1800CCA30 (DbgUiRemoteBreakin.c)
 *     RtlpQueryProcessDebugInformationRemote @ 0x1800D8C40 (RtlpQueryProcessDebugInformationRemote.c)
 *     RtlpSetProcessDebugInformationRemote @ 0x1800D8E90 (RtlpSetProcessDebugInformationRemote.c)
 *     RtlpExtendedHeapInformationWorkerThread @ 0x1800F3B90 (RtlpExtendedHeapInformationWorkerThread.c)
 * Callees:
 *     LdrShutdownThread @ 0x180017450 (LdrShutdownThread.c)
 *     TpCheckTerminateWorker @ 0x18004EC90 (TpCheckTerminateWorker.c)
 *     RtlExitUserProcess @ 0x18005EED0 (RtlExitUserProcess.c)
 *     ZwQueryInformationThread @ 0x18009D980 (ZwQueryInformationThread.c)
 *     NtTerminateThread @ 0x18009DF40 (NtTerminateThread.c)
 */

void __cdecl __noreturn RtlExitUserThread(NTSTATUS ExitStatus)
{
  int ThreadInformation; // [rsp+48h] [rbp+10h] BYREF

  ThreadInformation = 0;
  if ( ZwQueryInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadAmILastThread, &ThreadInformation, 4u, 0LL) >= 0 )
  {
    if ( ThreadInformation )
      RtlExitUserProcess(ExitStatus);
  }
  LdrShutdownThread();
}
