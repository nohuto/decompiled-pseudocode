/*
 * XREFs of HalpPreprocessNmi @ 0x1402FBBD0
 * Callers:
 *     <none>
 * Callees:
 *     HalpWatchdogCheckPreResetNMI @ 0x1405098C0 (HalpWatchdogCheckPreResetNMI.c)
 *     HalpInterruptRebootService @ 0x140519E00 (HalpInterruptRebootService.c)
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
