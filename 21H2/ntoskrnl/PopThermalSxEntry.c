/*
 * XREFs of PopThermalSxEntry @ 0x14038AA3C
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140A494E8 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402935D0 (PopReleaseRwLock.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     PopAcquireRwLockExclusive @ 0x1402D66A8 (PopAcquireRwLockExclusive.c)
 *     PopTraceThermalZonePassiveHistogram @ 0x14038ACD0 (PopTraceThermalZonePassiveHistogram.c)
 *     PopCoolingSxTransition @ 0x14038AE58 (PopCoolingSxTransition.c)
 *     PopTraceThermalZoneActiveActivity @ 0x14038B198 (PopTraceThermalZoneActiveActivity.c)
 *     PopThermalStandbyEndTracking @ 0x14038B428 (PopThermalStandbyEndTracking.c)
 *     PopThermalUpdatePassiveTimeTracking @ 0x1407FD7A8 (PopThermalUpdatePassiveTimeTracking.c)
 *     PopThermalUpdateActiveTimeTracking @ 0x14081CEB4 (PopThermalUpdateActiveTimeTracking.c)
 */

void PopThermalSxEntry()
{
  struct _KTHREAD *CurrentThread; // rax
  PVOID *i; // rbx
  __int64 v2; // rdx
  __int64 v3; // rcx

  if ( !_InterlockedExchange(&PopThermalStateTransitionInProgress, 1) )
  {
    PopAcquireRwLockExclusive((ULONG_PTR)&PopSystemThermalInfo);
    PopThermalStandbyEndTracking(4LL);
    PopReleaseRwLock((ULONG_PTR)&PopSystemThermalInfo);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)&PopPolicyDeviceLock, 0LL);
    for ( i = (PVOID *)PopThermal; i != &PopThermal; i = (PVOID *)*i )
    {
      PopAcquireRwLockExclusive((ULONG_PTR)(i + 54));
      if ( *((_BYTE *)i + 145) )
      {
        LOBYTE(v2) = *((_BYTE *)i + 80);
        PopThermalUpdatePassiveTimeTracking(i + 63, v2);
        PopTraceThermalZonePassiveHistogram(i);
      }
      if ( *((_BYTE *)i + 505) )
      {
        LOBYTE(v2) = *((_BYTE *)i + 69);
        PopThermalUpdateActiveTimeTracking(i + 63, v2);
        PopTraceThermalZoneActiveActivity(i);
      }
      *((_BYTE *)i + 504) = 1;
      PopReleaseRwLock((ULONG_PTR)(i + 54));
    }
    PopReleaseRwLock((ULONG_PTR)&PopPolicyDeviceLock);
    LOBYTE(v3) = 1;
    PopCoolingSxTransition(v3);
    PopAcquireRwLockExclusive((ULONG_PTR)&PopThermalStateTransitionContext);
    byte_140C22210 = 0;
    PopReleaseRwLock((ULONG_PTR)&PopThermalStateTransitionContext);
  }
}
