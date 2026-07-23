/*
 * XREFs of PpmReleaseLock @ 0x1402CF3B0
 * Callers:
 *     PoNotifyVSyncChange @ 0x14026FA20 (PoNotifyVSyncChange.c)
 *     PpmCheckRun @ 0x1402CF300 (PpmCheckRun.c)
 *     PpmMediaBufferingWorker @ 0x14036C7F0 (PpmMediaBufferingWorker.c)
 *     PpmCheckResumePpmEngineFromSx @ 0x14038DDEC (PpmCheckResumePpmEngineFromSx.c)
 *     PpmCheckPausePpmEngineForSx @ 0x14038DE7C (PpmCheckPausePpmEngineForSx.c)
 *     PpmRegisterPerfCap @ 0x140392C40 (PpmRegisterPerfCap.c)
 *     PpmHeteroHgsBackupInit @ 0x1403CDD74 (PpmHeteroHgsBackupInit.c)
 *     PpmClearExitLatencySamplingPercentage @ 0x140565A44 (PpmClearExitLatencySamplingPercentage.c)
 *     PpmSetExitLatencySamplingPercentage @ 0x140567904 (PpmSetExitLatencySamplingPercentage.c)
 *     PopDeepSleepEvaluateCallback @ 0x1405778C0 (PopDeepSleepEvaluateCallback.c)
 *     PpmParkSetLpiCap @ 0x14057DC54 (PpmParkSetLpiCap.c)
 *     PpmPerfTelemetryWorker @ 0x14061FBD0 (PpmPerfTelemetryWorker.c)
 *     PopPowerInformationInternal @ 0x14066C534 (PopPowerInformationInternal.c)
 *     PopCheckResiliencyScenarios @ 0x14066D4E0 (PopCheckResiliencyScenarios.c)
 *     PpmInfoReleaseLocks @ 0x14066E858 (PpmInfoReleaseLocks.c)
 *     PopEnforceResiliencyScenarios @ 0x140779DBC (PopEnforceResiliencyScenarios.c)
 *     PpmPerfUpdateDomainPolicy @ 0x14078B79C (PpmPerfUpdateDomainPolicy.c)
 *     PpmCheckInitProcessors @ 0x1407BA2A8 (PpmCheckInitProcessors.c)
 *     PpmRegisterPerfStates @ 0x1407BA470 (PpmRegisterPerfStates.c)
 *     PpmReapplyPerfPolicy @ 0x1407BAE90 (PpmReapplyPerfPolicy.c)
 *     PpmRegisterProfiles @ 0x1407C5C88 (PpmRegisterProfiles.c)
 *     PopPpmHeteroPolicyCallback @ 0x1407D3D70 (PopPpmHeteroPolicyCallback.c)
 *     PpmEventTraceControlCallback @ 0x1407D5560 (PpmEventTraceControlCallback.c)
 *     PopWnfFullscreenVideoCallback @ 0x1408E42B0 (PopWnfFullscreenVideoCallback.c)
 *     PpmClearSimulatedLoad @ 0x1408E6244 (PpmClearSimulatedLoad.c)
 *     PpmPerfGetBrandedFrequency @ 0x1408E636C (PpmPerfGetBrandedFrequency.c)
 *     PpmSetSimulatedLoad @ 0x1408E65D0 (PpmSetSimulatedLoad.c)
 *     PpmUpdatePerfStates @ 0x1408E66F0 (PpmUpdatePerfStates.c)
 *     PdcPoPpmResetProfile @ 0x1408EFAB0 (PdcPoPpmResetProfile.c)
 *     PpmCompareAndApplyPolicySettings @ 0x1408F0920 (PpmCompareAndApplyPolicySettings.c)
 *     PpmApplyProfile @ 0x1408F5C5C (PpmApplyProfile.c)
 *     PpmDisableProfile @ 0x1408F5DC8 (PpmDisableProfile.c)
 *     PpmRegisterSpmSettings @ 0x1408F6250 (PpmRegisterSpmSettings.c)
 *     PpmPerfRegisterHvPerfStateCounters @ 0x1408F6AE0 (PpmPerfRegisterHvPerfStateCounters.c)
 *     PpmParkApplyForcedMask @ 0x1408F9404 (PpmParkApplyForcedMask.c)
 *     PpmParkClearForcedMask @ 0x1408F9504 (PpmParkClearForcedMask.c)
 *     PoInitSystem @ 0x140A40948 (PoInitSystem.c)
 *     PpmInitPolicyConfiguration @ 0x140A6C864 (PpmInitPolicyConfiguration.c)
 * Callees:
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
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
