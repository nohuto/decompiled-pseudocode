/*
 * XREFs of PpmCheckAdjustNextPerfCheck @ 0x140310D20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char PpmCheckAdjustNextPerfCheck()
{
  if ( PpmCheckCurrentPipelineId == 5 && PpmCheckLastExecutionTime )
    _InterlockedExchange64(&PpmCheckLastExecutionTime, MEMORY[0xFFFFF78000000008]);
  return 1;
}
