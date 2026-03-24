/*
 * XREFs of PpmGetDeepSleepPlatformStateIndex @ 0x140565CEC
 * Callers:
 *     PopFxClearDeviceConstraints @ 0x140569DC4 (PopFxClearDeviceConstraints.c)
 *     PopFxEnablePlatformStates @ 0x14056AA20 (PopFxEnablePlatformStates.c)
 *     PopPepInitializeVetoMasks @ 0x140574D9C (PopPepInitializeVetoMasks.c)
 *     PopPepUpdateDripsDeviceVetoMask @ 0x140576100 (PopPepUpdateDripsDeviceVetoMask.c)
 *     PopCheckResiliencyScenarios @ 0x140679DA0 (PopCheckResiliencyScenarios.c)
 * Callees:
 *     <none>
 */

__int64 PpmGetDeepSleepPlatformStateIndex()
{
  if ( PpmPlatformStates && *(_DWORD *)PpmPlatformStates )
    return (unsigned int)(*(_DWORD *)PpmPlatformStates - 1);
  else
    return 0xFFFFFFFFLL;
}
