/*
 * XREFs of KeInitializeTimer2 @ 0x140203D80
 * Callers:
 *     NtCreateWorkerFactory @ 0x14068A160 (NtCreateWorkerFactory.c)
 *     NtCreateTimer2 @ 0x14068A750 (NtCreateTimer2.c)
 *     PopThermalZoneAdd @ 0x1408296E0 (PopThermalZoneAdd.c)
 *     PopInitializeTimer @ 0x14084747C (PopInitializeTimer.c)
 *     ExpWorkQueueManagerInitialize @ 0x140848580 (ExpWorkQueueManagerInitialize.c)
 *     EtwpCoverageEnsureContext @ 0x1408537B4 (EtwpCoverageEnsureContext.c)
 *     PopDirectedDripsInitializeDisengageTimer @ 0x14085CDF4 (PopDirectedDripsInitializeDisengageTimer.c)
 *     KiCompleteKernelInit @ 0x140A89D30 (KiCompleteKernelInit.c)
 * Callees:
 *     KiInitializeTimer2 @ 0x140203D9C (KiInitializeTimer2.c)
 */

__int64 __fastcall KeInitializeTimer2(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  *(_WORD *)(a1 + 2) = 0;
  return KiInitializeTimer2(a1, a2, a3, a4);
}
