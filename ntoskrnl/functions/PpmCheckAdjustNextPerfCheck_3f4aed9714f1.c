char PpmCheckAdjustNextPerfCheck()
{
  if ( PpmCheckCurrentPipelineId == 5 && PpmCheckLastEffectiveExecutionTime )
    _InterlockedExchange64(&PpmCheckLastEffectiveExecutionTime, MEMORY[0xFFFFF78000000008]);
  return 1;
}
