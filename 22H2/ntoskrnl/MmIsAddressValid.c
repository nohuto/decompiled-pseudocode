/*
 * XREFs of MmIsAddressValid @ 0x140536AB0
 * Callers:
 *     KiMarkBugCheckRegions @ 0x1403DC0D8 (KiMarkBugCheckRegions.c)
 *     sub_1403EB324 @ 0x1403EB324 (sub_1403EB324.c)
 *     KeBugCheck2 @ 0x140516A10 (KeBugCheck2.c)
 *     IopLiveDumpDiscardVirtualAddressRange @ 0x140897FDC (IopLiveDumpDiscardVirtualAddressRange.c)
 *     PopMarkComponentsBootPhase @ 0x1409991E0 (PopMarkComponentsBootPhase.c)
 *     IopLiveDumpCallRemovePagesCallbacks @ 0x1409AB700 (IopLiveDumpCallRemovePagesCallbacks.c)
 * Callees:
 *     MmIsAddressValidEx @ 0x14028CB70 (MmIsAddressValidEx.c)
 */

BOOLEAN __stdcall MmIsAddressValid(PVOID VirtualAddress)
{
  return MmIsAddressValidEx((__int64)VirtualAddress);
}
