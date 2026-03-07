void PopThermalSxEntry()
{
  __int64 v0; // rdx
  __int64 v1; // r8
  struct _KTHREAD *CurrentThread; // rax
  PVOID *i; // rbx
  __int64 v4; // rdx

  if ( !_InterlockedExchange(&PopThermalStateTransitionInProgress, 1) )
  {
    PopAcquireRwLockExclusive((ULONG_PTR)&PopSystemThermalInfo);
    PopThermalStandbyEndTracking(4LL, v0, v1);
    PopReleaseRwLock((ULONG_PTR)&PopSystemThermalInfo);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)&PopPolicyDeviceLock, 0LL);
    for ( i = (PVOID *)PopThermal; i != &PopThermal; i = (PVOID *)*i )
    {
      PopAcquireRwLockExclusive((ULONG_PTR)(i + 54));
      if ( *((_BYTE *)i + 145) )
      {
        LOBYTE(v4) = *((_BYTE *)i + 80);
        PopThermalUpdatePassiveTimeTracking(i + 63, v4);
        PopTraceThermalZonePassiveHistogram(i);
      }
      if ( *((_BYTE *)i + 505) )
      {
        LOBYTE(v4) = *((_BYTE *)i + 69);
        PopThermalUpdateActiveTimeTracking(i + 63, v4);
        PopTraceThermalZoneActiveActivity(i);
      }
      *((_BYTE *)i + 504) = 1;
      PopReleaseRwLock((ULONG_PTR)(i + 54));
    }
    PopReleaseRwLock((ULONG_PTR)&PopPolicyDeviceLock);
    PopCoolingSxTransition(1);
    PopAcquireRwLockExclusive((ULONG_PTR)&PopThermalStateTransitionContext);
    byte_140C3C430 = 0;
    PopReleaseRwLock((ULONG_PTR)&PopThermalStateTransitionContext);
  }
}
