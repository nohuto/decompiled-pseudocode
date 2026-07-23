/*
 * XREFs of PpmGetDeepSleepPlatformStateIndex @ 0x140565F2C
 * Callers:
 *     PopFxClearDeviceConstraints @ 0x14056A004 (PopFxClearDeviceConstraints.c)
 *     PopFxEnablePlatformStates @ 0x14056AC60 (PopFxEnablePlatformStates.c)
 *     PopPepInitializeVetoMasks @ 0x140574FDC (PopPepInitializeVetoMasks.c)
 *     PopPepUpdateDripsDeviceVetoMask @ 0x140576340 (PopPepUpdateDripsDeviceVetoMask.c)
 *     PopCheckResiliencyScenarios @ 0x14066D4E0 (PopCheckResiliencyScenarios.c)
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
