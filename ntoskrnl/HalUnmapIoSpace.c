/*
 * XREFs of HalUnmapIoSpace @ 0x14051D490
 * Callers:
 *     <none>
 * Callees:
 *     HalpUnmapVirtualAddress @ 0x14037ADE0 (HalpUnmapVirtualAddress.c)
 */

void __stdcall HalUnmapIoSpace(PVOID VirtualAddress, SIZE_T NumberOfBytes)
{
  HalpUnmapVirtualAddress((unsigned __int64)VirtualAddress, (NumberOfBytes + 4095) >> 12, 0LL);
}
