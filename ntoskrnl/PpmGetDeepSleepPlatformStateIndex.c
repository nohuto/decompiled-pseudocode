/*
 * XREFs of PpmGetDeepSleepPlatformStateIndex @ 0x140581D3C
 * Callers:
 *     PopFxClearDeviceConstraints @ 0x140586DE0 (PopFxClearDeviceConstraints.c)
 *     PopFxEnablePlatformStates @ 0x140587D90 (PopFxEnablePlatformStates.c)
 *     PopPepInitializeVetoMasks @ 0x14059CE34 (PopPepInitializeVetoMasks.c)
 *     PopPepUpdateDripsDeviceVetoMask @ 0x14059D9D4 (PopPepUpdateDripsDeviceVetoMask.c)
 *     PopCheckResiliencyScenarios @ 0x14073AF4C (PopCheckResiliencyScenarios.c)
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
