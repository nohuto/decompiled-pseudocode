/*
 * XREFs of _strupr @ 0x1403D2DE0
 * Callers:
 *     InbvDetermineFunction @ 0x1403845A8 (InbvDetermineFunction.c)
 *     HalInitializeBios @ 0x14039A4D0 (HalInitializeBios.c)
 *     KdInitSystem @ 0x140AAE040 (KdInitSystem.c)
 *     Phase1InitializationDiscard @ 0x140B450A0 (Phase1InitializationDiscard.c)
 *     InbvDriverInitialize @ 0x140B47614 (InbvDriverInitialize.c)
 *     BvgaDriverInitialize @ 0x140B476D0 (BvgaDriverInitialize.c)
 *     InitBootProcessor @ 0x140B47864 (InitBootProcessor.c)
 *     RamdiskStart @ 0x140B98380 (RamdiskStart.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x1403023F0 (xHalTimerWatchdogStop.c)
 */

char *__cdecl strupr(char *String)
{
  char v3; // cl
  char *v4; // r8

  if ( String )
  {
    v3 = *String;
    v4 = String;
    while ( v3 )
    {
      if ( (unsigned __int8)(v3 - 97) <= 0x19u )
        *v4 = v3 - 32;
      v3 = *++v4;
    }
    return String;
  }
  else
  {
    xHalTimerWatchdogStop();
    return 0LL;
  }
}
