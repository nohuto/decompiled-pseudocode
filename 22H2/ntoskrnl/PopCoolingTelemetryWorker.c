/*
 * XREFs of PopCoolingTelemetryWorker @ 0x140586CB8
 * Callers:
 *     PopThermalTelemetryWorker @ 0x140590020 (PopThermalTelemetryWorker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14032C2A0 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C404 (PopAcquireRwLockExclusive.c)
 *     PopTraceThermalRequestActiveActivity @ 0x140595868 (PopTraceThermalRequestActiveActivity.c)
 *     PopTraceThermalRequestPassiveHistogram @ 0x140595A88 (PopTraceThermalRequestPassiveHistogram.c)
 *     PopThermalUpdateActiveTimeTracking @ 0x1408025F0 (PopThermalUpdateActiveTimeTracking.c)
 *     PopThermalUpdatePassiveTimeTracking @ 0x14098B070 (PopThermalUpdatePassiveTimeTracking.c)
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
      PopReleaseRwLock((__int64 *)(i + 32));
    }
  }
  PopReleaseRwLock(&PopCoolingExtensionLock);
}
