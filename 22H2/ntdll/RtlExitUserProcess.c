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

__int64 __fastcall RtlExitUserProcess(unsigned int a1)
{
  void *UniqueThread; // rdx
  __int64 v3; // r8
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rcx

  EtwpShutdownPrivateLoggers();
  LdrpDrainWorkQueue((NtCurrentTeb()->SameTebFlags >> 12) & 1);
  LdrpAcquireLoaderLock();
  RtlEnterCriticalSection((__int64)&FastPebLock);
  RtlLockHeap(NtCurrentPeb()->ProcessHeap);
  if ( (int)ZwTerminateProcess(0LL, a1) < 0 )
  {
    RtlUnlockHeap(NtCurrentPeb()->ProcessHeap);
    RtlLeaveCriticalSection((__int64)&FastPebLock, v5, v6);
    LdrpReleaseLoaderLock(v7, 18LL, 0LL);
    return NtTerminateThread(-2LL, a1);
  }
  else
  {
    RtlUnlockProcessHeapOnProcessTerminate();
    UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
    qword_18016C0F8 = 0LL;
    qword_18016C0F0 = (__int64)UniqueThread;
    dword_18016C0E8 = -2;
    dword_18016C0EC = 1;
    RtlLeaveCriticalSection((__int64)&FastPebLock, (__int64)UniqueThread, v3);
    RtlReportSilentProcessExit(-1LL, a1);
    LdrShutdownProcess();
    return ZwTerminateProcess(-1LL, a1);
  }
}
