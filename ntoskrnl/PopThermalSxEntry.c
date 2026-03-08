/*
 * XREFs of PopThermalSxEntry @ 0x14058D7A8
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140AA5F80 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140236C40 (PopReleaseRwLock.c)
 *     ExAcquirePushLockSharedEx @ 0x1402626A0 (ExAcquirePushLockSharedEx.c)
 *     PopAcquireRwLockExclusive @ 0x1402BC5B0 (PopAcquireRwLockExclusive.c)
 *     PopCoolingSxTransition @ 0x140584670 (PopCoolingSxTransition.c)
 *     PopThermalStandbyEndTracking @ 0x14058D6F8 (PopThermalStandbyEndTracking.c)
 *     PopTraceThermalZoneActiveActivity @ 0x1405938C0 (PopTraceThermalZoneActiveActivity.c)
 *     PopTraceThermalZonePassiveHistogram @ 0x140593A94 (PopTraceThermalZonePassiveHistogram.c)
 *     PopThermalUpdateActiveTimeTracking @ 0x140846CC0 (PopThermalUpdateActiveTimeTracking.c)
 *     PopThermalUpdatePassiveTimeTracking @ 0x140987FC0 (PopThermalUpdatePassiveTimeTracking.c)
 */

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
