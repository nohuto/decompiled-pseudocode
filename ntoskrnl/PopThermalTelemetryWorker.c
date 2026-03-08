/*
 * XREFs of PopThermalTelemetryWorker @ 0x14058DAF0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x140236C40 (PopReleaseRwLock.c)
 *     ExAcquirePushLockSharedEx @ 0x1402626A0 (ExAcquirePushLockSharedEx.c)
 *     PopAcquireRwLockExclusive @ 0x1402BC5B0 (PopAcquireRwLockExclusive.c)
 *     PopCoolingTelemetryWorker @ 0x140584788 (PopCoolingTelemetryWorker.c)
 *     PopTraceThermalZoneActiveActivity @ 0x1405938C0 (PopTraceThermalZoneActiveActivity.c)
 *     PopTraceThermalZonePassiveHistogram @ 0x140593A94 (PopTraceThermalZonePassiveHistogram.c)
 *     PopThermalUpdateActiveTimeTracking @ 0x140846CC0 (PopThermalUpdateActiveTimeTracking.c)
 *     PopThermalUpdatePassiveTimeTracking @ 0x140987FC0 (PopThermalUpdatePassiveTimeTracking.c)
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
      PopTraceThermalZonePassiveHistogram(i);
    }
    if ( *((_BYTE *)i + 505) )
    {
      LOBYTE(v2) = *((_BYTE *)i + 69);
      PopThermalUpdateActiveTimeTracking(i + 63, v2);
      PopTraceThermalZoneActiveActivity(i);
    }
    PopReleaseRwLock((ULONG_PTR)(i + 54));
  }
  PopReleaseRwLock((ULONG_PTR)&PopPolicyDeviceLock);
  PopCoolingTelemetryWorker();
  _InterlockedExchange(&dword_140C3C528, 0);
}
