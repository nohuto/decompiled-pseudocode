/*
 * XREFs of KeFindFirstSetRightGroupAffinity @ 0x1402A9460
 * Callers:
 *     MiZeroThreadContending @ 0x1402A84A8 (MiZeroThreadContending.c)
 *     MiUnparkedCoreCount @ 0x1402A85DC (MiUnparkedCoreCount.c)
 *     MiGetIdleProcessorCount @ 0x1402A86CC (MiGetIdleProcessorCount.c)
 *     KiIntPartGetLowestClassProcessorInMask @ 0x1402A9324 (KiIntPartGetLowestClassProcessorInMask.c)
 *     MiInitializeDpcGroupAffinity @ 0x1402A9390 (MiInitializeDpcGroupAffinity.c)
 *     KiCallInterruptServiceRoutine @ 0x1402B7620 (KiCallInterruptServiceRoutine.c)
 *     HalpTimerConfigureInterrupt @ 0x140379C34 (HalpTimerConfigureInterrupt.c)
 *     MiInitializeZeroEngineCurrentPassDpcAffinity @ 0x14038A0B8 (MiInitializeZeroEngineCurrentPassDpcAffinity.c)
 *     MiWakeOnlyParticipatingProcessorsFromAssignedNode @ 0x14038A28C (MiWakeOnlyParticipatingProcessorsFromAssignedNode.c)
 *     HalpIommuConfigureInterrupt @ 0x1403A4968 (HalpIommuConfigureInterrupt.c)
 *     MiGetNextAffinityWalker @ 0x1403B9938 (MiGetNextAffinityWalker.c)
 *     MiSetIdealProcessorThread @ 0x140664A8C (MiSetIdealProcessorThread.c)
 *     MiInitializeZeroingDomains @ 0x140729BBC (MiInitializeZeroingDomains.c)
 *     PpmRegisterPerfStates @ 0x14082802C (PpmRegisterPerfStates.c)
 *     MiComputeMemoryNodeProcessorAssignments @ 0x140B5F834 (MiComputeMemoryNodeProcessorAssignments.c)
 *     MiFindProcessorsForMemoryOnlyNode @ 0x140B96EFC (MiFindProcessorsForMemoryOnlyNode.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeFindFirstSetRightGroupAffinity(__int64 a1)
{
  unsigned __int64 v2; // rcx

  v2 = *(_QWORD *)a1;
  if ( !v2 )
    return 0xFFFFFFFFLL;
  _BitScanForward64(&v2, v2);
  return (unsigned int)KiProcessorNumberToIndexMappingTable[64 * *(unsigned __int16 *)(a1 + 8) + (unsigned int)v2];
}
