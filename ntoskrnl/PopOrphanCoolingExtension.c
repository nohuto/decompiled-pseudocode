/*
 * XREFs of PopOrphanCoolingExtension @ 0x140980178
 * Callers:
 *     PopCoolingExtensionPnpNotification @ 0x14097FDF0 (PopCoolingExtensionPnpNotification.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140236C40 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402BC5B0 (PopAcquireRwLockExclusive.c)
 *     PopThermalUpdateTelemetryClientCount @ 0x1403901F8 (PopThermalUpdateTelemetryClientCount.c)
 *     PopGetDope @ 0x1403BF328 (PopGetDope.c)
 *     PopTraceThermalRequestActiveActivity @ 0x14059334C (PopTraceThermalRequestActiveActivity.c)
 *     PopTraceThermalRequestPassiveHistogram @ 0x14059356C (PopTraceThermalRequestPassiveHistogram.c)
 *     PopThermalUpdateActiveTimeTracking @ 0x140846CC0 (PopThermalUpdateActiveTimeTracking.c)
 *     PopDiagTraceThermalRequest @ 0x14085CD54 (PopDiagTraceThermalRequest.c)
 *     PopThermalUpdatePassiveTimeTracking @ 0x140987FC0 (PopThermalUpdatePassiveTimeTracking.c)
 */

void __fastcall PopOrphanCoolingExtension(_QWORD *a1)
{
  __int64 v2; // rdx
  __int64 i; // rbx
  __int64 v4; // rcx
  _QWORD *v5; // rax

  PopAcquireRwLockExclusive((ULONG_PTR)&PopCoolingExtensionLock);
  PopAcquireRwLockExclusive((ULONG_PTR)(a1 + 4));
  if ( a1[6] )
  {
    for ( i = a1[2]; (_QWORD *)i != a1 + 2; i = *(_QWORD *)i )
    {
      if ( *(_BYTE *)(i + 18) )
      {
        *(_BYTE *)(i + 18) = 0;
        if ( a1[17] )
        {
          LOBYTE(v2) = *(_BYTE *)(i + 16);
          PopThermalUpdatePassiveTimeTracking(i + 40, v2);
          PopTraceThermalRequestPassiveHistogram(i);
          PopThermalUpdateTelemetryClientCount(0);
        }
        if ( a1[16] )
        {
          LOBYTE(v2) = *(_BYTE *)(i + 17) == 0;
          PopThermalUpdateActiveTimeTracking(i + 40, v2);
          PopTraceThermalRequestActiveActivity(i);
        }
        PopDiagTraceThermalRequest(i, (const EVENT_DESCRIPTOR *)POP_ETW_EVENT_THERMAL_REQUEST_REMOVE);
      }
    }
    *(_QWORD *)(PopGetDope(a1[6]) + 64) = 0LL;
    v4 = *a1;
    if ( *(_QWORD **)(*a1 + 8LL) != a1 || (v5 = (_QWORD *)a1[1], (_QWORD *)*v5 != a1) )
      __fastfail(3u);
    *v5 = v4;
    *(_QWORD *)(v4 + 8) = v5;
    *a1 = 0LL;
    a1[6] = 0LL;
  }
  PopReleaseRwLock((ULONG_PTR)(a1 + 4));
  PopReleaseRwLock((ULONG_PTR)&PopCoolingExtensionLock);
}
