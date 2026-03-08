/*
 * XREFs of KeQueryMaximumProcessorCountEx @ 0x1402A7240
 * Callers:
 *     ExpGetSystemProcessorInformation @ 0x1402A71DC (ExpGetSystemProcessorInformation.c)
 *     KeQueryLogicalProcessorRelationship @ 0x1402AA2C0 (KeQueryLogicalProcessorRelationship.c)
 *     ExpGetSystemEmulationProcessorInformation @ 0x1403000A0 (ExpGetSystemEmulationProcessorInformation.c)
 *     HalpHvInitMcaPcrContext @ 0x14037CEA4 (HalpHvInitMcaPcrContext.c)
 *     ExpSaInitialize @ 0x1403A5B5C (ExpSaInitialize.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x1403BFEBC (ExpSaPageGroupDescriptorAllocate.c)
 *     ExpTryAcquireFannedOutPushLockExclusive @ 0x1403C975C (ExpTryAcquireFannedOutPushLockExclusive.c)
 *     ExpReleaseFannedOutPushLockExclusive @ 0x1403CA0B0 (ExpReleaseFannedOutPushLockExclusive.c)
 *     ExpAcquireFannedOutPushLockExclusive @ 0x1403CA3BC (ExpAcquireFannedOutPushLockExclusive.c)
 *     ExpAllocateFannedOutPushLock @ 0x1403CF30C (ExpAllocateFannedOutPushLock.c)
 *     ExpSaPageGroupDescriptorFree @ 0x1403CFF54 (ExpSaPageGroupDescriptorFree.c)
 *     KeQueryMaximumProcessorCount @ 0x14056E220 (KeQueryMaximumProcessorCount.c)
 *     KeStartProfile @ 0x140571A6C (KeStartProfile.c)
 *     PpmEventHgsHardwareTable @ 0x140597E5C (PpmEventHgsHardwareTable.c)
 *     PpmEventHgsNormalizedTable @ 0x140598054 (PpmEventHgsNormalizedTable.c)
 *     EtwpCovSampCaptureFlushSampleBuffers @ 0x140600E90 (EtwpCovSampCaptureFlushSampleBuffers.c)
 *     KeInitializeProcess @ 0x14070A0C8 (KeInitializeProcess.c)
 *     EtwpInitLoggerContext @ 0x140761AA8 (EtwpInitLoggerContext.c)
 *     EtwpInitializeSiloState @ 0x14083BE04 (EtwpInitializeSiloState.c)
 *     EtwpCovSampCaptureFlushStats @ 0x1408A3CAC (EtwpCovSampCaptureFlushStats.c)
 *     EtwpAllocatePmcData @ 0x1409E0458 (EtwpAllocatePmcData.c)
 *     EtwpCovSampCaptureContextStart @ 0x1409EDC1C (EtwpCovSampCaptureContextStart.c)
 *     ExpInitSystemPhase1 @ 0x140B3F0B8 (ExpInitSystemPhase1.c)
 *     HalpDmaAllocateMappingResources @ 0x140B6124C (HalpDmaAllocateMappingResources.c)
 *     PpmInitHeteroEngine @ 0x140B6840C (PpmInitHeteroEngine.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall KeQueryMaximumProcessorCountEx(USHORT GroupNumber)
{
  __int64 v1; // rcx
  unsigned __int64 v3; // rax

  if ( KeDynamicPartitioningSupported )
  {
    if ( GroupNumber == 0xFFFF || !GroupNumber && KiMaximumGroups == 1 )
      return KeMaximumProcessors;
    else
      return GroupNumber < (USHORT)KiMaximumGroups ? KiMaximumGroupSize : 0;
  }
  else
  {
    if ( GroupNumber == 0xFFFF )
    {
      LODWORD(v1) = KeNumberProcessors_0;
    }
    else if ( GroupNumber >= (unsigned __int16)KiActiveGroups )
    {
      LODWORD(v1) = 0;
    }
    else
    {
      v3 = qword_140D1EFE8[GroupNumber] - (((unsigned __int64)qword_140D1EFE8[GroupNumber] >> 1) & 0x5555555555555555LL);
      return (0x101010101010101LL
            * (((v3 & 0x3333333333333333LL)
              + ((v3 >> 2) & 0x3333333333333333LL)
              + (((v3 & 0x3333333333333333LL) + ((v3 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
    }
    return v1;
  }
}
