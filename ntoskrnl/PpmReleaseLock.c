/*
 * XREFs of PpmReleaseLock @ 0x1402D1F40
 * Callers:
 *     PoNotifyVSyncChange @ 0x1402D1CA0 (PoNotifyVSyncChange.c)
 *     PpmCheckRun @ 0x1402D1EB0 (PpmCheckRun.c)
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
 *     PopCheckResiliencyScenarios @ 0x14073AF4C (PopCheckResiliencyScenarios.c)
 *     PopPowerInformationInternal @ 0x14073E108 (PopPowerInformationInternal.c)
 *     PpmPerfUpdateDomainPolicy @ 0x14075DE18 (PpmPerfUpdateDomainPolicy.c)
 *     PpmInfoReleaseLocks @ 0x1408260E0 (PpmInfoReleaseLocks.c)
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
 *     PpmSetSimulatedLoad @ 0x140983BA4 (PpmSetSimulatedLoad.c)
 *     PpmUpdatePerfStates @ 0x140983CC0 (PpmUpdatePerfStates.c)
 *     PpmCompareAndApplyPolicySettings @ 0x14098FE4C (PpmCompareAndApplyPolicySettings.c)
 *     PopEnforceResiliencyScenarios @ 0x140991238 (PopEnforceResiliencyScenarios.c)
 *     PdcPoPpmResetProfile @ 0x1409949D0 (PdcPoPpmResetProfile.c)
 *     PpmParkApplyForcedMask @ 0x140996E54 (PpmParkApplyForcedMask.c)
 *     PpmParkClearForcedMask @ 0x140996F54 (PpmParkClearForcedMask.c)
 *     PpmApplyProfile @ 0x14099A040 (PpmApplyProfile.c)
 *     PpmDisableProfile @ 0x14099A1A4 (PpmDisableProfile.c)
 *     PpmRegisterSpmSettings @ 0x14099A640 (PpmRegisterSpmSettings.c)
 *     PpmPerfRegisterHvPerfStateCounters @ 0x14099AA30 (PpmPerfRegisterHvPerfStateCounters.c)
 *     PoInitSystem @ 0x140B45CAC (PoInitSystem.c)
 *     PpmInitPolicyConfiguration @ 0x140B5CAC0 (PpmInitPolicyConfiguration.c)
 *     PopDetectSimulatedHeteroProcessors @ 0x140B6D7C4 (PopDetectSimulatedHeteroProcessors.c)
 * Callees:
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     KiClearSystemPriority @ 0x1402DAA90 (KiClearSystemPriority.c)
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
