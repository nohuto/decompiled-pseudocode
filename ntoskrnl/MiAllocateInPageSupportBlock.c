/*
 * XREFs of MiAllocateInPageSupportBlock @ 0x1402F7884
 * Callers:
 *     MiGetInPageSupportBlock @ 0x14028A054 (MiGetInPageSupportBlock.c)
 *     MiInitializePageFaultResources @ 0x140370C30 (MiInitializePageFaultResources.c)
 * Callees:
 *     MiAllocatePool @ 0x140289CF0 (MiAllocatePool.c)
 */

PVOID __fastcall MiAllocateInPageSupportBlock(int a1, unsigned int a2)
{
  return MiAllocatePool(64, a2 * ((-(__int64)(a1 != 0) & 0xFFFFFFFFFFFFF880uLL) + 2368), 0x6E496D4Du);
}
