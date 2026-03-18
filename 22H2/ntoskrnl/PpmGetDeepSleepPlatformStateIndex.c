/*
 * XREFs of PpmGetDeepSleepPlatformStateIndex @ 0x14058426C
 * Callers:
 *     PopFxClearDeviceConstraints @ 0x140589310 (PopFxClearDeviceConstraints.c)
 *     PopFxEnablePlatformStates @ 0x14058A2C0 (PopFxEnablePlatformStates.c)
 *     PopPepInitializeVetoMasks @ 0x14059F354 (PopPepInitializeVetoMasks.c)
 *     PopPepUpdateDripsDeviceVetoMask @ 0x14059FEF4 (PopPepUpdateDripsDeviceVetoMask.c)
 *     PopCheckResiliencyScenarios @ 0x140700F30 (PopCheckResiliencyScenarios.c)
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
