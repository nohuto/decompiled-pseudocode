/*
 * XREFs of PpmGetDeepSleepPlatformStateIndex @ 0x1405C75AC
 * Callers:
 *     PopFxClearDeviceConstraints @ 0x1405CB6D8 (PopFxClearDeviceConstraints.c)
 *     PopFxEnablePlatformStates @ 0x1405CC1E0 (PopFxEnablePlatformStates.c)
 *     PopPepInitializeVetoMasks @ 0x1405D5704 (PopPepInitializeVetoMasks.c)
 *     PopPepUpdateDripsDeviceVetoMask @ 0x1405D67D4 (PopPepUpdateDripsDeviceVetoMask.c)
 *     PopCheckResiliencyScenarios @ 0x1407EED48 (PopCheckResiliencyScenarios.c)
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
