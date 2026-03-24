/*
 * XREFs of PpmAcquireLock @ 0x14034AA84
 * Callers:
 *     PoNotifyVSyncChange @ 0x14034A7F0 (PoNotifyVSyncChange.c)
 *     PpmMediaBufferingWorker @ 0x14036BF90 (PpmMediaBufferingWorker.c)
 *     PpmPerfLatencySensitivityHintWorker @ 0x140381A70 (PpmPerfLatencySensitivityHintWorker.c)
 *     PpmCheckResumePpmEngineFromSx @ 0x14038D59C (PpmCheckResumePpmEngineFromSx.c)
 *     PpmCheckPausePpmEngineForSx @ 0x14038D62C (PpmCheckPausePpmEngineForSx.c)
 *     PpmRegisterPerfCap @ 0x1403923F0 (PpmRegisterPerfCap.c)
 *     PpmPerfClearBootOverrides @ 0x1403A2C00 (PpmPerfClearBootOverrides.c)
 *     PopIntSteerSetMode @ 0x1403C0E80 (PopIntSteerSetMode.c)
 *     PpmHeteroHgsBackupInit @ 0x1403CD504 (PpmHeteroHgsBackupInit.c)
 *     PpmClearExitLatencySamplingPercentage @ 0x140565744 (PpmClearExitLatencySamplingPercentage.c)
 *     PpmSetExitLatencySamplingPercentage @ 0x140567604 (PpmSetExitLatencySamplingPercentage.c)
 *     PopDeepSleepEvaluateCallback @ 0x1405775C0 (PopDeepSleepEvaluateCallback.c)
 *     PpmHeteroHgsUpdateWorker @ 0x140577AE0 (PpmHeteroHgsUpdateWorker.c)
 *     PpmParkSetLpiCap @ 0x14057D954 (PpmParkSetLpiCap.c)
 *     PpmPerfTelemetryWorker @ 0x1406A36D0 (PpmPerfTelemetryWorker.c)
 *     PopPowerInformationInternal @ 0x1406F1BE4 (PopPowerInformationInternal.c)
 *     PopCheckResiliencyScenarios @ 0x1406F2B90 (PopCheckResiliencyScenarios.c)
 *     PpmSetProfilePolicySetting @ 0x1406F2DF0 (PpmSetProfilePolicySetting.c)
 *     PopEnforceResiliencyScenarios @ 0x140779AFC (PopEnforceResiliencyScenarios.c)
 *     PpmPerfReApplyStates @ 0x14077A250 (PpmPerfReApplyStates.c)
 *     PopPerfBoostPowerRequest @ 0x14078B430 (PopPerfBoostPowerRequest.c)
 *     PpmCheckInitProcessors @ 0x1407BA2D8 (PpmCheckInitProcessors.c)
 *     PpmRegisterPerfStates @ 0x1407BA4A0 (PpmRegisterPerfStates.c)
 *     PpmReapplyPerfPolicy @ 0x1407BAEC0 (PpmReapplyPerfPolicy.c)
 *     PpmRegisterProfiles @ 0x1407C5F28 (PpmRegisterProfiles.c)
 *     PpmEnableProfile @ 0x1407C63D4 (PpmEnableProfile.c)
 *     PopPpmHeteroPolicyCallback @ 0x1407D3B20 (PopPpmHeteroPolicyCallback.c)
 *     PopSetupHighPerfPowerRequest @ 0x1407D4960 (PopSetupHighPerfPowerRequest.c)
 *     PpmEventTraceControlCallback @ 0x1407D5310 (PpmEventTraceControlCallback.c)
 *     PopWnfFullscreenVideoCallback @ 0x1408E41A0 (PopWnfFullscreenVideoCallback.c)
 *     PpmClearSimulatedLoad @ 0x1408E6134 (PpmClearSimulatedLoad.c)
 *     PpmPerfGetBrandedFrequency @ 0x1408E625C (PpmPerfGetBrandedFrequency.c)
 *     PpmSetSimulatedLoad @ 0x1408E64C0 (PpmSetSimulatedLoad.c)
 *     PpmUpdatePerfStates @ 0x1408E65E0 (PpmUpdatePerfStates.c)
 *     PdcPoPpmResetProfile @ 0x1408EF9A0 (PdcPoPpmResetProfile.c)
 *     PpmPerfProcCapFloorSettingCallback @ 0x1408F0B30 (PpmPerfProcCapFloorSettingCallback.c)
 *     PpmApplyProfile @ 0x1408F5B4C (PpmApplyProfile.c)
 *     PpmDisableProfile @ 0x1408F5CB8 (PpmDisableProfile.c)
 *     PpmProfileAcDcUpdate @ 0x1408F609C (PpmProfileAcDcUpdate.c)
 *     PpmRegisterSpmSettings @ 0x1408F6140 (PpmRegisterSpmSettings.c)
 *     PpmPerfRegisterHvPerfStateCounters @ 0x1408F69D0 (PpmPerfRegisterHvPerfStateCounters.c)
 *     PpmParkApplyForcedMask @ 0x1408F92F4 (PpmParkApplyForcedMask.c)
 *     PpmParkClearForcedMask @ 0x1408F93F4 (PpmParkClearForcedMask.c)
 *     PoInitSystem @ 0x140A3ED78 (PoInitSystem.c)
 *     PpmInitPolicyConfiguration @ 0x140A6B864 (PpmInitPolicyConfiguration.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402C5E00 (KeWaitForSingleObject.c)
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
