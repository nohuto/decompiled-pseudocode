/*
 * XREFs of PopThermalTelemetryWorker @ 0x1405D06F0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x1402935D0 (PopReleaseRwLock.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     PopAcquireRwLockExclusive @ 0x1402D66A8 (PopAcquireRwLockExclusive.c)
 *     PopTraceThermalZonePassiveHistogram @ 0x14038ACD0 (PopTraceThermalZonePassiveHistogram.c)
 *     PopTraceThermalZoneActiveActivity @ 0x14038B198 (PopTraceThermalZoneActiveActivity.c)
 *     PopCoolingTelemetryWorker @ 0x1405C9980 (PopCoolingTelemetryWorker.c)
 *     PopThermalUpdatePassiveTimeTracking @ 0x1407FD7A8 (PopThermalUpdatePassiveTimeTracking.c)
 *     PopThermalUpdateActiveTimeTracking @ 0x14081CEB4 (PopThermalUpdateActiveTimeTracking.c)
 */

void PopThermalTelemetryWorker()
{
  struct _KTHREAD *CurrentThread; // rax
  PVOID *i; // rbx
  __int64 v2; // rdx

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
      PopTraceThermalZonePassiveHistogram((__int64)i);
    }
    if ( *((_BYTE *)i + 505) )
    {
      LOBYTE(v2) = *((_BYTE *)i + 69);
      PopThermalUpdateActiveTimeTracking(i + 63, v2);
      PopTraceThermalZoneActiveActivity((__int64)i);
    }
    PopReleaseRwLock((ULONG_PTR)(i + 54));
  }
  PopReleaseRwLock((ULONG_PTR)&PopPolicyDeviceLock);
  PopCoolingTelemetryWorker();
  _InterlockedExchange(&dword_140C22148, 0);
}
