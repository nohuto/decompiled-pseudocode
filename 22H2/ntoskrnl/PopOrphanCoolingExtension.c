/*
 * XREFs of PopOrphanCoolingExtension @ 0x140983228
 * Callers:
 *     PopCoolingExtensionPnpNotification @ 0x140982EA0 (PopCoolingExtensionPnpNotification.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14032C2A0 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C404 (PopAcquireRwLockExclusive.c)
 *     PopThermalUpdateTelemetryClientCount @ 0x140387BCC (PopThermalUpdateTelemetryClientCount.c)
 *     PopGetDope @ 0x1403C4BE8 (PopGetDope.c)
 *     PopTraceThermalRequestActiveActivity @ 0x140595868 (PopTraceThermalRequestActiveActivity.c)
 *     PopTraceThermalRequestPassiveHistogram @ 0x140595A88 (PopTraceThermalRequestPassiveHistogram.c)
 *     PopThermalUpdateActiveTimeTracking @ 0x1408025F0 (PopThermalUpdateActiveTimeTracking.c)
 *     PopDiagTraceThermalRequest @ 0x140860C54 (PopDiagTraceThermalRequest.c)
 *     PopThermalUpdatePassiveTimeTracking @ 0x14098B070 (PopThermalUpdatePassiveTimeTracking.c)
 */

void __fastcall PopOrphanCoolingExtension(__int64 *a1)
{
  __int64 v2; // rdx
  __int64 i; // rbx
  __int64 v4; // rcx
  __int64 **v5; // rax

  PopAcquireRwLockExclusive((ULONG_PTR)&PopCoolingExtensionLock);
  PopAcquireRwLockExclusive((ULONG_PTR)(a1 + 4));
  if ( a1[6] )
  {
    for ( i = a1[2]; (__int64 *)i != a1 + 2; i = *(_QWORD *)i )
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
    if ( *(__int64 **)(*a1 + 8) != a1 || (v5 = (__int64 **)a1[1], *v5 != a1) )
      __fastfail(3u);
    *v5 = (__int64 *)v4;
    *(_QWORD *)(v4 + 8) = v5;
    *a1 = 0LL;
    a1[6] = 0LL;
  }
  PopReleaseRwLock(a1 + 4);
  PopReleaseRwLock(&PopCoolingExtensionLock);
}
