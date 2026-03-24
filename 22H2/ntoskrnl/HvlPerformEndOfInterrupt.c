/*
 * XREFs of HvlPerformEndOfInterrupt @ 0x1404F5BC0
 * Callers:
 *     HvlDummyInterruptCallback @ 0x1404F14C0 (HvlDummyInterruptCallback.c)
 * Callees:
 *     HalPerformEndOfInterrupt @ 0x1402EED70 (HalPerformEndOfInterrupt.c)
 */

__int64 HvlPerformEndOfInterrupt()
{
  __int64 result; // rax

  _disable();
  result = HalPerformEndOfInterrupt(0LL);
  _enable();
  return result;
}
