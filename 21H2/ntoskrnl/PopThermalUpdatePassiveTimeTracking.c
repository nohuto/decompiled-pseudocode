/*
 * XREFs of PopThermalUpdatePassiveTimeTracking @ 0x140778838
 * Callers:
 *     PopThermalSxEntry @ 0x14038A3A8 (PopThermalSxEntry.c)
 *     PopCoolingSxTransition @ 0x14038A8D4 (PopCoolingSxTransition.c)
 *     PopCoolingTelemetryWorker @ 0x140568920 (PopCoolingTelemetryWorker.c)
 *     PopThermalTelemetryWorker @ 0x14056FB40 (PopThermalTelemetryWorker.c)
 *     PopThermalWorker @ 0x1407C0790 (PopThermalWorker.c)
 *     PoSetThermalPassiveCooling @ 0x1408E2B70 (PoSetThermalPassiveCooling.c)
 *     PopDeactiveThermalRequest @ 0x1408E2D48 (PopDeactiveThermalRequest.c)
 *     PopOrphanCoolingExtension @ 0x1408E2FF8 (PopOrphanCoolingExtension.c)
 *     PopThermalZoneRemove @ 0x1408E7EE0 (PopThermalZoneRemove.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopThermalUpdatePassiveTimeTracking(__int64 a1, unsigned __int8 a2)
{
  int v2; // r9d
  __int64 v3; // rdx
  __int64 result; // rax

  if ( !*(_BYTE *)a1 )
  {
    v2 = 21;
    do
    {
      if ( a2 >= PopThermalTrackingThresholds[v2 - 1] )
        break;
      --v2;
    }
    while ( v2 );
    v3 = MEMORY[0xFFFFF78000000008];
    result = MEMORY[0xFFFFF78000000008] - *(_QWORD *)(a1 + 8);
    *(_QWORD *)(a1 + 8LL * (unsigned int)(v2 - 1) + 24) += result;
    *(_QWORD *)(a1 + 8) = v3;
  }
  return result;
}
