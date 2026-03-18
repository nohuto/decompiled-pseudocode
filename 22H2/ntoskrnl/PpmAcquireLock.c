/*
 * XREFs of PpmAcquireLock @ 0x14032C0F0
 * Callers:
 *     PpmPerfLatencySensitivityHintWorker @ 0x140201E80 (PpmPerfLatencySensitivityHintWorker.c)
 *     PoNotifyVSyncChange @ 0x14032BE00 (PoNotifyVSyncChange.c)
 *     PpmPerfClearBootOverrides @ 0x14036D1E4 (PpmPerfClearBootOverrides.c)
 *     PpmCheckDelayedPeriodicStart @ 0x1403734F0 (PpmCheckDelayedPeriodicStart.c)
 *     PopIntSteerSetMode @ 0x14038FCD0 (PopIntSteerSetMode.c)
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
 *     PpmHeteroHgsUpdateWorker @ 0x14059E910 (PpmHeteroHgsUpdateWorker.c)
 *     PopCheckResiliencyScenarios @ 0x140700F30 (PopCheckResiliencyScenarios.c)
 *     PopPowerRequestCallbackPerfBoostRequired @ 0x1407E9D00 (PopPowerRequestCallbackPerfBoostRequired.c)
 *     PopPowerInformationInternal @ 0x1407ED5EC (PopPowerInformationInternal.c)
 *     PpmEnableProfile @ 0x14082D878 (PpmEnableProfile.c)
 *     PpmSetProfilePolicySetting @ 0x14082DAD0 (PpmSetProfilePolicySetting.c)
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
 *     PpmPerfReApplyStates @ 0x140986A84 (PpmPerfReApplyStates.c)
 *     PpmSetSimulatedLoad @ 0x140986C54 (PpmSetSimulatedLoad.c)
 *     PpmUpdatePerfStates @ 0x140986D70 (PpmUpdatePerfStates.c)
 *     PpmPerfProcCapFloorSettingCallback @ 0x140993220 (PpmPerfProcCapFloorSettingCallback.c)
 *     PopEnforceResiliencyScenarios @ 0x1409942E8 (PopEnforceResiliencyScenarios.c)
 *     PdcPoPpmResetProfile @ 0x140997A80 (PdcPoPpmResetProfile.c)
 *     PpmParkApplyForcedMask @ 0x140999F04 (PpmParkApplyForcedMask.c)
 *     PpmParkClearForcedMask @ 0x14099A004 (PpmParkClearForcedMask.c)
 *     PpmApplyProfile @ 0x14099D0D0 (PpmApplyProfile.c)
 *     PpmDisableProfile @ 0x14099D234 (PpmDisableProfile.c)
 *     PpmProfileAcDcUpdate @ 0x14099D62C (PpmProfileAcDcUpdate.c)
 *     PpmRegisterSpmSettings @ 0x14099D6D0 (PpmRegisterSpmSettings.c)
 *     PpmPerfRegisterHvPerfStateCounters @ 0x14099DAC0 (PpmPerfRegisterHvPerfStateCounters.c)
 *     PoInitSystem @ 0x140B50B30 (PoInitSystem.c)
 *     PpmInitPolicyConfiguration @ 0x140B5EF90 (PpmInitPolicyConfiguration.c)
 *     PopDetectSimulatedHeteroProcessors @ 0x140B71AE0 (PopDetectSimulatedHeteroProcessors.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140243CC0 (KeWaitForSingleObject.c)
 *     KiSetSystemPriorityThread @ 0x1403558D0 (KiSetSystemPriorityThread.c)
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
