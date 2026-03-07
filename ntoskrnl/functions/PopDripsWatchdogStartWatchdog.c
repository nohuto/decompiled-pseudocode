char PopDripsWatchdogStartWatchdog()
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
  --CurrentThread->KernelApcDisable;
  v7 = 0LL;
  ExAcquireResourceExclusiveLite(&PopDripsWatchdogContext, 1u);
  if ( (dword_140C39568 & 2) != 0 )
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
      if ( (dword_140C39624 & 1) != 0 )
      {
        dword_140C39634 = 0;
        qword_140C39628 = 0LL;
        xmmword_140C39658 = v6;
        dword_140C39638 = PopDripsWatchdogDebounceTickInterval;
        qword_140C39640 = v3;
        qword_140C39648 = v3;
        xmmword_140C39668 = v7;
        PopDripsWatchdogScheduleNextTimer((__int64)&unk_140C39570);
      }
      if ( (dword_140C3972C & 1) != 0 )
      {
        memset(&unk_140C39730, 0, 0x50uLL);
        dword_140C39754 = dword_140C3CB84;
        xmmword_140C39760 = v6;
        qword_140C39758 = qword_140CF78E8;
        xmmword_140C39770 = v7;
        PopDripsWatchdogScheduleNextTimer((__int64)&unk_140C39678);
      }
      dword_140C39568 |= 4u;
      qword_140C39788 = v4;
    }
  }
  ExReleaseResourceLite(&PopDripsWatchdogContext);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
