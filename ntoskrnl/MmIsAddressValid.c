/*
 * XREFs of MmIsAddressValid @ 0x1403A9A20
 * Callers:
 *     KiMarkBugCheckRegions @ 0x1403DE604 (KiMarkBugCheckRegions.c)
 *     sub_1403ED56C @ 0x1403ED56C (sub_1403ED56C.c)
 *     IopLiveDumpDiscardVirtualAddressRange @ 0x14094AFA4 (IopLiveDumpDiscardVirtualAddressRange.c)
 *     IopLiveDumpCallRemovePagesCallbacks @ 0x140A97494 (IopLiveDumpCallRemovePagesCallbacks.c)
 *     PopMarkComponentsBootPhase @ 0x140AA049C (PopMarkComponentsBootPhase.c)
 * Callees:
 *     MmIsAddressValidEx @ 0x1403471E0 (MmIsAddressValidEx.c)
 */

BOOLEAN __stdcall MmIsAddressValid(PVOID VirtualAddress)
{
  return MmIsAddressValidEx((__int64)VirtualAddress);
}
