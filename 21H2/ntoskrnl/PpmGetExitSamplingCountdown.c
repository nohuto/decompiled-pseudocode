/*
 * XREFs of PpmGetExitSamplingCountdown @ 0x140281A50
 * Callers:
 *     PpmIdleExecuteTransition @ 0x1402224B0 (PpmIdleExecuteTransition.c)
 *     PoFxSendSystemLatencyUpdate @ 0x140281818 (PoFxSendSystemLatencyUpdate.c)
 * Callees:
 *     <none>
 */

__int64 PpmGetExitSamplingCountdown()
{
  unsigned int v0; // ecx
  __int64 result; // rax

  v0 = PpmExitLatencySamplingPercentage;
  result = 0LL;
  if ( (unsigned int)PpmExitLatencySamplingPercentage > 0x64 )
    v0 = 100;
  if ( v0 )
    return 0x64 / v0;
  return result;
}
