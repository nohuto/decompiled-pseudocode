/*
 * XREFs of PpmAcquireLock @ 0x1402D1F90
 * Callers:
 *     PpmPerfLatencySensitivityHintWorker @ 0x140201DE0 (PpmPerfLatencySensitivityHintWorker.c)
 *     PpmPerfClearBootOverrides @ 0x1402D1A5C (PpmPerfClearBootOverrides.c)
 *     PoNotifyVSyncChange @ 0x1402D1CA0 (PoNotifyVSyncChange.c)
 *     PpmCheckDelayedPeriodicStart @ 0x14036F270 (PpmCheckDelayedPeriodicStart.c)
 *     PopIntSteerSetMode @ 0x14038D810 (PopIntSteerSetMode.c)
 *     PpmHeteroHgsBackupInit @ 0x1403A6744 (PpmHeteroHgsBackupInit.c)
 *     PpmMediaBufferingWorker @ 0x1403A6F80 (PpmMediaBufferingWorker.c)
 *     PpmClearExitLatencySamplingPercentage @ 0x140581B64 (PpmClearExitLatencySamplingPercentage.c)
 *     PpmSetExitLatencySamplingPercentage @ 0x1405836EC (PpmSetExitLatencySamplingPercentage.c)
 *     PpmPerfGetVmPerfConfig @ 0x14058AC84 (PpmPerfGetVmPerfConfig.c)
 *     PpmPerfGetVmPerfSupport @ 0x14058AE84 (PpmPerfGetVmPerfSupport.c)
 *     PpmRegisterPerfCap @ 0x14058AF70 (PpmRegisterPerfCap.c)
 *     PpmCheckPausePpmEngineForSx @ 0x140593EFC (PpmCheckPausePpmEngineForSx.c)
 *     PpmCheckResumePpmEngineFromSx @ 0x140593F40 (PpmCheckResumePpmEngineFromSx.c)
 *     PopDeepSleepEvaluateCallback @ 0x140595FC0 (PopDeepSleepEvaluateCallback.c)
 *     PpmParkSetLpiCap @ 0x14059ADFC (PpmParkSetLpiCap.c)
 *     PpmHeteroHgsUpdateWorker @ 0x14059C3F0 (PpmHeteroHgsUpdateWorker.c)
 *     PopCheckResiliencyScenarios @ 0x14073AF4C (PopCheckResiliencyScenarios.c)
 *     PopPowerInformationInternal @ 0x14073E108 (PopPowerInformationInternal.c)
 *     PopPowerRequestCallbackPerfBoostRequired @ 0x14075DD70 (PopPowerRequestCallbackPerfBoostRequired.c)
 *     PpmEnableProfile @ 0x140825808 (PpmEnableProfile.c)
 *     PpmSetProfilePolicySetting @ 0x140825A60 (PpmSetProfilePolicySetting.c)
 *     PpmReapplyPerfPolicy @ 0x1408261A0 (PpmReapplyPerfPolicy.c)
 *     PpmCheckInitProcessors @ 0x140827DA4 (PpmCheckInitProcessors.c)
 *     PpmRegisterPerfStates @ 0x14082802C (PpmRegisterPerfStates.c)
 *     PpmPerfGetFrequencyBandStats @ 0x14083F534 (PpmPerfGetFrequencyBandStats.c)
 *     PpmRegisterProfiles @ 0x140848708 (PpmRegisterProfiles.c)
 *     PpmIdleGetPackageIdleIntervalStats @ 0x14084C230 (PpmIdleGetPackageIdleIntervalStats.c)
 *     PpmIdleGetConcurrencyStats @ 0x14085AA64 (PpmIdleGetConcurrencyStats.c)
 *     PopPpmHeteroPolicyCallback @ 0x1408601B0 (PopPpmHeteroPolicyCallback.c)
 *     PpmEventTraceControlCallback @ 0x140860AA0 (PpmEventTraceControlCallback.c)
 *     PpmPerfTelemetryWorker @ 0x140880450 (PpmPerfTelemetryWorker.c)
 *     PopWnfFullscreenVideoCallback @ 0x140981610 (PopWnfFullscreenVideoCallback.c)
 *     PpmClearSimulatedLoad @ 0x1409837F0 (PpmClearSimulatedLoad.c)
 *     PpmPerfGetBrandedFrequency @ 0x140983918 (PpmPerfGetBrandedFrequency.c)
 *     PpmPerfReApplyStates @ 0x1409839D4 (PpmPerfReApplyStates.c)
 *     PpmSetSimulatedLoad @ 0x140983BA4 (PpmSetSimulatedLoad.c)
 *     PpmUpdatePerfStates @ 0x140983CC0 (PpmUpdatePerfStates.c)
 *     PpmPerfProcCapFloorSettingCallback @ 0x140990170 (PpmPerfProcCapFloorSettingCallback.c)
 *     PopEnforceResiliencyScenarios @ 0x140991238 (PopEnforceResiliencyScenarios.c)
 *     PdcPoPpmResetProfile @ 0x1409949D0 (PdcPoPpmResetProfile.c)
 *     PpmParkApplyForcedMask @ 0x140996E54 (PpmParkApplyForcedMask.c)
 *     PpmParkClearForcedMask @ 0x140996F54 (PpmParkClearForcedMask.c)
 *     PpmApplyProfile @ 0x14099A040 (PpmApplyProfile.c)
 *     PpmDisableProfile @ 0x14099A1A4 (PpmDisableProfile.c)
 *     PpmProfileAcDcUpdate @ 0x14099A59C (PpmProfileAcDcUpdate.c)
 *     PpmRegisterSpmSettings @ 0x14099A640 (PpmRegisterSpmSettings.c)
 *     PpmPerfRegisterHvPerfStateCounters @ 0x14099AA30 (PpmPerfRegisterHvPerfStateCounters.c)
 *     PoInitSystem @ 0x140B45CAC (PoInitSystem.c)
 *     PpmInitPolicyConfiguration @ 0x140B5CAC0 (PpmInitPolicyConfiguration.c)
 *     PopDetectSimulatedHeteroProcessors @ 0x140B6D7C4 (PopDetectSimulatedHeteroProcessors.c)
 * Callees:
 *     KiSetSystemPriorityThread @ 0x1402E9F30 (KiSetSystemPriorityThread.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 */

struct _KTHREAD *__fastcall PpmAcquireLock(struct _KTHREAD **a1)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *result; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  KiSetSystemPriorityThread((ULONG_PTR)KeGetCurrentThread());
  KeWaitForSingleObject(a1 + 1, Executive, 0, 0, 0LL);
  result = KeGetCurrentThread();
  *a1 = result;
  return result;
}
