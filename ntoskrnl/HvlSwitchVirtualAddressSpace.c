/*
 * XREFs of HvlSwitchVirtualAddressSpace @ 0x140547490
 * Callers:
 *     KiAttachProcess @ 0x14030E080 (KiAttachProcess.c)
 *     KiDetachProcess @ 0x14030E460 (KiDetachProcess.c)
 *     KiSwapDirectoryTableBaseTarget @ 0x1403D1750 (KiSwapDirectoryTableBaseTarget.c)
 *     SwapContext @ 0x14041F970 (SwapContext.c)
 * Callees:
 *     HvcallInitiateHypercall @ 0x1403C81E0 (HvcallInitiateHypercall.c)
 */

__int64 HvlSwitchVirtualAddressSpace()
{
  return HvcallInitiateHypercall(65537);
}
