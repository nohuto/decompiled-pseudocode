/*
 * XREFs of HalpPreprocessNmi @ 0x140366F20
 * Callers:
 *     <none>
 * Callees:
 *     HalpWatchdogCheckPreResetNMI @ 0x14050B9A0 (HalpWatchdogCheckPreResetNMI.c)
 *     HalpInterruptRebootService @ 0x14051C330 (HalpInterruptRebootService.c)
 */

char __fastcall HalpPreprocessNmi(int a1)
{
  char result; // al

  if ( a1 )
  {
    if ( a1 == 1 )
      return HalpWatchdogCheckPreResetNMI();
  }
  else
  {
    result = HalpInterruptNmiRebootInProgress;
    if ( HalpInterruptNmiRebootInProgress )
      HalpInterruptRebootService(0LL, 0LL);
  }
  return result;
}
