/*
 * XREFs of RIMArmWatchDog @ 0x1C00040B0
 * Callers:
 *     rimSignalReadComplete @ 0x1C0003DB8 (rimSignalReadComplete.c)
 *     RIMWatchDog @ 0x1C0043C80 (RIMWatchDog.c)
 * Callees:
 *     <none>
 */

BOOLEAN RIMArmWatchDog()
{
  BOOLEAN result; // al

  if ( gWatchDogTimer )
  {
    if ( !gbWatchDogTimerArmed )
    {
      gbWatchDogTimerArmed = 1;
      return KeSetTimer(gWatchDogTimer, (LARGE_INTEGER)-50000000LL, 0LL);
    }
  }
  return result;
}
