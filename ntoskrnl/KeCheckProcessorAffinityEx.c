/*
 * XREFs of KeCheckProcessorAffinityEx @ 0x140234B10
 * Callers:
 *     PoIdle @ 0x14022D240 (PoIdle.c)
 *     PpmIdleExecuteTransition @ 0x14022D7D0 (PpmIdleExecuteTransition.c)
 *     KeResumeClockTimerFromIdle @ 0x14022E860 (KeResumeClockTimerFromIdle.c)
 *     PpmParkSteerInterrupts @ 0x1402341D0 (PpmParkSteerInterrupts.c)
 *     PpmCheckContinueExecution @ 0x140236E60 (PpmCheckContinueExecution.c)
 *     KiComputeThreadAffinity @ 0x140236FD4 (KiComputeThreadAffinity.c)
 *     KiCheckKeepAlive @ 0x1402372DC (KiCheckKeepAlive.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x1402AFD1C (KiRescheduleThreadAfterAffinityChange.c)
 *     KiGetNextTimerExpirationDueTime @ 0x140328330 (KiGetNextTimerExpirationDueTime.c)
 *     PpmHeteroUpdateHgsConfiguration @ 0x14038F314 (PpmHeteroUpdateHgsConfiguration.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x14039979C (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiForwardTick @ 0x1403C61D0 (KiForwardTick.c)
 *     EmonEnableMonitoring @ 0x14051ADD0 (EmonEnableMonitoring.c)
 *     EmonRemoveProfileSource @ 0x14051BF80 (EmonRemoveProfileSource.c)
 *     Amd64EnableMonitoring @ 0x140526CE0 (Amd64EnableMonitoring.c)
 *     Amd64RemoveProfileSource @ 0x140527A10 (Amd64RemoveProfileSource.c)
 *     KiProcessProfileList @ 0x140571EC4 (KiProcessProfileList.c)
 *     KiStartProfileTarget @ 0x140571FC0 (KiStartProfileTarget.c)
 *     KiStopProfileTarget @ 0x140572310 (KiStopProfileTarget.c)
 *     KiForceIdleUpdateSchedulerParkState @ 0x14057AB44 (KiForceIdleUpdateSchedulerParkState.c)
 *     PpmIdleCheckCoordinatedDependency @ 0x1405821CC (PpmIdleCheckCoordinatedDependency.c)
 *     PpmTestAndLockProcessor @ 0x140583A5C (PpmTestAndLockProcessor.c)
 *     PpmUpdatePlatformIdleVeto @ 0x1405841D0 (PpmUpdatePlatformIdleVeto.c)
 *     PpmParkReportParkedCore @ 0x14059AC6C (PpmParkReportParkedCore.c)
 *     PpmParkReportSoftParkChange @ 0x14059AD7C (PpmParkReportSoftParkChange.c)
 *     PpmRegisterPerfStates @ 0x14082802C (PpmRegisterPerfStates.c)
 *     PnpReplacePartitionUnit @ 0x140961B80 (PnpReplacePartitionUnit.c)
 *     KiSetCacheInformationAmd @ 0x140A9C858 (KiSetCacheInformationAmd.c)
 *     PopReadLegacySimulateProcessorClass @ 0x140B93394 (PopReadLegacySimulateProcessorClass.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeCheckProcessorAffinityEx(unsigned __int16 *a1, int a2)
{
  unsigned int v3; // ecx
  __int64 v4; // rdx

  v3 = KiProcessorIndexToNumberMappingTable[a2];
  v4 = v3 >> 6;
  if ( (unsigned int)v4 >= *a1 )
    return 0LL;
  else
    return (*(_QWORD *)&a1[4 * v4 + 4] >> (v3 & 0x3F)) & 1LL;
}
