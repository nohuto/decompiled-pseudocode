/*
 * XREFs of PopThermalUpdateActiveTimeTracking @ 0x140846CC0
 * Callers:
 *     PopCoolingSxTransition @ 0x140584670 (PopCoolingSxTransition.c)
 *     PopCoolingTelemetryWorker @ 0x140584788 (PopCoolingTelemetryWorker.c)
 *     PopThermalSxEntry @ 0x14058D7A8 (PopThermalSxEntry.c)
 *     PopThermalTelemetryWorker @ 0x14058DAF0 (PopThermalTelemetryWorker.c)
 *     PopThermalWorker @ 0x140846460 (PopThermalWorker.c)
 *     PoSetThermalActiveCooling @ 0x14097FC40 (PoSetThermalActiveCooling.c)
 *     PopDeactiveThermalRequest @ 0x14097FEC8 (PopDeactiveThermalRequest.c)
 *     PopOrphanCoolingExtension @ 0x140980178 (PopOrphanCoolingExtension.c)
 *     PopThermalZoneRemove @ 0x140988010 (PopThermalZoneRemove.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopThermalUpdateActiveTimeTracking(__int64 a1, __int64 a2)
{
  __int64 v2; // r9
  __int64 v3; // r8
  __int64 result; // rax

  if ( !*(_BYTE *)a1 )
  {
    a2 = (unsigned __int8)a2;
    v2 = MEMORY[0xFFFFF78000000008];
    v3 = MEMORY[0xFFFFF78000000008] - *(_QWORD *)(a1 + 16);
    while ( 1 )
    {
      result = *(unsigned __int8 *)(a1 + 1);
      if ( (unsigned int)a2 >= (unsigned int)result )
        break;
      *(_QWORD *)(a1 + 8 * a2 + 360) += v3;
      a2 = (unsigned int)(a2 + 1);
    }
    *(_QWORD *)(a1 + 520) += v3;
    *(_QWORD *)(a1 + 16) = v2;
  }
  return result;
}
