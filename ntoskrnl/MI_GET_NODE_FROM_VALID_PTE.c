/*
 * XREFs of MI_GET_NODE_FROM_VALID_PTE @ 0x1402F63E4
 * Callers:
 *     MmGrowKernelStackEx @ 0x1402F61F0 (MmGrowKernelStackEx.c)
 * Callees:
 *     MiSearchNumaNodeTable @ 0x140319DD0 (MiSearchNumaNodeTable.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MI_GET_NODE_FROM_VALID_PTE(__int64 a1)
{
  unsigned __int64 v1; // rax

  v1 = MI_READ_PTE_LOCK_FREE(a1);
  return *(unsigned int *)(MiSearchNumaNodeTable(0xAAAAAAAAAAAAAAABuLL * ((__int64)(48 * ((v1 >> 12) & 0xFFFFFFFFFFLL)) >> 4))
                         + 8);
}
