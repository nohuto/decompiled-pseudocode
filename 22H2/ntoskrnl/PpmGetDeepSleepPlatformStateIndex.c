/*
 * XREFs of PpmGetDeepSleepPlatformStateIndex @ 0x140565C2C
 * Callers:
 *     PopFxClearDeviceConstraints @ 0x140569D04 (PopFxClearDeviceConstraints.c)
 *     PopFxEnablePlatformStates @ 0x14056A960 (PopFxEnablePlatformStates.c)
 *     PopPepInitializeVetoMasks @ 0x140574CDC (PopPepInitializeVetoMasks.c)
 *     PopPepUpdateDripsDeviceVetoMask @ 0x140576040 (PopPepUpdateDripsDeviceVetoMask.c)
 *     PopCheckResiliencyScenarios @ 0x1406F2B90 (PopCheckResiliencyScenarios.c)
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
