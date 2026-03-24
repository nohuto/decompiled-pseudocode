/*
 * XREFs of PpmReleaseLock @ 0x14022A470
 * Callers:
 *     PpmCheckRun @ 0x14022A3C0 (PpmCheckRun.c)
 *     PoNotifyVSyncChange @ 0x14034A7F0 (PoNotifyVSyncChange.c)
 *     PpmMediaBufferingWorker @ 0x14036BF90 (PpmMediaBufferingWorker.c)
 *     PpmCheckResumePpmEngineFromSx @ 0x14038D59C (PpmCheckResumePpmEngineFromSx.c)
 *     PpmCheckPausePpmEngineForSx @ 0x14038D62C (PpmCheckPausePpmEngineForSx.c)
 *     PpmRegisterPerfCap @ 0x1403923F0 (PpmRegisterPerfCap.c)
 *     PpmHeteroHgsBackupInit @ 0x1403CD504 (PpmHeteroHgsBackupInit.c)
 *     PpmClearExitLatencySamplingPercentage @ 0x140565744 (PpmClearExitLatencySamplingPercentage.c)
 *     PpmSetExitLatencySamplingPercentage @ 0x140567604 (PpmSetExitLatencySamplingPercentage.c)
 *     PopDeepSleepEvaluateCallback @ 0x1405775C0 (PopDeepSleepEvaluateCallback.c)
 *     PpmParkSetLpiCap @ 0x14057D954 (PpmParkSetLpiCap.c)
 *     PpmPerfTelemetryWorker @ 0x1406A36D0 (PpmPerfTelemetryWorker.c)
 *     PopPowerInformationInternal @ 0x1406F1BE4 (PopPowerInformationInternal.c)
 *     PopCheckResiliencyScenarios @ 0x1406F2B90 (PopCheckResiliencyScenarios.c)
 *     PpmInfoReleaseLocks @ 0x1406F3F08 (PpmInfoReleaseLocks.c)
 *     PopEnforceResiliencyScenarios @ 0x140779AFC (PopEnforceResiliencyScenarios.c)
 *     PpmPerfUpdateDomainPolicy @ 0x14078B4DC (PpmPerfUpdateDomainPolicy.c)
 *     PpmCheckInitProcessors @ 0x1407BA2D8 (PpmCheckInitProcessors.c)
 *     PpmRegisterPerfStates @ 0x1407BA4A0 (PpmRegisterPerfStates.c)
 *     PpmReapplyPerfPolicy @ 0x1407BAEC0 (PpmReapplyPerfPolicy.c)
 *     PpmRegisterProfiles @ 0x1407C5F28 (PpmRegisterProfiles.c)
 *     PopPpmHeteroPolicyCallback @ 0x1407D3B20 (PopPpmHeteroPolicyCallback.c)
 *     PpmEventTraceControlCallback @ 0x1407D5310 (PpmEventTraceControlCallback.c)
 *     PopWnfFullscreenVideoCallback @ 0x1408E41A0 (PopWnfFullscreenVideoCallback.c)
 *     PpmClearSimulatedLoad @ 0x1408E6134 (PpmClearSimulatedLoad.c)
 *     PpmPerfGetBrandedFrequency @ 0x1408E625C (PpmPerfGetBrandedFrequency.c)
 *     PpmSetSimulatedLoad @ 0x1408E64C0 (PpmSetSimulatedLoad.c)
 *     PpmUpdatePerfStates @ 0x1408E65E0 (PpmUpdatePerfStates.c)
 *     PdcPoPpmResetProfile @ 0x1408EF9A0 (PdcPoPpmResetProfile.c)
 *     PpmCompareAndApplyPolicySettings @ 0x1408F0810 (PpmCompareAndApplyPolicySettings.c)
 *     PpmApplyProfile @ 0x1408F5B4C (PpmApplyProfile.c)
 *     PpmDisableProfile @ 0x1408F5CB8 (PpmDisableProfile.c)
 *     PpmRegisterSpmSettings @ 0x1408F6140 (PpmRegisterSpmSettings.c)
 *     PpmPerfRegisterHvPerfStateCounters @ 0x1408F69D0 (PpmPerfRegisterHvPerfStateCounters.c)
 *     PpmParkApplyForcedMask @ 0x1408F92F4 (PpmParkApplyForcedMask.c)
 *     PpmParkClearForcedMask @ 0x1408F93F4 (PpmParkClearForcedMask.c)
 *     PoInitSystem @ 0x140A3ED78 (PoInitSystem.c)
 *     PpmInitPolicyConfiguration @ 0x140A6B864 (PpmInitPolicyConfiguration.c)
 * Callees:
 *     KeSetEvent @ 0x1402C3C30 (KeSetEvent.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1402CB480 (KiLeaveGuardedRegionUnsafe.c)
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
