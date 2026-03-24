/*
 * XREFs of KeQueryMaximumProcessorCountEx @ 0x140344740
 * Callers:
 *     KeQueryLogicalProcessorRelationship @ 0x140307180 (KeQueryLogicalProcessorRelationship.c)
 *     ExpGetSystemEmulationProcessorInformation @ 0x140327F1C (ExpGetSystemEmulationProcessorInformation.c)
 *     ExpGetSystemProcessorInformation @ 0x1403446E0 (ExpGetSystemProcessorInformation.c)
 *     ExpAllocateFannedOutPushLock @ 0x140390B28 (ExpAllocateFannedOutPushLock.c)
 *     ExpAcquireFannedOutPushLockExclusive @ 0x140390BD0 (ExpAcquireFannedOutPushLockExclusive.c)
 *     ExpTryAcquireFannedOutPushLockExclusive @ 0x140390CEC (ExpTryAcquireFannedOutPushLockExclusive.c)
 *     ExpReleaseFannedOutPushLockExclusive @ 0x140390D84 (ExpReleaseFannedOutPushLockExclusive.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x1403916E8 (ExpSaPageGroupDescriptorAllocate.c)
 *     HalpHvInitMcaPcrContext @ 0x1403C5150 (HalpHvInitMcaPcrContext.c)
 *     ExpSaInitialize @ 0x1403C9C5C (ExpSaInitialize.c)
 *     KeQueryMaximumProcessorCount @ 0x1405154A0 (KeQueryMaximumProcessorCount.c)
 *     KeStartProfile @ 0x14051BB0C (KeStartProfile.c)
 *     EtwpCovSampCaptureFlushSampleBuffers @ 0x1405AEB70 (EtwpCovSampCaptureFlushSampleBuffers.c)
 *     ExpSaPageGroupDescriptorFree @ 0x1405BA41C (ExpSaPageGroupDescriptorFree.c)
 *     EtwpInitLoggerContext @ 0x140711218 (EtwpInitLoggerContext.c)
 *     EtwInitializeSiloState @ 0x140795A88 (EtwInitializeSiloState.c)
 *     EtwpAllocatePmcData @ 0x140939750 (EtwpAllocatePmcData.c)
 *     EtwpCovSampCaptureContextStart @ 0x140942308 (EtwpCovSampCaptureContextStart.c)
 *     EtwpCovSampCaptureFlushStats @ 0x140942898 (EtwpCovSampCaptureFlushStats.c)
 *     ExpInitSystemPhase1 @ 0x140A3C2EC (ExpInitSystemPhase1.c)
 *     HalpDmaAllocateMappingResources @ 0x140A65DA8 (HalpDmaAllocateMappingResources.c)
 *     PpmInitHeteroEngine @ 0x140A72E48 (PpmInitHeteroEngine.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall KeQueryMaximumProcessorCountEx(USHORT GroupNumber)
{
  __int64 v1; // rax
  unsigned __int64 v2; // rcx
  int v3; // edx

  if ( KeDynamicPartitioningSupported )
  {
    if ( GroupNumber == 0xFFFF || !GroupNumber && KiMaximumGroups == 1 )
    {
      LODWORD(v1) = KeMaximumProcessors;
    }
    else
    {
      v3 = 0;
      if ( GroupNumber < (unsigned __int16)KiMaximumGroups )
        v3 = KiMaximumGroupSize;
      LODWORD(v1) = v3;
    }
  }
  else if ( GroupNumber == 0xFFFF )
  {
    LODWORD(v1) = KeNumberProcessors_0;
  }
  else if ( GroupNumber >= (unsigned __int16)KiActiveGroups )
  {
    LODWORD(v1) = 0;
  }
  else
  {
    v2 = qword_140CFC848[GroupNumber] - (((unsigned __int64)qword_140CFC848[GroupNumber] >> 1) & 0x5555555555555555LL);
    return (0x101010101010101LL
          * (((v2 & 0x3333333333333333LL)
            + ((v2 >> 2) & 0x3333333333333333LL)
            + (((v2 & 0x3333333333333333LL) + ((v2 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
  }
  return v1;
}
