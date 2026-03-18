/*
 * XREFs of PopFxGetLatencyLimitWithoutResiliency @ 0x14032C1DC
 * Callers:
 *     PoFxSendSystemLatencyUpdate @ 0x14032C150 (PoFxSendSystemLatencyUpdate.c)
 * Callees:
 *     <none>
 */

__int64 PopFxGetLatencyLimitWithoutResiliency()
{
  __int64 result; // rax

  if ( byte_140C3D94E )
    return (unsigned int)dword_140D1D3F0;
  if ( PpmDisableVsyncLatencyUpdate )
    return (unsigned int)PpmLatencyToleranceLimit;
  result = (unsigned int)dword_140D1D3EC;
  if ( !PopFxVSyncEnabled )
    return (unsigned int)PpmLatencyToleranceLimit;
  return result;
}
