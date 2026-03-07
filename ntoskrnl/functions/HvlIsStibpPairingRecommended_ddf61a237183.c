bool HvlIsStibpPairingRecommended()
{
  unsigned __int64 CoreProcessorSet; // rcx
  bool result; // al

  result = 0;
  if ( (HvlpFlags & 0x400000) != 0 && HvlpSchedulerType != 1 && HvlpSchedulerType != 2 )
  {
    if ( HvlpSchedulerType == 3 )
      return 1;
    if ( HvlpSchedulerType == 4 )
    {
      CoreProcessorSet = KeGetCurrentPrcb()->CoreProcessorSet;
      if ( ((CoreProcessorSet - 1) & CoreProcessorSet) != 0 )
        return 1;
    }
  }
  return result;
}
