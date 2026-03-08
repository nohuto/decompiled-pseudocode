/*
 * XREFs of KeIsMultiCoreClassesEnabled @ 0x14038E410
 * Callers:
 *     KeYieldExecution @ 0x140256BE0 (KeYieldExecution.c)
 *     KiCanLocalReadyThreadBeScheduledToRescheduleContextEntry @ 0x1402C3F90 (KiCanLocalReadyThreadBeScheduledToRescheduleContextEntry.c)
 *     KiTraceLogHeteroRundown @ 0x1403AB22C (KiTraceLogHeteroRundown.c)
 *     KiGenerateHeteroSets @ 0x1404590A0 (KiGenerateHeteroSets.c)
 *     KiSendHeteroRescheduleIntRequest @ 0x140459B66 (KiSendHeteroRescheduleIntRequest.c)
 *     KiConfigureHeteroProcessorsTarget @ 0x140569250 (KiConfigureHeteroProcessorsTarget.c)
 *     KiTallyHeteroSoftParkElectionVotes @ 0x14057C0D8 (KiTallyHeteroSoftParkElectionVotes.c)
 *     PpmEventTraceHeteroSets @ 0x140826F54 (PpmEventTraceHeteroSets.c)
 *     KeConfigureHeteroProcessors @ 0x14096F978 (KeConfigureHeteroProcessors.c)
 *     PpmUpdateArchitecturalEfficiencyClass @ 0x140B68574 (PpmUpdateArchitecturalEfficiencyClass.c)
 *     PopDetectSimulatedHeteroProcessors @ 0x140B6D7C4 (PopDetectSimulatedHeteroProcessors.c)
 * Callees:
 *     Feature_MultiCoreClasses__private_ReportDeviceUsage @ 0x14040A518 (Feature_MultiCoreClasses__private_ReportDeviceUsage.c)
 */

_BOOL8 __fastcall KeIsMultiCoreClassesEnabled(__int64 a1, __int64 a2)
{
  Feature_MultiCoreClasses__private_ReportDeviceUsage(a1, a2);
  return PpmHeteroMultiCoreClassesEnabled != 0;
}
