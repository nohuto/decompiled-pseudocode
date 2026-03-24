/*
 * XREFs of HeadlessKernelAddLogEntry @ 0x14036EAD0
 * Callers:
 *     PnpBootDeviceWait @ 0x1403B7D54 (PnpBootDeviceWait.c)
 *     IopLoadDriver @ 0x14073CD08 (IopLoadDriver.c)
 *     IoInitSystemPreDrivers @ 0x140A3DF90 (IoInitSystemPreDrivers.c)
 * Callees:
 *     HdlspKernelAddLogEntry @ 0x1409EF9AC (HdlspKernelAddLogEntry.c)
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
