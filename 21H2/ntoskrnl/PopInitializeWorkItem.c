/*
 * XREFs of PopInitializeWorkItem @ 0x140829740
 * Callers:
 *     PopInitializeIRTimer @ 0x1403C0F20 (PopInitializeIRTimer.c)
 *     PoInitSystem @ 0x140B026CC (PoInitSystem.c)
 *     PopInitializePowerButtonHold @ 0x140B034C0 (PopInitializePowerButtonHold.c)
 *     PopThermalInit @ 0x140B246C0 (PopThermalInit.c)
 *     PopPowerRequestInitialize @ 0x140B248EC (PopPowerRequestInitialize.c)
 *     PopDirectedDripsInitializePhase0 @ 0x140B271D8 (PopDirectedDripsInitializePhase0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopInitializeWorkItem(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedExchange((volatile __int32 *)(a1 + 32), 0);
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = a2;
  *(_QWORD *)(a1 + 24) = a3;
  return result;
}
