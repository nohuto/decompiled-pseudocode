/*
 * XREFs of ExAllocatePoolMm @ 0x14034C1AC
 * Callers:
 *     MiReferenceIoPages @ 0x14029BA60 (MiReferenceIoPages.c)
 *     MiAbsorbPossibleEngineChanges @ 0x1402A87C4 (MiAbsorbPossibleEngineChanges.c)
 *     MiAllocateAcceleratorDescriptor @ 0x1402A9850 (MiAllocateAcceleratorDescriptor.c)
 *     MiGetHugePageToZero @ 0x1402E41D8 (MiGetHugePageToZero.c)
 *     MiComputeIdealDpcGang @ 0x1403867CC (MiComputeIdealDpcGang.c)
 *     MiZeroPageCalibrate @ 0x1403A50D0 (MiZeroPageCalibrate.c)
 *     MiAllocateZeroCalibrationBuffer @ 0x1403A53F8 (MiAllocateZeroCalibrationBuffer.c)
 *     MiAllocateZeroPageDecisionTraceBuffer @ 0x1403AE45C (MiAllocateZeroPageDecisionTraceBuffer.c)
 *     MiLockWorkingSetForLargeMapping @ 0x14064DB98 (MiLockWorkingSetForLargeMapping.c)
 *     MiCombineAllPhysicalMemory @ 0x1407C7D50 (MiCombineAllPhysicalMemory.c)
 *     MiAddSecureEntry @ 0x1407D3424 (MiAddSecureEntry.c)
 *     MiCreateZeroThreadContext @ 0x1408384D8 (MiCreateZeroThreadContext.c)
 *     MiCreatePerNodeZeroingConductor @ 0x14085B8B8 (MiCreatePerNodeZeroingConductor.c)
 *     MiInitializeScrubPacket @ 0x140A433C8 (MiInitializeScrubPacket.c)
 *     MmInitializeProcessor @ 0x140A86740 (MmInitializeProcessor.c)
 *     MiInitNucleus @ 0x140B36878 (MiInitNucleus.c)
 *     MiComputeMemoryNodeProcessorAssignments @ 0x140B5F834 (MiComputeMemoryNodeProcessorAssignments.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x1402950E0 (ExAllocatePoolWithQuotaTag.c)
 *     ExpAllocatePoolWithTagFromNode @ 0x140310130 (ExpAllocatePoolWithTagFromNode.c)
 *     ExpPoolFlagsToPoolType @ 0x140AAB010 (ExpPoolFlagsToPoolType.c)
 */

PVOID __fastcall ExAllocatePoolMm(int a1, SIZE_T a2, ULONG a3, int a4)
{
  __int64 v4; // rbx
  char v10; // [rsp+30h] [rbp-18h] BYREF
  char v11; // [rsp+31h] [rbp-17h] BYREF
  POOL_TYPE PoolType; // [rsp+34h] [rbp-14h] BYREF

  v4 = 0LL;
  PoolType = NonPagedPool;
  v11 = 0;
  v10 = 0;
  if ( (int)ExpPoolFlagsToPoolType(a1, 1, (unsigned int)&PoolType, (unsigned int)&v11, (__int64)&v10) >= 0 )
  {
    if ( v11 )
      return ExAllocatePoolWithQuotaTag(PoolType, a2, a3);
    else
      return (PVOID)ExpAllocatePoolWithTagFromNode(PoolType, a2, a3, a4, v10 != 0);
  }
  return (PVOID)v4;
}
