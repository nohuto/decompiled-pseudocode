/*
 * XREFs of SmmGetLowerOrderFromPageCount @ 0x1C0071098
 * Callers:
 *     ?SmmAllocateLogicalAddressAt@@YAJPEAUSYSMM_LOGICAL_ALLOCATOR@@_K1PEBXPEAPEAUSYSMM_LOGICAL_BLOCK@@@Z @ 0x1C03D6CFC (-SmmAllocateLogicalAddressAt@@YAJPEAUSYSMM_LOGICAL_ALLOCATOR@@_K1PEBXPEAPEAUSYSMM_LOGICAL_BLOCK@.c)
 *     ?SmmCreateLogicalAllocator@@YAJ_KPEAPEAUSYSMM_LOGICAL_ALLOCATOR@@@Z @ 0x1C03D6E6C (-SmmCreateLogicalAllocator@@YAJ_KPEAPEAUSYSMM_LOGICAL_ALLOCATOR@@@Z.c)
 *     SmmInitializeLogicalAllocator @ 0x1C03D72DC (SmmInitializeLogicalAllocator.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SmmGetLowerOrderFromPageCount(unsigned __int64 a1)
{
  __int64 result; // rax

  _BitScanReverse64((unsigned __int64 *)&result, a1);
  return result;
}
