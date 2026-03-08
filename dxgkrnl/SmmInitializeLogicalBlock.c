/*
 * XREFs of SmmInitializeLogicalBlock @ 0x1C0070494
 * Callers:
 *     ?SmmCreateLogicalAllocator@@YAJ_KPEAPEAUSYSMM_LOGICAL_ALLOCATOR@@@Z @ 0x1C03D262C (-SmmCreateLogicalAllocator@@YAJ_KPEAPEAUSYSMM_LOGICAL_ALLOCATOR@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SmmInitializeLogicalBlock(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // rax

  result = 0xFFFFFFFFFFFFFLL;
  *(_QWORD *)(a1 + 32) = a2 & 0xFFFFFFFFFFFFFLL | *(_QWORD *)(a1 + 32) & 0xF800000000000000uLL | ((unsigned __int64)(a3 & 0x3F) << 53);
  return result;
}
