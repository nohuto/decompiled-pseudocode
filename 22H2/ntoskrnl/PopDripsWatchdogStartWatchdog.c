/*
 * XREFs of PopDripsWatchdogStartWatchdog @ 0x1408EF5A4
 * Callers:
 *     PopPdcIdleResiliencyCallback @ 0x1408F009C (PopPdcIdleResiliencyCallback.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x1402CBB00 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402CC2B0 (ExAcquireResourceExclusiveLite.c)
 *     memset @ 0x140413800 (memset.c)
 *     PopCalculateIdleInformation @ 0x140570350 (PopCalculateIdleInformation.c)
 *     PopDripsWatchdogScheduleNextTimer @ 0x1408EF534 (PopDripsWatchdogScheduleNextTimer.c)
 */

_QWORD *PopDripsWatchdogStartWatchdog()
{
  struct _KTHREAD *CurrentThread; // rax
  signed __int32 v1; // eax
  signed __int32 v2; // ett
  __int64 v3; // rdi
  __int64 v4; // rbx
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF
  __int128 v7; // [rsp+30h] [rbp-18h]

  CurrentThread = KeGetCurrentThread();
  v6 = 0LL;
  v7 = 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PopDripsWatchdogContext, 1u);
  if ( (dword_140C21448 & 2) != 0 )
  {
    _m_prefetchw(&PopDirectedDripsUmTestDeviceCount);
    v1 = PopDirectedDripsUmTestDeviceCount;
    do
    {
      v2 = v1;
      v1 = _InterlockedCompareExchange(&PopDirectedDripsUmTestDeviceCount, v1, v1);
    }
    while ( v2 != v1 );
    if ( !v1 )
    {
      v3 = MEMORY[0xFFFFF78000000008];
      PopCalculateIdleInformation((__int64)&v6);
      v4 = PopWdiCurrentScenarioInstanceId;
      if ( (dword_140C21504 & 1) != 0 )
      {
        dword_140C21514 = 0;
        qword_140C21508 = 0LL;
        xmmword_140C21538 = v6;
        dword_140C21518 = PopDripsWatchdogDebounceTickInterval;
        qword_140C21520 = v3;
        qword_140C21528 = v3;
        xmmword_140C21548 = v7;
        PopDripsWatchdogScheduleNextTimer((__int64)&unk_140C21450);
      }
      if ( (dword_140C2160C & 1) != 0 )
      {
        memset(&unk_140C21610, 0, 0x50uLL);
        dword_140C21634 = dword_140C23C64;
        xmmword_140C21640 = v6;
        qword_140C21638 = qword_140C4FF68;
        xmmword_140C21650 = v7;
        PopDripsWatchdogScheduleNextTimer((__int64)&unk_140C21558);
      }
      dword_140C21448 |= 4u;
      qword_140C21668 = v4;
    }
  }
  ExReleaseResourceLite(&PopDripsWatchdogContext);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
