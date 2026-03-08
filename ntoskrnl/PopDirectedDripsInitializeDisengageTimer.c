/*
 * XREFs of PopDirectedDripsInitializeDisengageTimer @ 0x14085CDF4
 * Callers:
 *     PopDirectedDripsInitializePhase0 @ 0x140B6E9FC (PopDirectedDripsInitializePhase0.c)
 * Callees:
 *     KeInitializeTimer2 @ 0x140203D80 (KeInitializeTimer2.c)
 */

__int64 __fastcall PopDirectedDripsInitializeDisengageTimer(__int64 a1, int a2, int a3)
{
  *(_DWORD *)a1 = a2;
  *(_DWORD *)(a1 + 4) = a3;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  return KeInitializeTimer2(a1 + 24, (__int64)PopDirectedDripsDisengageTimerCallback, a1, 8LL);
}
