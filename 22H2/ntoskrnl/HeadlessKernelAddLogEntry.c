/*
 * XREFs of HeadlessKernelAddLogEntry @ 0x14032240C
 * Callers:
 *     PnpBootDeviceWait @ 0x14037519C (PnpBootDeviceWait.c)
 *     IopLoadDriver @ 0x140794AE8 (IopLoadDriver.c)
 *     IoInitSystemPreDrivers @ 0x140B4F014 (IoInitSystemPreDrivers.c)
 * Callees:
 *     HdlspKernelAddLogEntry @ 0x140AEBA40 (HdlspKernelAddLogEntry.c)
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
