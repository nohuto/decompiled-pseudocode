/*
 * XREFs of SmmGetOrderBlockSizeInBytes @ 0x1C0070474
 * Callers:
 *     ?SmmAllocateLogicalAddressAt@@YAJPEAUSYSMM_LOGICAL_ALLOCATOR@@_K1PEBXPEAPEAUSYSMM_LOGICAL_BLOCK@@@Z @ 0x1C03D24BC (-SmmAllocateLogicalAddressAt@@YAJPEAUSYSMM_LOGICAL_ALLOCATOR@@_K1PEBXPEAPEAUSYSMM_LOGICAL_BLOCK@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SmmGetOrderBlockSizeInBytes(char a1)
{
  return 4096LL << a1;
}
