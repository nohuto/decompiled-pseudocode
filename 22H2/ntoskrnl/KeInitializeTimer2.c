/*
 * XREFs of KeInitializeTimer2 @ 0x14031E320
 * Callers:
 *     NtCreateWorkerFactory @ 0x1407860A0 (NtCreateWorkerFactory.c)
 *     NtCreateTimer2 @ 0x140786690 (NtCreateTimer2.c)
 *     PopDirectedDripsInitializeDisengageTimer @ 0x140802C0C (PopDirectedDripsInitializeDisengageTimer.c)
 *     PopThermalZoneAdd @ 0x1408247B0 (PopThermalZoneAdd.c)
 *     PopInitializeTimer @ 0x140849964 (PopInitializeTimer.c)
 *     ExpWorkQueueManagerInitialize @ 0x14084ABF0 (ExpWorkQueueManagerInitialize.c)
 *     EtwpCoverageEnsureContext @ 0x1408579E4 (EtwpCoverageEnsureContext.c)
 *     KiCompleteKernelInit @ 0x140A8D340 (KiCompleteKernelInit.c)
 * Callees:
 *     KiInitializeTimer2 @ 0x14031E33C (KiInitializeTimer2.c)
 */

__int64 __fastcall KeInitializeTimer2(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  *(_WORD *)(a1 + 2) = 0;
  return KiInitializeTimer2(a1, a2, a3, a4);
}
