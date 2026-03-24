/*
 * XREFs of MiReplenishSlabAllocator @ 0x140392114
 * Callers:
 *     MmAccessFault @ 0x14020D050 (MmAccessFault.c)
 *     MiGetSlabPage @ 0x14035959C (MiGetSlabPage.c)
 *     MmAllocateSecureKernelPages @ 0x140553314 (MmAllocateSecureKernelPages.c)
 * Callees:
 *     MiAllocateSlabEntry @ 0x140392168 (MiAllocateSlabEntry.c)
 *     MiInsertSlabEntry @ 0x1403999CC (MiInsertSlabEntry.c)
 */

__int64 __fastcall MiReplenishSlabAllocator(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned int a4)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 32) + *(_QWORD *)(a1 + 64) < a3 )
  {
    result = MiAllocateSlabEntry(a1, a2, a4);
    if ( !result )
      return result;
    MiInsertSlabEntry(a2, a1, result);
  }
  return 1LL;
}
