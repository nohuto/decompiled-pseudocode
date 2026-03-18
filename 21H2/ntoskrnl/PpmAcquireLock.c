/*
 * XREFs of PpmAcquireLock @ 0x140224E90
 * Callers:
 *     PpmPerfLatencySensitivityHintWorker @ 0x140224690 (PpmPerfLatencySensitivityHintWorker.c)
 *     PpmMediaBufferingWorker @ 0x140224810 (PpmMediaBufferingWorker.c)
 *     PoNotifyVSyncChange @ 0x140224940 (PoNotifyVSyncChange.c)
 *     PpmPerfClearBootOverrides @ 0x140225D70 (PpmPerfClearBootOverrides.c)
 *     PpmCheckDelayedPeriodicStart @ 0x140389D50 (PpmCheckDelayedPeriodicStart.c)
 *     PpmCheckResumePpmEngineFromSx @ 0x140399068 (PpmCheckResumePpmEngineFromSx.c)
 *     PpmCheckPausePpmEngineForSx @ 0x140399140 (PpmCheckPausePpmEngineForSx.c)
 *     PpmHeteroHgsBackupInit @ 0x1403DC9D4 (PpmHeteroHgsBackupInit.c)
 *     PopIntSteerSetMode @ 0x1403DEC60 (PopIntSteerSetMode.c)
 *     PpmClearExitLatencySamplingPercentage @ 0x1405C70B4 (PpmClearExitLatencySamplingPercentage.c)
 *     PpmSetExitLatencySamplingPercentage @ 0x1405C8AFC (PpmSetExitLatencySamplingPercentage.c)
 *     PpmPerfGetVmPerfConfig @ 0x1405CF580 (PpmPerfGetVmPerfConfig.c)
 *     PpmPerfGetVmPerfSupport @ 0x1405CF77C (PpmPerfGetVmPerfSupport.c)
 *     PpmRegisterPerfCap @ 0x1405CF800 (PpmRegisterPerfCap.c)
 *     PopDeepSleepEvaluateCallback @ 0x1405D77A0 (PopDeepSleepEvaluateCallback.c)
 *     PpmHeteroHgsUpdateWorker @ 0x1405D90F0 (PpmHeteroHgsUpdateWorker.c)
 *     PpmParkSetLpiCap @ 0x1405DD354 (PpmParkSetLpiCap.c)
 *     PopPowerRequestCallbackPerfBoostRequired @ 0x14069DD40 (PopPowerRequestCallbackPerfBoostRequired.c)
 *     PopPowerInformationInternal @ 0x140751B78 (PopPowerInformationInternal.c)
 *     PopCheckResiliencyScenarios @ 0x1407EED48 (PopCheckResiliencyScenarios.c)
 *     PpmPerfGetFrequencyBandStats @ 0x1407F9EBC (PpmPerfGetFrequencyBandStats.c)
 *     PpmIdleGetPackageIdleIntervalStats @ 0x1407FBB54 (PpmIdleGetPackageIdleIntervalStats.c)
 *     PpmIdleGetConcurrencyStats @ 0x1407FC3E8 (PpmIdleGetConcurrencyStats.c)
 *     PpmSetProfilePolicySetting @ 0x1407FCE7C (PpmSetProfilePolicySetting.c)
 *     PopEnforceResiliencyScenarios @ 0x1408083DC (PopEnforceResiliencyScenarios.c)
 *     PpmPerfReApplyStates @ 0x140808958 (PpmPerfReApplyStates.c)
 *     PpmPerfTelemetryWorker @ 0x14080BBA0 (PpmPerfTelemetryWorker.c)
 *     PdcPoPpmResetProfile @ 0x1408310F0 (PdcPoPpmResetProfile.c)
 *     PpmEnableProfile @ 0x14083113C (PpmEnableProfile.c)
 *     PpmRegisterPerfStates @ 0x140848C18 (PpmRegisterPerfStates.c)
 *     PpmCheckInitProcessors @ 0x140849690 (PpmCheckInitProcessors.c)
 *     PpmReapplyPerfPolicy @ 0x140849940 (PpmReapplyPerfPolicy.c)
 *     PpmRegisterProfiles @ 0x140854E78 (PpmRegisterProfiles.c)
 *     PopPpmHeteroPolicyCallback @ 0x140863A40 (PopPpmHeteroPolicyCallback.c)
 *     PpmEventTraceControlCallback @ 0x140864680 (PpmEventTraceControlCallback.c)
 *     PopSetupHighPerfPowerRequest @ 0x140864980 (PopSetupHighPerfPowerRequest.c)
 *     PopWnfFullscreenVideoCallback @ 0x14098CB20 (PopWnfFullscreenVideoCallback.c)
 *     PpmClearSimulatedLoad @ 0x14098E9D8 (PpmClearSimulatedLoad.c)
 *     PpmPerfGetBrandedFrequency @ 0x14098EB00 (PpmPerfGetBrandedFrequency.c)
 *     PpmSetSimulatedLoad @ 0x14098ED44 (PpmSetSimulatedLoad.c)
 *     PpmUpdatePerfStates @ 0x14098EE60 (PpmUpdatePerfStates.c)
 *     PpmPerfProcCapFloorSettingCallback @ 0x140997BA0 (PpmPerfProcCapFloorSettingCallback.c)
 *     PpmApplyProfile @ 0x14099D500 (PpmApplyProfile.c)
 *     PpmDisableProfile @ 0x14099D66C (PpmDisableProfile.c)
 *     PpmProfileAcDcUpdate @ 0x14099DAA8 (PpmProfileAcDcUpdate.c)
 *     PpmRegisterSpmSettings @ 0x14099DB50 (PpmRegisterSpmSettings.c)
 *     PpmPerfRegisterHvPerfStateCounters @ 0x14099DE60 (PpmPerfRegisterHvPerfStateCounters.c)
 *     PpmParkApplyForcedMask @ 0x14099E10C (PpmParkApplyForcedMask.c)
 *     PpmParkClearForcedMask @ 0x14099E20C (PpmParkClearForcedMask.c)
 *     PoInitSystem @ 0x140B026CC (PoInitSystem.c)
 *     PpmInitPolicyConfiguration @ 0x140B151EC (PpmInitPolicyConfiguration.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 */

struct _KTHREAD *__fastcall PpmAcquireLock(struct _KTHREAD **a1)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *result; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  KeWaitForSingleObject(a1 + 1, Executive, 0, 0, 0LL);
  result = KeGetCurrentThread();
  *a1 = result;
  return result;
}
