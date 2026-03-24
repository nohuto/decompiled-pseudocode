/*
 * XREFs of HalpBlkApicEndOfInterrupt @ 0x140A19F90
 * Callers:
 *     HalpBlkStubInterrupt @ 0x140A18F80 (HalpBlkStubInterrupt.c)
 *     HalpBlkIpiInterrupt @ 0x140A19100 (HalpBlkIpiInterrupt.c)
 *     HalpBlkLocalErrorInterrupt @ 0x140A191C0 (HalpBlkLocalErrorInterrupt.c)
 *     HalpBlkUnexpectedInterruptCommon @ 0x140A19D00 (HalpBlkUnexpectedInterruptCommon.c)
 * Callees:
 *     HalpBlkApicWrite @ 0x140A1A148 (HalpBlkApicWrite.c)
 */

__int64 HalpBlkApicEndOfInterrupt()
{
  return HalpBlkApicWrite(176LL, 0LL);
}
