/*
 * XREFs of KeInitializeIRTimer @ 0x14036D61C
 * Callers:
 *     ExAllocateTimerInternal2 @ 0x140203C10 (ExAllocateTimerInternal2.c)
 *     PopInitializeIRTimer @ 0x140380C04 (PopInitializeIRTimer.c)
 *     PopPowerButtonWorkCallback @ 0x140596C60 (PopPowerButtonWorkCallback.c)
 *     NtCreateTimer2 @ 0x14068A750 (NtCreateTimer2.c)
 *     PopIdleInitAoAcDozeS4Timer @ 0x140817678 (PopIdleInitAoAcDozeS4Timer.c)
 *     PopThermalZoneAdd @ 0x1408296E0 (PopThermalZoneAdd.c)
 * Callees:
 *     KiInitializeTimer2 @ 0x140203D9C (KiInitializeTimer2.c)
 *     ExCheckValidIRTimerId @ 0x14036D670 (ExCheckValidIRTimerId.c)
 */

__int64 __fastcall KeInitializeIRTimer(unsigned __int64 a1, __int64 a2, __int64 a3, unsigned __int8 *a4, int a5)
{
  unsigned __int16 v7; // r8
  __int64 v8; // rdx
  __int64 result; // rax

  KiInitializeTimer2(a1, a2, a3, a5 | 2);
  v7 = *a4;
  *(_BYTE *)(a1 + 2) = v7;
  v8 = a4[2];
  *(_BYTE *)(a1 + 3) = a4[2];
  result = ExCheckValidIRTimerId(v7, v8);
  if ( !(_BYTE)result )
    __fastfail(5u);
  return result;
}
