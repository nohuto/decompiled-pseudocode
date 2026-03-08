/*
 * XREFs of HalpBlkApicEndOfInterrupt @ 0x140B12F90
 * Callers:
 *     HalpBlkStubInterrupt @ 0x140B11F80 (HalpBlkStubInterrupt.c)
 *     HalpBlkIpiInterrupt @ 0x140B12100 (HalpBlkIpiInterrupt.c)
 *     HalpBlkLocalErrorInterrupt @ 0x140B121C0 (HalpBlkLocalErrorInterrupt.c)
 *     HalpBlkUnexpectedInterruptCommon @ 0x140B12D00 (HalpBlkUnexpectedInterruptCommon.c)
 * Callees:
 *     HalpBlkApicWrite @ 0x140B13148 (HalpBlkApicWrite.c)
 */

__int64 HalpBlkApicEndOfInterrupt()
{
  return HalpBlkApicWrite(176LL, 0LL);
}
