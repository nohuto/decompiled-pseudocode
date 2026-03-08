/*
 * XREFs of PpmGetExitSamplingCountdown @ 0x1402D20B4
 * Callers:
 *     PpmIdleExecuteTransition @ 0x14022D7D0 (PpmIdleExecuteTransition.c)
 *     PoFxSendSystemLatencyUpdate @ 0x1402D1FF0 (PoFxSendSystemLatencyUpdate.c)
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
  {
    v0 = 100;
    return 0x64 / v0;
  }
  if ( PpmExitLatencySamplingPercentage )
    return 0x64 / v0;
  return result;
}
