/*
 * XREFs of HvlDummyInterruptCallback @ 0x1404F14C0
 * Callers:
 *     KiHvInterruptSubDispatch @ 0x140404320 (KiHvInterruptSubDispatch.c)
 *     KiVmbusInterruptSubDispatch @ 0x140404480 (KiVmbusInterruptSubDispatch.c)
 * Callees:
 *     HvlPerformEndOfInterrupt @ 0x1404F5BC0 (HvlPerformEndOfInterrupt.c)
 */

__int64 HvlDummyInterruptCallback()
{
  return HvlPerformEndOfInterrupt();
}
