/*
 * XREFs of KeQueryMaximumProcessorCountEx @ 0x14033ADA0
 * Callers:
 *     KeQueryLogicalProcessorRelationship @ 0x140305E80 (KeQueryLogicalProcessorRelationship.c)
 *     ExpGetSystemEmulationProcessorInformation @ 0x14033AB54 (ExpGetSystemEmulationProcessorInformation.c)
 *     ExpGetSystemProcessorInformation @ 0x14033AD3C (ExpGetSystemProcessorInformation.c)
 *     HalpHvInitMcaPcrContext @ 0x140380934 (HalpHvInitMcaPcrContext.c)
 *     ExpSaInitialize @ 0x1403AB0D8 (ExpSaInitialize.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x1403C577C (ExpSaPageGroupDescriptorAllocate.c)
 *     ExpTryAcquireFannedOutPushLockExclusive @ 0x1403CED0C (ExpTryAcquireFannedOutPushLockExclusive.c)
 *     ExpReleaseFannedOutPushLockExclusive @ 0x1403CF660 (ExpReleaseFannedOutPushLockExclusive.c)
 *     ExpAcquireFannedOutPushLockExclusive @ 0x1403CF96C (ExpAcquireFannedOutPushLockExclusive.c)
 *     ExpAllocateFannedOutPushLock @ 0x1403D489C (ExpAllocateFannedOutPushLock.c)
 *     ExpSaPageGroupDescriptorFree @ 0x1403D54E4 (ExpSaPageGroupDescriptorFree.c)
 *     KeQueryMaximumProcessorCount @ 0x140570890 (KeQueryMaximumProcessorCount.c)
 *     KeStartProfile @ 0x140573F7C (KeStartProfile.c)
 *     PpmEventHgsHardwareTable @ 0x14059A37C (PpmEventHgsHardwareTable.c)
 *     PpmEventHgsNormalizedTable @ 0x14059A574 (PpmEventHgsNormalizedTable.c)
 *     EtwpCovSampCaptureFlushSampleBuffers @ 0x1406032E0 (EtwpCovSampCaptureFlushSampleBuffers.c)
 *     KeInitializeProcess @ 0x1406B66E8 (KeInitializeProcess.c)
 *     EtwpInitLoggerContext @ 0x1407B3A70 (EtwpInitLoggerContext.c)
 *     EtwpInitializeSiloState @ 0x14083D0F4 (EtwpInitializeSiloState.c)
 *     EtwpCovSampCaptureFlushStats @ 0x1408A8B6C (EtwpCovSampCaptureFlushStats.c)
 *     EtwpAllocatePmcData @ 0x1409E32F8 (EtwpAllocatePmcData.c)
 *     EtwpCovSampCaptureContextStart @ 0x1409F0AAC (EtwpCovSampCaptureContextStart.c)
 *     ExpInitSystemPhase1 @ 0x140B4D6E4 (ExpInitSystemPhase1.c)
 *     HalpDmaAllocateMappingResources @ 0x140B6453C (HalpDmaAllocateMappingResources.c)
 *     PpmInitHeteroEngine @ 0x140B6C438 (PpmInitHeteroEngine.c)
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
