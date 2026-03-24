/*
 * XREFs of HalUnmapIoSpace @ 0x1404D5590
 * Callers:
 *     <none>
 * Callees:
 *     HalpUnmapVirtualAddress @ 0x1403BB230 (HalpUnmapVirtualAddress.c)
 */

void __stdcall HalUnmapIoSpace(PVOID VirtualAddress, SIZE_T NumberOfBytes)
{
  HalpUnmapVirtualAddress((unsigned __int64)VirtualAddress, (NumberOfBytes + 4095) >> 12, 0LL);
}
