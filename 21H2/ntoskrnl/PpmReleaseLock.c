/*
 * XREFs of PpmReleaseLock @ 0x14022AB00
 * Callers:
 *     PpmCheckRun @ 0x14022AA50 (PpmCheckRun.c)
 *     PoNotifyVSyncChange @ 0x1402817E0 (PoNotifyVSyncChange.c)
 *     PpmMediaBufferingWorker @ 0x14036C640 (PpmMediaBufferingWorker.c)
 *     PpmCheckResumePpmEngineFromSx @ 0x14038DC9C (PpmCheckResumePpmEngineFromSx.c)
 *     PpmCheckPausePpmEngineForSx @ 0x14038DD2C (PpmCheckPausePpmEngineForSx.c)
 *     PpmRegisterPerfCap @ 0x140392AF0 (PpmRegisterPerfCap.c)
 *     PpmHeteroHgsBackupInit @ 0x1403CDC04 (PpmHeteroHgsBackupInit.c)
 *     PpmClearExitLatencySamplingPercentage @ 0x140565804 (PpmClearExitLatencySamplingPercentage.c)
 *     PpmSetExitLatencySamplingPercentage @ 0x1405676C4 (PpmSetExitLatencySamplingPercentage.c)
 *     PopDeepSleepEvaluateCallback @ 0x140577680 (PopDeepSleepEvaluateCallback.c)
 *     PpmParkSetLpiCap @ 0x14057DA14 (PpmParkSetLpiCap.c)
 *     PopPowerInformationInternal @ 0x140678DF4 (PopPowerInformationInternal.c)
 *     PopCheckResiliencyScenarios @ 0x140679DA0 (PopCheckResiliencyScenarios.c)
 *     PpmInfoReleaseLocks @ 0x14067B118 (PpmInfoReleaseLocks.c)
 *     PpmPerfTelemetryWorker @ 0x1406C0CC0 (PpmPerfTelemetryWorker.c)
 *     PopEnforceResiliencyScenarios @ 0x140779BFC (PopEnforceResiliencyScenarios.c)
 *     PpmPerfUpdateDomainPolicy @ 0x14078B5DC (PpmPerfUpdateDomainPolicy.c)
 *     PpmCheckInitProcessors @ 0x1407B9B18 (PpmCheckInitProcessors.c)
 *     PpmRegisterPerfStates @ 0x1407B9CE0 (PpmRegisterPerfStates.c)
 *     PpmReapplyPerfPolicy @ 0x1407BA700 (PpmReapplyPerfPolicy.c)
 *     PpmRegisterProfiles @ 0x1407C5768 (PpmRegisterProfiles.c)
 *     PopPpmHeteroPolicyCallback @ 0x1407D3C00 (PopPpmHeteroPolicyCallback.c)
 *     PpmEventTraceControlCallback @ 0x1407D53F0 (PpmEventTraceControlCallback.c)
 *     PopWnfFullscreenVideoCallback @ 0x1408E4150 (PopWnfFullscreenVideoCallback.c)
 *     PpmClearSimulatedLoad @ 0x1408E60E4 (PpmClearSimulatedLoad.c)
 *     PpmPerfGetBrandedFrequency @ 0x1408E620C (PpmPerfGetBrandedFrequency.c)
 *     PpmSetSimulatedLoad @ 0x1408E6470 (PpmSetSimulatedLoad.c)
 *     PpmUpdatePerfStates @ 0x1408E6590 (PpmUpdatePerfStates.c)
 *     PdcPoPpmResetProfile @ 0x1408EF950 (PdcPoPpmResetProfile.c)
 *     PpmCompareAndApplyPolicySettings @ 0x1408F07C0 (PpmCompareAndApplyPolicySettings.c)
 *     PpmApplyProfile @ 0x1408F5AFC (PpmApplyProfile.c)
 *     PpmDisableProfile @ 0x1408F5C68 (PpmDisableProfile.c)
 *     PpmRegisterSpmSettings @ 0x1408F60F0 (PpmRegisterSpmSettings.c)
 *     PpmPerfRegisterHvPerfStateCounters @ 0x1408F6980 (PpmPerfRegisterHvPerfStateCounters.c)
 *     PpmParkApplyForcedMask @ 0x1408F92A4 (PpmParkApplyForcedMask.c)
 *     PpmParkClearForcedMask @ 0x1408F93A4 (PpmParkClearForcedMask.c)
 *     PoInitSystem @ 0x140A3F948 (PoInitSystem.c)
 *     PpmInitPolicyConfiguration @ 0x140A6B864 (PpmInitPolicyConfiguration.c)
 * Callees:
 *     KeSetEvent @ 0x1403435A0 (KeSetEvent.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14034AD90 (KiLeaveGuardedRegionUnsafe.c)
 */

LONG __fastcall PpmReleaseLock(__int64 *a1)
{
  __int64 v1; // rbx
  LONG result; // eax

  v1 = *a1;
  *a1 = 0LL;
  result = KeSetEvent((PRKEVENT)(a1 + 1), 0, 0);
  if ( v1 )
    return KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
  return result;
}
