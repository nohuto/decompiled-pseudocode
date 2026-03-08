/*
 * XREFs of PopInitializeWorkItem @ 0x14080FA3C
 * Callers:
 *     PopInitializeIRTimer @ 0x140380C04 (PopInitializeIRTimer.c)
 *     PoInitSystem @ 0x140B45CAC (PoInitSystem.c)
 *     PopInitializePowerButtonHold @ 0x140B47194 (PopInitializePowerButtonHold.c)
 *     PopThermalInit @ 0x140B62494 (PopThermalInit.c)
 *     PopPowerRequestInitialize @ 0x140B62754 (PopPowerRequestInitialize.c)
 *     PopDirectedDripsInitializePhase0 @ 0x140B6E9FC (PopDirectedDripsInitializePhase0.c)
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
