/*
 * XREFs of HeadlessKernelAddLogEntry @ 0x1402B17D0
 * Callers:
 *     PnpBootDeviceWait @ 0x14038932C (PnpBootDeviceWait.c)
 *     IopLoadDriver @ 0x14072A9DC (IopLoadDriver.c)
 *     IoInitSystemPreDrivers @ 0x140B409E8 (IoInitSystemPreDrivers.c)
 * Callees:
 *     HdlspKernelAddLogEntry @ 0x140AE7A40 (HdlspKernelAddLogEntry.c)
 */

PKSPIN_LOCK HeadlessKernelAddLogEntry()
{
  PKSPIN_LOCK result; // rax

  result = HeadlessGlobals;
  if ( HeadlessGlobals )
  {
    if ( HeadlessGlobals[1] )
      return (PKSPIN_LOCK)HdlspKernelAddLogEntry();
  }
  return result;
}
