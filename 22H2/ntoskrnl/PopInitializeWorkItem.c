/*
 * XREFs of PopInitializeWorkItem @ 0x140822418
 * Callers:
 *     PopInitializeIRTimer @ 0x140383854 (PopInitializeIRTimer.c)
 *     PopDirectedDripsInitializePhase0 @ 0x140B379E0 (PopDirectedDripsInitializePhase0.c)
 *     PoInitSystem @ 0x140B50B30 (PoInitSystem.c)
 *     PopInitializePowerButtonHold @ 0x140B52018 (PopInitializePowerButtonHold.c)
 *     PopThermalInit @ 0x140B65DD8 (PopThermalInit.c)
 *     PopPowerRequestInitialize @ 0x140B66098 (PopPowerRequestInitialize.c)
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
