/*
 * XREFs of SmmAddBlockToPool @ 0x1C006FEC8
 * Callers:
 *     ?SmmCreateLogicalAllocator@@YAJ_KPEAPEAUSYSMM_LOGICAL_ALLOCATOR@@@Z @ 0x1C03D262C (-SmmCreateLogicalAllocator@@YAJ_KPEAPEAUSYSMM_LOGICAL_ALLOCATOR@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SmmAddBlockToPool(_DWORD *a1, __int64 a2)
{
  __int64 result; // rax
  _QWORD *v3; // rdx

  result = *(_QWORD *)a1;
  v3 = (_QWORD *)(a2 + 16);
  if ( *(_DWORD **)(*(_QWORD *)a1 + 8LL) != a1 )
    __fastfail(3u);
  *v3 = result;
  v3[1] = a1;
  *(_QWORD *)(result + 8) = v3;
  *(_QWORD *)a1 = v3;
  ++a1[4];
  return result;
}
