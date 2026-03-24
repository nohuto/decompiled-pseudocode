/*
 * XREFs of PpmAcquireLock @ 0x140281A74
 * Callers:
 *     PoNotifyVSyncChange @ 0x1402817E0 (PoNotifyVSyncChange.c)
 *     PpmMediaBufferingWorker @ 0x14036C640 (PpmMediaBufferingWorker.c)
 *     PpmPerfLatencySensitivityHintWorker @ 0x140382130 (PpmPerfLatencySensitivityHintWorker.c)
 *     PpmCheckResumePpmEngineFromSx @ 0x14038DC9C (PpmCheckResumePpmEngineFromSx.c)
 *     PpmCheckPausePpmEngineForSx @ 0x14038DD2C (PpmCheckPausePpmEngineForSx.c)
 *     PpmRegisterPerfCap @ 0x140392AF0 (PpmRegisterPerfCap.c)
 *     PpmPerfClearBootOverrides @ 0x1403A3300 (PpmPerfClearBootOverrides.c)
 *     PopIntSteerSetMode @ 0x1403C1220 (PopIntSteerSetMode.c)
 *     PpmHeteroHgsBackupInit @ 0x1403CDC04 (PpmHeteroHgsBackupInit.c)
 *     PpmClearExitLatencySamplingPercentage @ 0x140565804 (PpmClearExitLatencySamplingPercentage.c)
 *     PpmSetExitLatencySamplingPercentage @ 0x1405676C4 (PpmSetExitLatencySamplingPercentage.c)
 *     PopDeepSleepEvaluateCallback @ 0x140577680 (PopDeepSleepEvaluateCallback.c)
 *     PpmHeteroHgsUpdateWorker @ 0x140577BA0 (PpmHeteroHgsUpdateWorker.c)
 *     PpmParkSetLpiCap @ 0x14057DA14 (PpmParkSetLpiCap.c)
 *     PopPowerInformationInternal @ 0x140678DF4 (PopPowerInformationInternal.c)
 *     PopCheckResiliencyScenarios @ 0x140679DA0 (PopCheckResiliencyScenarios.c)
 *     PpmSetProfilePolicySetting @ 0x14067A000 (PpmSetProfilePolicySetting.c)
 *     PpmPerfTelemetryWorker @ 0x1406C0CC0 (PpmPerfTelemetryWorker.c)
 *     PopEnforceResiliencyScenarios @ 0x140779BFC (PopEnforceResiliencyScenarios.c)
 *     PpmPerfReApplyStates @ 0x14077A350 (PpmPerfReApplyStates.c)
 *     PopPerfBoostPowerRequest @ 0x14078B530 (PopPerfBoostPowerRequest.c)
 *     PpmCheckInitProcessors @ 0x1407B9B18 (PpmCheckInitProcessors.c)
 *     PpmRegisterPerfStates @ 0x1407B9CE0 (PpmRegisterPerfStates.c)
 *     PpmReapplyPerfPolicy @ 0x1407BA700 (PpmReapplyPerfPolicy.c)
 *     PpmRegisterProfiles @ 0x1407C5768 (PpmRegisterProfiles.c)
 *     PpmEnableProfile @ 0x1407C5C14 (PpmEnableProfile.c)
 *     PopPpmHeteroPolicyCallback @ 0x1407D3C00 (PopPpmHeteroPolicyCallback.c)
 *     PopSetupHighPerfPowerRequest @ 0x1407D4A40 (PopSetupHighPerfPowerRequest.c)
 *     PpmEventTraceControlCallback @ 0x1407D53F0 (PpmEventTraceControlCallback.c)
 *     PopWnfFullscreenVideoCallback @ 0x1408E4150 (PopWnfFullscreenVideoCallback.c)
 *     PpmClearSimulatedLoad @ 0x1408E60E4 (PpmClearSimulatedLoad.c)
 *     PpmPerfGetBrandedFrequency @ 0x1408E620C (PpmPerfGetBrandedFrequency.c)
 *     PpmSetSimulatedLoad @ 0x1408E6470 (PpmSetSimulatedLoad.c)
 *     PpmUpdatePerfStates @ 0x1408E6590 (PpmUpdatePerfStates.c)
 *     PdcPoPpmResetProfile @ 0x1408EF950 (PdcPoPpmResetProfile.c)
 *     PpmPerfProcCapFloorSettingCallback @ 0x1408F0AE0 (PpmPerfProcCapFloorSettingCallback.c)
 *     PpmApplyProfile @ 0x1408F5AFC (PpmApplyProfile.c)
 *     PpmDisableProfile @ 0x1408F5C68 (PpmDisableProfile.c)
 *     PpmProfileAcDcUpdate @ 0x1408F604C (PpmProfileAcDcUpdate.c)
 *     PpmRegisterSpmSettings @ 0x1408F60F0 (PpmRegisterSpmSettings.c)
 *     PpmPerfRegisterHvPerfStateCounters @ 0x1408F6980 (PpmPerfRegisterHvPerfStateCounters.c)
 *     PpmParkApplyForcedMask @ 0x1408F92A4 (PpmParkApplyForcedMask.c)
 *     PpmParkClearForcedMask @ 0x1408F93A4 (PpmParkClearForcedMask.c)
 *     PoInitSystem @ 0x140A3F948 (PoInitSystem.c)
 *     PpmInitPolicyConfiguration @ 0x140A6B864 (PpmInitPolicyConfiguration.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140345770 (KeWaitForSingleObject.c)
 */

struct _KTHREAD *__fastcall PpmAcquireLock(struct _KTHREAD **a1)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *result; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  KeWaitForSingleObject(a1 + 1, Executive, 0, 0, 0LL);
  result = KeGetCurrentThread();
  *a1 = result;
  return result;
}
