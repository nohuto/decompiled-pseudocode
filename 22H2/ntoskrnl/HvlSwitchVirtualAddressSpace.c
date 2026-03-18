/*
 * XREFs of HvlSwitchVirtualAddressSpace @ 0x140549930
 * Callers:
 *     KiStackAttachProcess @ 0x14022D620 (KiStackAttachProcess.c)
 *     KiAttachProcess @ 0x14022DAD0 (KiAttachProcess.c)
 *     KiDetachProcess @ 0x14022DD20 (KiDetachProcess.c)
 *     KiSwapDirectoryTableBaseTarget @ 0x1403D6C70 (KiSwapDirectoryTableBaseTarget.c)
 *     SwapContext @ 0x140427D00 (SwapContext.c)
 * Callees:
 *     HvcallInitiateHypercall @ 0x1403CCD00 (HvcallInitiateHypercall.c)
 */

__int64 HvlSwitchVirtualAddressSpace()
{
  return HvcallInitiateHypercall(65537);
}
