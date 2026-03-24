/*
 * XREFs of _strupr @ 0x1403D0920
 * Callers:
 *     HalInitializeBios @ 0x1403C4710 (HalInitializeBios.c)
 *     InbvDetermineFunction @ 0x1403C8308 (InbvDetermineFunction.c)
 *     KdInitSystem @ 0x1409B5160 (KdInitSystem.c)
 *     InitBootProcessor @ 0x140A39F24 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140A3AAD4 (Phase1InitializationDiscard.c)
 *     InbvDriverInitialize @ 0x140A6B590 (InbvDriverInitialize.c)
 *     BvgaDriverInitialize @ 0x140A6B640 (BvgaDriverInitialize.c)
 *     RamdiskStart @ 0x140A95268 (RamdiskStart.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x14039A2F0 (xHalTimerWatchdogStop.c)
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
