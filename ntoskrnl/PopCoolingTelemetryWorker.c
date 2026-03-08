/*
 * XREFs of PopCoolingTelemetryWorker @ 0x140584788
 * Callers:
 *     PopThermalTelemetryWorker @ 0x14058DAF0 (PopThermalTelemetryWorker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140236C40 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402BC5B0 (PopAcquireRwLockExclusive.c)
 *     PopTraceThermalRequestActiveActivity @ 0x14059334C (PopTraceThermalRequestActiveActivity.c)
 *     PopTraceThermalRequestPassiveHistogram @ 0x14059356C (PopTraceThermalRequestPassiveHistogram.c)
 *     PopThermalUpdateActiveTimeTracking @ 0x140846CC0 (PopThermalUpdateActiveTimeTracking.c)
 *     PopThermalUpdatePassiveTimeTracking @ 0x140987FC0 (PopThermalUpdatePassiveTimeTracking.c)
 */

void PopCoolingTelemetryWorker()
{
  __int64 i; // rbx
  __int64 v1; // rdx
  __int64 *j; // rdi

  PopAcquireRwLockExclusive((ULONG_PTR)&PopCoolingExtensionLock);
  for ( i = PopCoolingExtensionList; (__int64 *)i != &PopCoolingExtensionList; i = *(_QWORD *)i )
  {
    if ( *(_BYTE *)(i + 64) )
    {
      PopAcquireRwLockExclusive(i + 32);
      for ( j = *(__int64 **)(i + 16); j != (__int64 *)(i + 16); j = (__int64 *)*j )
      {
        if ( *((_BYTE *)j + 18) )
        {
          if ( *(_QWORD *)(i + 136) )
          {
            LOBYTE(v1) = *((_BYTE *)j + 16);
            PopThermalUpdatePassiveTimeTracking(j + 5, v1);
            PopTraceThermalRequestPassiveHistogram(j);
          }
          if ( *(_QWORD *)(i + 128) )
          {
            LOBYTE(v1) = *((_BYTE *)j + 17) == 0;
            PopThermalUpdateActiveTimeTracking(j + 5, v1);
            PopTraceThermalRequestActiveActivity(j);
          }
        }
      }
      PopReleaseRwLock(i + 32);
    }
  }
  PopReleaseRwLock((ULONG_PTR)&PopCoolingExtensionLock);
}
