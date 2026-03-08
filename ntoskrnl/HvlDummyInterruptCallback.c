/*
 * XREFs of HvlDummyInterruptCallback @ 0x14053D1B0
 * Callers:
 *     KiHvInterruptSubDispatch @ 0x14041DE10 (KiHvInterruptSubDispatch.c)
 *     KiVmbusInterruptSubDispatch @ 0x14041DF70 (KiVmbusInterruptSubDispatch.c)
 * Callees:
 *     HvlPerformEndOfInterrupt @ 0x140456EA0 (HvlPerformEndOfInterrupt.c)
 */

__int64 HvlDummyInterruptCallback()
{
  return HvlPerformEndOfInterrupt();
}
