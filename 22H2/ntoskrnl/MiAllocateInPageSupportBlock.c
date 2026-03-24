/*
 * XREFs of MiAllocateInPageSupportBlock @ 0x1403223BC
 * Callers:
 *     MiGetInPageSupportBlock @ 0x14023E894 (MiGetInPageSupportBlock.c)
 *     MiInitializePageFaultResources @ 0x1403CA0A8 (MiInitializePageFaultResources.c)
 * Callees:
 *     MiAllocatePool @ 0x14025A5D0 (MiAllocatePool.c)
 */

PVOID __fastcall MiAllocateInPageSupportBlock(int a1, unsigned int a2)
{
  return MiAllocatePool(64, a2 * ((-(__int64)(a1 != 0) & 0xFFFFFFFFFFFFF880uLL) + 2368), 0x6E496D4Du);
}
