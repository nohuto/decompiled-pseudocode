/*
 * XREFs of KeInitializeTimer2 @ 0x14035A7C0
 * Callers:
 *     NtCreateWorkerFactory @ 0x140701710 (NtCreateWorkerFactory.c)
 *     NtCreateTimer2 @ 0x140702200 (NtCreateTimer2.c)
 *     PopDirectedDripsInitializeDisengageTimer @ 0x1407916EC (PopDirectedDripsInitializeDisengageTimer.c)
 *     PopThermalZoneAdd @ 0x14079AA40 (PopThermalZoneAdd.c)
 *     ExpWorkQueueManagerInitialize @ 0x1407C2F58 (ExpWorkQueueManagerInitialize.c)
 *     PopInitializeTimer @ 0x1407C862C (PopInitializeTimer.c)
 *     EtwpCoverageEnsureContext @ 0x1407C9F5C (EtwpCoverageEnsureContext.c)
 *     KiCompleteKernelInit @ 0x14099D610 (KiCompleteKernelInit.c)
 *     EtwpInitialize @ 0x140A41844 (EtwpInitialize.c)
 * Callees:
 *     KiInitializeTimer2 @ 0x14035A7DC (KiInitializeTimer2.c)
 */

__int64 __fastcall KeInitializeTimer2(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  *(_WORD *)(a1 + 2) = 0;
  return KiInitializeTimer2(a1, a2, a3, a4);
}
