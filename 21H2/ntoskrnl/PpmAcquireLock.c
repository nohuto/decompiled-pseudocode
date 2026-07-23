/*
 * XREFs of PpmAcquireLock @ 0x14026FCB4
 * Callers:
 *     PoNotifyVSyncChange @ 0x14026FA20 (PoNotifyVSyncChange.c)
 *     PpmMediaBufferingWorker @ 0x14036C7F0 (PpmMediaBufferingWorker.c)
 *     PpmPerfLatencySensitivityHintWorker @ 0x140381C80 (PpmPerfLatencySensitivityHintWorker.c)
 *     PpmCheckResumePpmEngineFromSx @ 0x14038DDEC (PpmCheckResumePpmEngineFromSx.c)
 *     PpmCheckPausePpmEngineForSx @ 0x14038DE7C (PpmCheckPausePpmEngineForSx.c)
 *     PpmRegisterPerfCap @ 0x140392C40 (PpmRegisterPerfCap.c)
 *     PpmPerfClearBootOverrides @ 0x1403A3450 (PpmPerfClearBootOverrides.c)
 *     PopIntSteerSetMode @ 0x1403C1650 (PopIntSteerSetMode.c)
 *     PpmHeteroHgsBackupInit @ 0x1403CDD74 (PpmHeteroHgsBackupInit.c)
 *     PpmClearExitLatencySamplingPercentage @ 0x140565A44 (PpmClearExitLatencySamplingPercentage.c)
 *     PpmSetExitLatencySamplingPercentage @ 0x140567904 (PpmSetExitLatencySamplingPercentage.c)
 *     PopDeepSleepEvaluateCallback @ 0x1405778C0 (PopDeepSleepEvaluateCallback.c)
 *     PpmHeteroHgsUpdateWorker @ 0x140577DE0 (PpmHeteroHgsUpdateWorker.c)
 *     PpmParkSetLpiCap @ 0x14057DC54 (PpmParkSetLpiCap.c)
 *     PpmPerfTelemetryWorker @ 0x14061FBD0 (PpmPerfTelemetryWorker.c)
 *     PopPowerInformationInternal @ 0x14066C534 (PopPowerInformationInternal.c)
 *     PopCheckResiliencyScenarios @ 0x14066D4E0 (PopCheckResiliencyScenarios.c)
 *     PpmSetProfilePolicySetting @ 0x14066D740 (PpmSetProfilePolicySetting.c)
 *     PopEnforceResiliencyScenarios @ 0x140779DBC (PopEnforceResiliencyScenarios.c)
 *     PpmPerfReApplyStates @ 0x14077A510 (PpmPerfReApplyStates.c)
 *     PopPerfBoostPowerRequest @ 0x14078B6F0 (PopPerfBoostPowerRequest.c)
 *     PpmCheckInitProcessors @ 0x1407BA2A8 (PpmCheckInitProcessors.c)
 *     PpmRegisterPerfStates @ 0x1407BA470 (PpmRegisterPerfStates.c)
 *     PpmReapplyPerfPolicy @ 0x1407BAE90 (PpmReapplyPerfPolicy.c)
 *     PpmRegisterProfiles @ 0x1407C5C88 (PpmRegisterProfiles.c)
 *     PpmEnableProfile @ 0x1407C6134 (PpmEnableProfile.c)
 *     PopPpmHeteroPolicyCallback @ 0x1407D3D70 (PopPpmHeteroPolicyCallback.c)
 *     PopSetupHighPerfPowerRequest @ 0x1407D4BB0 (PopSetupHighPerfPowerRequest.c)
 *     PpmEventTraceControlCallback @ 0x1407D5560 (PpmEventTraceControlCallback.c)
 *     PopWnfFullscreenVideoCallback @ 0x1408E42B0 (PopWnfFullscreenVideoCallback.c)
 *     PpmClearSimulatedLoad @ 0x1408E6244 (PpmClearSimulatedLoad.c)
 *     PpmPerfGetBrandedFrequency @ 0x1408E636C (PpmPerfGetBrandedFrequency.c)
 *     PpmSetSimulatedLoad @ 0x1408E65D0 (PpmSetSimulatedLoad.c)
 *     PpmUpdatePerfStates @ 0x1408E66F0 (PpmUpdatePerfStates.c)
 *     PdcPoPpmResetProfile @ 0x1408EFAB0 (PdcPoPpmResetProfile.c)
 *     PpmPerfProcCapFloorSettingCallback @ 0x1408F0C40 (PpmPerfProcCapFloorSettingCallback.c)
 *     PpmApplyProfile @ 0x1408F5C5C (PpmApplyProfile.c)
 *     PpmDisableProfile @ 0x1408F5DC8 (PpmDisableProfile.c)
 *     PpmProfileAcDcUpdate @ 0x1408F61AC (PpmProfileAcDcUpdate.c)
 *     PpmRegisterSpmSettings @ 0x1408F6250 (PpmRegisterSpmSettings.c)
 *     PpmPerfRegisterHvPerfStateCounters @ 0x1408F6AE0 (PpmPerfRegisterHvPerfStateCounters.c)
 *     PpmParkApplyForcedMask @ 0x1408F9404 (PpmParkApplyForcedMask.c)
 *     PpmParkClearForcedMask @ 0x1408F9504 (PpmParkClearForcedMask.c)
 *     PoInitSystem @ 0x140A40948 (PoInitSystem.c)
 *     PpmInitPolicyConfiguration @ 0x140A6C864 (PpmInitPolicyConfiguration.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
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
