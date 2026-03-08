/*
 * XREFs of SmmGetLogicalPool @ 0x1C0070454
 * Callers:
 *     ?SmmCreateLogicalAllocator@@YAJ_KPEAPEAUSYSMM_LOGICAL_ALLOCATOR@@@Z @ 0x1C03D262C (-SmmCreateLogicalAllocator@@YAJ_KPEAPEAUSYSMM_LOGICAL_ALLOCATOR@@@Z.c)
 *     ?SmmDestroyLogicalAllocator@@YAXPEAUSYSMM_LOGICAL_ALLOCATOR@@@Z @ 0x1C03D2830 (-SmmDestroyLogicalAllocator@@YAXPEAUSYSMM_LOGICAL_ALLOCATOR@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SmmGetLogicalPool(__int64 a1, unsigned __int8 a2)
{
  return a1 + 24LL * a2;
}
