/*
 * XREFs of RtlExitUserProcess @ 0x18005EED0
 * Callers:
 *     RtlExitUserThread @ 0x18004EC30 (RtlExitUserThread.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002FAA0 (RtlEnterCriticalSection.c)
 *     LdrpReleaseLoaderLock @ 0x18003E664 (LdrpReleaseLoaderLock.c)
 *     LdrpAcquireLoaderLock @ 0x18003E6C4 (LdrpAcquireLoaderLock.c)
 *     LdrShutdownProcess @ 0x18005EFA0 (LdrShutdownProcess.c)
 *     RtlReportSilentProcessExit @ 0x18005F410 (RtlReportSilentProcessExit.c)
 *     RtlUnlockProcessHeapOnProcessTerminate @ 0x18005F5A0 (RtlUnlockProcessHeapOnProcessTerminate.c)
 *     RtlLockHeap @ 0x18005F960 (RtlLockHeap.c)
 *     RtlUnlockHeap @ 0x18005FA00 (RtlUnlockHeap.c)
 *     LdrpDrainWorkQueue @ 0x18005FEC4 (LdrpDrainWorkQueue.c)
 *     EtwpShutdownPrivateLoggers @ 0x180081F90 (EtwpShutdownPrivateLoggers.c)
 *     ZwTerminateProcess @ 0x18009DA60 (ZwTerminateProcess.c)
 *     NtTerminateThread @ 0x18009DF40 (NtTerminateThread.c)
 */

void __cdecl __noreturn RtlExitUserProcess(NTSTATUS ExitStatus)
{
  void *UniqueThread; // rdx
  __int64 v3; // rcx

  EtwpShutdownPrivateLoggers();
  LdrpDrainWorkQueue((NtCurrentTeb()->SameTebFlags >> 12) & 1);
  LdrpAcquireLoaderLock();
  RtlEnterCriticalSection(&FastPebLock);
  RtlLockHeap(NtCurrentPeb()->ProcessHeap);
  if ( ZwTerminateProcess(0LL, ExitStatus) >= 0 )
  {
    RtlUnlockProcessHeapOnProcessTerminate();
    UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
    FastPebLock.LockSemaphore = 0LL;
    FastPebLock.OwningThread = UniqueThread;
    FastPebLock.LockCount = -2;
    FastPebLock.RecursionCount = 1;
    RtlLeaveCriticalSection(&FastPebLock);
    RtlReportSilentProcessExit((HANDLE)0xFFFFFFFFFFFFFFFFLL, ExitStatus);
    LdrShutdownProcess();
  }
  RtlUnlockHeap(NtCurrentPeb()->ProcessHeap);
  RtlLeaveCriticalSection(&FastPebLock);
  LdrpReleaseLoaderLock(v3, 18, 0);
  NtTerminateThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ExitStatus);
}
