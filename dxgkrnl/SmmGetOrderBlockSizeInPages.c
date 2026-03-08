/*
 * XREFs of SmmGetOrderBlockSizeInPages @ 0x1C0070484
 * Callers:
 *     ?SmmCreateLogicalAllocator@@YAJ_KPEAPEAUSYSMM_LOGICAL_ALLOCATOR@@@Z @ 0x1C03D262C (-SmmCreateLogicalAllocator@@YAJ_KPEAPEAUSYSMM_LOGICAL_ALLOCATOR@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SmmGetOrderBlockSizeInPages(char a1)
{
  return 1LL << a1;
}
