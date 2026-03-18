/*
 * XREFs of MmSetAddressRangeModified @ 0x140363560
 * Callers:
 *     <none>
 * Callees:
 *     MmSetAddressRangeModifiedEx @ 0x14027F0B0 (MmSetAddressRangeModifiedEx.c)
 */

BOOLEAN __stdcall MmSetAddressRangeModified(PVOID Address, SIZE_T Length)
{
  return MmSetAddressRangeModifiedEx((unsigned __int64)Address, Length);
}
