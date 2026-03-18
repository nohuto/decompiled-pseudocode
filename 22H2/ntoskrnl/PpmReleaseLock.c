/*
 * XREFs of PpmReleaseLock @ 0x14032C0A0
 * Callers:
 *     PoNotifyVSyncChange @ 0x14032BE00 (PoNotifyVSyncChange.c)
 *     PpmCheckRun @ 0x14032C010 (PpmCheckRun.c)
 *     PpmHeteroHgsBackupInit @ 0x1403ABBD4 (PpmHeteroHgsBackupInit.c)
 *     PpmMediaBufferingWorker @ 0x1403AC410 (PpmMediaBufferingWorker.c)
 *     PpmClearExitLatencySamplingPercentage @ 0x140584094 (PpmClearExitLatencySamplingPercentage.c)
 *     PpmSetExitLatencySamplingPercentage @ 0x140585C1C (PpmSetExitLatencySamplingPercentage.c)
 *     PpmPerfGetVmPerfConfig @ 0x14058D1B4 (PpmPerfGetVmPerfConfig.c)
 *     PpmPerfGetVmPerfSupport @ 0x14058D3B4 (PpmPerfGetVmPerfSupport.c)
 *     PpmRegisterPerfCap @ 0x14058D4A0 (PpmRegisterPerfCap.c)
 *     PpmCheckPausePpmEngineForSx @ 0x140596418 (PpmCheckPausePpmEngineForSx.c)
 *     PpmCheckResumePpmEngineFromSx @ 0x14059645C (PpmCheckResumePpmEngineFromSx.c)
 *     PopDeepSleepEvaluateCallback @ 0x1405984E0 (PopDeepSleepEvaluateCallback.c)
 *     PpmParkSetLpiCap @ 0x14059D31C (PpmParkSetLpiCap.c)
 *     PopCheckResiliencyScenarios @ 0x140700F30 (PopCheckResiliencyScenarios.c)
 *     PpmPerfUpdateDomainPolicy @ 0x1407A6860 (PpmPerfUpdateDomainPolicy.c)
 *     PopPowerInformationInternal @ 0x1407ED5EC (PopPowerInformationInternal.c)
 *     PpmInfoReleaseLocks @ 0x14082E150 (PpmInfoReleaseLocks.c)
 *     PpmReapplyPerfPolicy @ 0x14082E210 (PpmReapplyPerfPolicy.c)
 *     PpmCheckInitProcessors @ 0x14082FE14 (PpmCheckInitProcessors.c)
 *     PpmRegisterPerfStates @ 0x14083009C (PpmRegisterPerfStates.c)
 *     PpmPerfGetFrequencyBandStats @ 0x140841B88 (PpmPerfGetFrequencyBandStats.c)
 *     PpmRegisterProfiles @ 0x14084AD78 (PpmRegisterProfiles.c)
 *     PpmIdleGetPackageIdleIntervalStats @ 0x14084F5E0 (PpmIdleGetPackageIdleIntervalStats.c)
 *     PpmIdleGetConcurrencyStats @ 0x14085E95C (PpmIdleGetConcurrencyStats.c)
 *     PopPpmHeteroPolicyCallback @ 0x1408646F0 (PopPpmHeteroPolicyCallback.c)
 *     PpmEventTraceControlCallback @ 0x1408650B0 (PpmEventTraceControlCallback.c)
 *     PpmPerfTelemetryWorker @ 0x140885130 (PpmPerfTelemetryWorker.c)
 *     PopWnfFullscreenVideoCallback @ 0x1409846C0 (PopWnfFullscreenVideoCallback.c)
 *     PpmClearSimulatedLoad @ 0x1409868A0 (PpmClearSimulatedLoad.c)
 *     PpmPerfGetBrandedFrequency @ 0x1409869C8 (PpmPerfGetBrandedFrequency.c)
 *     PpmSetSimulatedLoad @ 0x140986C54 (PpmSetSimulatedLoad.c)
 *     PpmUpdatePerfStates @ 0x140986D70 (PpmUpdatePerfStates.c)
 *     PpmCompareAndApplyPolicySettings @ 0x140992EFC (PpmCompareAndApplyPolicySettings.c)
 *     PopEnforceResiliencyScenarios @ 0x1409942E8 (PopEnforceResiliencyScenarios.c)
 *     PdcPoPpmResetProfile @ 0x140997A80 (PdcPoPpmResetProfile.c)
 *     PpmParkApplyForcedMask @ 0x140999F04 (PpmParkApplyForcedMask.c)
 *     PpmParkClearForcedMask @ 0x14099A004 (PpmParkClearForcedMask.c)
 *     PpmApplyProfile @ 0x14099D0D0 (PpmApplyProfile.c)
 *     PpmDisableProfile @ 0x14099D234 (PpmDisableProfile.c)
 *     PpmRegisterSpmSettings @ 0x14099D6D0 (PpmRegisterSpmSettings.c)
 *     PpmPerfRegisterHvPerfStateCounters @ 0x14099DAC0 (PpmPerfRegisterHvPerfStateCounters.c)
 *     PoInitSystem @ 0x140B50B30 (PoInitSystem.c)
 *     PpmInitPolicyConfiguration @ 0x140B5EF90 (PpmInitPolicyConfiguration.c)
 *     PopDetectSimulatedHeteroProcessors @ 0x140B71AE0 (PopDetectSimulatedHeteroProcessors.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140231460 (KeLeaveCriticalRegion.c)
 *     KeSetEvent @ 0x14023C5C0 (KeSetEvent.c)
 *     KiClearSystemPriority @ 0x140345AF0 (KiClearSystemPriority.c)
 */

void __fastcall PpmReleaseLock(__int64 *a1)
{
  __int64 v1; // rbx

  v1 = *a1;
  *a1 = 0LL;
  KeSetEvent((PRKEVENT)(a1 + 1), 0, 0);
  if ( v1 )
  {
    KiClearSystemPriority((ULONG_PTR)KeGetCurrentThread());
    KeLeaveCriticalRegion();
  }
}
