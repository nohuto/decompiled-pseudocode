/*
 * XREFs of MmIsAddressValid @ 0x1403AE770
 * Callers:
 *     KiMarkBugCheckRegions @ 0x1403E3B24 (KiMarkBugCheckRegions.c)
 *     sub_1403F2A8C @ 0x1403F2A8C (sub_1403F2A8C.c)
 *     IopLiveDumpDiscardVirtualAddressRange @ 0x14094DFC4 (IopLiveDumpDiscardVirtualAddressRange.c)
 *     IopLiveDumpCallRemovePagesCallbacks @ 0x140A9A5D4 (IopLiveDumpCallRemovePagesCallbacks.c)
 *     PopMarkComponentsBootPhase @ 0x140AA36CC (PopMarkComponentsBootPhase.c)
 * Callees:
 *     MmIsAddressValidEx @ 0x1402E5FB0 (MmIsAddressValidEx.c)
 */

BOOLEAN __stdcall MmIsAddressValid(PVOID VirtualAddress)
{
  return MmIsAddressValidEx((__int64)VirtualAddress);
}
