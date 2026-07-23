/*
 * XREFs of _strupr @ 0x1403D1190
 * Callers:
 *     HalInitializeBios @ 0x1403C4EE0 (HalInitializeBios.c)
 *     InbvDetermineFunction @ 0x1403C8AD8 (InbvDetermineFunction.c)
 *     KdInitSystem @ 0x1409B6160 (KdInitSystem.c)
 *     InitBootProcessor @ 0x140A3BAF4 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140A3C6A4 (Phase1InitializationDiscard.c)
 *     InbvDriverInitialize @ 0x140A6C590 (InbvDriverInitialize.c)
 *     BvgaDriverInitialize @ 0x140A6C640 (BvgaDriverInitialize.c)
 *     RamdiskStart @ 0x140A96268 (RamdiskStart.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x14039AB40 (xHalTimerWatchdogStop.c)
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
